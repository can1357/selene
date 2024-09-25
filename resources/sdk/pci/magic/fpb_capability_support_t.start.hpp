#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_CAPABILITY_SUPPORT.RidDecodeMechanismEnable", rid_decode_mechanism_enable, 0x0, 0x1, true, 0x30644bc787d22ef6, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_CAPABILITY_SUPPORT.MemLowDecodeMechanismEnable", mem_low_decode_mechanism_enable, 0x1, 0x1, true, 0x929c66a3aa2df760, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_CAPABILITY_SUPPORT.MemHighDecodeMechanismEnable", mem_high_decode_mechanism_enable, 0x2, 0x1, true, 0xf67703dbff24c228, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_CAPABILITY_SUPPORT.Rsvd0", rsvd0, 0x3, 0x1, true, 0xb39d03963f1eb5f6, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_CAPABILITY_SUPPORT.RidVectorGranularityLogical", rid_vector_granularity_logical, 0x4, 0x4, true, 0xc4b927c2fa31a32a, 4, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_CAPABILITY_SUPPORT.RidVectorGranularityActual", rid_vector_granularity_actual, 0x8, 0x4, true, 0xb064ab56ffb5aa3a, 4, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_CAPABILITY_SUPPORT.MemLowVectorGranularityLogical", mem_low_vector_granularity_logical, 0xc, 0x4, true, 0x24c0566ca07ad641, 4, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_CAPABILITY_SUPPORT.MemLowVectorGranularityActual", mem_low_vector_granularity_actual, 0x10, 0x4, true, 0xcda3c669edd62335, 4, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_CAPABILITY_SUPPORT.MemHighVectorGranularityLogical", mem_high_vector_granularity_logical, 0x14, 0x4, true, 0x8557f61109410df8, 4, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_CAPABILITY_SUPPORT.MemHighVectorGranularityActual", mem_high_vector_granularity_actual, 0x18, 0x4, true, 0x4740e704404a2d9d, 4, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_FPB_CAPABILITY_SUPPORT.Rsvd1", rsvd1, 0x1c, 0x4, true, 0x5a19788a36e9395d, 4, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_CAPABILITY_SUPPORT.AsULONG", as_ulong, 0x0, 0x20, true, 0x4bfddfbae28bc717)
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