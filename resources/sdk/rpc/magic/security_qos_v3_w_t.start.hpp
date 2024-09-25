#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V3_W.Version", version, 0x0, 0x20, true, 0xb116b4fa8fd54ee8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V3_W.Capabilities", capabilities, 0x20, 0x20, true, 0xb9816bf7ece85fc2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V3_W.IdentityTracking", identity_tracking, 0x40, 0x20, true, 0xc37ab8b8806fa94c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V3_W.ImpersonationType", impersonation_type, 0x60, 0x20, true, 0xa9911f001b24af3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V3_W.AdditionalSecurityInfoType", additional_security_info_type, 0x80, 0x20, true, 0xc866f74dbf9b8dc1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::http_transport_credentials_w_t*), "_RPC_SECURITY_QOS_V3_W.HttpCredentials", http_credentials, 0xc0, 0x40, true, 0xcb7b6d09e109681a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_SECURITY_QOS_V3_W.Sid", sid, 0x100, 0x40, true, 0x59937d9b4ab0b243)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif