#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_ENUM_SDS_OUTPUT.NextOffset", next_offset, 0x0, 0x40, true, 0xefba3ad98d40ab55)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_ENUM_SDS_OUTPUT.NumSDEntriesReturned", num_sd_entries_returned, 0x40, 0x40, true, 0x96c3909386490c02)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_ENUM_SDS_OUTPUT.NumSDBytesReturned", num_sd_bytes_returned, 0x80, 0x40, true, 0x3e6684b5f147629d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::sd_enum_sds_entry_t, 1>), "_SD_ENUM_SDS_OUTPUT.SDEntry", sd_entry, 0xc0, 0xc0, true, 0x5177f0a117a26486)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif