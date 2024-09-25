#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_MCI_STATUS_BITS_COMMON.McaErrorCode", mca_error_code, 0x0, 0x10, true, 0xa8598363f342108c, 16, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_MCI_STATUS_BITS_COMMON.ModelErrorCode", model_error_code, 0x10, 0x10, true, 0x8192c70aff57dc0c, 16, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_BITS_COMMON.ContextCorrupt", context_corrupt, 0x39, 0x1, true, 0x53976fb10b237a66, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_BITS_COMMON.AddressValid", address_valid, 0x3a, 0x1, true, 0xe6bf3a62d2760d54, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_BITS_COMMON.MiscValid", misc_valid, 0x3b, 0x1, true, 0x93014316c2805e74, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_BITS_COMMON.ErrorEnabled", error_enabled, 0x3c, 0x1, true, 0x7a6f06ef1eb2649e, 1, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_BITS_COMMON.UncorrectedError", uncorrected_error, 0x3d, 0x1, true, 0x25cb5bbd0eeb1663, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_BITS_COMMON.StatusOverFlow", status_over_flow, 0x3e, 0x1, true, 0x53ac9752fafc9bb, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_BITS_COMMON.Valid", valid, 0x3f, 0x1, true, 0xa63db787a7677574, 1, uint64_t)
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