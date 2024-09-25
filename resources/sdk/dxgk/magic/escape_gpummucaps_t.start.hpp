#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_ESCAPE_GPUMMUCAPS.ReadOnlyMemorySupported", read_only_memory_supported, 0x0, 0x8, true, 0xc5287a842479fe02)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_ESCAPE_GPUMMUCAPS.NoExecuteMemorySupported", no_execute_memory_supported, 0x8, 0x8, true, 0xd20ddaf20e7c627c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_ESCAPE_GPUMMUCAPS.ZeroInPteSupported", zero_in_pte_supported, 0x10, 0x8, true, 0x698a56ef7114b8df)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_ESCAPE_GPUMMUCAPS.CacheCoherentMemorySupported", cache_coherent_memory_supported, 0x18, 0x8, true, 0x675338293249a333)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_ESCAPE_GPUMMUCAPS.LargePageSupported", large_page_supported, 0x20, 0x8, true, 0x30908683b96c0239)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_ESCAPE_GPUMMUCAPS.DualPteSupported", dual_pte_supported, 0x28, 0x8, true, 0x630863e1341ba844)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_ESCAPE_GPUMMUCAPS.AllowNonAlignedLargePageAddress", allow_non_aligned_large_page_address, 0x30, 0x8, true, 0xa6caa9b52c24bdcf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ESCAPE_GPUMMUCAPS.VirtualAddressBitCount", virtual_address_bit_count, 0x40, 0x20, true, 0xa1250839de8ef920)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ESCAPE_GPUMMUCAPS.PageTableLevelCount", page_table_level_count, 0x60, 0x20, true, 0x329a6be47bc10114)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3dk::mt::page_table_level_desc_t, 6>), "_DXGK_ESCAPE_GPUMMUCAPS.PageTableLevelDesk", page_table_level_desk, 0x80, 0x80, true, 0xf15fc7ef5223dfe2)
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
#define _m09
#endif