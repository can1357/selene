#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.PciPmL12Enabled", pci_pm_l12_enabled, 0x0, 0x1, true, 0x58e1b4d8374cc6d1, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.PciPmL11Enabled", pci_pm_l11_enabled, 0x1, 0x1, true, 0x2a83c9acbb4086f1, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.AspmL12Enabled", aspm_l12_enabled, 0x2, 0x1, true, 0x398860c8427cef5a, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.AspmL11Enabled", aspm_l11_enabled, 0x3, 0x1, true, 0xd7450dc831bc30c1, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.Rsvd", rsvd, 0x4, 0x4, true, 0xa1e59708cab953c9, 4, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.CommonModeRestoreTime", common_mode_restore_time, 0x8, 0x8, true, 0xf6ba84a4f038be42, 8, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.LtrL12ThresholdValue", ltr_l12_threshold_value, 0x10, 0xa, true, 0xf596225710710a90, 10, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.Rsvd2", rsvd2, 0x1a, 0x3, true, 0x94c86b960a1bd2ff, 3, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.LtrL12ThresholdScale", ltr_l12_threshold_scale, 0x1d, 0x3, true, 0x2e05db3562704b68, 3, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0xed07d88fe3fb4926)
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
#endif