#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 16>), "_SYSPTES_HEADER.ListHead", list_head, 0x0, 0x0, true, 0xcf8d6360cf0ca808)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSPTES_HEADER.Count", count, 0x800, 0x40, true, 0x326f724a7643e46c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSPTES_HEADER.NumberOfEntries", number_of_entries, 0x840, 0x40, true, 0x9e44b41a2bac38c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSPTES_HEADER.NumberOfEntriesPeak", number_of_entries_peak, 0x880, 0x40, true, 0x428f72086a338fc0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif