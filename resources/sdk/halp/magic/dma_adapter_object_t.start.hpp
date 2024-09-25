#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::adapter_t), "_HALP_DMA_ADAPTER_OBJECT.DmaHeader", dma_header, 0x0, 0x80, true, 0x8c1ac3ae2b709139)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t*), "_HALP_DMA_ADAPTER_OBJECT.ContiguousMapRegisters", contiguous_map_registers, 0x80, 0x40, true, 0xa9e1cecda3e982a2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_entry_t*), "_HALP_DMA_ADAPTER_OBJECT.ScatterBufferListHead", scatter_buffer_list_head, 0xc0, 0x40, true, 0x32488b7bd628cca3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_ADAPTER_OBJECT.NumberOfFreeScatterBuffers", number_of_free_scatter_buffers, 0x100, 0x20, true, 0xa268c80b970f84ce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_buffer_t*), "_HALP_DMA_ADAPTER_OBJECT.ContiguousTranslations", contiguous_translations, 0x140, 0x40, true, 0x6e1615438d6034c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_buffer_t*), "_HALP_DMA_ADAPTER_OBJECT.ScatterTranslations", scatter_translations, 0x180, 0x40, true, 0x137c284d2608e281)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_buffer_position_t), "_HALP_DMA_ADAPTER_OBJECT.ContiguousTranslationEnd", contiguous_translation_end, 0x1c0, 0x80, true, 0x8fe6e8a36a6e17d4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_buffer_position_t), "_HALP_DMA_ADAPTER_OBJECT.ScatterTranslationEnd", scatter_translation_end, 0x240, 0x80, true, 0x3f8a5e705fc2e762)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_buffer_position_t), "_HALP_DMA_ADAPTER_OBJECT.CrashDump.ContiguousHint", contiguous_hint, 0x0, 0x80, true, 0xbee9d5e27c05c0b7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_translation_buffer_position_t), "_HALP_DMA_ADAPTER_OBJECT.CrashDump.ScatterHint", scatter_hint, 0x80, 0x80, true, 0x49eeeba9332684ee)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_crash_dump_t), "_HALP_DMA_ADAPTER_OBJECT.CrashDump", crash_dump, 0x2c0, 0x0, true, 0x52d9c0bd57083a41)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_DMA_ADAPTER_OBJECT.SpinLock", spin_lock, 0x3c0, 0x40, true, 0x48ac386bc2f1f056)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_DMA_ADAPTER_OBJECT.GrowLock", grow_lock, 0x400, 0x40, true, 0xb2b88812e3b919e2)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HALP_DMA_ADAPTER_OBJECT.MaximumPhysicalAddress", maximum_physical_address, 0x440, 0x40, true, 0x2cfd2157fa703b46)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_ADAPTER_OBJECT.IsMasterAdapter", is_master_adapter, 0x480, 0x8, true, 0xea9023b05cd4740a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_ADAPTER_OBJECT.DmaCanCross64K", dma_can_cross64k, 0x488, 0x8, true, 0xd7ece167351b9468)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_ADAPTER_OBJECT.LibraryVersion", library_version, 0x4a0, 0x20, true, 0x5263f800c77bf0e8)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_ADAPTER_OBJECT.Signature", signature, 0x0, 0x0, false, 0x3ef1cdb2026518b9)
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