#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_WORKING_SET_INFORMATION.NumberOfEntries", number_of_entries, 0x0, 0x40, true, 0x3b20778f827c2ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::memory_working_set_block_t, 1>), "_MEMORY_WORKING_SET_INFORMATION.WorkingSetInfo", working_set_info, 0x40, 0x40, true, 0x9362487311fb7f7)
#else
#define _m00
#define _m01
#endif