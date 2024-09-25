#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.PciPmL12Supported", pci_pm_l12_supported, 0x0, 0x1, true, 0x4c85acd27e4d6c60, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.PciPmL11Supported", pci_pm_l11_supported, 0x1, 0x1, true, 0xbb9661a03e268b1e, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.AspmL12Supported", aspm_l12_supported, 0x2, 0x1, true, 0x2e90046dd2e46836, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.AspmL11Supported", aspm_l11_supported, 0x3, 0x1, true, 0x92233c4d74d6e94a, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.L1PmSsSupported", l1_pm_ss_supported, 0x4, 0x1, true, 0xbb9fb9af1318b1db, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.Rsvd", rsvd, 0x5, 0x3, true, 0xbb7319bf9ae9796, 3, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.PortCommonModeRestoreTime", port_common_mode_restore_time, 0x8, 0x8, true, 0x338f7c6db2d5160a, 8, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.PortTPowerOnScale", port_t_power_on_scale, 0x10, 0x2, true, 0xd2b4a8c76c22bfad, 2, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.Rsvd2", rsvd2, 0x12, 0x1, true, 0x1ef3617c58eca6c1, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.PortTPowerOnValue", port_t_power_on_value, 0x13, 0x5, true, 0x11abfa91d29c5dba, 5, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.Rsvd3", rsvd3, 0x18, 0x8, true, 0x30358cae6c14b6ca, 8, uint32_t)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x5f268547f8d60505)
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
#endif