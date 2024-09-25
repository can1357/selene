#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Header", header, 0x0, 0x10, true, 0xaa3a88dc4a6057d6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Length", length, 0x10, 0x8, true, 0xfbfad0c380551a21)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Capabilities.FunctionLevelResetSupported", function_level_reset_supported, 0x0, 0x1, true, 0x3bebb2c60b1f43e4, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Capabilities.TransactionsPendingSupported", transactions_pending_supported, 0x1, 0x1, true, 0xcd7022b3ed0fa473, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Capabilities.Rsvd", rsvd, 0x2, 0x6, true, 0xc610c593e1ce4513, 6, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Capabilities.AsUCHAR", as_uchar, 0x0, 0x8, true, 0xaa8f0bc8a0bff916)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_capabilities_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Capabilities", capabilities, 0x18, 0x8, true, 0xb0d496a0ced20d63)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Control.InitiateFunctionLevelReset", initiate_function_level_reset, 0x0, 0x1, true, 0x538e171bb5597603, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Control.Rsvd", rsvd, 0x1, 0x7, true, 0xf0e591226a9b1526, 7, uint8_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Control.AsUCHAR", as_uchar, 0x0, 0x8, true, 0xa48d3a090e5404ef)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_control_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Control", control, 0x20, 0x8, true, 0x58a3551e9c50f6a)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Status.TransactionsPending", transactions_pending, 0x0, 0x1, true, 0xb46b5217a9a56472, 1, uint8_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Status.Rsvd", rsvd, 0x1, 0x7, true, 0xff50cbf0e0c0bd42, 7, uint8_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Status.AsUCHAR", as_uchar, 0x0, 0x8, true, 0xaabd7bb7ea48f12f)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_status_t), "_PCI_ADVANCED_FEATURES_CAPABILITY.Status", status, 0x28, 0x8, true, 0xb56cfbe5aebddeef)
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
#endif