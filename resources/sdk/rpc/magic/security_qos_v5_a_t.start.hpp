#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_A.Version", version, 0x0, 0x20, true, 0x97f436b3eb3cc4d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_A.Capabilities", capabilities, 0x20, 0x20, true, 0x4681d6349aad995d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_A.IdentityTracking", identity_tracking, 0x40, 0x20, true, 0xe2ab6ca694724bb5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_A.ImpersonationType", impersonation_type, 0x60, 0x20, true, 0x7946619ab7a85aa6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_A.AdditionalSecurityInfoType", additional_security_info_type, 0x80, 0x20, true, 0xd6d92d7965963f09)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::http_transport_credentials_a_t*), "_RPC_SECURITY_QOS_V5_A.HttpCredentials", http_credentials, 0xc0, 0x40, true, 0x9a4bc0575c7274c6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_SECURITY_QOS_V5_A.Sid", sid, 0x100, 0x40, true, 0x6ea66643f37c25c1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V5_A.EffectiveOnly", effective_only, 0x140, 0x20, true, 0x9d90f88e65388e77)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_SECURITY_QOS_V5_A.ServerSecurityDescriptor", server_security_descriptor, 0x180, 0x40, true, 0x1ad12419c766fff8)
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