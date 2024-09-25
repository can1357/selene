#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_FUNCTION_SUSPEND_OPTIONS.AsUchar", as_uchar, 0x0, 0x8, true, 0xd6467fae3846b148)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_FUNCTION_SUSPEND_OPTIONS.PowerState", power_state, 0x0, 0x1, true, 0x9db8a1a80da7c551, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_FUNCTION_SUSPEND_OPTIONS.RemoteWakeEnabled", remote_wake_enabled, 0x1, 0x1, true, 0xade50f1b9f9202ab, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif