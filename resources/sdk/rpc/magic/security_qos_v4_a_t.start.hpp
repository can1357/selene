#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_A.Version", version, 0x0, 0x20, true, 0x8aae2ed91a35aadc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_A.Capabilities", capabilities, 0x20, 0x20, true, 0x14606442178c4b0a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_A.IdentityTracking", identity_tracking, 0x40, 0x20, true, 0xe29e60d4eb38789a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_A.ImpersonationType", impersonation_type, 0x60, 0x20, true, 0xd0b7572752583503)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_A.AdditionalSecurityInfoType", additional_security_info_type, 0x80, 0x20, true, 0x8491a60d7194c58f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::http_transport_credentials_a_t*), "_RPC_SECURITY_QOS_V4_A.HttpCredentials", http_credentials, 0xc0, 0x40, true, 0xc3797c4edb76cd2e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_SECURITY_QOS_V4_A.Sid", sid, 0x100, 0x40, true, 0xaec449cccc0a738e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_A.EffectiveOnly", effective_only, 0x140, 0x20, true, 0x20df6021f32994c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif