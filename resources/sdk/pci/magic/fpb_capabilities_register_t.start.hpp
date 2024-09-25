#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_CAPABILITIES_REGISTER.RidDecodeMechanismSupported", rid_decode_mechanism_supported, 0x0, 0x1, true, 0xf032aad151d646dc, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_CAPABILITIES_REGISTER.MemLowDecodeMechanismSupported", mem_low_decode_mechanism_supported, 0x1, 0x1, true, 0x95f1d02ed9af0a4e, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_CAPABILITIES_REGISTER.MemHighDecodeMechanismSupported", mem_high_decode_mechanism_supported, 0x2, 0x1, true, 0x9bbb925b796017a7, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_FPB_CAPABILITIES_REGISTER.NumSecDev", num_sec_dev, 0x3, 0x5, true, 0x7083372d7ad85341, 5, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_FPB_CAPABILITIES_REGISTER.RidVectorSizeSupported", rid_vector_size_supported, 0x8, 0x3, true, 0x6333df514ffd7234, 3, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_FPB_CAPABILITIES_REGISTER.Rsvd0", rsvd0, 0xb, 0x5, true, 0x3fddb8ffdf2b838b, 5, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_FPB_CAPABILITIES_REGISTER.MemLowVectorSizeSupported", mem_low_vector_size_supported, 0x10, 0x3, true, 0x4266d7579cb07739, 3, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_FPB_CAPABILITIES_REGISTER.Rsvd1", rsvd1, 0x13, 0x5, true, 0xec619b6dda04730a, 5, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_FPB_CAPABILITIES_REGISTER.MemHighVectorSizeSupported", mem_high_vector_size_supported, 0x18, 0x3, true, 0xdac716ae7c90e2c2, 3, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_FPB_CAPABILITIES_REGISTER.Rsvd2", rsvd2, 0x1b, 0x5, true, 0xd50d86a93bfbb331, 5, uint32_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_CAPABILITIES_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0xee4719ad4337792f)
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
#endif