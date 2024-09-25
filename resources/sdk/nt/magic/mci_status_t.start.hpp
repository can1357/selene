#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCI_STATUS.QuadPart", quad_part, 0x0, 0x40, true, 0x5e19b86099a9035d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mci_status_bits_common_t), "_MCI_STATUS.CommonBits", common_bits, 0x0, 0x40, true, 0xf8823f17343b0698)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mci_status_amd_bits_t), "_MCI_STATUS.AmdBits", amd_bits, 0x0, 0x40, true, 0x6fd4c13387e00180)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mci_status_intel_bits_t), "_MCI_STATUS.IntelBits", intel_bits, 0x0, 0x40, true, 0xb061eb9fa373b014)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MCI_STATUS.McaErrorCode", mca_error_code, 0x0, 0x10, true, 0xf3f085991fcb9c06)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MCI_STATUS.ModelErrorCode", model_error_code, 0x10, 0x10, true, 0x8ce2fbde0f4e303d)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint23_t), "_MCI_STATUS.OtherInformation", other_information, 0x20, 0x17, true, 0x147cc3bf27a9426d, 23, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS.ActionRequired", action_required, 0x37, 0x1, true, 0x41a4cc393358a5fd, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS.Signalling", signalling, 0x38, 0x1, true, 0x127f9f51eaf752bb, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS.ContextCorrupt", context_corrupt, 0x39, 0x1, true, 0xdf39c82ded888612, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS.AddressValid", address_valid, 0x3a, 0x1, true, 0xc24f40f1a4ed92d8, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS.MiscValid", misc_valid, 0x3b, 0x1, true, 0x62e7e90881a61ab9, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS.ErrorEnabled", error_enabled, 0x3c, 0x1, true, 0x770703f18e7fb5e4, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS.UncorrectedError", uncorrected_error, 0x3d, 0x1, true, 0xd50ec4bca84f21ba, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS.StatusOverFlow", status_over_flow, 0x3e, 0x1, true, 0x3cb35b4df9e00c70, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS.Valid", valid, 0x3f, 0x1, true, 0x780ff48dcc1c80fb, 1, uint32_t)
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
#endif