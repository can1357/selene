#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_STATUS.cbSize", cb_size, 0x0, 0x20, true, 0x5d18dd44765e25c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_STATUS.lError", l_error, 0x20, 0x20, true, 0x142793b4436b5f18)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 512>), "_SSL_KEY_PIN_EXTRA_CERT_CHAIN_POLICY_STATUS.wszErrorText", wsz_error_text, 0x40, 0x0, true, 0x65c666f1d255ea99)
#else
#define _m00
#define _m01
#define _m02
#endif