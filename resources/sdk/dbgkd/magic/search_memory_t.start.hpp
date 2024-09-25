#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_SEARCH_MEMORY.SearchAddress", search_address, 0x0, 0x40, true, 0xa2e1843863981cd4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_SEARCH_MEMORY.FoundAddress", found_address, 0x0, 0x40, true, 0x333377d253785edf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_SEARCH_MEMORY.SearchLength", search_length, 0x40, 0x40, true, 0x85ae0d227410f16c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_SEARCH_MEMORY.PatternLength", pattern_length, 0x80, 0x20, true, 0x2eddeb57158dcae4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif