#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ERROR_HISTORY_DIRECTORY.T10VendorId", t10_vendor_id, 0x0, 0x40, true, 0x86d86f386c1dfb6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ERROR_HISTORY_DIRECTORY.ErrorHistoryVersion", error_history_version, 0x40, 0x8, true, 0x808c38347e7e9335)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ERROR_HISTORY_DIRECTORY.ClearSupport", clear_support, 0x48, 0x1, true, 0xf78f8730d43006c4, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ERROR_HISTORY_DIRECTORY.ErrorHistorySource", error_history_source, 0x49, 0x2, true, 0x9fdbcf73c8675e93, 2, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ERROR_HISTORY_DIRECTORY.ErrorHistoryRetrieved", error_history_retrieved, 0x4b, 0x2, true, 0x10c01b580a5fdf1e, 2, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_ERROR_HISTORY_DIRECTORY.DirectoryLength", directory_length, 0xf0, 0x10, true, 0x211ebe5e1b9c5158)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::error_history_directory_entry_t, 1>), "_ERROR_HISTORY_DIRECTORY.ErrorHistoryDirectoryList", error_history_directory_list, 0x100, 0x40, true, 0xd3db67426e35d19e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif