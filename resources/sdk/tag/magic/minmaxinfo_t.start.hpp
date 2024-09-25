#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagMINMAXINFO.ptReserved", pt_reserved, 0x0, 0x40, true, 0x9601ae5052c53edd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagMINMAXINFO.ptMaxSize", pt_max_size, 0x40, 0x40, true, 0xbe4e33c676bbc0f0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagMINMAXINFO.ptMaxPosition", pt_max_position, 0x80, 0x40, true, 0x40381f5b4f0963dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagMINMAXINFO.ptMinTrackSize", pt_min_track_size, 0xc0, 0x40, true, 0xc2557b5bf6fff200)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagMINMAXINFO.ptMaxTrackSize", pt_max_track_size, 0x100, 0x40, true, 0x29f68df3180f9f94)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif