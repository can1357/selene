#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, const struct nt::guid_t*, void**)>*), "IBindCtxVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xbdc242584b616d22)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_bind_ctx_t*)>*), "IBindCtxVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xafc010828d2d08f7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_bind_ctx_t*)>*), "IBindCtxVtbl.Release", release, 0x80, 0x40, true, 0x3ebe74aa188f8b07)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct win::i_unknown_t*)>*), "IBindCtxVtbl.RegisterObjectBound", register_object_bound, 0xc0, 0x40, true, 0xc716d4f67bfa2ba5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct win::i_unknown_t*)>*), "IBindCtxVtbl.RevokeObjectBound", revoke_object_bound, 0x100, 0x40, true, 0x933063ab3f319fa2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*)>*), "IBindCtxVtbl.ReleaseBoundObjects", release_bound_objects, 0x140, 0x40, true, 0xab322a7a5650451e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct tag::bind_opts_t*)>*), "IBindCtxVtbl.SetBindOptions", set_bind_options, 0x180, 0x40, true, 0xfc9a55f79f188f15)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct tag::bind_opts_t*)>*), "IBindCtxVtbl.GetBindOptions", get_bind_options, 0x1c0, 0x40, true, 0x2c6637e87cd75b3c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct win::i_running_object_table_t**)>*), "IBindCtxVtbl.GetRunningObjectTable", get_running_object_table, 0x200, 0x40, true, 0x31e979dd377a6e1a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, wchar_t*, struct win::i_unknown_t*)>*), "IBindCtxVtbl.RegisterObjectParam", register_object_param, 0x240, 0x40, true, 0xb22a04861b71dfd4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, wchar_t*, struct win::i_unknown_t**)>*), "IBindCtxVtbl.GetObjectParam", get_object_param, 0x280, 0x40, true, 0x6f5ce634201717ca)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, struct win::i_enum_string_t**)>*), "IBindCtxVtbl.EnumObjectParam", enum_object_param, 0x2c0, 0x40, true, 0x889c8b982d9b67f2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_bind_ctx_t*, wchar_t*)>*), "IBindCtxVtbl.RevokeObjectParam", revoke_object_param, 0x300, 0x40, true, 0xc48834d7ac8813c9)
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