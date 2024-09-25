#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A.TransportCredentials", transport_credentials, 0x0, 0x40, true, 0xda1c62be46df2d08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A.Flags", flags, 0x40, 0x20, true, 0xbf1060f609697dd7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A.AuthenticationTarget", authentication_target, 0x60, 0x20, true, 0x24468712b4d5729e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A.NumberOfAuthnSchemes", number_of_authn_schemes, 0x80, 0x20, true, 0xef9e6352bd23d64d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A.AuthnSchemes", authn_schemes, 0xc0, 0x40, true, 0x871760be34bdb827)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A.ServerCertificateSubject", server_certificate_subject, 0x100, 0x40, true, 0x961d99d1b767c938)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A.ProxyCredentials", proxy_credentials, 0x140, 0x40, true, 0x1f1e7f4c95d124c8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A.NumberOfProxyAuthnSchemes", number_of_proxy_authn_schemes, 0x180, 0x20, true, 0xd113c54a903add3e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A.ProxyAuthnSchemes", proxy_authn_schemes, 0x1c0, 0x40, true, 0x7d4c7e606691730f)
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