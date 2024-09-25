#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_HANDLE_INFORMATION.NumberOfHandles", number_of_handles, 0x0, 0x20, true, 0xaa44ce8fd69dffac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_handle_table_entry_info_t, 1>), "_SYSTEM_HANDLE_INFORMATION.Handles", handles, 0x40, 0xc0, true, 0x1fd1d9ff7fd264c)
#else
#define _m00
#define _m01
#endif