#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_HANDLE_COUNT_DATABASE.CountEntries", count_entries, 0x0, 0x20, true, 0xe38682f976f88945)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::object_handle_count_entry_t, 1>), "_OBJECT_HANDLE_COUNT_DATABASE.HandleCountEntries", handle_count_entries, 0x40, 0x80, true, 0xe546fa46975b5608)
#else
#define _m00
#define _m01
#endif