#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_ENUM_SDS_INPUT.StartingOffset", starting_offset, 0x0, 0x40, true, 0x6c3b3bf34e70ef99)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_ENUM_SDS_INPUT.MaxSDEntriesToReturn", max_sd_entries_to_return, 0x40, 0x40, true, 0xcf8b74512022436)
#else
#define _m00
#define _m01
#endif