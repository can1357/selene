#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_UUID_VECTOR.Count", count, 0x0, 0x20, true, 0x66f9fd7ef9da2e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t*, 1>), "_UUID_VECTOR.Uuid", uuid, 0x40, 0x40, true, 0x39c987364b2c2640)
#else
#define _m00
#define _m01
#endif