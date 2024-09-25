#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DEVICE_TYPE_CAPS.Discrete", discrete, 0x0, 0x1, true, 0xea701cc1612571a2, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DEVICE_TYPE_CAPS.Detachable", detachable, 0x1, 0x1, true, 0xf58e463e380e3f67, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DEVICE_TYPE_CAPS.Value", value, 0x0, 0x20, true, 0x13cb327573b2f893)
#else
#define _m00
#define _m01
#define _m02
#endif