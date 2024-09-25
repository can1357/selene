#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::single_list_entry_t, nt::list_entry_t>), "_KWAIT_CHAIN_ENTRY.ListEntry", list_entry, 0x0, 0x80, true, 0x8b6f62e73070decb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_KWAIT_CHAIN_ENTRY.Event", event, 0xc0, 0xc0, true, 0xdeb58fee454da523)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KWAIT_CHAIN_ENTRY.Thread", thread, 0x80, 0x40, true, 0xb7e66394dbf29075)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KWAIT_CHAIN_ENTRY.AbLockHandle", ab_lock_handle, 0x0, 0x0, false, 0xa2e2aa3137f66b74)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif