#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NV_SEP_CACHE_PARAMETER.Version", version, 0x0, 0x20, true, 0xa634b45d888b8797)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NV_SEP_CACHE_PARAMETER.Size", size, 0x20, 0x20, true, 0xe61e29a30ac1f4a4)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NV_SEP_CACHE_PARAMETER.Flags.CacheFlags.WriteCacheEnabled", write_cache_enabled, 0x0, 0x1, true, 0xda829c667f79ae49, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NV_SEP_CACHE_PARAMETER.Flags.CacheFlags.WriteCacheChangeable", write_cache_changeable, 0x1, 0x1, true, 0x78c0c41ed0f2f823, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NV_SEP_CACHE_PARAMETER.Flags.CacheFlags.WriteThroughIOSupported", write_through_io_supported, 0x2, 0x1, true, 0xf0b70a28e34ac1e6, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NV_SEP_CACHE_PARAMETER.Flags.CacheFlags.FlushCacheSupported", flush_cache_supported, 0x3, 0x1, true, 0xbceff7a77cc3de1, 1, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_cache_flags_t), "_NV_SEP_CACHE_PARAMETER.Flags.CacheFlags", cache_flags, 0x0, 0x8, true, 0xcf9d7de3cf8b9bfe)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NV_SEP_CACHE_PARAMETER.Flags.CacheFlagsSet", cache_flags_set, 0x0, 0x8, true, 0xec5918d507f7d679)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_NV_SEP_CACHE_PARAMETER.Flags", flags, 0x40, 0x8, true, 0xf171d8e79380c514)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NV_SEP_CACHE_PARAMETER.WriteCacheType", write_cache_type, 0x48, 0x8, true, 0xd46ec72b10dd1261)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NV_SEP_CACHE_PARAMETER.WriteCacheTypeEffective", write_cache_type_effective, 0x50, 0x8, true, 0xa6eb2a5c6c35d897)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_NV_SEP_CACHE_PARAMETER.ParameterReserve1", parameter_reserve1, 0x58, 0x18, true, 0xc23fde4b13f4933e)
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