#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::iommu_interface_state_change_fields_t), "_IOMMU_INTERFACE_STATE_CHANGE.PresentFields", present_fields, 0x0, 0x0, false, 0xb1c1007e060e2eba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOMMU_INTERFACE_STATE_CHANGE.AvailableDomainTypes", available_domain_types, 0x0, 0x0, false, 0xe17113966479f965)
#else
#define _m00
#define _m01
#endif