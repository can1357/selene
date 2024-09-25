#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MgotNameList.dwSize", dw_size, 0x0, 0x20, true, 0x581a0deb0ad88f22)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::mnk_eq_buf_t*, 1>), "_MgotNameList.aNameListEntries", a_name_list_entries, 0x40, 0x40, true, 0x12a9aafef902b2af)
#else
#define _m00
#define _m01
#endif