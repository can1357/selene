#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS.UnitSizePages", unit_size_pages, 0x0, 0x0, false, 0xfcc08c3b57980bc1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS.ReservedUnitMap", reserved_unit_map, 0x0, 0x0, false, 0x1c8964762945f9a9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS.ReservedUnitMapBuffer", reserved_unit_map_buffer, 0x0, 0x0, false, 0xe0aff6dad6afe247)
#else
#define _m00
#define _m01
#define _m02
#endif