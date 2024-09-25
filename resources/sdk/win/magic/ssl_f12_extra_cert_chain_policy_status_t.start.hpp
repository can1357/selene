#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS.cbSize", cb_size, 0x0, 0x20, true, 0x89ae6d34b02d32dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS.dwErrorLevel", dw_error_level, 0x20, 0x20, true, 0xf32ec1d68cde894e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS.dwErrorCategory", dw_error_category, 0x40, 0x20, true, 0x6a87167ea8e91433)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS.dwReserved", dw_reserved, 0x60, 0x20, true, 0x4fcbd344c493193f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS.wszErrorText", wsz_error_text, 0x80, 0x0, true, 0x7f4b827716f50f79)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif