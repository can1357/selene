#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SG_DMA_DESCRIPTION.Header", header, 0x0, 0x20, true, 0xa2c682097c5191f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SG_DMA_DESCRIPTION.Flags", flags, 0x20, 0x20, true, 0x2c1b3aeae5f906c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SG_DMA_DESCRIPTION.MaximumPhysicalMapping", maximum_physical_mapping, 0x40, 0x20, true, 0xc71d865f741f1511)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, void*, struct nt::scatter_gather_list_t*, void*)>*), "_NDIS_SG_DMA_DESCRIPTION.ProcessSGListHandler", process_sg_list_handler, 0x80, 0x40, true, 0x487926db3e0f3773)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, int64_t*, uint32_t, void*)>*), "_NDIS_SG_DMA_DESCRIPTION.SharedMemAllocateCompleteHandler", shared_mem_allocate_complete_handler, 0xc0, 0x40, true, 0xf23dc994e4a5feae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SG_DMA_DESCRIPTION.ScatterGatherListSize", scatter_gather_list_size, 0x100, 0x20, true, 0xe2ded8287c1cca68)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_NDIS_SG_DMA_DESCRIPTION.PdoOverride", pdo_override, 0x0, 0x0, false, 0x66bd77f40c3a3543)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif