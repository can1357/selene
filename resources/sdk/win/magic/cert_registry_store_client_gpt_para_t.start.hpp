#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hkey_t*), "_CERT_REGISTRY_STORE_CLIENT_GPT_PARA.hKeyBase", h_key_base, 0x0, 0x40, true, 0x48cdbd78be374952)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_REGISTRY_STORE_CLIENT_GPT_PARA.pwszRegPath", pwsz_reg_path, 0x40, 0x40, true, 0xeb309c57c54c286e)
#else
#define _m00
#define _m01
#endif