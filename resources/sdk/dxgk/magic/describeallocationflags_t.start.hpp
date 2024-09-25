#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DESCRIBEALLOCATIONFLAGS.CheckDisplayMode", check_display_mode, 0x0, 0x1, true, 0x6f90e1c1e740aa4d, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DESCRIBEALLOCATIONFLAGS.Value", value, 0x0, 0x20, true, 0xae418fd914ee397e)
#else
#define _m00
#define _m01
#endif