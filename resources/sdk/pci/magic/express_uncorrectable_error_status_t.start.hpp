#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.Undefined", undefined, 0x0, 0x1, true, 0x659dc24ed0f38bf3, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.DataLinkProtocolError", data_link_protocol_error, 0x4, 0x1, true, 0x84c43f7368cd1923, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.SurpriseDownError", surprise_down_error, 0x5, 0x1, true, 0xb082a046354eba53, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.PoisonedTLP", poisoned_tlp, 0xc, 0x1, true, 0x88b53cbcec5717b1, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.FlowControlProtocolError", flow_control_protocol_error, 0xd, 0x1, true, 0x77ce644e1788801c, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.CompletionTimeout", completion_timeout, 0xe, 0x1, true, 0xb4b55d23ba47a47c, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.CompleterAbort", completer_abort, 0xf, 0x1, true, 0xeaaf3a066b2ad2ee, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.UnexpectedCompletion", unexpected_completion, 0x10, 0x1, true, 0xb462105c5f0e1231, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.ReceiverOverflow", receiver_overflow, 0x11, 0x1, true, 0x6a697b6a9202faf8, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.MalformedTLP", malformed_tlp, 0x12, 0x1, true, 0xd5b3ee55cdd25ac, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.ECRCError", ecrc_error, 0x13, 0x1, true, 0x7e0befb14d83d13c, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.UnsupportedRequestError", unsupported_request_error, 0x14, 0x1, true, 0x7e992fd64731e71a, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.AcsViolation", acs_violation, 0x15, 0x1, true, 0x83bb786b394d893e, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.UncorrectableInternalError", uncorrectable_internal_error, 0x16, 0x1, true, 0xebdecfc7bdf631e3, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.MCBlockedTlp", mc_blocked_tlp, 0x17, 0x1, true, 0x62dcee6fb4113e8f, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.AtomicOpEgressBlocked", atomic_op_egress_blocked, 0x18, 0x1, true, 0x3164798aa0067a04, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.TlpPrefixBlocked", tlp_prefix_blocked, 0x19, 0x1, true, 0xa4e0aac0525dd062, 1, uint32_t)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS.AsULONG", as_ulong, 0x0, 0x20, true, 0x790e08825fc5c638)
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