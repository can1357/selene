#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_SECONDARY_CAPABILITY.Header", header, 0x0, 0x20, true, 0x599c6e2052ea7d50)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_link_control3_t), "_PCI_EXPRESS_SECONDARY_CAPABILITY.LinkControl3", link_control3, 0x20, 0x20, true, 0xa8dc4729458cc953)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_lane_error_status_t), "_PCI_EXPRESS_SECONDARY_CAPABILITY.LaneErrorStatus", lane_error_status, 0x40, 0x20, true, 0x37427093da348d05)
#else
#define _m00
#define _m01
#define _m02
#endif