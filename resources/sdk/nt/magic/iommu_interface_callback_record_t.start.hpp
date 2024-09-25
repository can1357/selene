#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IOMMU_INTERFACE_CALLBACK_RECORD.ListEntry", list_entry, 0x0, 0x0, false, 0xb64d2ec4b95af773)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::iommu_interface_state_change_t*, void*)>*), "_IOMMU_INTERFACE_CALLBACK_RECORD.CallbackRoutine", callback_routine, 0x0, 0x0, false, 0x61ea4f4ae7be29fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IOMMU_INTERFACE_CALLBACK_RECORD.CallbackContext", callback_context, 0x0, 0x0, false, 0x38e7cf0dee9bdac1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_dma_device_t*), "_IOMMU_INTERFACE_CALLBACK_RECORD.DmaDevice", dma_device, 0x0, 0x0, false, 0xfba3558a65564274)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::iommu_interface_state_change_t), "_IOMMU_INTERFACE_CALLBACK_RECORD.LastReportedState", last_reported_state, 0x0, 0x0, false, 0xb8c43d5d7ab6bf29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif