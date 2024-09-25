#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_DMA_TRANSLATION_ENTRY.PhysicalAddress", physical_address, 0x0, 0x40, true, 0x2ba11a577fac469c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_entry_t*), "_HALP_DMA_TRANSLATION_ENTRY.Next", next, 0x40, 0x40, true, 0xba7ddb597a3f27d3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_TRANSLATION_ENTRY.MappedLength", mapped_length, 0x80, 0x20, true, 0xae10c228fd28dbeb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HALP_DMA_TRANSLATION_ENTRY.VirtualAddress", virtual_address, 0x180, 0x40, true, 0xdd5f6432f44b0282)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HALP_DMA_TRANSLATION_ENTRY.Flags.BoundToMaster", bound_to_master, 0x0, 0x1, true, 0x5895b24fb4db14e4, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HALP_DMA_TRANSLATION_ENTRY.Flags.BoundToScatterPool", bound_to_scatter_pool, 0x1, 0x1, true, 0xb4c68c80ad133e8e, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HALP_DMA_TRANSLATION_ENTRY.Flags.OwnedByMaster", owned_by_master, 0x2, 0x1, true, 0xd7776759c173c7fe, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HALP_DMA_TRANSLATION_ENTRY.Flags.OwnedByScatterPool", owned_by_scatter_pool, 0x3, 0x1, true, 0x9e0b753181f2e1ca, 1, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HALP_DMA_TRANSLATION_ENTRY.Flags.TemporaryMapping", temporary_mapping, 0x4, 0x1, true, 0xe73f20ead4236d97, 1, uint64_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HALP_DMA_TRANSLATION_ENTRY.Flags.ZeroBuffer", zero_buffer, 0x5, 0x1, true, 0x5dc0fa85ed899e06, 1, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint58_t), "_HALP_DMA_TRANSLATION_ENTRY.Flags.Address", address, 0x6, 0x3a, true, 0x1555558c2fc2091d, 58, uint64_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_HALP_DMA_TRANSLATION_ENTRY.Flags", flags, 0x180, 0x40, true, 0x635755a487d1edbf)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_entry_t*), "_HALP_DMA_TRANSLATION_ENTRY.NextMapping", next_mapping, 0x1c0, 0x40, true, 0x69b54b51065e5c01)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_TRANSLATION_ENTRY.LogicalBounceBufferPremapped", logical_bounce_buffer_premapped, 0x200, 0x8, true, 0x662dac174f3b0276)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_DMA_TRANSLATION_ENTRY.LogicalAddress", logical_address, 0xc0, 0x40, true, 0xae755caef5e5519f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_DMA_TRANSLATION_ENTRY.LogicalMappedLength", logical_mapped_length, 0x100, 0x40, true, 0x4191d0d185e38349)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_DMA_TRANSLATION_ENTRY.NextLogicalAddress", next_logical_address, 0x140, 0x40, true, 0xcc75af61c35c924c)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_dma_logical_address_token_mapped_segment_t), "_HALP_DMA_TRANSLATION_ENTRY.RemappingAddress", remapping_address, 0x0, 0x0, false, 0x4df1e3983762369b)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif