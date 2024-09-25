#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS.LevelCount", level_count, 0x0, 0x8, true, 0x58a96577cdd68d35)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS.BrightnessLevels", brightness_levels, 0x8, 0x0, true, 0xd20ef6821fffeb2b)
#else
#define _m00
#define _m01
#endif