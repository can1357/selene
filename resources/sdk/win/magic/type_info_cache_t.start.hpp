#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "TypeInfoCache.iid", iid, 0x0, 0x80, true, 0x5ff55afe38c23188)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::type_info_vtbl_t*), "TypeInfoCache.pVtbl", p_vtbl, 0x80, 0x40, true, 0x5117590fdb99097)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "TypeInfoCache.dwTickCount", dw_tick_count, 0xc0, 0x20, true, 0x628efeef2b09e7da)
#else
#define _m00
#define _m01
#define _m02
#endif