#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_HANDLE_INFORMATION_EX.NumberOfHandles", number_of_handles, 0x0, 0x40, true, 0x4cc7a711b63f06de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_handle_table_entry_info_ex_t, 1>), "_SYSTEM_HANDLE_INFORMATION_EX.Handles", handles, 0x80, 0x40, true, 0x87d4f6f886027a0)
#else
#define _m00
#define _m01
#endif