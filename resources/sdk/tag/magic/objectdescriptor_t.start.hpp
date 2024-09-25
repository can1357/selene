#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOBJECTDESCRIPTOR.cbSize", cb_size, 0x0, 0x20, true, 0xc5189ed975d421b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagOBJECTDESCRIPTOR.clsid", clsid, 0x20, 0x80, true, 0xb654d608a08da5be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOBJECTDESCRIPTOR.dwDrawAspect", dw_draw_aspect, 0xa0, 0x20, true, 0x54b292fd2c7e6837)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::size_t), "tagOBJECTDESCRIPTOR.sizel", sizel, 0xc0, 0x40, true, 0xe65d45f201b31d70)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "tagOBJECTDESCRIPTOR.pointl", pointl, 0x100, 0x40, true, 0xbfdb9691f86379db)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOBJECTDESCRIPTOR.dwStatus", dw_status, 0x140, 0x20, true, 0x43490fbcc6a939e0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOBJECTDESCRIPTOR.dwFullUserTypeName", dw_full_user_type_name, 0x160, 0x20, true, 0x1c8df97532367de1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOBJECTDESCRIPTOR.dwSrcOfCopy", dw_src_of_copy, 0x180, 0x20, true, 0x76ea7fc61baca73)
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