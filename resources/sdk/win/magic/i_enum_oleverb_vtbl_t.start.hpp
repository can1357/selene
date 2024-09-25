#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_oleverb_t*, const struct nt::guid_t*, void**)>*), "IEnumOLEVERBVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xe80907b0edab6477)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_oleverb_t*)>*), "IEnumOLEVERBVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xc147291b20a3da01)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_oleverb_t*)>*), "IEnumOLEVERBVtbl.Release", release, 0x80, 0x40, true, 0xe0ab81e90d19b3d4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_oleverb_t*, uint32_t, struct tag::oleverb_t*, uint32_t*)>*), "IEnumOLEVERBVtbl.Next", next, 0xc0, 0x40, true, 0xf2b5ac40271c1c5e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_oleverb_t*, uint32_t)>*), "IEnumOLEVERBVtbl.Skip", skip, 0x100, 0x40, true, 0xd4fb5867450fa53f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_oleverb_t*)>*), "IEnumOLEVERBVtbl.Reset", reset, 0x140, 0x40, true, 0x61272780c7a0b17a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_oleverb_t*, struct win::i_enum_oleverb_t**)>*), "IEnumOLEVERBVtbl.Clone", clone, 0x180, 0x40, true, 0x16531cb3480d17dc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif