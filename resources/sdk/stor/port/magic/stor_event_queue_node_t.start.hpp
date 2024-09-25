#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STOR_EVENT_QUEUE_NODE.List", list, 0x0, 0x0, false, 0x572c65f4b11832cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STOR_EVENT_QUEUE_NODE.SortedList", sorted_list, 0x0, 0x0, false, 0xd610c2615948ec4d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_STOR_EVENT_QUEUE_NODE.SearchPointer", search_pointer, 0x0, 0x0, false, 0xa2a74a2f8f6b491b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_EVENT_QUEUE_NODE.Lock", lock, 0x0, 0x0, false, 0xababc479a8d460b9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EVENT_QUEUE_NODE.Timeout", timeout, 0x0, 0x0, false, 0x997d64c6692414b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif