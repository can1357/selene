#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W.TransportCredentials", transport_credentials, 0x0, 0x40, true, 0xcb58f5ffff1899cd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W.Flags", flags, 0x40, 0x20, true, 0xedc53dd7ade6df02)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W.AuthenticationTarget", authentication_target, 0x60, 0x20, true, 0x469fd8d817131762)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W.NumberOfAuthnSchemes", number_of_authn_schemes, 0x80, 0x20, true, 0x5d701c30d00b0f81)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W.AuthnSchemes", authn_schemes, 0xc0, 0x40, true, 0xc09a4cfc0eb7e1ac)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W.ServerCertificateSubject", server_certificate_subject, 0x100, 0x40, true, 0xb8b1b44a183c86f3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W.ProxyCredentials", proxy_credentials, 0x140, 0x40, true, 0x8b28391cc9b18691)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W.NumberOfProxyAuthnSchemes", number_of_proxy_authn_schemes, 0x180, 0x20, true, 0x5274e01b5cfd53ac)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W.ProxyAuthnSchemes", proxy_authn_schemes, 0x1c0, 0x40, true, 0xa3533397a9ba0235)
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