#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_HV_SVM_DEVICE_CAPABILITIES.SvmSupported", svm_supported, 0x0, 0x1, true, 0x50bc4e8ffdf51fa0, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_HV_SVM_DEVICE_CAPABILITIES.PciExecute", pci_execute, 0x1, 0x1, true, 0x2048f9156d587a55, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_HV_SVM_DEVICE_CAPABILITIES.NoExecute", no_execute, 0x2, 0x1, true, 0x6796222f853d74e4, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_HV_SVM_DEVICE_CAPABILITIES.OverflowPossible", overflow_possible, 0x1f, 0x1, true, 0x732180bdb375e8cf, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_HV_SVM_DEVICE_CAPABILITIES.PasidCount", pasid_count, 0x20, 0x20, true, 0x97b6110578de0abb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_HV_SVM_DEVICE_CAPABILITIES.IommuIndex", iommu_index, 0x40, 0x20, true, 0xab212174468fed0f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif