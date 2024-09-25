#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_comp_t*, const struct nt::guid_t&, void**)>*), "ITypeCompVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x2076d561051179e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_type_comp_t*)>*), "ITypeCompVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x31d8652756ea59af)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_type_comp_t*)>*), "ITypeCompVtbl.Release", release, 0x80, 0x40, true, 0xf5f3d64e7d9550b7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_comp_t*, wchar_t*, uint32_t, uint16_t, struct win::i_type_info_t**, enum tag::desckind_t*, union tag::bindptr_t*)>*), "ITypeCompVtbl.Bind", bind, 0xc0, 0x40, true, 0x4c648083b99ce0d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_comp_t*, wchar_t*, uint32_t, struct win::i_type_info_t**, struct win::i_type_comp_t**)>*), "ITypeCompVtbl.BindType", bind_type, 0x100, 0x40, true, 0x8a83a17e90a3f91f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif