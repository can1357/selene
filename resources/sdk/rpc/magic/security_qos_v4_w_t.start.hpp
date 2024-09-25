#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_W.Version", version, 0x0, 0x20, true, 0x937ef021cd31f4fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_W.Capabilities", capabilities, 0x20, 0x20, true, 0x7001cb04a9b9596b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_W.IdentityTracking", identity_tracking, 0x40, 0x20, true, 0xcf11ecdd2f0a74b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_W.ImpersonationType", impersonation_type, 0x60, 0x20, true, 0xc40d329e8584402a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_W.AdditionalSecurityInfoType", additional_security_info_type, 0x80, 0x20, true, 0x356d7a3e38c7fae0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::http_transport_credentials_w_t*), "_RPC_SECURITY_QOS_V4_W.HttpCredentials", http_credentials, 0xc0, 0x40, true, 0x994657425d98801)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_SECURITY_QOS_V4_W.Sid", sid, 0x100, 0x40, true, 0xfd8a6787ca912b03)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SECURITY_QOS_V4_W.EffectiveOnly", effective_only, 0x140, 0x20, true, 0xec7f3a3faa6bbf4b)
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