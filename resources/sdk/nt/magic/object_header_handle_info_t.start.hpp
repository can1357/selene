#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_handle_count_database_t*), "_OBJECT_HEADER_HANDLE_INFO.HandleCountDataBase", handle_count_data_base, 0x0, 0x40, true, 0x4e0491ec0d1a4c9b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_handle_count_entry_t), "_OBJECT_HEADER_HANDLE_INFO.SingleEntry", single_entry, 0x0, 0x80, true, 0xddefd4aa93148bc6)
#else
#define _m00
#define _m01
#endif