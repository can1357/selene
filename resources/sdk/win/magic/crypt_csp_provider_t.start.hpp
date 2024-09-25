#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_CSP_PROVIDER.dwKeySpec", dw_key_spec, 0x0, 0x20, true, 0x9058b750a51999ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_CSP_PROVIDER.pwszProviderName", pwsz_provider_name, 0x40, 0x40, true, 0xa31f789785641e72)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CRYPT_CSP_PROVIDER.Signature", signature, 0x80, 0xc0, true, 0x2d5ec4a0464c38c9)
#else
#define _m00
#define _m01
#define _m02
#endif