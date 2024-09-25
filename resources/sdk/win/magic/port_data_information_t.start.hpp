#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_DATA_INFORMATION.CountDataEntries", count_data_entries, 0x0, 0x20, true, 0x70d9c2f4a130dc07)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::port_data_entry_t, 1>), "_PORT_DATA_INFORMATION.DataEntries", data_entries, 0x40, 0x80, true, 0x9ae71b6fe5bde3ba)
#else
#define _m00
#define _m01
#endif