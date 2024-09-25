#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.CompletionTimeoutValue", completion_timeout_value, 0x0, 0x4, true, 0xd247e26be056cecf, 4, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.CompletionTimeoutDisable", completion_timeout_disable, 0x4, 0x1, true, 0xe94abe65ea37d873, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.AriForwardingEnable", ari_forwarding_enable, 0x5, 0x1, true, 0xa509490f24dc6cf9, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.AtomicOpRequesterEnable", atomic_op_requester_enable, 0x6, 0x1, true, 0xeee0253c8c9be40, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.AtomicOpEgresBlocking", atomic_op_egres_blocking, 0x7, 0x1, true, 0x8afe24a69211c06d, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.IDORequestEnable", ido_request_enable, 0x8, 0x1, true, 0x66705afa3e8aa237, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.IDOCompletionEnable", ido_completion_enable, 0x9, 0x1, true, 0xbf8c8a0fdc8dfea5, 1, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.LTRMechanismEnable", ltr_mechanism_enable, 0xa, 0x1, true, 0xd6f64fb94c516fd4, 1, uint16_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.Rsvd", rsvd, 0xb, 0x2, true, 0x8d83c1d6a30199bd, 2, uint16_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.OBFFEnable", obff_enable, 0xd, 0x2, true, 0x1bdfcf127cd1aef4, 2, uint16_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.EndEndTLPPrefixBlocking", end_end_tlp_prefix_blocking, 0xf, 0x1, true, 0x2dd46db220a64ec6, 1, uint16_t)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x76d8ac1c9f3f0b4d)
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
#endif