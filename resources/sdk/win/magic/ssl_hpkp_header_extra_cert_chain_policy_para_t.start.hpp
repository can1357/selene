#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x2db80417bdcd69c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA.dwReserved", dw_reserved, 0x20, 0x20, true, 0xdba0dcfaa796b17e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA.pwszServerName", pwsz_server_name, 0x40, 0x40, true, 0x4047cc677b84161b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char*, 2>), "_SSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA.rgpszHpkpValue", rgpsz_hpkp_value, 0x80, 0x80, true, 0x914558c43e3bf9d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif