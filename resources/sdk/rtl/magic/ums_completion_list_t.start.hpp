#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t*), "_RTL_UMS_COMPLETION_LIST.ThreadListHead", thread_list_head, 0x0, 0x40, true, 0xe35abe65b4d4e7d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_UMS_COMPLETION_LIST.CompletionEvent", completion_event, 0x40, 0x40, true, 0xb8cd0e2de1bb14cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UMS_COMPLETION_LIST.CompletionFlags", completion_flags, 0x80, 0x20, true, 0x2b75e0a581680104)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_RTL_UMS_COMPLETION_LIST.InternalListHead", internal_list_head, 0xc0, 0x40, true, 0xd60ae609babbf6a8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif