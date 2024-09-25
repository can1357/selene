#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_formatetc_t*, const struct nt::guid_t*, void**)>*), "IEnumFORMATETCVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x77c359287ad087c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_formatetc_t*)>*), "IEnumFORMATETCVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xd8ddec1d17917c41)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_formatetc_t*)>*), "IEnumFORMATETCVtbl.Release", release, 0x80, 0x40, true, 0x40241dcebbb02038)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_formatetc_t*, uint32_t, struct tag::formatetc_t*, uint32_t*)>*), "IEnumFORMATETCVtbl.Next", next, 0xc0, 0x40, true, 0x1e50190978af73e8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_formatetc_t*, uint32_t)>*), "IEnumFORMATETCVtbl.Skip", skip, 0x100, 0x40, true, 0xc17c62e117f5e663)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_formatetc_t*)>*), "IEnumFORMATETCVtbl.Reset", reset, 0x140, 0x40, true, 0xd564b14aa20ad830)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_formatetc_t*, struct win::i_enum_formatetc_t**)>*), "IEnumFORMATETCVtbl.Clone", clone, 0x180, 0x40, true, 0x7f95be20d8723c29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif