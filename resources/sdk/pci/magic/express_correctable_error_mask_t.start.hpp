#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_MASK.ReceiverError", receiver_error, 0x0, 0x1, true, 0xfb1438470eba93ce, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_MASK.BadTLP", bad_tlp, 0x6, 0x1, true, 0xea762f5277620c06, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_MASK.BadDLLP", bad_dllp, 0x7, 0x1, true, 0x3df3b7b782769be4, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_MASK.ReplayNumRollover", replay_num_rollover, 0x8, 0x1, true, 0x8a41df81e4e45a5b, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_MASK.ReplayTimerTimeout", replay_timer_timeout, 0xc, 0x1, true, 0x9aa08a8eea05a0b2, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_MASK.AdvisoryNonFatalError", advisory_non_fatal_error, 0xd, 0x1, true, 0x33ba7abc2a747e65, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_MASK.CorrectedInternalError", corrected_internal_error, 0xe, 0x1, true, 0x9b648b5a6e6b4883, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_MASK.HeaderLogOverflow", header_log_overflow, 0xf, 0x1, true, 0xd4b6f6aecb88e266, 1, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_MASK.AsULONG", as_ulong, 0x0, 0x20, true, 0x305b99226f0ab9d)
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
#endif