#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FAULT_INFORMATION_X64.DomainHandle", domain_handle, 0x0, 0x40, true, 0xca70a76981f25a33)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FAULT_INFORMATION_X64.FaultAddress", fault_address, 0x40, 0x40, true, 0xaa9cfefbda6e023e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fault_information_x64_flags_t), "_FAULT_INFORMATION_X64.Flags", flags, 0x80, 0x20, true, 0xd9b51b46a8bb6f14)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::fault_information_arm64_type_t), "_FAULT_INFORMATION_X64.Type", type, 0xa0, 0x20, true, 0x79b3b12fad138c74)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FAULT_INFORMATION_X64.IommuBaseAddress", iommu_base_address, 0xc0, 0x40, true, 0x4dab25a0b70b44d8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FAULT_INFORMATION_X64.PciSegment", pci_segment, 0x100, 0x20, true, 0xaabc8ec7713fcc6b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif