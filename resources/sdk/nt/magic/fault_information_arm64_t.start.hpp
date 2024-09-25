#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FAULT_INFORMATION_ARM64.DomainHandle", domain_handle, 0x0, 0x40, true, 0xb66894f31db87040)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FAULT_INFORMATION_ARM64.FaultAddress", fault_address, 0x40, 0x40, true, 0x7534463ed50a16d8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FAULT_INFORMATION_ARM64.PhysicalDeviceObject", physical_device_object, 0x80, 0x40, true, 0x8c4edd4368f5c3e1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAULT_INFORMATION_ARM64.InputMappingId", input_mapping_id, 0xc0, 0x20, true, 0x663b793f924ac3b3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fault_information_arm64_flags_t), "_FAULT_INFORMATION_ARM64.Flags", flags, 0xe0, 0x20, true, 0xa45161fa68f8d814)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::fault_information_arm64_type_t), "_FAULT_INFORMATION_ARM64.Type", type, 0x100, 0x20, true, 0xbc85d22ddd6fed7a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FAULT_INFORMATION_ARM64.IommuBaseAddress", iommu_base_address, 0x140, 0x40, true, 0x8f02659a543345a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif