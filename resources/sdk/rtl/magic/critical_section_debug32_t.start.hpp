#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_CRITICAL_SECTION_DEBUG32.Type", type, 0x0, 0x10, true, 0x99403560011172b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_CRITICAL_SECTION_DEBUG32.CreatorBackTraceIndex", creator_back_trace_index, 0x10, 0x10, true, 0xef838a06c8ea58cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION_DEBUG32.CriticalSection", critical_section, 0x20, 0x20, true, 0xecdac56d8db2f933)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry32_t), "_RTL_CRITICAL_SECTION_DEBUG32.ProcessLocksList", process_locks_list, 0x40, 0x40, true, 0x5b088b37d4849c26)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION_DEBUG32.EntryCount", entry_count, 0x80, 0x20, true, 0x6f25ddb32c05fa4e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION_DEBUG32.ContentionCount", contention_count, 0xa0, 0x20, true, 0x513e07abe14721f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif