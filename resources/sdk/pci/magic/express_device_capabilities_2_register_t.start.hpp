#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.CompletionTimeoutRangesSupported", completion_timeout_ranges_supported, 0x0, 0x4, true, 0x98213763861dafcc, 4, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.CompletionTimeoutDisableSupported", completion_timeout_disable_supported, 0x4, 0x1, true, 0x70121ecb5e8544f6, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.AriForwardingSupported", ari_forwarding_supported, 0x5, 0x1, true, 0x2fa4db420146c5cc, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.AtomicOpRoutingSupported", atomic_op_routing_supported, 0x6, 0x1, true, 0x83203be9167b7dc, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.AtomicOpCompleterSupported32Bit", atomic_op_completer_supported32_bit, 0x7, 0x1, true, 0x9bc4ed8ad75159dd, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.AtomicOpCompleterSupported64Bit", atomic_op_completer_supported64_bit, 0x8, 0x1, true, 0x329ac53250ece5f2, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.CASCompleterSupported128Bit", cas_completer_supported128_bit, 0x9, 0x1, true, 0x3fe874568faf1d67, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.NoROEnabledPRPRPassing", no_ro_enabled_prpr_passing, 0xa, 0x1, true, 0xbab857564e1f0f20, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.LTRMechanismSupported", ltr_mechanism_supported, 0xb, 0x1, true, 0xcf72cef1a4d6eeaa, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.TPHCompleterSupported", tph_completer_supported, 0xc, 0x2, true, 0xaaa08fbeb554fda4, 2, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.Rsvd", rsvd, 0xe, 0x4, true, 0xb81a94b1a5affea7, 4, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.OBFFSupported", obff_supported, 0x12, 0x2, true, 0xb443928dd6aa3183, 2, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.ExtendedFmtFieldSuported", extended_fmt_field_suported, 0x14, 0x1, true, 0x1336c4a15b6f854f, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.EndEndTLPPrefixSupported", end_end_tlp_prefix_supported, 0x15, 0x1, true, 0xd2915a2fb4fc1d3f, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.MaxEndEndTLPPrefixes", max_end_end_tlp_prefixes, 0x16, 0x2, true, 0xbd52fcdbb69c17ac, 2, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.Rsvd2", rsvd2, 0x18, 0x8, true, 0xd96f9bb8237e431, 8, uint32_t)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x56f2b621074a81f3)
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
#define _m15
#define _m16
#endif