#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_HANDLE_SNAPSHOT_INFORMATION.NumberOfHandles", number_of_handles, 0x0, 0x40, true, 0x24357c40ed7cf6ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::process_handle_table_entry_info_t, 1>), "_PROCESS_HANDLE_SNAPSHOT_INFORMATION.Handles", handles, 0x80, 0x40, true, 0x154fecadc9d510fa)
#else
#define _m00
#define _m01
#endif