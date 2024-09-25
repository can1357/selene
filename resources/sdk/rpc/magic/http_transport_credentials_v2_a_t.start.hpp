#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_a_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A.TransportCredentials", transport_credentials, 0x0, 0x40, true, 0xc0891d1693531796)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A.Flags", flags, 0x40, 0x20, true, 0x554f70866537f76c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A.AuthenticationTarget", authentication_target, 0x60, 0x20, true, 0xd34c8521830835ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A.NumberOfAuthnSchemes", number_of_authn_schemes, 0x80, 0x20, true, 0xe7c0ac772ab7f726)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A.AuthnSchemes", authn_schemes, 0xc0, 0x40, true, 0x24603269de1530c5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A.ServerCertificateSubject", server_certificate_subject, 0x100, 0x40, true, 0xa504809be76934f4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_a_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A.ProxyCredentials", proxy_credentials, 0x140, 0x40, true, 0xb7e4fcf8b878fe8c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A.NumberOfProxyAuthnSchemes", number_of_proxy_authn_schemes, 0x180, 0x20, true, 0x7a10ff31aecad567)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A.ProxyAuthnSchemes", proxy_authn_schemes, 0x1c0, 0x40, true, 0x8930fd447da00c10)
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