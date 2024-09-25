#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V3_A.Version", version, 0x0, 0x20, true, 0x13383eae1bf3adb0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V3_A.Capabilities", capabilities, 0x20, 0x20, true, 0xae44fa6439072590)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V3_A.IdentityTracking", identity_tracking, 0x40, 0x20, true, 0x18c65ec5bc2f12a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V3_A.ImpersonationType", impersonation_type, 0x60, 0x20, true, 0x9d27435646b8d97b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V3_A.AdditionalSecurityInfoType", additional_security_info_type, 0x80, 0x20, true, 0xcbf1d49105d692f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::http_transport_credentials_a_t*), "_RPC_SECURITY_QOS_V3_A.HttpCredentials", http_credentials, 0xc0, 0x40, true, 0x3eef73ea7749fae6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_SECURITY_QOS_V3_A.Sid", sid, 0x100, 0x40, true, 0xac48a5bb70f9b65d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif