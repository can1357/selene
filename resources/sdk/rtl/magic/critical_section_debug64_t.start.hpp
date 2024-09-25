#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_CRITICAL_SECTION_DEBUG64.Type", type, 0x0, 0x10, true, 0x649cd173e01bf4a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_CRITICAL_SECTION_DEBUG64.CreatorBackTraceIndex", creator_back_trace_index, 0x10, 0x10, true, 0x9dc28a6e5fe9eff8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CRITICAL_SECTION_DEBUG64.CriticalSection", critical_section, 0x40, 0x40, true, 0xf0a133d964b47ae9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "_RTL_CRITICAL_SECTION_DEBUG64.ProcessLocksList", process_locks_list, 0x80, 0x80, true, 0x32ef5ce2cf9abdbf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION_DEBUG64.EntryCount", entry_count, 0x100, 0x20, true, 0xad75b33bfa0c6443)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION_DEBUG64.ContentionCount", contention_count, 0x120, 0x20, true, 0xc7cba6e502c066f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif