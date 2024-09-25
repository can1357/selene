#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statstg_t*, const struct nt::guid_t*, void**)>*), "IEnumSTATSTGVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xd0e9097e42b18ddd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_statstg_t*)>*), "IEnumSTATSTGVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x920c1493b32b88c3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_statstg_t*)>*), "IEnumSTATSTGVtbl.Release", release, 0x80, 0x40, true, 0x4f4cdd740721a31c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statstg_t*, uint32_t, struct tag::statstg_t*, uint32_t*)>*), "IEnumSTATSTGVtbl.Next", next, 0xc0, 0x40, true, 0xcb523a5b9e0546bc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statstg_t*, uint32_t)>*), "IEnumSTATSTGVtbl.Skip", skip, 0x100, 0x40, true, 0xb3bd3533f8fc2b0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statstg_t*)>*), "IEnumSTATSTGVtbl.Reset", reset, 0x140, 0x40, true, 0xa84878a612effc8b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_statstg_t*, struct win::i_enum_statstg_t**)>*), "IEnumSTATSTGVtbl.Clone", clone, 0x180, 0x40, true, 0x46199905bb7dbd7b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif