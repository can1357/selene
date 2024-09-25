#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_CRITICAL_SECTION_DEBUG.Type", type, 0x0, 0x10, true, 0xc4b96f05a7a1ad85)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_CRITICAL_SECTION_DEBUG.CreatorBackTraceIndex", creator_back_trace_index, 0x10, 0x10, true, 0x1e38cae6f8d795ce)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t*), "_RTL_CRITICAL_SECTION_DEBUG.CriticalSection", critical_section, 0x40, 0x40, true, 0x7649c08c50b37a32)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RTL_CRITICAL_SECTION_DEBUG.ProcessLocksList", process_locks_list, 0x80, 0x80, true, 0x5ca98076edd27cf3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION_DEBUG.EntryCount", entry_count, 0x100, 0x20, true, 0x9aced9a8e023d815)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION_DEBUG.ContentionCount", contention_count, 0x120, 0x20, true, 0xb9eeb6c04f912c2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CRITICAL_SECTION_DEBUG.Flags", flags, 0x140, 0x20, true, 0xba62d4c95e900d87)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_CRITICAL_SECTION_DEBUG.CreatorBackTraceIndexHigh", creator_back_trace_index_high, 0x160, 0x10, true, 0x5bee83d6d269d12)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_CRITICAL_SECTION_DEBUG.SpareWORD", spare_word, 0x170, 0x10, true, 0xfcb9d2a96fd82dff)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_CRITICAL_SECTION_DEBUG.Identifier", identifier, 0x170, 0x10, true, 0x37d094dd3bbfc504)
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
#define _m09
#endif