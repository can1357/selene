#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_lib_t*, const struct nt::guid_t&, void**)>*), "ITypeLibVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x1f363a2ce2975bca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_type_lib_t*)>*), "ITypeLibVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x3abcf86777beacce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_type_lib_t*)>*), "ITypeLibVtbl.Release", release, 0x80, 0x40, true, 0xc1e6d96d62c077ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_type_lib_t*)>*), "ITypeLibVtbl.GetTypeInfoCount", get_type_info_count, 0xc0, 0x40, true, 0xfd246486e8dab844)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_lib_t*, uint32_t, struct win::i_type_info_t**)>*), "ITypeLibVtbl.GetTypeInfo", get_type_info, 0x100, 0x40, true, 0xfb65d1e0c44f4bca)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_lib_t*, uint32_t, enum tag::typekind_t*)>*), "ITypeLibVtbl.GetTypeInfoType", get_type_info_type, 0x140, 0x40, true, 0x1517f5d699a25774)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_lib_t*, const struct nt::guid_t&, struct win::i_type_info_t**)>*), "ITypeLibVtbl.GetTypeInfoOfGuid", get_type_info_of_guid, 0x180, 0x40, true, 0x69cd30fa65854f87)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_lib_t*, struct tag::tlibattr_t**)>*), "ITypeLibVtbl.GetLibAttr", get_lib_attr, 0x1c0, 0x40, true, 0x6c8936ffddacb3a1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_lib_t*, struct win::i_type_comp_t**)>*), "ITypeLibVtbl.GetTypeComp", get_type_comp, 0x200, 0x40, true, 0xb775b9446c15e43e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_lib_t*, int32_t, wchar_t**, wchar_t**, uint32_t*, wchar_t**)>*), "ITypeLibVtbl.GetDocumentation", get_documentation, 0x240, 0x40, true, 0x10ed6e2884ee2027)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_lib_t*, wchar_t*, uint32_t, int32_t*)>*), "ITypeLibVtbl.IsName", is_name, 0x280, 0x40, true, 0xbf57741166c1228e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_type_lib_t*, wchar_t*, uint32_t, struct win::i_type_info_t**, int32_t*, uint16_t*)>*), "ITypeLibVtbl.FindName", find_name, 0x2c0, 0x40, true, 0xd1c8aa00beaed5c4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_type_lib_t*, struct tag::tlibattr_t*)>*), "ITypeLibVtbl.ReleaseTLibAttr", release_t_lib_attr, 0x300, 0x40, true, 0x7e26138bff03dc20)
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
#endif