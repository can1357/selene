#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BRIGHTNESS_NIT_RANGE.MinLevelInMillinit", min_level_in_millinit, 0x0, 0x20, true, 0x8e7fd92f47996a79)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BRIGHTNESS_NIT_RANGE.MaxLevelInMillinit", max_level_in_millinit, 0x20, 0x20, true, 0x7272fec575cf3783)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BRIGHTNESS_NIT_RANGE.StepSizeInMillinit", step_size_in_millinit, 0x40, 0x20, true, 0xaf54242588fbd249)
#else
#define _m00
#define _m01
#define _m02
#endif