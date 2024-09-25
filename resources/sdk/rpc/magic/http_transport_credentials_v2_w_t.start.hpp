#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_w_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W.TransportCredentials", transport_credentials, 0x0, 0x40, true, 0x71b12cfdf068e115)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W.Flags", flags, 0x40, 0x20, true, 0x569ae40b93117259)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W.AuthenticationTarget", authentication_target, 0x60, 0x20, true, 0xccb5eeba413d0af4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W.NumberOfAuthnSchemes", number_of_authn_schemes, 0x80, 0x20, true, 0xec1da707a8935f8b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W.AuthnSchemes", authn_schemes, 0xc0, 0x40, true, 0xbf24ddaf3d26cca8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W.ServerCertificateSubject", server_certificate_subject, 0x100, 0x40, true, 0xd44912322efbe260)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_w_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W.ProxyCredentials", proxy_credentials, 0x140, 0x40, true, 0x90ae2d7b543d75f1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W.NumberOfProxyAuthnSchemes", number_of_proxy_authn_schemes, 0x180, 0x20, true, 0xff358fe665669eee)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W.ProxyAuthnSchemes", proxy_authn_schemes, 0x1c0, 0x40, true, 0xb3e500a8f116897)
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