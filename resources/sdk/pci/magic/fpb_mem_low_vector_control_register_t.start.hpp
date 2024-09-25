#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER.MemLowDecodeMechanismEnable", mem_low_decode_mechanism_enable, 0x0, 0x1, true, 0xfb5dd121a93192e0, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER.Rsvd0", rsvd0, 0x1, 0x3, true, 0xb4b63a9c3e063048, 3, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER.MemLowVectorGranularity", mem_low_vector_granularity, 0x4, 0x4, true, 0xeba9dee2361edce5, 4, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER.Rsvd1", rsvd1, 0x8, 0xc, true, 0xaea8983586b874c5, 12, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER.MemLowVectorStart", mem_low_vector_start, 0x14, 0xc, true, 0xd3b63feb1a40b0df, 12, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x164092dcba358968)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif