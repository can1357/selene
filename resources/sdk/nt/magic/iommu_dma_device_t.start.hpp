#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_device_id_t*), "_IOMMU_DMA_DEVICE.DeviceId", device_id, 0x0, 0x0, false, 0xbb21cfd58cb50a51)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IOMMU_DMA_DEVICE.DeviceObject", device_object, 0x0, 0x0, false, 0x5bd23b8cbbe8da1c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IOMMU_DMA_DEVICE.DeviceState", device_state, 0x0, 0x0, false, 0xb1917d3198dbc84a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_dma_domain_t*), "_IOMMU_DMA_DEVICE.DomainOwner", domain_owner, 0x0, 0x0, false, 0xb15d056c64dae195)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_DMA_DEVICE.Hypervisor.LogicalId", logical_id, 0x0, 0x0, false, 0xa134d3354399d722)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_hypervisor_t), "_IOMMU_DMA_DEVICE.Hypervisor", hypervisor, 0x0, 0x0, false, 0xcd66d774803376e4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::registered_iommu_t*), "_IOMMU_DMA_DEVICE.Native.Iommu", iommu, 0x0, 0x0, false, 0x9c4f03361e5d292b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_device_t*), "_IOMMU_DMA_DEVICE.Native.ExtDevice", ext_device, 0x0, 0x0, false, 0xa60138eec6ff7148)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOMMU_DMA_DEVICE.Native.SourceId", source_id, 0x0, 0x0, false, 0x45bcb39d302d9122)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_DMA_DEVICE.Native.AtsReferenceCount", ats_reference_count, 0x0, 0x0, false, 0xa7c4a77ad188d041)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_DMA_DEVICE.Native.InvalidationQueueDepth", invalidation_queue_depth, 0x0, 0x0, false, 0x3c0beaac21ff0445)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_IOMMU_DMA_DEVICE.Native.DeviceActive", device_active, 0x0, 0x0, false, 0xb1369ef453fab63d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_native_t), "_IOMMU_DMA_DEVICE.Native", native, 0x0, 0x0, false, 0xe82384a21d8a1c7)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_interface_callback_record_t*), "_IOMMU_DMA_DEVICE.InterfaceCallbackRecord", interface_callback_record, 0x0, 0x0, false, 0x1b17175b22610a63)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOMMU_DMA_DEVICE.DpptException", dppt_exception, 0x0, 0x0, false, 0xbf9382fb3f9f9558)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_tracked_device_t*), "_IOMMU_DMA_DEVICE.SvmDevice", svm_device, 0x0, 0x0, false, 0xaed4eeef56b02d1b)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct nt::fault_information_t*)>*), "_IOMMU_DMA_DEVICE.FaultHandler", fault_handler, 0x0, 0x0, false, 0x697f34d31291f874)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IOMMU_DMA_DEVICE.FaultContext", fault_context, 0x0, 0x0, false, 0x5279f9938c3c1a42)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fault_information_t), "_IOMMU_DMA_DEVICE.FaultInfo", fault_info, 0x0, 0x0, false, 0x21efe748e06475d2)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_IOMMU_DMA_DEVICE.FaultDpc", fault_dpc, 0x0, 0x0, false, 0xca038a32acbee5bf)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_IOMMU_DMA_DEVICE.FaultWorkItem", fault_work_item, 0x0, 0x0, false, 0x3d76d9e0e44a0ef8)
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
#endif