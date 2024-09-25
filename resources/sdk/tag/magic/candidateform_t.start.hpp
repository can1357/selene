#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCANDIDATEFORM.dwIndex", dw_index, 0x0, 0x20, true, 0x342fd58ca7d2ee70)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCANDIDATEFORM.dwStyle", dw_style, 0x20, 0x20, true, 0xb5fc9eae42cc03c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagCANDIDATEFORM.ptCurrentPos", pt_current_pos, 0x40, 0x40, true, 0x9bd922e35979488a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagCANDIDATEFORM.rcArea", rc_area, 0x80, 0x80, true, 0x6fb6b9cdfa5c12a3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif