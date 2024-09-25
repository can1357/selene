#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_INTERFACE_STATUS.AsUshort16", as_ushort16, 0x0, 0x10, true, 0x1e171650f78220e)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_INTERFACE_STATUS.RemoteWakeupCapable", remote_wakeup_capable, 0x0, 0x1, true, 0x7a929f4562faa058, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_INTERFACE_STATUS.RemoteWakeupEnabled", remote_wakeup_enabled, 0x1, 0x1, true, 0x9533873194eb5974, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif