#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_HV_SVM_SYSTEM_CAPABILITIES.SvmSupported", svm_supported, 0x0, 0x1, true, 0xccb4c88b3a958105, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_HV_SVM_SYSTEM_CAPABILITIES.GpaAlwaysValid", gpa_always_valid, 0x1, 0x1, true, 0x38705a80f92e0a15, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_HV_SVM_SYSTEM_CAPABILITIES.MaxPasidSpaceCount", max_pasid_space_count, 0x20, 0x20, true, 0xddad61918267455c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_HV_SVM_SYSTEM_CAPABILITIES.MaxPasidSpacePasidCount", max_pasid_space_pasid_count, 0x40, 0x20, true, 0x6b75be6816a583e6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_HV_SVM_SYSTEM_CAPABILITIES.MaxPrqSize", max_prq_size, 0x60, 0x20, true, 0x42a83dcda3d18d51)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_HV_SVM_SYSTEM_CAPABILITIES.IommuCount", iommu_count, 0x80, 0x20, true, 0x398215df58ec57b8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_HV_SVM_SYSTEM_CAPABILITIES.MinIommuPasidCount", min_iommu_pasid_count, 0xa0, 0x20, true, 0x3f9d4d7c9dffc8b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif