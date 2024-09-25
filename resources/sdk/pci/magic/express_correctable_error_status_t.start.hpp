#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_STATUS.ReceiverError", receiver_error, 0x0, 0x1, true, 0x43f66c7a42c8e9c5, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_STATUS.BadTLP", bad_tlp, 0x6, 0x1, true, 0x3775b6f0b2d77dbc, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_STATUS.BadDLLP", bad_dllp, 0x7, 0x1, true, 0xd5ac3b1119f53017, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_STATUS.ReplayNumRollover", replay_num_rollover, 0x8, 0x1, true, 0x1e646284940312a2, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_STATUS.ReplayTimerTimeout", replay_timer_timeout, 0xc, 0x1, true, 0x34dd0a6694d323f7, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_STATUS.AdvisoryNonFatalError", advisory_non_fatal_error, 0xd, 0x1, true, 0xe8f5b750024ace31, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_STATUS.CorrectedInternalError", corrected_internal_error, 0xe, 0x1, true, 0xb5fb136880e319df, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_STATUS.HeaderLogOverflow", header_log_overflow, 0xf, 0x1, true, 0xd616a4185114094b, 1, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_CORRECTABLE_ERROR_STATUS.AsULONG", as_ulong, 0x0, 0x20, true, 0x5ff7f00182b7b22f)
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