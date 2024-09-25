#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PATHS.Number", number, 0x0, 0x20, true, 0x2438f7d25821aa7e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::unicode_view, 1>), "_NDIS_BIND_PATHS.Paths", paths, 0x40, 0x80, true, 0xef80af561b674e89)
#else
#define _m00
#define _m01
#endif