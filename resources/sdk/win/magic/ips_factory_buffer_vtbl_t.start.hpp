#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::ips_factory_buffer_t*, const struct nt::guid_t*, void**)>*), "IPSFactoryBufferVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x5e044fbe04ed2b05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::ips_factory_buffer_t*)>*), "IPSFactoryBufferVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x8b63f6585fd62615)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::ips_factory_buffer_t*)>*), "IPSFactoryBufferVtbl.Release", release, 0x80, 0x40, true, 0xa5e0d543b435ef40)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::ips_factory_buffer_t*, struct win::i_unknown_t*, const struct nt::guid_t*, struct win::i_rpc_proxy_buffer_t**, void**)>*), "IPSFactoryBufferVtbl.CreateProxy", create_proxy, 0xc0, 0x40, true, 0xc7a7997947f46a07)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::ips_factory_buffer_t*, const struct nt::guid_t*, struct win::i_unknown_t*, struct win::i_rpc_stub_buffer_t**)>*), "IPSFactoryBufferVtbl.CreateStub", create_stub, 0x100, 0x40, true, 0xbd7e438289c41776)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif