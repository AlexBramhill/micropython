"""
MicroPython Seeedstudio TFT Shield V2 driver, SPI interfaces, Analog GPIO
Contains SD-card reader, LCD and Touch sensor

Example usage of LCD:

    from seeedstudio_tft_shield_v2 import ILI9341

    lcd = ILI9341(240, 320)
    lcd.text("Hello World!, 32, 32)
    lcd.show()

Example usage of SD card reader:

    import os
    from seeedstudio_tft_shield_v2 import mount_tf

    tf = mount_tf()
    os.listdir()
"""
import os
import time
import framebuf

from machine import SPI, Pin
from sdcard import SDCard

def mount_tf(self, mount_point="/"):
    sd = SDCard(SPI(0), Pin("A15", mode=Pin.OUT))
    os.mount(sd, mount_point)

class ILI9341:
    def __init__(self, width, height):
        self.width = width
        self.height = height
        self.pages = self.height // 8
        self.buffer = bytearray(self.pages * self.width)
        self.framebuf = framebuf.FrameBuffer1(self.buffer, self.width, self.height)

        self.spi = SPI(0)
        # chip select
        self.cs = Pin("A16", mode=Pin.OUT, pull=Pin.PULL_UP)
        # command
        self.dc = Pin("A17", mode=Pin.OUT, pull=Pin.PULL_UP)
        
        # initialize all pins high
        self.cs.high()
        self.dc.high()

        self.spi.init(baudrate=8000000, phase=0, polarity=0)

        self.init_display()
        

    def init_display(self):
        time.sleep_ms(500)
        
        self.write_cmd(0x01)
        
        time.sleep_ms(200)
    
        self.write_cmd(0xCF)
        self.write_data(bytearray([0x00, 0x8B, 0x30]))
    
        self.write_cmd(0xED)
        self.write_data(bytearray([0x67, 0x03, 0x12, 0x81]))

        self.write_cmd(0xE8)
        self.write_data(bytearray([0x85, 0x10, 0x7A]))
    
        self.write_cmd(0xCB)
        self.write_data(bytearray([0x39, 0x2C, 0x00, 0x34, 0x02]))
    
        self.write_cmd(0xF7)
        self.write_data(bytearray([0x20]))

        self.write_cmd(0xEA)
        self.write_data(bytearray([0x00, 0x00]))

        # Power control
        self.write_cmd(0xC0)
        # VRH[5:0]
        self.write_data(bytearray([0x1B]))
        
        # Power control
        self.write_cmd(0xC1)
        # SAP[2:0];BT[3:0]
        self.write_data(bytearray([0x10]))
        
        # VCM control
        self.write_cmd(0xC5)
        self.write_data(bytearray([0x3F, 0x3C]))
    
        # VCM control2
        self.write_cmd(0xC7)
        self.write_data(bytearray([0xB7]))
    
        # Memory Access Control
        self.write_cmd(0x36)
        self.write_data(bytearray([0x08]))
    
        self.write_cmd(0x3A)
        self.write_data(bytearray([0x55]))
    
        self.write_cmd(0xB1)
        self.write_data(bytearray([0x00, 0x1B]))
        
        # Display Function Control
        self.write_cmd(0xB6)
        self.write_data(bytearray([0x0A, 0xA2]))
    
        # 3Gamma Function Disable
        self.write_cmd(0xF2)
        self.write_data(bytearray([0x00]))
        
        # Gamma curve selected
        self.write_cmd(0x26)
        self.write_data(bytearray([0x01]))
    
        # Set Gamma
        self.write_cmd(0xE0)
        self.write_data(bytearray([0x0F, 0x2A, 0x28, 0x08, 0x0E, 0x08, 0x54, 0XA9, 0x43, 0x0A, 0x0F, 0x00, 0x00, 0x00, 0x00]))
    
        # Set Gamma
        self.write_cmd(0XE1)
        self.write_data(bytearray([0x00, 0x15, 0x17, 0x07, 0x11, 0x06, 0x2B, 0x56, 0x3C, 0x05, 0x10, 0x0F, 0x3F, 0x3F, 0x0F]))
        
        # Exit Sleep
        self.write_cmd(0x11)
        time.sleep_ms(120)
        
        # Display on
        self.write_cmd(0x29)
        time.sleep_ms(500)
        self.fill(0)

    def show(self):
        # set col
        self.write_cmd(0x2A)
        self.write_data(bytearray([0x00, 0x00]))
        self.write_data(bytearray([0x00, 0xef]))
        
        # set page 
        self.write_cmd(0x2B)
        self.write_data(bytearray([0x00, 0x00]))
        self.write_data(bytearray([0x01, 0x3f]))

        self.write_cmd(0x2c);

        num_of_pixels = self.height * self.width

        for row in range(0, self.pages):
            for pixel_pos in range(0, 8):
                for col in range(0, self.width):
                    compressed_pixel = self.buffer[row * 240 + col]
                    if ((compressed_pixel >> pixel_pos) & 0x1) == 0:
                        self.write_data(bytearray([0x00, 0x00]))
                    else:
                        self.write_data(bytearray([0xFF, 0xFF]))

    def fill(self, col):
        self.framebuf.fill(col)

    def pixel(self, x, y, col):
        self.framebuf.pixel(x, y, col)

    def scroll(self, dx, dy):
        self.framebuf.scroll(dx, dy)

    def text(self, string, x, y, col=1):
        self.framebuf.text(string, x, y, col)

    def write_cmd(self, cmd):
        self.dc.low()
        self.cs.low()
        self.spi.write(bytearray([cmd]))
        self.cs.high()
        
    def write_data(self, buf):
        self.dc.high()
        self.cs.low()
        self.spi.write(buf)
        self.cs.high()

