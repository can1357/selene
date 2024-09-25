#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PAGE_TABLE_LEVEL_DESC.PageTableIndexBitCount", page_table_index_bit_count, 0x0, 0x20, true, 0xbb231d1b214517e7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PAGE_TABLE_LEVEL_DESC.PageTableSegmentId", page_table_segment_id, 0x20, 0x20, true, 0xfac550b2bf6889e3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PAGE_TABLE_LEVEL_DESC.PagingProcessPageTableSegmentId", paging_process_page_table_segment_id, 0x40, 0x20, true, 0x78f59271a99a6c5f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PAGE_TABLE_LEVEL_DESC.PageTableSizeInBytes", page_table_size_in_bytes, 0x60, 0x20, true, 0x184e2e887b4da8bb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PAGE_TABLE_LEVEL_DESC.PageTableAlignmentInBytes", page_table_alignment_in_bytes, 0x80, 0x20, true, 0xee8ed49940ec53b4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif