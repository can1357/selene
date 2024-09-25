#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_HUB_CHANGE.AsUshort16", as_ushort16, 0x0, 0x10, true, 0xab03cd7dd8a4790d)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_HUB_CHANGE.LocalPowerChange", local_power_change, 0x0, 0x1, true, 0x39e10121fc9499a6, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_HUB_CHANGE.OverCurrentChange", over_current_change, 0x1, 0x1, true, 0xe3aa4004a22ed9fd, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif