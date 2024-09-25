#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_AER_CAPABILITY.Header", header, 0x0, 0x20, true, 0xbba74ea5ffcf54be)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_uncorrectable_error_status_t), "_PCI_EXPRESS_AER_CAPABILITY.UncorrectableErrorStatus", uncorrectable_error_status, 0x20, 0x20, true, 0xf31065aa8ee09336)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_uncorrectable_error_mask_t), "_PCI_EXPRESS_AER_CAPABILITY.UncorrectableErrorMask", uncorrectable_error_mask, 0x40, 0x20, true, 0xcc4a717db7bd5dac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_uncorrectable_error_severity_t), "_PCI_EXPRESS_AER_CAPABILITY.UncorrectableErrorSeverity", uncorrectable_error_severity, 0x60, 0x20, true, 0x3ec02d28fcbd4960)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_correctable_error_status_t), "_PCI_EXPRESS_AER_CAPABILITY.CorrectableErrorStatus", correctable_error_status, 0x80, 0x20, true, 0x1098c5b9d0d4e373)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_correctable_error_mask_t), "_PCI_EXPRESS_AER_CAPABILITY.CorrectableErrorMask", correctable_error_mask, 0xa0, 0x20, true, 0x7a250246bbcf1daf)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_aer_capabilities_t), "_PCI_EXPRESS_AER_CAPABILITY.CapabilitiesAndControl", capabilities_and_control, 0xc0, 0x20, true, 0x8db5d7a3edf44477)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_PCI_EXPRESS_AER_CAPABILITY.HeaderLog", header_log, 0xe0, 0x80, true, 0x999422cef0204e8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sec_uncorrectable_error_status_t), "_PCI_EXPRESS_AER_CAPABILITY.SecUncorrectableErrorStatus", sec_uncorrectable_error_status, 0x160, 0x20, true, 0xc020764fd0b186b7)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sec_uncorrectable_error_mask_t), "_PCI_EXPRESS_AER_CAPABILITY.SecUncorrectableErrorMask", sec_uncorrectable_error_mask, 0x180, 0x20, true, 0x24a5379b1a749ed9)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sec_uncorrectable_error_severity_t), "_PCI_EXPRESS_AER_CAPABILITY.SecUncorrectableErrorSeverity", sec_uncorrectable_error_severity, 0x1a0, 0x20, true, 0xac6a5eb29e5fdd05)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sec_aer_capabilities_t), "_PCI_EXPRESS_AER_CAPABILITY.SecCapabilitiesAndControl", sec_capabilities_and_control, 0x1c0, 0x20, true, 0xa740ab285b29572b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_PCI_EXPRESS_AER_CAPABILITY.SecHeaderLog", sec_header_log, 0x1e0, 0x80, true, 0xb41c5ce7344475ac)
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
#endif