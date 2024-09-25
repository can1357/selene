#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.Header", header, 0x0, 0x20, true, 0xc9eedfcad3f5b078)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_uncorrectable_error_status_t), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.UncorrectableErrorStatus", uncorrectable_error_status, 0x20, 0x20, true, 0x1c86312fb2e13612)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_uncorrectable_error_mask_t), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.UncorrectableErrorMask", uncorrectable_error_mask, 0x40, 0x20, true, 0xd4519e9b82a2e60e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_uncorrectable_error_severity_t), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.UncorrectableErrorSeverity", uncorrectable_error_severity, 0x60, 0x20, true, 0x3798e492ad107bc2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_correctable_error_status_t), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.CorrectableErrorStatus", correctable_error_status, 0x80, 0x20, true, 0x7a4a427205c73bf3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_correctable_error_mask_t), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.CorrectableErrorMask", correctable_error_mask, 0xa0, 0x20, true, 0x527714eebe5d9b96)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_aer_capabilities_t), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.CapabilitiesAndControl", capabilities_and_control, 0xc0, 0x20, true, 0x7d352e5cbf2f2781)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.HeaderLog", header_log, 0xe0, 0x80, true, 0x5260237abc6660e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_root_error_command_t), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.RootErrorCommand", root_error_command, 0x160, 0x20, true, 0x3981eb7d658f6c3a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_root_error_status_t), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.RootErrorStatus", root_error_status, 0x180, 0x20, true, 0xc07131e5ec566c9b)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_error_source_id_t), "_PCI_EXPRESS_ROOTPORT_AER_CAPABILITY.ErrorSourceId", error_source_id, 0x1a0, 0x20, true, 0x1c80b7ab7d49c97)
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