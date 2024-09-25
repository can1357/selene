#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_MCI_STATUS_AMD_BITS.McaErrorCode", mca_error_code, 0x0, 0x10, true, 0xf8c4fbf9eb9af268, 16, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_MCI_STATUS_AMD_BITS.ModelErrorCode", model_error_code, 0x10, 0x10, true, 0xcc11a356873cff12, 16, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_MCI_STATUS_AMD_BITS.ImplementationSpecific2", implementation_specific2, 0x20, 0xb, true, 0x5876c0740615d5d3, 11, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_AMD_BITS.Poison", poison, 0x2b, 0x1, true, 0xe41cb76283e7d83, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_AMD_BITS.Deferred", deferred, 0x2c, 0x1, true, 0xb85fdd158b96da4c, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_MCI_STATUS_AMD_BITS.ImplementationSpecific1", implementation_specific1, 0x2d, 0xc, true, 0x8efb9d49fcd8b985, 12, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_AMD_BITS.ContextCorrupt", context_corrupt, 0x39, 0x1, true, 0x72052758ba6b9b2c, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_AMD_BITS.AddressValid", address_valid, 0x3a, 0x1, true, 0xa4008539d77452da, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_AMD_BITS.MiscValid", misc_valid, 0x3b, 0x1, true, 0x3b476434256695ae, 1, uint64_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_AMD_BITS.ErrorEnabled", error_enabled, 0x3c, 0x1, true, 0x34df4fd8a2572c2d, 1, uint64_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_AMD_BITS.UncorrectedError", uncorrected_error, 0x3d, 0x1, true, 0x8d30572798bb2647, 1, uint64_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_AMD_BITS.StatusOverFlow", status_over_flow, 0x3e, 0x1, true, 0x55df761fceb81d2b, 1, uint64_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCI_STATUS_AMD_BITS.Valid", valid, 0x3f, 0x1, true, 0x9424d5c571e1201f, 1, uint64_t)
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
#endif