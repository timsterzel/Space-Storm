#pragma once

namespace ImageData
{

    // Player
    const unsigned char PLAYER_SPRITE[] PROGMEM = {
    0x83, 0x83, 0xfe, 0x7c, 0x38, 0x38, 0x7c, 0xff, 0xff, 0x39, 0xc6, 0x38, 0x10, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00,
    };
    const unsigned int PLAYER_SPRITE_WIDTH = 13;
    const unsigned int PLAYER_SPRITE_HEIGHT = 9;
    
    // bg_house_1
    const unsigned char BG_HOUSE_1_SPRITE[] PROGMEM = {
    0xff, 0xff, 0xfd, 0x8d, 0x8d, 0x8d, 0xfd, 0xfd, 0x8d, 0x8d, 0x8d, 0xfd, 0xfd, 0x8d, 0x8d, 0x8d, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0x31, 0x31, 0x31, 0xff, 0xff, 0x31, 0x31, 0x31, 0xff, 0xff, 0x31, 0x31, 0x31, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xff, 0xc6, 0xc6, 0xc6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x63, 0x63, 0x63, 0x7f, 0x7f, 0x63, 0x63, 0x63, 0x7f, 0x7f, 0x63, 0x63, 0x63, 0x7f, 0x7f, 0x7f, 
    };
    const unsigned int BG_HOUSE_1_SPRITE_WIDTH = 19;
    const unsigned int BG_HOUSE_1_SPRITE_HEIGHT = 39;
    
    // bg_star_very_far
    const unsigned char BG_STAR_VERY_FAR_SPRITE[] PROGMEM = {
        0x1, 
    };
    const unsigned int BG_STAR_VERY_FAR_SPRITE_WIDTH = 1;
    const unsigned int BG_STAR_VERY_FAR_SPRITE_HEIGHT = 1;
    
    // bg_star_far
    const unsigned char BG_STAR_VERY_SPRITE[] PROGMEM = {
        0x1, 0x1, 
    };
    const unsigned int BG_STAR_VERY_SPRITE_WIDTH = 2;
    const unsigned int BG_STAR_VERY_SPRITE_HEIGHT = 1;

};
