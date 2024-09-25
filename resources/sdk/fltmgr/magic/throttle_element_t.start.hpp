#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_THROTTLE_ELEMENT.PendingList", pending_list, 0x0, 0x80, true, 0xb7be49dea812c596)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THROTTLE_ELEMENT.RunningCount", running_count, 0x80, 0x20, true, 0x3519035326d1e683)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THROTTLE_ELEMENT.RunningLimit", running_limit, 0xa0, 0x20, true, 0x4b890817102dd12)
#else
#define _m00
#define _m01
#define _m02
#endif