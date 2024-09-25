#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11.CacheCapable", cache_capable, 0x0, 0x0, false, 0x1247980edae996d9, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11.IoCapable", io_capable, 0x0, 0x0, false, 0xe40baf3451491f08, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11.MemCapable", mem_capable, 0x0, 0x0, false, 0xaa40276138b3b4f9, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11.MemHwInitMode", mem_hw_init_mode, 0x0, 0x0, false, 0xa0a9d0a3529c375f, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11.HdmCount", hdm_count, 0x0, 0x0, false, 0x604f2612c7cede7c, 2, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11.ViralCapable", viral_capable, 0x0, 0x0, false, 0xd6c4c5ece53e6c45, 1, uint16_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11.AsUSHORT", as_ushort, 0x0, 0x0, false, 0xeea21787ed7b921c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif