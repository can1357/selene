#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_STATUS.AsUshort16", as_ushort16, 0x0, 0x10, true, 0x1779f0b9e1b5e76e)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_STATUS.SelfPowered", self_powered, 0x0, 0x1, true, 0x6946bdc0866c35d3, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_STATUS.RemoteWakeup", remote_wakeup, 0x1, 0x1, true, 0x17446af7f2de30e, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_STATUS.U1Enable", u1_enable, 0x2, 0x1, true, 0x8f6e0868be7130f5, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_STATUS.U2Enable", u2_enable, 0x3, 0x1, true, 0x2179cc2ac5269a5e, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_STATUS.LtmEnable", ltm_enable, 0x4, 0x1, true, 0xde6279c83cbaddfd, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif