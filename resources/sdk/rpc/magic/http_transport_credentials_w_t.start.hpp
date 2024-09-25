#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::winnt_auth_identity_w_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_W.TransportCredentials", transport_credentials, 0x0, 0x40, true, 0x9ef411f6008423a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_W.Flags", flags, 0x40, 0x20, true, 0x56ac648e049385d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_W.AuthenticationTarget", authentication_target, 0x60, 0x20, true, 0x2e08c89ef6428ea3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_HTTP_TRANSPORT_CREDENTIALS_W.NumberOfAuthnSchemes", number_of_authn_schemes, 0x80, 0x20, true, 0x7aa94ac08885054b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_W.AuthnSchemes", authn_schemes, 0xc0, 0x40, true, 0x5141d3a4a0216e79)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RPC_HTTP_TRANSPORT_CREDENTIALS_W.ServerCertificateSubject", server_certificate_subject, 0x100, 0x40, true, 0x3c3413601e39b911)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif