#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_SET_SIGNAL_INDICATION.RssiInterval", rssi_interval, 0x0, 0x20, true, 0xa7966c065b88aa66)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_SET_SIGNAL_INDICATION.RssiThreshold", rssi_threshold, 0x20, 0x20, true, 0xb3ca4666356264eb)
#else
#define _m00
#define _m01
#endif