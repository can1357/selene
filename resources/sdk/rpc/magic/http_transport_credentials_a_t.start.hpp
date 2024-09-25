#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_a_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_A.TransportCredentials", transport_credentials, 0x0, 0x40, true, 0xf9735fef48a53ba2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_A.Flags", flags, 0x40, 0x20, true, 0x209c8b7b4b36f045)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_A.AuthenticationTarget", authentication_target, 0x60, 0x20, true, 0xe4ee5c22f5ddffb7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_A.NumberOfAuthnSchemes", number_of_authn_schemes, 0x80, 0x20, true, 0x2adc6dd9fea02ac5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_A.AuthnSchemes", authn_schemes, 0xc0, 0x40, true, 0x8ddab3f15ffb7889)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_A.ServerCertificateSubject", server_certificate_subject, 0x100, 0x40, true, 0xe8215c9a6f5fa6f8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif