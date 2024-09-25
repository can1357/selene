#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_BRIGHTNESS_LEVEL.Count", count, 0x0, 0x8, true, 0x24c15996665e9acf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 103>), "_BRIGHTNESS_LEVEL.Level", level, 0x8, 0x38, true, 0x191e4cac7a408918)
#else
#define _m00
#define _m01
#endif