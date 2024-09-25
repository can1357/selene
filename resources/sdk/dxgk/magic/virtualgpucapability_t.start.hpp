#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VIRTUALGPUCAPABILITY.MinValue", min_value, 0x0, 0x40, true, 0xbc5c40a856576a13)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VIRTUALGPUCAPABILITY.MaxValue", max_value, 0x40, 0x40, true, 0xad72cc7e7a236229)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VIRTUALGPUCAPABILITY.OptimalValue", optimal_value, 0x80, 0x40, true, 0xd313e03a2d14220b)
#else
#define _m00
#define _m01
#define _m02
#endif