#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::agp_isoch_status_t), "PCI_AGP_EXTENDED_CAPABILITY.IsochStatus", isoch_status, 0x0, 0x20, true, 0xdd150ce9403dd2a4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::agp_control_t), "PCI_AGP_EXTENDED_CAPABILITY.AgpControl", agp_control, 0x20, 0x20, true, 0xef75d2371a6e0d1c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "PCI_AGP_EXTENDED_CAPABILITY.ApertureSize", aperture_size, 0x40, 0x10, true, 0xd4d516efcffe1f7c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::agp_aperture_page_size_t), "PCI_AGP_EXTENDED_CAPABILITY.AperturePageSize", aperture_page_size, 0x50, 0x10, true, 0x19c776f015ec4e7e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "PCI_AGP_EXTENDED_CAPABILITY.GartLow", gart_low, 0x60, 0x20, true, 0x10a8cb31d50fed3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "PCI_AGP_EXTENDED_CAPABILITY.GartHigh", gart_high, 0x80, 0x20, true, 0xea7fae3a0bbba3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::agp_isoch_command_t), "PCI_AGP_EXTENDED_CAPABILITY.IsochCommand", isoch_command, 0xa0, 0x10, true, 0x3a0f83bd44a43938)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif