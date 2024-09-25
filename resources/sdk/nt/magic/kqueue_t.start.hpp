#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dispatcher_header_t), "_KQUEUE.Header", header, 0x0, 0xc0, true, 0x4f256af7800dbccf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KQUEUE.EntryListHead", entry_list_head, 0xc0, 0x80, true, 0xb24a65c5c638c2b6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KQUEUE.CurrentCount", current_count, 0x140, 0x20, true, 0x613962a973c38a1a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KQUEUE.MaximumCount", maximum_count, 0x160, 0x20, true, 0x203aa34755aa80cc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KQUEUE.ThreadListHead", thread_list_head, 0x180, 0x80, true, 0x768bc1c79d51b2d1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif