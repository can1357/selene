#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_QUERY_DEBUG_VIRTUAL_PROCESS.Context", context, 0x0, 0x40, true, 0xe92541131651f0df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(prtl_query_debug_virtual_process_read_memory_routine_t ), "_RTL_QUERY_DEBUG_VIRTUAL_PROCESS.ReadMemoryRoutine", read_memory_routine, 0x40, 0x40, true, 0x9cc4e1f1398c50be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(prtl_query_debug_virtual_process_query_information_routine_t ), "_RTL_QUERY_DEBUG_VIRTUAL_PROCESS.QueryInformationRoutine", query_information_routine, 0x80, 0x40, true, 0x503fc528571c3f0f)
#else
#define _m00
#define _m01
#define _m02
#endif