#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_class_factory_t*, const struct nt::guid_t*, void**)>*), "IClassFactoryVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x8013be32ccdf6f9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_class_factory_t*)>*), "IClassFactoryVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x96b9a2173d033dfb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_class_factory_t*)>*), "IClassFactoryVtbl.Release", release, 0x80, 0x40, true, 0x6491073d5e4743b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_class_factory_t*, struct win::i_unknown_t*, const struct nt::guid_t*, void**)>*), "IClassFactoryVtbl.CreateInstance", create_instance, 0xc0, 0x40, true, 0x74c5eb46bc907db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_class_factory_t*, int32_t)>*), "IClassFactoryVtbl.LockServer", lock_server, 0x100, 0x40, true, 0x55a9d86e98af6a5b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif