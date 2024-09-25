#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_dispatch_t*, const struct nt::guid_t&, void**)>*), "IDispatchVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xab2345fb0fdd1fdd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_dispatch_t*)>*), "IDispatchVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x7b2f807ef6b0ceb8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_dispatch_t*)>*), "IDispatchVtbl.Release", release, 0x80, 0x40, true, 0xcdfeffeb430ef386)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_dispatch_t*, uint32_t*)>*), "IDispatchVtbl.GetTypeInfoCount", get_type_info_count, 0xc0, 0x40, true, 0x5fe2703b47a056e8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_dispatch_t*, uint32_t, uint32_t, struct win::i_type_info_t**)>*), "IDispatchVtbl.GetTypeInfo", get_type_info, 0x100, 0x40, true, 0x34655b0ed533ae8d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_dispatch_t*, const struct nt::guid_t&, wchar_t**, uint32_t, uint32_t, int32_t*)>*), "IDispatchVtbl.GetIDsOfNames", get_i_ds_of_names, 0x140, 0x40, true, 0x8da97f4a9a3ee4f1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_dispatch_t*, int32_t, const struct nt::guid_t&, uint32_t, uint16_t, struct tag::dispparams_t*, struct tag::variant_t*, struct tag::excepinfo_t*, uint32_t*)>*), "IDispatchVtbl.Invoke", invoke, 0x180, 0x40, true, 0xea91f7dc18d62eb2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif