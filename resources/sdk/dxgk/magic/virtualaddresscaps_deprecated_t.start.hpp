#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIRTUALADDRESSCAPS_DEPRECATED.PrivilegedMemorySupported", privileged_memory_supported, 0x0, 0x1, true, 0xa4993c7841f9eb82, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIRTUALADDRESSCAPS_DEPRECATED.ReadOnlyMemorySupported", read_only_memory_supported, 0x1, 0x1, true, 0x4e0b9187edfdfc2a, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALADDRESSCAPS_DEPRECATED.Value", value, 0x0, 0x20, true, 0x21fdbf5a7047d4b3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALADDRESSCAPS_DEPRECATED.VirtualAddressBitCount", virtual_address_bit_count, 0x20, 0x20, true, 0xde2097df2688e991)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALADDRESSCAPS_DEPRECATED.PageTableCoverageBitCount", page_table_coverage_bit_count, 0x40, 0x20, true, 0x79184734fbce6e33)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALADDRESSCAPS_DEPRECATED.PageDirectoryEntrySize", page_directory_entry_size, 0x60, 0x20, true, 0xaa482e538c3d905f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALADDRESSCAPS_DEPRECATED.PageDirectorySegment", page_directory_segment, 0x80, 0x20, true, 0xb31a7599f4333863)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALADDRESSCAPS_DEPRECATED.PageTableSegment", page_table_segment, 0xa0, 0x20, true, 0xa09a7b213bc5e2d4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALADDRESSCAPS_DEPRECATED.IdealGPUPageSize", ideal_gpu_page_size, 0xc0, 0x20, true, 0x69f0eeb6868193d8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif