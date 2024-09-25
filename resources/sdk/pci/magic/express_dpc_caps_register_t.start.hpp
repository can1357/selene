#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_DPC_CAPS_REGISTER.InterruptMsgNumber", interrupt_msg_number, 0x0, 0x5, true, 0xd85fb453e3186661, 5, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_CAPS_REGISTER.RpExtensionsForDpc", rp_extensions_for_dpc, 0x5, 0x1, true, 0x2dca2dab20eba076, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_CAPS_REGISTER.PoisonedTlpEgressBlockingSupported", poisoned_tlp_egress_blocking_supported, 0x6, 0x1, true, 0xf22d6658c4ae85f1, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_CAPS_REGISTER.DpcSoftwareTriggeringSupported", dpc_software_triggering_supported, 0x7, 0x1, true, 0x2b0382d3f876aa08, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_DPC_CAPS_REGISTER.RpPioLogSize", rp_pio_log_size, 0x8, 0x4, true, 0x746548f222f03bfe, 4, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_CAPS_REGISTER.DlActiveErrCorSignalingSupported", dl_active_err_cor_signaling_supported, 0xc, 0x1, true, 0x620d808283a00830, 1, uint16_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DPC_CAPS_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xfdfb63f03d373e7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif