#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.TargetAbortOnSplitCompletion", target_abort_on_split_completion, 0x0, 0x1, true, 0xd50121b0c813fda6, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.MasterAbortOnSplitCompletion", master_abort_on_split_completion, 0x1, 0x1, true, 0xfa19486c54c073f9, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.ReceivedTargetAbort", received_target_abort, 0x2, 0x1, true, 0x6619b22ff14199cb, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.ReceivedMasterAbort", received_master_abort, 0x3, 0x1, true, 0xcc46ca98fe1b57a8, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.RsvdZ", rsvd_z, 0x4, 0x1, true, 0xa6c9f5e93c4b18f6, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.UnexpectedSplitCompletionError", unexpected_split_completion_error, 0x5, 0x1, true, 0xff1396376e714942, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.UncorrectableSplitCompletion", uncorrectable_split_completion, 0x6, 0x1, true, 0xe2a1a92288e878cb, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.UncorrectableDataError", uncorrectable_data_error, 0x7, 0x1, true, 0xaf5e8529be1c94f8, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.UncorrectableAttributeError", uncorrectable_attribute_error, 0x8, 0x1, true, 0x6ade336048e115f2, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.UncorrectableAddressError", uncorrectable_address_error, 0x9, 0x1, true, 0xd1ef9b430caa8800, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.DelayedTransactionDiscardTimerExpired", delayed_transaction_discard_timer_expired, 0xa, 0x1, true, 0xfd24c25e60c1ec6b, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.PERRAsserted", perr_asserted, 0xb, 0x1, true, 0xeb4ab96b619b9d5f, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.SERRAsserted", serr_asserted, 0xc, 0x1, true, 0xeb0a9aba476c613d, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.InternalBridgeError", internal_bridge_error, 0xd, 0x1, true, 0x17592053802e9257, 1, uint32_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK.AsULONG", as_ulong, 0x0, 0x20, true, 0xd4b02b2f36f775e7)
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