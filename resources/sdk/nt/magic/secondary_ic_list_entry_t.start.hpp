#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SECONDARY_IC_LIST_ENTRY.ListEntry", list_entry, 0x0, 0x80, true, 0x4d56042a68195e67)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECONDARY_IC_LIST_ENTRY.GsivBase", gsiv_base, 0x80, 0x20, true, 0x65a14304bdb33e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECONDARY_IC_LIST_ENTRY.GsivSize", gsiv_size, 0xa0, 0x20, true, 0x54f9db979f2da153)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::secondary_interrupt_provider_interface_t), "_SECONDARY_IC_LIST_ENTRY.Interface", interface, 0xc0, 0xc0, true, 0xc7d63def839f1640)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_SECONDARY_IC_LIST_ENTRY.BusyCount", busy_count, 0x380, 0x20, true, 0xe92b766d21140d61)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_SECONDARY_IC_LIST_ENTRY.ExclusiveWaiterCount", exclusive_waiter_count, 0x3a0, 0x20, true, 0x7100876d65f4f499)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_SECONDARY_IC_LIST_ENTRY.NotificationEvent", notification_event, 0x3c0, 0xc0, true, 0xc049cdfa648e3a79)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SECONDARY_IC_LIST_ENTRY.SignalListEntry", signal_list_entry, 0x480, 0x80, true, 0xb51b1a7fa79b7dbb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::secondary_interrupt_line_state_t, 1>), "_SECONDARY_IC_LIST_ENTRY.State", state, 0x500, 0x80, true, 0x58a17a0603925f9a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif