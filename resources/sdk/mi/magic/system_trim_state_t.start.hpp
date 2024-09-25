#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_TRIM_STATE.ExpansionLock", expansion_lock, 0x0, 0x40, true, 0xbc2132204abaade9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SYSTEM_TRIM_STATE.TrimInProgressCount", trim_in_progress_count, 0x40, 0x20, true, 0x1885a86a5ee7c1d3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_SYSTEM_TRIM_STATE.PeriodicWorkingSetEvent", periodic_working_set_event, 0x80, 0xc0, true, 0xfddfd20259b0646a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_MI_SYSTEM_TRIM_STATE.TrimAllPageFaultCount", trim_all_page_fault_count, 0x140, 0x60, true, 0xb0aa2a39baf1ded3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif