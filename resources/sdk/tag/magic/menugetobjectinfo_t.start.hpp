#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUGETOBJECTINFO.dwFlags", dw_flags, 0x0, 0x20, true, 0xc7d78b0c2ee4ed51)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUGETOBJECTINFO.uPos", u_pos, 0x20, 0x20, true, 0x7c6ef23e72fcd7e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hmenu_t*), "tagMENUGETOBJECTINFO.hmenu", hmenu, 0x40, 0x40, true, 0xc5c1b3c4d141602c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagMENUGETOBJECTINFO.riid", riid, 0x80, 0x40, true, 0x7a46300819b8142c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagMENUGETOBJECTINFO.pvObj", pv_obj, 0xc0, 0x40, true, 0x37c976e867482e87)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif