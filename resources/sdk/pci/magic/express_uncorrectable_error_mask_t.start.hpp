#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.Undefined", undefined, 0x0, 0x1, true, 0x9eeea395978cd833, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.DataLinkProtocolError", data_link_protocol_error, 0x4, 0x1, true, 0xc33d85a14a2583a, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.SurpriseDownError", surprise_down_error, 0x5, 0x1, true, 0xa7d27d526581c993, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.PoisonedTLP", poisoned_tlp, 0xc, 0x1, true, 0xcdb99d470e70ab3c, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.FlowControlProtocolError", flow_control_protocol_error, 0xd, 0x1, true, 0xebb607120b42a51b, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.CompletionTimeout", completion_timeout, 0xe, 0x1, true, 0x8d1003f2ead707b9, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.CompleterAbort", completer_abort, 0xf, 0x1, true, 0xabffd5aba55a40bd, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.UnexpectedCompletion", unexpected_completion, 0x10, 0x1, true, 0x813dd0603cb3d13a, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.ReceiverOverflow", receiver_overflow, 0x11, 0x1, true, 0x9c7213d5f72669b6, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.MalformedTLP", malformed_tlp, 0x12, 0x1, true, 0x3b5187a814ac23b8, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.ECRCError", ecrc_error, 0x13, 0x1, true, 0x65c61cda63be2608, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.UnsupportedRequestError", unsupported_request_error, 0x14, 0x1, true, 0x11e7d3ec5a44da66, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.AcsViolation", acs_violation, 0x15, 0x1, true, 0x73864ce1fdfd6823, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.UncorrectableInternalError", uncorrectable_internal_error, 0x16, 0x1, true, 0xc938d1c19a78d76c, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.MCBlockedTlp", mc_blocked_tlp, 0x17, 0x1, true, 0x70520ae61ae0bed5, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.AtomicOpEgressBlocked", atomic_op_egress_blocked, 0x18, 0x1, true, 0x67c9f257edc430f, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.TlpPrefixBlocked", tlp_prefix_blocked, 0x19, 0x1, true, 0x14ee8b4da1501ab3, 1, uint32_t)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK.AsULONG", as_ulong, 0x0, 0x20, true, 0xed0df3735e759729)
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
#define _m17
#endif