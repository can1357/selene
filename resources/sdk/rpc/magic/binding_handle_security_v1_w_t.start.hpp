#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_SECURITY_V1_W.Version", version, 0x0, 0x20, true, 0xe17f821742cee16c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RPC_BINDING_HANDLE_SECURITY_V1_W.ServerPrincName", server_princ_name, 0x40, 0x40, true, 0xc9a4ba02d75fa870)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_SECURITY_V1_W.AuthnLevel", authn_level, 0x80, 0x20, true, 0x3b3ba52d0eeb039f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_SECURITY_V1_W.AuthnSvc", authn_svc, 0xa0, 0x20, true, 0x601ffe0b4095447f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_w_t*), "_RPC_BINDING_HANDLE_SECURITY_V1_W.AuthIdentity", auth_identity, 0xc0, 0x40, true, 0x5cb306e9b3bcf41b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::security_qos_t*), "_RPC_BINDING_HANDLE_SECURITY_V1_W.SecurityQos", security_qos, 0x100, 0x40, true, 0x288373fdc6aae351)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif