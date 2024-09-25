#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HANDLE_TABLE_ENTRY.Flags", flags, 0x0, 0x20, true, 0xc98387524680ff58)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::handle_table_entry_t*), "_RTL_HANDLE_TABLE_ENTRY.NextFree", next_free, 0x0, 0x40, true, 0xeaa9d49c57aa50e7)
#else
#define _m00
#define _m01
#endif