#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V2_A.Version", version, 0x0, 0x20, true, 0xd62e6c5fb4badcf8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V2_A.Capabilities", capabilities, 0x20, 0x20, true, 0xc5a001e77ad96fcb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V2_A.IdentityTracking", identity_tracking, 0x40, 0x20, true, 0xd8e5c350186021f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V2_A.ImpersonationType", impersonation_type, 0x60, 0x20, true, 0x741a8a2514e933f4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V2_A.AdditionalSecurityInfoType", additional_security_info_type, 0x80, 0x20, true, 0xd1392bd1764f3d95)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::http_transport_credentials_a_t*), "_RPC_SECURITY_QOS_V2_A.HttpCredentials", http_credentials, 0xc0, 0x40, true, 0x2a22857ffc03197e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif