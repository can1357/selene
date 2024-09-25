#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_NIT_RANGE.MinimumLevelMillinit", minimum_level_millinit, 0x0, 0x20, true, 0xc7bcff82543d4f2d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_NIT_RANGE.MaximumLevelMillinit", maximum_level_millinit, 0x20, 0x20, true, 0x61bfc23565068bb7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_NIT_RANGE.StepSizeMillinit", step_size_millinit, 0x40, 0x20, true, 0x99938f37c395cb4)
#else
#define _m00
#define _m01
#define _m02
#endif