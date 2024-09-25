#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.TargetAbortOnSplitCompletion", target_abort_on_split_completion, 0x0, 0x1, true, 0xe3c597a13b5c36e1, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.MasterAbortOnSplitCompletion", master_abort_on_split_completion, 0x1, 0x1, true, 0x107bd06e7f38665f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.ReceivedTargetAbort", received_target_abort, 0x2, 0x1, true, 0x67c206c255bdf969, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.ReceivedMasterAbort", received_master_abort, 0x3, 0x1, true, 0xf553bd03d8405c19, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.RsvdZ", rsvd_z, 0x4, 0x1, true, 0x60ed8328cf7cfbb3, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.UnexpectedSplitCompletionError", unexpected_split_completion_error, 0x5, 0x1, true, 0x9bcf07f217050551, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.UncorrectableSplitCompletion", uncorrectable_split_completion, 0x6, 0x1, true, 0x4fdd4acf5e50ca9a, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.UncorrectableDataError", uncorrectable_data_error, 0x7, 0x1, true, 0xce0f415cf0ed6790, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.UncorrectableAttributeError", uncorrectable_attribute_error, 0x8, 0x1, true, 0xb1d754ca44af97de, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.UncorrectableAddressError", uncorrectable_address_error, 0x9, 0x1, true, 0x5a21d09257e0057a, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.DelayedTransactionDiscardTimerExpired", delayed_transaction_discard_timer_expired, 0xa, 0x1, true, 0x2820bfec048188b1, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.PERRAsserted", perr_asserted, 0xb, 0x1, true, 0x93127ec68a6e63ad, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.SERRAsserted", serr_asserted, 0xc, 0x1, true, 0x1612d779967a3ab6, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.InternalBridgeError", internal_bridge_error, 0xd, 0x1, true, 0x17c6b5343b5871bb, 1, uint32_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY.AsULONG", as_ulong, 0x0, 0x20, true, 0xf122e705785a182d)
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