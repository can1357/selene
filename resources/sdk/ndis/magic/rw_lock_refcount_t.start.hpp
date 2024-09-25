#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RW_LOCK_REFCOUNT.RefCount", ref_count, 0x0, 0x20, true, 0x32b2e48f79345fde)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_RW_LOCK_REFCOUNT.cacheLine", cache_line, 0x0, 0x80, true, 0xb79dd527ccccbbc8)
#else
#define _m00
#define _m01
#endif