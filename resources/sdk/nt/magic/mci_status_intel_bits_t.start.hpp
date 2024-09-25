#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_MCI_STATUS_INTEL_BITS.McaErrorCode", mca_error_code, 0x0, 0x10, true, 0xb6b3c50b6d742a19, 16, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_MCI_STATUS_INTEL_BITS.ModelErrorCode", model_error_code, 0x10, 0x10, true, 0x5c572c9440149d3b, 16, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MCI_STATUS_INTEL_BITS.OtherInfo", other_info, 0x20, 0x5, true, 0x8676006ba2cdb8af, 5, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_INTEL_BITS.FirmwareUpdateError", firmware_update_error, 0x25, 0x1, true, 0xeb194907d6645838, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_MCI_STATUS_INTEL_BITS.CorrectedErrorCount", corrected_error_count, 0x26, 0xf, true, 0xc691a4e6a0b1e9e1, 15, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MCI_STATUS_INTEL_BITS.ThresholdErrorStatus", threshold_error_status, 0x35, 0x2, true, 0xc33300ebf3d297b7, 2, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_INTEL_BITS.ActionRequired", action_required, 0x37, 0x1, true, 0xd2b5aa86c29e0dab, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_INTEL_BITS.Signalling", signalling, 0x38, 0x1, true, 0x67cb2c59e194248f, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_INTEL_BITS.ContextCorrupt", context_corrupt, 0x39, 0x1, true, 0xad189bd75b352724, 1, uint64_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_INTEL_BITS.AddressValid", address_valid, 0x3a, 0x1, true, 0x57a577d51a77a28a, 1, uint64_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_INTEL_BITS.MiscValid", misc_valid, 0x3b, 0x1, true, 0x40812cb03aae6b78, 1, uint64_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_INTEL_BITS.ErrorEnabled", error_enabled, 0x3c, 0x1, true, 0x547daf43d03d758, 1, uint64_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_INTEL_BITS.UncorrectedError", uncorrected_error, 0x3d, 0x1, true, 0xcb9f22b545732256, 1, uint64_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_INTEL_BITS.StatusOverFlow", status_over_flow, 0x3e, 0x1, true, 0x974899f065b4103f, 1, uint64_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_INTEL_BITS.Valid", valid, 0x3f, 0x1, true, 0xe5e2d17d19c5b96f, 1, uint64_t)
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