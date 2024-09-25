#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_SECURITY_V1_A.Version", version, 0x0, 0x20, true, 0x95b6ffb3f5bfb984)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RPC_BINDING_HANDLE_SECURITY_V1_A.ServerPrincName", server_princ_name, 0x40, 0x40, true, 0x9ea2d7fb97024987)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_SECURITY_V1_A.AuthnLevel", authn_level, 0x80, 0x20, true, 0xa8c27aa3e6908efb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_SECURITY_V1_A.AuthnSvc", authn_svc, 0xa0, 0x20, true, 0xeb2463e354df3bac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_a_t*), "_RPC_BINDING_HANDLE_SECURITY_V1_A.AuthIdentity", auth_identity, 0xc0, 0x40, true, 0x7687d4191d67c404)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::security_qos_t*), "_RPC_BINDING_HANDLE_SECURITY_V1_A.SecurityQos", security_qos, 0x100, 0x40, true, 0xb6621237b4a1ac7c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif