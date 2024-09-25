#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.Header", header, 0x0, 0x20, true, 0x6bc2424bd84ea5e7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sriov_caps_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.SRIOVCapabilities", sriov_capabilities, 0x20, 0x20, true, 0xe3f84baa116c81bd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sriov_control_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.SRIOVControl", sriov_control, 0x40, 0x10, true, 0x12301f749cc7081b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sriov_status_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.SRIOVStatus", sriov_status, 0x50, 0x10, true, 0x191773c6e187b541)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.InitialVFs", initial_v_fs, 0x60, 0x10, true, 0x2cff142fe2da030)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.TotalVFs", total_v_fs, 0x70, 0x10, true, 0x1363d69fcacc9d55)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.NumVFs", num_v_fs, 0x80, 0x10, true, 0x739e3c57969f9a59)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.FunctionDependencyLink", function_dependency_link, 0x90, 0x8, true, 0x945fc7b220a7517b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.RsvdP1", rsvd_p1, 0x98, 0x8, true, 0xd44c6c4bd5915708)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.FirstVFOffset", first_vf_offset, 0xa0, 0x10, true, 0xe4ba5715a499989e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.VFStride", vf_stride, 0xb0, 0x10, true, 0x943df61ba91cfa3d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.RsvdP2", rsvd_p2, 0xc0, 0x10, true, 0xe7b75af3f05012e8)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.VFDeviceId", vf_device_id, 0xd0, 0x10, true, 0xe5ffaa2a33180a3c)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.SupportedPageSizes", supported_page_sizes, 0xe0, 0x20, true, 0x94e487a1d851b588)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.SystemPageSize", system_page_size, 0x100, 0x20, true, 0x3e1c014e9fef74ec)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "_PCI_EXPRESS_SRIOV_CAPABILITY.BaseAddresses", base_addresses, 0x120, 0xc0, true, 0x701964f9f37e976d)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sriov_migration_state_array_t), "_PCI_EXPRESS_SRIOV_CAPABILITY.VFMigrationStateArrayOffset", vf_migration_state_array_offset, 0x1e0, 0x20, true, 0x2f3d3249074cd380)
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
#endif