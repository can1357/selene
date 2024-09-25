#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_XPF_MCA_SECTION.VersionNumber", version_number, 0x0, 0x20, true, 0x773466ab4bf6fa2f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::cpu_vendor_t), "_WHEA_XPF_MCA_SECTION.CpuVendor", cpu_vendor, 0x20, 0x20, true, 0xc17641468e3cfa2a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WHEA_XPF_MCA_SECTION.Timestamp", timestamp, 0x40, 0x40, true, 0x57827218a80eaec9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_XPF_MCA_SECTION.ProcessorNumber", processor_number, 0x80, 0x20, true, 0xf21985b24c276153)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::mcg_status_t), "_WHEA_XPF_MCA_SECTION.GlobalStatus", global_status, 0xa0, 0x40, true, 0x6215e8038b62f07a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_MCA_SECTION.InstructionPointer", instruction_pointer, 0xe0, 0x40, true, 0x1570865b10611cf3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_XPF_MCA_SECTION.BankNumber", bank_number, 0x120, 0x20, true, 0x206fc0b8d44f32d2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::mci_status_t), "_WHEA_XPF_MCA_SECTION.Status", status, 0x140, 0x40, true, 0x74d18f6235be2940)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_MCA_SECTION.Address", address, 0x180, 0x40, true, 0x7c006d5010e1908)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_MCA_SECTION.Misc", misc, 0x1c0, 0x40, true, 0x27aaa495c3fef80f)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_XPF_MCA_SECTION.ExtendedRegisterCount", extended_register_count, 0x200, 0x20, true, 0x35e4ca6e5dc4b6b4)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 24>), "_WHEA_XPF_MCA_SECTION.ExtendedRegisters", extended_registers, 0x240, 0x0, true, 0x3857815e7a986065)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_XPF_MCA_SECTION.ApicId", apic_id, 0x220, 0x20, true, 0x89c5f207d925df0b)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::amd_extended_registers_t), "_WHEA_XPF_MCA_SECTION.AMDExtendedRegisters", amd_extended_registers, 0x240, 0x0, true, 0x61f63fb5ec12ddfd)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::mcg_cap_t), "_WHEA_XPF_MCA_SECTION.GlobalCapability", global_capability, 0x840, 0x40, true, 0xa3e76ab4567f1e21)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::xpf_recovery_info_t), "_WHEA_XPF_MCA_SECTION.RecoveryInfo", recovery_info, 0x880, 0xa0, true, 0xea57d288d897eeea)
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
#endif