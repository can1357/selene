#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SG_DMA_BLOCK.Header", header, 0x0, 0x20, true, 0xc66b6b752d3e179c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_SG_DMA_BLOCK.Miniport", miniport, 0x40, 0x40, true, 0x89b37a0602b3bb85)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_SG_DMA_BLOCK.MiniportAdapterContext", miniport_adapter_context, 0x80, 0x40, true, 0x28aa9b20e5884117)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::adapter_t*), "_NDIS_SG_DMA_BLOCK.DmaAdapterObject", dma_adapter_object, 0xc0, 0x40, true, 0x265c7b98b9f5546c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, void*, struct nt::scatter_gather_list_t*, void*)>*), "_NDIS_SG_DMA_BLOCK.ProcessSGListHandler", process_sg_list_handler, 0x100, 0x40, true, 0x68462af6bcf41477)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, int64_t*, uint32_t, void*)>*), "_NDIS_SG_DMA_BLOCK.SharedMemAllocateCompleteHandler", shared_mem_allocate_complete_handler, 0x140, 0x40, true, 0xa0a6a44a48b925b7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SG_DMA_BLOCK.Flags", flags, 0x180, 0x20, true, 0x88553cc1b5e61853)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SG_DMA_BLOCK.MaximumPhysicalMapping", maximum_physical_mapping, 0x1a0, 0x20, true, 0x54cbc43f38e9c276)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SG_DMA_BLOCK.ScatterGatherListSize", scatter_gather_list_size, 0x1c0, 0x20, true, 0x211a1beaa9e3e226)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_SG_DMA_BLOCK.SGListLookasideList", sg_list_lookaside_list, 0x200, 0x40, true, 0x5249f51f763d12e2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_SG_DMA_BLOCK.DmaAdapterRefCount", dma_adapter_ref_count, 0x240, 0x20, true, 0xf1a42619da84137f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_SG_DMA_BLOCK.DmaResourcesReleasedEvent", dma_resources_released_event, 0x280, 0x40, true, 0x14da37a31613c47b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_SG_DMA_BLOCK.SharedMemoryPage", shared_memory_page, 0x2c0, 0x80, true, 0x710ecdacb4c697b3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_NDIS_SG_DMA_BLOCK.SharedMemoryLeft", shared_memory_left, 0x340, 0x40, true, 0xebbdbb803e058ae)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 2>), "_NDIS_SG_DMA_BLOCK.SharedMemoryAddress", shared_memory_address, 0x380, 0x80, true, 0x981aadd3c5a348d4)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::adapter_t*), "_NDIS_SG_DMA_BLOCK.SavedDmaAdapterObject", saved_dma_adapter_object, 0x400, 0x40, true, 0x6acafd7d15221b5b)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::map_register_entry_t*), "_NDIS_SG_DMA_BLOCK.MapRegisters", map_registers, 0x440, 0x40, true, 0x6af696b420051df8)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_SG_DMA_BLOCK.AllocationEvent", allocation_event, 0x480, 0x40, true, 0x94cbdb6d14ad746b)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_SG_DMA_BLOCK.CurrentMapRegister", current_map_register, 0x4c0, 0x10, true, 0xdc33dee58a08f717)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_SG_DMA_BLOCK.BaseMapRegistersNeeded", base_map_registers_needed, 0x4d0, 0x10, true, 0x452192c275550d60)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_SG_DMA_BLOCK.SGMapRegistersNeeded", sg_map_registers_needed, 0x4e0, 0x10, true, 0x7816f85d1c151c23)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::generic_object_t*), "_NDIS_SG_DMA_BLOCK.GenericObject", generic_object, 0x0, 0x0, false, 0xee6a59ce6d17c0a4)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_NDIS_SG_DMA_BLOCK.PhysicalDeviceObject", physical_device_object, 0x0, 0x0, false, 0x86f2b771ce7441a9)
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
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif