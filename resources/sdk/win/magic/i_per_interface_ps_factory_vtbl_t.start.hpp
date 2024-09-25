#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_per_interface_ps_factory_t*, const struct nt::guid_t&, void**)>*), "IPerInterfacePSFactoryVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xaf32be197e92de3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_per_interface_ps_factory_t*)>*), "IPerInterfacePSFactoryVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xe1b8ce122bfb45ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_per_interface_ps_factory_t*)>*), "IPerInterfacePSFactoryVtbl.Release", release, 0x80, 0x40, true, 0xf1a8b2e90a12ed48)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_per_interface_ps_factory_t*, struct win::i_unknown_t*, const struct nt::guid_t&, struct win::i_rpc_proxy_buffer_t**, void**)>*), "IPerInterfacePSFactoryVtbl.CreateProxy", create_proxy, 0xc0, 0x40, true, 0x9508b0360da06b74)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_per_interface_ps_factory_t*, const struct nt::guid_t&, struct win::i_unknown_t*, struct win::i_rpc_stub_buffer_t**)>*), "IPerInterfacePSFactoryVtbl.CreateStub", create_stub, 0x100, 0x40, true, 0xdd15daa077344d7a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_per_interface_ps_factory_t*, uint16_t, uint32_t, uint64_t*)>*), "IPerInterfacePSFactoryVtbl.GetMethodProperty", get_method_property, 0x140, 0x40, true, 0xd6854709a236b7b9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif