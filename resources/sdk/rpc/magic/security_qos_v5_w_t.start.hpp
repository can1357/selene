#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_W.Version", version, 0x0, 0x20, true, 0x8ec0af1aaa6baddb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_W.Capabilities", capabilities, 0x20, 0x20, true, 0xc8dd9598f42cbafe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_W.IdentityTracking", identity_tracking, 0x40, 0x20, true, 0x2fea48bb61c74985)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_W.ImpersonationType", impersonation_type, 0x60, 0x20, true, 0x2a0fa18488875968)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_W.AdditionalSecurityInfoType", additional_security_info_type, 0x80, 0x20, true, 0x111e9cd99ae69db9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::http_transport_credentials_w_t*), "_RPC_SECURITY_QOS_V5_W.HttpCredentials", http_credentials, 0xc0, 0x40, true, 0x9423b209bba6139a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_SECURITY_QOS_V5_W.Sid", sid, 0x100, 0x40, true, 0xf984c050d3903d62)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_W.EffectiveOnly", effective_only, 0x140, 0x20, true, 0xb76ab112236827e2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_SECURITY_QOS_V5_W.ServerSecurityDescriptor", server_security_descriptor, 0x180, 0x40, true, 0xe2ed5c230c36ee4c)
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
#endif