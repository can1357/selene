#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.Header", header, 0x0, 0x20, true, 0x2d1aaa6431837054)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_uncorrectable_error_status_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.UncorrectableErrorStatus", uncorrectable_error_status, 0x20, 0x20, true, 0x811270cc970e707c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_uncorrectable_error_mask_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.UncorrectableErrorMask", uncorrectable_error_mask, 0x40, 0x20, true, 0x9d41e398294552e2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_uncorrectable_error_severity_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.UncorrectableErrorSeverity", uncorrectable_error_severity, 0x60, 0x20, true, 0xd2485805d2730868)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_correctable_error_status_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.CorrectableErrorStatus", correctable_error_status, 0x80, 0x20, true, 0x1a55ad7245ee6633)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_correctable_error_mask_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.CorrectableErrorMask", correctable_error_mask, 0xa0, 0x20, true, 0xabdb89985b6a5b88)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_aer_capabilities_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.CapabilitiesAndControl", capabilities_and_control, 0xc0, 0x20, true, 0xb4e068d9ab711fac)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.HeaderLog", header_log, 0xe0, 0x80, true, 0x1c94c011f273cf30)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sec_uncorrectable_error_status_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.SecUncorrectableErrorStatus", sec_uncorrectable_error_status, 0x160, 0x20, true, 0xd1031055d79849d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sec_uncorrectable_error_mask_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.SecUncorrectableErrorMask", sec_uncorrectable_error_mask, 0x180, 0x20, true, 0xc9c521d1def714aa)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sec_uncorrectable_error_severity_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.SecUncorrectableErrorSeverity", sec_uncorrectable_error_severity, 0x1a0, 0x20, true, 0xf0ff36a52de53cec)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_sec_aer_capabilities_t), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.SecCapabilitiesAndControl", sec_capabilities_and_control, 0x1c0, 0x20, true, 0xae27609b6df1813e)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_PCI_EXPRESS_BRIDGE_AER_CAPABILITY.SecHeaderLog", sec_header_log, 0x1e0, 0x80, true, 0xdc3aa43d4d089ba9)
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