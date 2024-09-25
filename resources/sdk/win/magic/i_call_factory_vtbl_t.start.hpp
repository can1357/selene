#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_call_factory_t*, const struct nt::guid_t*, void**)>*), "ICallFactoryVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xb5dae68faf1d77ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_call_factory_t*)>*), "ICallFactoryVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x53338b1555254853)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_call_factory_t*)>*), "ICallFactoryVtbl.Release", release, 0x80, 0x40, true, 0xdde6465330c0ee8a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_call_factory_t*, const struct nt::guid_t*, struct win::i_unknown_t*, const struct nt::guid_t*, struct win::i_unknown_t**)>*), "ICallFactoryVtbl.CreateCall", create_call, 0xc0, 0x40, true, 0x97a98664a5fcc398)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif