#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "_PCI_PM_CAPABILITY.Header", header, 0x0, 0x10, true, 0xcbddc5d03a622420)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::pmc_t), "_PCI_PM_CAPABILITY.PMC.Capabilities", capabilities, 0x0, 0x10, true, 0xe0c2e5ee9018482a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_PM_CAPABILITY.PMC.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x8acb39275e7c42f1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_pmc_t), "_PCI_PM_CAPABILITY.PMC", pmc, 0x10, 0x10, true, 0xc42d55ae879827ee)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::pmcsr_t), "_PCI_PM_CAPABILITY.PMCSR.ControlStatus", control_status, 0x0, 0x10, true, 0xaccd1a3c6c095190)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_PM_CAPABILITY.PMCSR.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x3f614e06c20aae64)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_pmcsr_t), "_PCI_PM_CAPABILITY.PMCSR", pmcsr, 0x20, 0x10, true, 0x36c09f4dbe96097f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::pmcsr_bse_t), "_PCI_PM_CAPABILITY.PMCSR_BSE.BridgeSupport", bridge_support, 0x0, 0x8, true, 0x8191cc5ab91f01f9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_PM_CAPABILITY.PMCSR_BSE.AsUCHAR", as_uchar, 0x0, 0x8, true, 0x1957a594a3e2b91c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_pmcsr_bse_t), "_PCI_PM_CAPABILITY.PMCSR_BSE", pmcsr_bse, 0x30, 0x8, true, 0x69ff6b443573fcb4)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_PM_CAPABILITY.Data", data, 0x38, 0x8, true, 0xea2df8f362a11555)
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
#endif