#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MCI_STATS.MciStatus.McaErrorCode", mca_error_code, 0x0, 0x10, true, 0xbef941416dcc9f68)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MCI_STATS.MciStatus.ModelErrorCode", model_error_code, 0x10, 0x10, true, 0x152237973e27c8bf)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint25_t), "_MCI_STATS.MciStatus.OtherInformation", other_information, 0x20, 0x19, true, 0x9cae0962a45da538, 25, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATS.MciStatus.ContextCorrupt", context_corrupt, 0x39, 0x1, true, 0x6ddcdf5818fe5dd4, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATS.MciStatus.AddressValid", address_valid, 0x3a, 0x1, true, 0xc969b888c2d04476, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATS.MciStatus.MiscValid", misc_valid, 0x3b, 0x1, true, 0x2683f8ffc713a450, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATS.MciStatus.ErrorEnabled", error_enabled, 0x3c, 0x1, true, 0x362e750cef4e9cb7, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATS.MciStatus.UncorrectedError", uncorrected_error, 0x3d, 0x1, true, 0x272e013c7a15d485, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATS.MciStatus.StatusOverFlow", status_over_flow, 0x3e, 0x1, true, 0xdbc519f81d332be3, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATS.MciStatus.Valid", valid, 0x3f, 0x1, true, 0x18f8ac42f16c23ab, 1, uint32_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_mci_status_t), "_MCI_STATS.MciStatus", mci_status, 0x0, 0x40, true, 0x98fb95d3b3a8f073)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCI_STATS.QuadPart", quad_part, 0x0, 0x40, true, 0xe3e0f977d78117f2)
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
#endif