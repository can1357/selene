#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DPC_CONTROL_REGISTER.TriggerEnable", trigger_enable, 0x0, 0x2, true, 0x3ab4154c8b65df7e, 2, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_CONTROL_REGISTER.CompletionControl", completion_control, 0x2, 0x1, true, 0xb0ef7eccb6394ba7, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_CONTROL_REGISTER.InterruptEnable", interrupt_enable, 0x3, 0x1, true, 0x1ba4bba6c3c77fa1, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_CONTROL_REGISTER.ErrCorEnable", err_cor_enable, 0x4, 0x1, true, 0x18580c354da0133c, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_CONTROL_REGISTER.PoisonedTlpEgressBlockingEnable", poisoned_tlp_egress_blocking_enable, 0x5, 0x1, true, 0xd58a723e0d3ab9, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_CONTROL_REGISTER.SoftwareTrigger", software_trigger, 0x6, 0x1, true, 0x1c4b631e4023d655, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_CONTROL_REGISTER.DlActiveErrCorEnable", dl_active_err_cor_enable, 0x7, 0x1, true, 0xb938ce36c9fd28a0, 1, uint16_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DPC_CONTROL_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x82f2205b85920173)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif