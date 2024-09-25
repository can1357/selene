#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER.MemHighDecodeMechanismEnable", mem_high_decode_mechanism_enable, 0x0, 0x1, true, 0xba9424a22dce1c63, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER.Rsvd0", rsvd0, 0x1, 0x3, true, 0xef6ec1c6da2cd744, 3, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER.MemHighVectorGranularity", mem_high_vector_granularity, 0x4, 0x4, true, 0x10f4b0dd3de2e29c, 4, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER.Rsvd1", rsvd1, 0x8, 0x14, true, 0x7a8c5d5ea96c5782, 20, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER.MemHighVectorStartLower", mem_high_vector_start_lower, 0x1c, 0x4, true, 0xfad358b116727813, 4, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x91d5ab4c7ec49f14)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif