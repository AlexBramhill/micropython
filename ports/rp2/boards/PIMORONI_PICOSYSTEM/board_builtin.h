enum _sprites_ids {
    CHERRY, APPLE, BANANA, ORANGE, AUBERGINE, CARROT, POTATO, LEAF,
    PARSNIP, MEAT, BEAN, RADISH, STRAWBERRY, PUMPKIN, CUCUMBER, SALT1,
    SWORD1, SWORD2, SWORD3, AXE1, DAGGER, MACE1, BOW, ARROW1,
    ARROW2, ARROW3, TRIDENT1, SPEAR, TRIDENT2, MACHINEGUN, PISTOL, SHOTGUN,
    GEM1, GEM2, GEM3, GEM4, GEM5, GEM6, AMULET, FOLDER,
    COIN1, SKULL, TICK, CROSS, IDOL1, IDOL2, IDOL3, IDOL4,
    SWEETCORN, BROCCOLI, BISCUIT, BERRIES, SCEPTRE, FIRE, LASERGUN1, LASERGUN2,
    HELMET1, HELMET2, HELMET3, HELMET4, __1, __2, __3, __4,
    HEART1, SLIME, COIN2, SWORD4, SWORD5, __5, DYNAMITE, MEDPACK,
    GOGGLES, HELMET5, BOMB, OILCAN, SHIRT1, SHIRT2, SPEECH, DREAM,
    HEART2, HEART3, HEART4, __6, TORCH, ICE, __7, __8,
    __9, __10, UPARROW, RING1, RING2, RING3, RING4, __11,
    TOKEN, VIAL1, VIAL2, RING5, RING6, BLOCK1, BLOCK2, BLOCK3,
    BLOCK4, BLOCK5, BLOCK6, BLOCK7, BLOCK8, BLOCK9, SHIELD1, SACK,
    BUTTON, VIAL3, VIAL4, TOOTH, BONE, HALFBLOCK1, HALFBLOCK2, HALFBLOCK3,
    HALFBLOCK4, HALFBLOCK5, HALFBLOCK6, HALFBLOCK7, HALFBLOCK8, HALFBLOCK9, SHIELD2, SHIELD3,
    FLOWER1, FLOWER2, FLOWER3, FLOWER4, STAFF1, STAFF2, STAFF3, STICK1,
    SPIKEBALL, MACE2, AXE2, __12, SWORD6, SWORD7, SWORD8, CROWN1,
    GOLD, GEM7, GEM8, GEM9, AXE3, MUSHROOM, SALT2, STICK2,
    VIAL5, VIAL6, DOT, HELMET6, SWORD9, SWORD10, SWORD11, CROWN2
        // etc... can we name all 256 built in sprites?!
};

#define MICROPY_BOARD_BUILTINS \
    { MP_OBJ_NEW_QSTR(MP_QSTR_Buffer), (mp_obj_t)&PicosystemBuffer_type }, \
    { MP_OBJ_NEW_QSTR(MP_QSTR_Voice), (mp_obj_t)&PicosystemVoice_type }, \
    { MP_ROM_QSTR(MP_QSTR_pen), MP_ROM_PTR(&picosystem_pen_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&picosystem_init_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_start), MP_ROM_PTR(&picosystem_start_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_quit), MP_ROM_PTR(&picosystem_quit_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_flip), MP_ROM_PTR(&picosystem_flip_obj) }, \
    { MP_ROM_QSTR(MP_QSTR__logo), MP_ROM_PTR(&picosystem_logo_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_stats), MP_ROM_PTR(&picosystem_stats_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_play), MP_ROM_PTR(&picosystem_play_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_alpha), MP_ROM_PTR(&picosystem_alpha_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_clip), MP_ROM_PTR(&picosystem_clip_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_blend), MP_ROM_PTR(&picosystem_blend_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_target), MP_ROM_PTR(&picosystem_target_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_camera), MP_ROM_PTR(&picosystem_camera_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_cursor), MP_ROM_PTR(&picosystem_cursor_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_spritesheet), MP_ROM_PTR(&picosystem_spritesheet_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_clear), MP_ROM_PTR(&picosystem_clear_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_pixel), MP_ROM_PTR(&picosystem_pixel_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_line), MP_ROM_PTR(&picosystem_line_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_hline), MP_ROM_PTR(&picosystem_hline_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_vline), MP_ROM_PTR(&picosystem_vline_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_rect), MP_ROM_PTR(&picosystem_rect_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_frect), MP_ROM_PTR(&picosystem_frect_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_circle), MP_ROM_PTR(&picosystem_circle_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_fcircle), MP_ROM_PTR(&picosystem_fcircle_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_ellipse), MP_ROM_PTR(&picosystem_ellipse_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_fellipse), MP_ROM_PTR(&picosystem_fellipse_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_poly), MP_ROM_PTR(&picosystem_poly_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_fpoly), MP_ROM_PTR(&picosystem_fpoly_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_blit), MP_ROM_PTR(&picosystem_blit_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_sprite), MP_ROM_PTR(&picosystem_sprite_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_text), MP_ROM_PTR(&picosystem_text_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_measure), MP_ROM_PTR(&picosystem_measure_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_rgb), MP_ROM_PTR(&picosystem_rgb_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_hsv), MP_ROM_PTR(&picosystem_hsv_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_intersects), MP_ROM_PTR(&picosystem_intersects_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_intersection), MP_ROM_PTR(&picosystem_intersection_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_contains), MP_ROM_PTR(&picosystem_contains_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_pressed), MP_ROM_PTR(&picosystem_pressed_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_button), MP_ROM_PTR(&picosystem_button_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_battery), MP_ROM_PTR(&picosystem_battery_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_led), MP_ROM_PTR(&picosystem_led_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_backlight), MP_ROM_PTR(&picosystem_backlight_obj) }, \
    { MP_ROM_QSTR(MP_QSTR_UP), MP_ROM_INT(23) }, \
    { MP_ROM_QSTR(MP_QSTR_DOWN), MP_ROM_INT(20) }, \
    { MP_ROM_QSTR(MP_QSTR_LEFT), MP_ROM_INT(22) }, \
    { MP_ROM_QSTR(MP_QSTR_RIGHT), MP_ROM_INT(21) }, \
    { MP_ROM_QSTR(MP_QSTR_A), MP_ROM_INT(18) }, \
    { MP_ROM_QSTR(MP_QSTR_B), MP_ROM_INT(19) }, \
    { MP_ROM_QSTR(MP_QSTR_X), MP_ROM_INT(17) }, \
    { MP_ROM_QSTR(MP_QSTR_Y), MP_ROM_INT(16) }, \
    { MP_ROM_QSTR(MP_QSTR_COPY), MP_ROM_INT(0) }, \
    { MP_ROM_QSTR(MP_QSTR_ALPHA), MP_ROM_INT(1) }, \
    { MP_ROM_QSTR(MP_QSTR_MASK), MP_ROM_INT(2) }, \
    { MP_ROM_QSTR(MP_QSTR_CHERRY), MP_ROM_INT(CHERRY) }, \
    { MP_ROM_QSTR(MP_QSTR_APPLE), MP_ROM_INT(APPLE) }, \
    { MP_ROM_QSTR(MP_QSTR_BANANA), MP_ROM_INT(BANANA) }, \
    { MP_ROM_QSTR(MP_QSTR_ORANGE), MP_ROM_INT(ORANGE) }, \
    { MP_ROM_QSTR(MP_QSTR_AUBERGINE), MP_ROM_INT(AUBERGINE) }, \
    { MP_ROM_QSTR(MP_QSTR_CARROT), MP_ROM_INT(CARROT) }, \
    { MP_ROM_QSTR(MP_QSTR_POTATO), MP_ROM_INT(POTATO) }, \
    { MP_ROM_QSTR(MP_QSTR_LEAF), MP_ROM_INT(LEAF) }, \
    { MP_ROM_QSTR(MP_QSTR_PARSNIP), MP_ROM_INT(PARSNIP) }, \
    { MP_ROM_QSTR(MP_QSTR_MEAT), MP_ROM_INT(MEAT) }, \
    { MP_ROM_QSTR(MP_QSTR_BEAN), MP_ROM_INT(BEAN) }, \
    { MP_ROM_QSTR(MP_QSTR_RADISH), MP_ROM_INT(RADISH) }, \
    { MP_ROM_QSTR(MP_QSTR_STRAWBERRY), MP_ROM_INT(STRAWBERRY) }, \
    { MP_ROM_QSTR(MP_QSTR_PUMPKIN), MP_ROM_INT(PUMPKIN) }, \
    { MP_ROM_QSTR(MP_QSTR_CUCUMBER), MP_ROM_INT(CUCUMBER) }, \
    { MP_ROM_QSTR(MP_QSTR_SALT1), MP_ROM_INT(SALT1) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD1), MP_ROM_INT(SWORD1) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD2), MP_ROM_INT(SWORD2) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD3), MP_ROM_INT(SWORD3) }, \
    { MP_ROM_QSTR(MP_QSTR_AXE1), MP_ROM_INT(AXE1) }, \
    { MP_ROM_QSTR(MP_QSTR_DAGGER), MP_ROM_INT(DAGGER) }, \
    { MP_ROM_QSTR(MP_QSTR_MACE1), MP_ROM_INT(MACE1) }, \
    { MP_ROM_QSTR(MP_QSTR_BOW), MP_ROM_INT(BOW) }, \
    { MP_ROM_QSTR(MP_QSTR_ARROW1), MP_ROM_INT(ARROW1) }, \
    { MP_ROM_QSTR(MP_QSTR_ARROW2), MP_ROM_INT(ARROW2) }, \
    { MP_ROM_QSTR(MP_QSTR_ARROW3), MP_ROM_INT(ARROW3) }, \
    { MP_ROM_QSTR(MP_QSTR_TRIDENT1), MP_ROM_INT(TRIDENT1) }, \
    { MP_ROM_QSTR(MP_QSTR_SPEAR), MP_ROM_INT(SPEAR) }, \
    { MP_ROM_QSTR(MP_QSTR_TRIDENT2), MP_ROM_INT(TRIDENT2) }, \
    { MP_ROM_QSTR(MP_QSTR_MACHINEGUN), MP_ROM_INT(MACHINEGUN) }, \
    { MP_ROM_QSTR(MP_QSTR_PISTOL), MP_ROM_INT(PISTOL) }, \
    { MP_ROM_QSTR(MP_QSTR_SHOTGUN), MP_ROM_INT(SHOTGUN) }, \
    { MP_ROM_QSTR(MP_QSTR_GEM1), MP_ROM_INT(GEM1) }, \
    { MP_ROM_QSTR(MP_QSTR_GEM2), MP_ROM_INT(GEM2) }, \
    { MP_ROM_QSTR(MP_QSTR_GEM3), MP_ROM_INT(GEM3) }, \
    { MP_ROM_QSTR(MP_QSTR_GEM4), MP_ROM_INT(GEM4) }, \
    { MP_ROM_QSTR(MP_QSTR_GEM5), MP_ROM_INT(GEM5) }, \
    { MP_ROM_QSTR(MP_QSTR_GEM6), MP_ROM_INT(GEM6) }, \
    { MP_ROM_QSTR(MP_QSTR_AMULET), MP_ROM_INT(AMULET) }, \
    { MP_ROM_QSTR(MP_QSTR_FOLDER), MP_ROM_INT(FOLDER) }, \
    { MP_ROM_QSTR(MP_QSTR_COIN1), MP_ROM_INT(COIN1) }, \
    { MP_ROM_QSTR(MP_QSTR_IDOL1), MP_ROM_INT(IDOL1) }, \
    { MP_ROM_QSTR(MP_QSTR_IDOL2), MP_ROM_INT(IDOL2) }, \
    { MP_ROM_QSTR(MP_QSTR_IDOL3), MP_ROM_INT(IDOL3) }, \
    { MP_ROM_QSTR(MP_QSTR_IDOL4), MP_ROM_INT(IDOL4) }, \
    { MP_ROM_QSTR(MP_QSTR_SWEETCORN), MP_ROM_INT(SWEETCORN) }, \
    { MP_ROM_QSTR(MP_QSTR_BROCCOLI), MP_ROM_INT(BROCCOLI) }, \
    { MP_ROM_QSTR(MP_QSTR_BISCUIT), MP_ROM_INT(BISCUIT) }, \
    { MP_ROM_QSTR(MP_QSTR_BERRIES), MP_ROM_INT(BERRIES) }, \
    { MP_ROM_QSTR(MP_QSTR_SCEPTRE), MP_ROM_INT(SCEPTRE) }, \
    { MP_ROM_QSTR(MP_QSTR_FIRE), MP_ROM_INT(FIRE) }, \
    { MP_ROM_QSTR(MP_QSTR_LASERGUN1), MP_ROM_INT(LASERGUN1) }, \
    { MP_ROM_QSTR(MP_QSTR_LASERGUN2), MP_ROM_INT(LASERGUN2) }, \
    { MP_ROM_QSTR(MP_QSTR_HELMET1), MP_ROM_INT(HELMET1) }, \
    { MP_ROM_QSTR(MP_QSTR_HELMET2), MP_ROM_INT(HELMET2) }, \
    { MP_ROM_QSTR(MP_QSTR_HELMET3), MP_ROM_INT(HELMET3) }, \
    { MP_ROM_QSTR(MP_QSTR_HELMET4), MP_ROM_INT(HELMET4) }, \
    { MP_ROM_QSTR(MP_QSTR___1), MP_ROM_INT(__1) }, \
    { MP_ROM_QSTR(MP_QSTR___2), MP_ROM_INT(__2) }, \
    { MP_ROM_QSTR(MP_QSTR___3), MP_ROM_INT(__3) }, \
    { MP_ROM_QSTR(MP_QSTR___4), MP_ROM_INT(__4) }, \
    { MP_ROM_QSTR(MP_QSTR_HEART1), MP_ROM_INT(HEART1) }, \
    { MP_ROM_QSTR(MP_QSTR_SLIME), MP_ROM_INT(SLIME) }, \
    { MP_ROM_QSTR(MP_QSTR_COIN2), MP_ROM_INT(COIN2) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD4), MP_ROM_INT(SWORD4) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD5), MP_ROM_INT(SWORD5) }, \
    { MP_ROM_QSTR(MP_QSTR___5), MP_ROM_INT(__5) }, \
    { MP_ROM_QSTR(MP_QSTR_DYNAMITE), MP_ROM_INT(DYNAMITE) }, \
    { MP_ROM_QSTR(MP_QSTR_MEDPACK), MP_ROM_INT(MEDPACK) }, \
    { MP_ROM_QSTR(MP_QSTR_GOGGLES), MP_ROM_INT(GOGGLES) }, \
    { MP_ROM_QSTR(MP_QSTR_HELMET5), MP_ROM_INT(HELMET5) }, \
    { MP_ROM_QSTR(MP_QSTR_BOMB), MP_ROM_INT(BOMB) }, \
    { MP_ROM_QSTR(MP_QSTR_OILCAN), MP_ROM_INT(OILCAN) }, \
    { MP_ROM_QSTR(MP_QSTR_SHIRT1), MP_ROM_INT(SHIRT1) }, \
    { MP_ROM_QSTR(MP_QSTR_SHIRT2), MP_ROM_INT(SHIRT2) }, \
    { MP_ROM_QSTR(MP_QSTR_SPEECH), MP_ROM_INT(SPEECH) }, \
    { MP_ROM_QSTR(MP_QSTR_DREAM), MP_ROM_INT(DREAM) }, \
    { MP_ROM_QSTR(MP_QSTR_HEART2), MP_ROM_INT(HEART2) }, \
    { MP_ROM_QSTR(MP_QSTR_HEART3), MP_ROM_INT(HEART3) }, \
    { MP_ROM_QSTR(MP_QSTR_HEART4), MP_ROM_INT(HEART4) }, \
    { MP_ROM_QSTR(MP_QSTR___6), MP_ROM_INT(__6) }, \
    { MP_ROM_QSTR(MP_QSTR_TORCH), MP_ROM_INT(TORCH) }, \
    { MP_ROM_QSTR(MP_QSTR_ICE), MP_ROM_INT(ICE) }, \
    { MP_ROM_QSTR(MP_QSTR___7), MP_ROM_INT(__7) }, \
    { MP_ROM_QSTR(MP_QSTR___8), MP_ROM_INT(__8) }, \
    { MP_ROM_QSTR(MP_QSTR___9), MP_ROM_INT(__9) }, \
    { MP_ROM_QSTR(MP_QSTR___10), MP_ROM_INT(__10) }, \
    { MP_ROM_QSTR(MP_QSTR_UPARROW), MP_ROM_INT(UPARROW) }, \
    { MP_ROM_QSTR(MP_QSTR_RING1), MP_ROM_INT(RING1) }, \
    { MP_ROM_QSTR(MP_QSTR_RING2), MP_ROM_INT(RING2) }, \
    { MP_ROM_QSTR(MP_QSTR_RING3), MP_ROM_INT(RING3) }, \
    { MP_ROM_QSTR(MP_QSTR_RING4), MP_ROM_INT(RING4) }, \
    { MP_ROM_QSTR(MP_QSTR___11), MP_ROM_INT(__11) }, \
    { MP_ROM_QSTR(MP_QSTR_TOKEN), MP_ROM_INT(TOKEN) }, \
    { MP_ROM_QSTR(MP_QSTR_VIAL1), MP_ROM_INT(VIAL1) }, \
    { MP_ROM_QSTR(MP_QSTR_VIAL2), MP_ROM_INT(VIAL2) }, \
    { MP_ROM_QSTR(MP_QSTR_RING5), MP_ROM_INT(RING5) }, \
    { MP_ROM_QSTR(MP_QSTR_RING6), MP_ROM_INT(RING6) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK1), MP_ROM_INT(BLOCK1) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK2), MP_ROM_INT(BLOCK2) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK3), MP_ROM_INT(BLOCK3) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK4), MP_ROM_INT(BLOCK4) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK5), MP_ROM_INT(BLOCK5) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK6), MP_ROM_INT(BLOCK6) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK7), MP_ROM_INT(BLOCK7) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK8), MP_ROM_INT(BLOCK8) }, \
    { MP_ROM_QSTR(MP_QSTR_BLOCK9), MP_ROM_INT(BLOCK9) }, \
    { MP_ROM_QSTR(MP_QSTR_SHIELD1), MP_ROM_INT(SHIELD1) }, \
    { MP_ROM_QSTR(MP_QSTR_SACK), MP_ROM_INT(SACK) }, \
    { MP_ROM_QSTR(MP_QSTR_BUTTON), MP_ROM_INT(BUTTON) }, \
    { MP_ROM_QSTR(MP_QSTR_VIAL3), MP_ROM_INT(VIAL3) }, \
    { MP_ROM_QSTR(MP_QSTR_VIAL4), MP_ROM_INT(VIAL4) }, \
    { MP_ROM_QSTR(MP_QSTR_TOOTH), MP_ROM_INT(TOOTH) }, \
    { MP_ROM_QSTR(MP_QSTR_BONE), MP_ROM_INT(BONE) }, \
    { MP_ROM_QSTR(MP_QSTR_HALFBLOCK1), MP_ROM_INT(HALFBLOCK1) }, \
    { MP_ROM_QSTR(MP_QSTR_HALFBLOCK2), MP_ROM_INT(HALFBLOCK2) }, \
    { MP_ROM_QSTR(MP_QSTR_HALFBLOCK3), MP_ROM_INT(HALFBLOCK3) }, \
    { MP_ROM_QSTR(MP_QSTR_HALFBLOCK4), MP_ROM_INT(HALFBLOCK4) }, \
    { MP_ROM_QSTR(MP_QSTR_HALFBLOCK5), MP_ROM_INT(HALFBLOCK5) }, \
    { MP_ROM_QSTR(MP_QSTR_HALFBLOCK6), MP_ROM_INT(HALFBLOCK6) }, \
    { MP_ROM_QSTR(MP_QSTR_HALFBLOCK7), MP_ROM_INT(HALFBLOCK7) }, \
    { MP_ROM_QSTR(MP_QSTR_HALFBLOCK8), MP_ROM_INT(HALFBLOCK8) }, \
    { MP_ROM_QSTR(MP_QSTR_HALFBLOCK9), MP_ROM_INT(HALFBLOCK9) }, \
    { MP_ROM_QSTR(MP_QSTR_SHIELD2), MP_ROM_INT(SHIELD2) }, \
    { MP_ROM_QSTR(MP_QSTR_SHIELD3), MP_ROM_INT(SHIELD3) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER1), MP_ROM_INT(FLOWER1) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER2), MP_ROM_INT(FLOWER2) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER3), MP_ROM_INT(FLOWER3) }, \
    { MP_ROM_QSTR(MP_QSTR_FLOWER4), MP_ROM_INT(FLOWER4) }, \
    { MP_ROM_QSTR(MP_QSTR_STAFF1), MP_ROM_INT(STAFF1) }, \
    { MP_ROM_QSTR(MP_QSTR_STAFF2), MP_ROM_INT(STAFF2) }, \
    { MP_ROM_QSTR(MP_QSTR_STAFF3), MP_ROM_INT(STAFF3) }, \
    { MP_ROM_QSTR(MP_QSTR_STICK1), MP_ROM_INT(STICK1) }, \
    { MP_ROM_QSTR(MP_QSTR_SPIKEBALL), MP_ROM_INT(SPIKEBALL) }, \
    { MP_ROM_QSTR(MP_QSTR_MACE2), MP_ROM_INT(MACE2) }, \
    { MP_ROM_QSTR(MP_QSTR_AXE2), MP_ROM_INT(AXE2) }, \
    { MP_ROM_QSTR(MP_QSTR___12), MP_ROM_INT(__12) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD6), MP_ROM_INT(SWORD6) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD7), MP_ROM_INT(SWORD7) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD8), MP_ROM_INT(SWORD8) }, \
    { MP_ROM_QSTR(MP_QSTR_CROWN1), MP_ROM_INT(CROWN1) }, \
    { MP_ROM_QSTR(MP_QSTR_GOLD), MP_ROM_INT(GOLD) }, \
    { MP_ROM_QSTR(MP_QSTR_GEM7), MP_ROM_INT(GEM7) }, \
    { MP_ROM_QSTR(MP_QSTR_GEM8), MP_ROM_INT(GEM8) }, \
    { MP_ROM_QSTR(MP_QSTR_GEM9), MP_ROM_INT(GEM9) }, \
    { MP_ROM_QSTR(MP_QSTR_AXE3), MP_ROM_INT(AXE3) }, \
    { MP_ROM_QSTR(MP_QSTR_MUSHROOM), MP_ROM_INT(MUSHROOM) }, \
    { MP_ROM_QSTR(MP_QSTR_SALT2), MP_ROM_INT(SALT2) }, \
    { MP_ROM_QSTR(MP_QSTR_STICK2), MP_ROM_INT(STICK2) }, \
    { MP_ROM_QSTR(MP_QSTR_VIAL5), MP_ROM_INT(VIAL5) }, \
    { MP_ROM_QSTR(MP_QSTR_VIAL6), MP_ROM_INT(VIAL6) }, \
    { MP_ROM_QSTR(MP_QSTR_DOT), MP_ROM_INT(DOT) }, \
    { MP_ROM_QSTR(MP_QSTR_HELMET6), MP_ROM_INT(HELMET6) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD9), MP_ROM_INT(SWORD9) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD10), MP_ROM_INT(SWORD10) }, \
    { MP_ROM_QSTR(MP_QSTR_SWORD11), MP_ROM_INT(SWORD11) }, \
    { MP_ROM_QSTR(MP_QSTR_CROWN2), MP_ROM_INT(CROWN2) },
