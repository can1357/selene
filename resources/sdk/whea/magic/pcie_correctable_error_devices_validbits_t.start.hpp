#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS.Segment", segment, 0x0, 0x0, false, 0xcf500ad93531e7ff, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS.Bus", bus, 0x0, 0x0, false, 0x5bbe066b5de8c8d3, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS.Device", device, 0x0, 0x0, false, 0xc1ef0125caca8df3, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS.Function", function, 0x0, 0x0, false, 0x86f27d2c618575ff, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS.Mask", mask, 0x0, 0x0, false, 0xa41746d77731cc65, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS.CorrectableErrorCount", correctable_error_count, 0x0, 0x0, false, 0xab01122681ea904a, 1, uint64_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS.ValidBits", valid_bits, 0x0, 0x0, false, 0x671205d670b75e5d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif