#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_HUB_30_PORT_REMOTE_WAKE_MASK.AsUchar8", as_uchar8, 0x0, 0x8, true, 0x93ceed063c6f36cc)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_HUB_30_PORT_REMOTE_WAKE_MASK.ConnectRemoteWakeEnable", connect_remote_wake_enable, 0x0, 0x1, true, 0x778b013cce360b50, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_HUB_30_PORT_REMOTE_WAKE_MASK.DisconnectRemoteWakeEnable", disconnect_remote_wake_enable, 0x1, 0x1, true, 0xe23c32967e465a5b, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_HUB_30_PORT_REMOTE_WAKE_MASK.OverCurrentRemoteWakeEnable", over_current_remote_wake_enable, 0x2, 0x1, true, 0x7e2b2fa1152158b9, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif