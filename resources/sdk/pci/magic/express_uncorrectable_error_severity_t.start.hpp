#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.Undefined", undefined, 0x0, 0x1, true, 0x5e3e636908251a0f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.DataLinkProtocolError", data_link_protocol_error, 0x4, 0x1, true, 0x10134ba2bfabefc0, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.SurpriseDownError", surprise_down_error, 0x5, 0x1, true, 0xa357db549694b622, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.PoisonedTLP", poisoned_tlp, 0xc, 0x1, true, 0xeff7ec1cf72a7162, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.FlowControlProtocolError", flow_control_protocol_error, 0xd, 0x1, true, 0x742c0acefca1579, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.CompletionTimeout", completion_timeout, 0xe, 0x1, true, 0x8b7959d80485968d, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.CompleterAbort", completer_abort, 0xf, 0x1, true, 0x4c5c29e782f6f47a, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.UnexpectedCompletion", unexpected_completion, 0x10, 0x1, true, 0x503ae49a798bbce8, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.ReceiverOverflow", receiver_overflow, 0x11, 0x1, true, 0x47fc7d2b806fb22d, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.MalformedTLP", malformed_tlp, 0x12, 0x1, true, 0xf8dc05208d0b5734, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.ECRCError", ecrc_error, 0x13, 0x1, true, 0xdd63009150eec26b, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.UnsupportedRequestError", unsupported_request_error, 0x14, 0x1, true, 0x948ca63c80c80ea0, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.AcsViolation", acs_violation, 0x15, 0x1, true, 0x1209db4f955cc9e0, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.UncorrectableInternalError", uncorrectable_internal_error, 0x16, 0x1, true, 0x4d3e8be4c4405e80, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.MCBlockedTlp", mc_blocked_tlp, 0x17, 0x1, true, 0x5978a9a444d39f9c, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.AtomicOpEgressBlocked", atomic_op_egress_blocked, 0x18, 0x1, true, 0xfb92fcad12c1533a, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.TlpPrefixBlocked", tlp_prefix_blocked, 0x19, 0x1, true, 0x763d039639ae47be, 1, uint32_t)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY.AsULONG", as_ulong, 0x0, 0x20, true, 0x69f339c978c1172)
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