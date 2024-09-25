#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PAGE_TABLE_LEVEL_DESC.IndexBitCount", index_bit_count, 0x0, 0x20, true, 0xcd464d8ea99b0c7a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_PAGE_TABLE_LEVEL_DESC.IndexMask", index_mask, 0x40, 0x40, true, 0x60ab3f3f549623f2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_PAGE_TABLE_LEVEL_DESC.IndexShift", index_shift, 0x80, 0x40, true, 0xf48624d2453ecd63)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_PAGE_TABLE_LEVEL_DESC.LowerLevelsMask", lower_levels_mask, 0xc0, 0x40, true, 0x1919a1e4a0181037)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_PAGE_TABLE_LEVEL_DESC.EntryCoverageInPages", entry_coverage_in_pages, 0x100, 0x40, true, 0xff5c4323207772a0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif