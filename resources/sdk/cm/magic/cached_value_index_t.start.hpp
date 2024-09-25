#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_CACHED_VALUE_INDEX.CellIndex", cell_index, 0x0, 0x0, false, 0xc421812db61aa9b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cell_data_t), "_CM_CACHED_VALUE_INDEX.Data.CellData", cell_data, 0x0, 0x0, false, 0xd5d95271508f2832)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_CM_CACHED_VALUE_INDEX.Data.List", list, 0x0, 0x0, false, 0xa140a147dfc3ad26)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_CM_CACHED_VALUE_INDEX.Data", data, 0x0, 0x0, false, 0xcf9c1008d71afbed)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif