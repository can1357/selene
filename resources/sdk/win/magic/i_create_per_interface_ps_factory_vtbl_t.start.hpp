#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_create_per_interface_ps_factory_t*, const struct nt::guid_t&, void**)>*), "ICreatePerInterfacePSFactoryVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x975cb5df064184a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_create_per_interface_ps_factory_t*)>*), "ICreatePerInterfacePSFactoryVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x4cf05fb9f0d8e538)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_create_per_interface_ps_factory_t*)>*), "ICreatePerInterfacePSFactoryVtbl.Release", release, 0x80, 0x40, true, 0x5cbc0e6d20d716f1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_create_per_interface_ps_factory_t*, struct win::i_unknown_t*, const struct nt::guid_t&, struct win::i_rpc_proxy_buffer_t**, void**)>*), "ICreatePerInterfacePSFactoryVtbl.CreateProxy", create_proxy, 0xc0, 0x40, true, 0x9ae207a70ffe194a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_create_per_interface_ps_factory_t*, const struct nt::guid_t&, struct win::i_unknown_t*, struct win::i_rpc_stub_buffer_t**)>*), "ICreatePerInterfacePSFactoryVtbl.CreateStub", create_stub, 0x100, 0x40, true, 0x999fc6183cca9eaa)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_create_per_interface_ps_factory_t*, const struct nt::guid_t&, struct win::i_per_interface_ps_factory_t**)>*), "ICreatePerInterfacePSFactoryVtbl.CreatePerInterfacePSFactory", create_per_interface_ps_factory, 0x140, 0x40, true, 0xb33ee7d00c1e8806)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif