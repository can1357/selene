#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITY.Header", header, 0x0, 0x20, true, 0xa757493cba1070f2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_l1_pm_ss_capabilities_register_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITY.L1PmSsCapabilities", l1_pm_ss_capabilities, 0x20, 0x20, true, 0xbb0058d6391fff85)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_l1_pm_ss_control_1_register_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITY.L1PmSsControl1", l1_pm_ss_control1, 0x40, 0x20, true, 0x6eac880f3b17482)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_l1_pm_ss_control_2_register_t), "_PCI_EXPRESS_L1_PM_SS_CAPABILITY.L1PmSsControl2", l1_pm_ss_control2, 0x60, 0x20, true, 0x56686596792ccff8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif