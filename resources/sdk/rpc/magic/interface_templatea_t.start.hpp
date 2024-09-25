#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_INTERFACE_TEMPLATEA.Version", version, 0x0, 0x20, true, 0x50b29dc73acb17e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RPC_INTERFACE_TEMPLATEA.IfSpec", if_spec, 0x40, 0x40, true, 0x11ad9cb20ccf6c1a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "RPC_INTERFACE_TEMPLATEA.MgrTypeUuid", mgr_type_uuid, 0x80, 0x40, true, 0x999f42484ef6acde)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RPC_INTERFACE_TEMPLATEA.MgrEpv", mgr_epv, 0xc0, 0x40, true, 0x9f590a1b6fc3bae8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_INTERFACE_TEMPLATEA.Flags", flags, 0x100, 0x20, true, 0xa05c474c18a445ac)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_INTERFACE_TEMPLATEA.MaxCalls", max_calls, 0x120, 0x20, true, 0xb6f0746aa0bba635)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_INTERFACE_TEMPLATEA.MaxRpcSize", max_rpc_size, 0x140, 0x20, true, 0xf055fda164be8997)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "RPC_INTERFACE_TEMPLATEA.IfCallback", if_callback, 0x180, 0x40, true, 0x7ce7eea19bdd7a1e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::uuid_vector_t*), "RPC_INTERFACE_TEMPLATEA.UuidVector", uuid_vector, 0x1c0, 0x40, true, 0xa5d2cde3f8293785)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "RPC_INTERFACE_TEMPLATEA.Annotation", annotation, 0x200, 0x40, true, 0xc989570ccc54f6e7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RPC_INTERFACE_TEMPLATEA.SecurityDescriptor", security_descriptor, 0x240, 0x40, true, 0x339e5b5fd9b821fb)
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