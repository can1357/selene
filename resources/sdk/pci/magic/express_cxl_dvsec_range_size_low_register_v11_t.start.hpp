#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11.MemInfoValid", mem_info_valid, 0x0, 0x0, false, 0xde8dc25d0d67ae05, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11.MemActive", mem_active, 0x0, 0x0, false, 0xeae087be642e22b4, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11.MediaType", media_type, 0x0, 0x0, false, 0x27836834b05177, 3, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11.MemClass", mem_class, 0x0, 0x0, false, 0xd2880b87b09d93af, 3, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11.DesiredInterleave", desired_interleave, 0x0, 0x0, false, 0x9aff90f21c13859, 3, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11.MemSizeLow", mem_size_low, 0x0, 0x0, false, 0xf0fc829739a6def2, 4, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11.AsULONG", as_ulong, 0x0, 0x0, false, 0xe4dc26704f0dd8d1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif