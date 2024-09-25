#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOMPOSITIONFORM.dwStyle", dw_style, 0x0, 0x20, true, 0x4d3ac21cc8d0174f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagCOMPOSITIONFORM.ptCurrentPos", pt_current_pos, 0x20, 0x40, true, 0x5195533149dc12e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagCOMPOSITIONFORM.rcArea", rc_area, 0x60, 0x80, true, 0xc36c1e4ad4bc9c06)
#else
#define _m00
#define _m01
#define _m02
#endif