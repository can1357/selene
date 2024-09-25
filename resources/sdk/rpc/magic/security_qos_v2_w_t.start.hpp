#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V2_W.Version", version, 0x0, 0x20, true, 0x2282459aa1caf31c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V2_W.Capabilities", capabilities, 0x20, 0x20, true, 0x6025dd06146ff3b3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V2_W.IdentityTracking", identity_tracking, 0x40, 0x20, true, 0x830f5b47548b8f49)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V2_W.ImpersonationType", impersonation_type, 0x60, 0x20, true, 0x93675584afe58813)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V2_W.AdditionalSecurityInfoType", additional_security_info_type, 0x80, 0x20, true, 0x8061609b4eac1664)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::http_transport_credentials_w_t*), "_RPC_SECURITY_QOS_V2_W.HttpCredentials", http_credentials, 0xc0, 0x40, true, 0xd6a42a551d9c4df)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif