#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::device_power_state_t), "_NDIS_PM_WAKE_UP_CAPABILITIES.MinMagicPacketWakeUp", min_magic_packet_wake_up, 0x0, 0x20, true, 0x26eaadd583ff0b03)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::device_power_state_t), "_NDIS_PM_WAKE_UP_CAPABILITIES.MinPatternWakeUp", min_pattern_wake_up, 0x20, 0x20, true, 0x576e14fd8f3e952)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::device_power_state_t), "_NDIS_PM_WAKE_UP_CAPABILITIES.MinLinkChangeWakeUp", min_link_change_wake_up, 0x40, 0x20, true, 0x662c8adbc0a733a6)
#else
#define _m00
#define _m01
#define _m02
#endif