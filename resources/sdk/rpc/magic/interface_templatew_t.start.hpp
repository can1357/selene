#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_INTERFACE_TEMPLATEW.Version", version, 0x0, 0x20, true, 0xa20aa9893943754a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RPC_INTERFACE_TEMPLATEW.IfSpec", if_spec, 0x40, 0x40, true, 0x59ef36ade3bdf61a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "RPC_INTERFACE_TEMPLATEW.MgrTypeUuid", mgr_type_uuid, 0x80, 0x40, true, 0x5b5545e86e8433)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RPC_INTERFACE_TEMPLATEW.MgrEpv", mgr_epv, 0xc0, 0x40, true, 0x6300d2e5e1432c85)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_INTERFACE_TEMPLATEW.Flags", flags, 0x100, 0x20, true, 0xf2b373983623fd43)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_INTERFACE_TEMPLATEW.MaxCalls", max_calls, 0x120, 0x20, true, 0xfb5f795c0b8fc152)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_INTERFACE_TEMPLATEW.MaxRpcSize", max_rpc_size, 0x140, 0x20, true, 0x11d4d5ef5c0cf73d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "RPC_INTERFACE_TEMPLATEW.IfCallback", if_callback, 0x180, 0x40, true, 0x7e01437fbff21685)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::uuid_vector_t*), "RPC_INTERFACE_TEMPLATEW.UuidVector", uuid_vector, 0x1c0, 0x40, true, 0xbd65c2186b54b0d5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "RPC_INTERFACE_TEMPLATEW.Annotation", annotation, 0x200, 0x40, true, 0x367d1b42b542ce7a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RPC_INTERFACE_TEMPLATEW.SecurityDescriptor", security_descriptor, 0x240, 0x40, true, 0x4773fe791638dbb)
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
#endif