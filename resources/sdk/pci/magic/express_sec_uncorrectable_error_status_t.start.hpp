#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.TargetAbortOnSplitCompletion", target_abort_on_split_completion, 0x0, 0x1, true, 0xf9c7f3bd3f6ce244, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.MasterAbortOnSplitCompletion", master_abort_on_split_completion, 0x1, 0x1, true, 0x6c24e2216b1cfb46, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.ReceivedTargetAbort", received_target_abort, 0x2, 0x1, true, 0x4d506124be4b449b, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.ReceivedMasterAbort", received_master_abort, 0x3, 0x1, true, 0xceb8c5cedda95936, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.RsvdZ", rsvd_z, 0x4, 0x1, true, 0xc74cb16a3df818fb, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.UnexpectedSplitCompletionError", unexpected_split_completion_error, 0x5, 0x1, true, 0x1ed0b953f239f201, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.UncorrectableSplitCompletion", uncorrectable_split_completion, 0x6, 0x1, true, 0x6fee29dbfe811398, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.UncorrectableDataError", uncorrectable_data_error, 0x7, 0x1, true, 0xa02399207adcdde3, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.UncorrectableAttributeError", uncorrectable_attribute_error, 0x8, 0x1, true, 0x5cfe3926e62a8e56, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.UncorrectableAddressError", uncorrectable_address_error, 0x9, 0x1, true, 0x7d14384a8238536, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.DelayedTransactionDiscardTimerExpired", delayed_transaction_discard_timer_expired, 0xa, 0x1, true, 0x36f66629323f10e4, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.PERRAsserted", perr_asserted, 0xb, 0x1, true, 0x3fbdb5aff150ee6d, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.SERRAsserted", serr_asserted, 0xc, 0x1, true, 0x14ea54b533fe4e7, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.InternalBridgeError", internal_bridge_error, 0xd, 0x1, true, 0x7c494d5d48bd8b5e, 1, uint32_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS.AsULONG", as_ulong, 0x0, 0x20, true, 0x805082ed2cc19808)
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