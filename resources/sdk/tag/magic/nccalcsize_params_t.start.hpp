#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::rect_t, 3>), "tagNCCALCSIZE_PARAMS.rgrc", rgrc, 0x0, 0x80, true, 0x251567971f04c57d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::windowpos_t*), "tagNCCALCSIZE_PARAMS.lppos", lppos, 0x180, 0x40, true, 0x70d48ce30f903450)
#else
#define _m00
#define _m01
#endif