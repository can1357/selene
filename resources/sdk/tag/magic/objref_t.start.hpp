#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOBJREF.signature", signature, 0x0, 0x20, true, 0xe6436a6acfd46a25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOBJREF.flags", flags, 0x20, 0x20, true, 0x797035595b1d963)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagOBJREF.iid", iid, 0x40, 0x80, true, 0x6314dfe5f7c557f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::stdobjref_t), "tagOBJREF.u_objref.u_standard.std", std, 0x0, 0x40, true, 0x5af4830a0ae7393b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t), "tagOBJREF.u_objref.u_standard.saResAddr", sa_res_addr, 0x140, 0x30, true, 0x670d8b7325322ed2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_u_standard_t), "tagOBJREF.u_objref.u_standard", u_standard, 0x0, 0x80, true, 0xacee67919ea5c3f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::stdobjref_t), "tagOBJREF.u_objref.u_handler.std", std, 0x0, 0x40, true, 0xb4f4306143eb33bf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagOBJREF.u_objref.u_handler.clsid", clsid, 0x140, 0x80, true, 0xe763135fd4a385c9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t), "tagOBJREF.u_objref.u_handler.saResAddr", sa_res_addr, 0x1c0, 0x30, true, 0xaf6d01995af29551)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_u_handler_t), "tagOBJREF.u_objref.u_handler", u_handler, 0x0, 0x0, true, 0xc44c85d8c6a26d9d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagOBJREF.u_objref.u_custom.clsid", clsid, 0x0, 0x80, true, 0x1f6707bfc336dcf)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOBJREF.u_objref.u_custom.cbExtension", cb_extension, 0x80, 0x20, true, 0x806904c5426a2250)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOBJREF.u_objref.u_custom.size", size, 0xa0, 0x20, true, 0xfb1c24ba634594a9)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagOBJREF.u_objref.u_custom.pData", p_data, 0xc0, 0x40, true, 0x1199c7cda68b97a0)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_u_custom_t), "tagOBJREF.u_objref.u_custom", u_custom, 0x0, 0x0, true, 0xcb02a617ef0dbc25)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::stdobjref_t), "tagOBJREF.u_objref.u_extended.std", std, 0x0, 0x40, true, 0xcbd95ee44c942a81)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::objrefdata_t*), "tagOBJREF.u_objref.u_extended.pORData", p_or_data, 0x140, 0x40, true, 0xaf72742678ab0876)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t), "tagOBJREF.u_objref.u_extended.saResAddr", sa_res_addr, 0x180, 0x30, true, 0x236c1d851c3f9539)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_u_extended_t), "tagOBJREF.u_objref.u_extended", u_extended, 0x0, 0xc0, true, 0x2110ef89277a8a92)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_u_objref_t), "tagOBJREF.u_objref", u_objref, 0xc0, 0x0, true, 0xde0c59d75f0c6ea3)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif