#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_KEY_CONTEXT.cbSize", cb_size, 0x0, 0x20, true, 0x5e0789205b1be9df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CERT_KEY_CONTEXT.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x7e962f27c4debd6c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CERT_KEY_CONTEXT.hNCryptKey", h_n_crypt_key, 0x40, 0x40, true, 0xd1e445c17305da2c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_KEY_CONTEXT.dwKeySpec", dw_key_spec, 0x80, 0x20, true, 0x3192793445bb9a4f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif