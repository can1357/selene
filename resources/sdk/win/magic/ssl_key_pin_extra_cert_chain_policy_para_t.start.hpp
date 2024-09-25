#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xb386983c0a463e6f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_PARA.dwReserved", dw_reserved, 0x20, 0x20, true, 0x194098e47377ef83)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_PARA.pwszServerName", pwsz_server_name, 0x40, 0x40, true, 0x7309e00abf461577)
#else
#define _m00
#define _m01
#define _m02
#endif