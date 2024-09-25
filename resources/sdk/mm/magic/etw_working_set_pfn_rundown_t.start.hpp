#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_ETW_WORKING_SET_PFN_RUNDOWN.ProcessId", process_id, 0x0, 0x40, true, 0xf774e9a43ebb5c7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_ETW_WORKING_SET_PFN_RUNDOWN.EntryCount", entry_count, 0x40, 0x40, true, 0xa7774a67393c4bae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mm::etw_page_info_ex_t, 1>), "_MM_ETW_WORKING_SET_PFN_RUNDOWN.WorkingSetInfo", working_set_info, 0x80, 0x0, true, 0x2962af781402f876)
#else
#define _m00
#define _m01
#define _m02
#endif