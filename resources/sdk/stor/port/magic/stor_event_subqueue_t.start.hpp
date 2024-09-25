#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STOR_EVENT_SUBQUEUE.List", list, 0x0, 0x80, true, 0xc4fe219ae905cc02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STOR_EVENT_SUBQUEUE.SortedList", sorted_list, 0x80, 0x80, true, 0x527a1d86a57a503d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_STOR_EVENT_SUBQUEUE.SearchPointer", search_pointer, 0x100, 0x40, true, 0xb512ecd7435226f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_EVENT_SUBQUEUE.Lock", lock, 0x140, 0x40, true, 0xbc085ab6871a51e4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EVENT_SUBQUEUE.Timeout", timeout, 0x180, 0x20, true, 0x695227944bb2f080)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif