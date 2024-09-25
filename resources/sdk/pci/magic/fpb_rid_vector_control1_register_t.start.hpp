#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_RID_VECTOR_CONTROL1_REGISTER.RidDecodeMechanismEnable", rid_decode_mechanism_enable, 0x0, 0x1, true, 0x9bb55d903815b8e0, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_FPB_RID_VECTOR_CONTROL1_REGISTER.Rsvd0", rsvd0, 0x1, 0x3, true, 0x3314792ec9c22492, 3, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_RID_VECTOR_CONTROL1_REGISTER.RidVectorGranularity", rid_vector_granularity, 0x4, 0x4, true, 0x5b2c8831d5f3c3c6, 4, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_PCI_FPB_RID_VECTOR_CONTROL1_REGISTER.Rsvd1", rsvd1, 0x8, 0xb, true, 0xa9c33fd58224d611, 11, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint13_t), "_PCI_FPB_RID_VECTOR_CONTROL1_REGISTER.RidVectorStart", rid_vector_start, 0x13, 0xd, true, 0xb0b82cd168a0680d, 13, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_RID_VECTOR_CONTROL1_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x9a32bfb4c9f85dff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif