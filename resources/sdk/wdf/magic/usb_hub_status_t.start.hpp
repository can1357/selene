#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_HUB_STATUS.AsUshort16", as_ushort16, 0x0, 0x10, true, 0x16d0b075315027de)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_HUB_STATUS.LocalPowerLost", local_power_lost, 0x0, 0x1, true, 0xd4e77d4fd42d7faa, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_HUB_STATUS.OverCurrent", over_current, 0x1, 0x1, true, 0x47d0eaea57a95930, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif