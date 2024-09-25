#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER.CacheEnable", cache_enable, 0x0, 0x0, false, 0x85a2ef099e1e7f11, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER.IoEnable", io_enable, 0x0, 0x0, false, 0xc01c31636f0f67f5, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER.MemEnable", mem_enable, 0x0, 0x0, false, 0xf9002b28171d1b17, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER.CacheSFCoverage", cache_sf_coverage, 0x0, 0x0, false, 0xc3f5ac616624ad92, 5, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER.CacheSFGranularity", cache_sf_granularity, 0x0, 0x0, false, 0x504b45fc9555303a, 3, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER.CacheCleanEviction", cache_clean_eviction, 0x0, 0x0, false, 0xa7caaadcab89fa1e, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER.ViralEnable", viral_enable, 0x0, 0x0, false, 0x939060216cf300dd, 1, uint16_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER.AsUSHORT", as_ushort, 0x0, 0x0, false, 0x83887773f9ffc4b0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif