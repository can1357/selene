#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_WRITE_CACHE_PROPERTY.Version", version, 0x0, 0x20, true, 0x2595948ce2856171)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_WRITE_CACHE_PROPERTY.Size", size, 0x20, 0x20, true, 0xe8997826b27bce0f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::write_cache_type_t), "_STORAGE_WRITE_CACHE_PROPERTY.WriteCacheType", write_cache_type, 0x40, 0x20, true, 0x18f7a7ffbbdb3bf7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::write_cache_enable_t), "_STORAGE_WRITE_CACHE_PROPERTY.WriteCacheEnabled", write_cache_enabled, 0x60, 0x20, true, 0xb91c2ba659202ef6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::write_cache_change_t), "_STORAGE_WRITE_CACHE_PROPERTY.WriteCacheChangeable", write_cache_changeable, 0x80, 0x20, true, 0x3e07faea8f96d26b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::write_through_t), "_STORAGE_WRITE_CACHE_PROPERTY.WriteThroughSupported", write_through_supported, 0xa0, 0x20, true, 0xf4767f6c048373e0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_WRITE_CACHE_PROPERTY.FlushCacheSupported", flush_cache_supported, 0xc0, 0x8, true, 0xaeb2e283caa3ce54)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_WRITE_CACHE_PROPERTY.UserDefinedPowerProtection", user_defined_power_protection, 0xc8, 0x8, true, 0x6587cb916dc04190)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_WRITE_CACHE_PROPERTY.NVCacheEnabled", nv_cache_enabled, 0xd0, 0x8, true, 0xcd0ee16638867b0e)
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
#endif