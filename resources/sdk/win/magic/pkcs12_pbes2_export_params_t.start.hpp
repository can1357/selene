#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PKCS12_PBES2_EXPORT_PARAMS.dwSize", dw_size, 0x0, 0x20, true, 0x5fe03e414f29234)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PKCS12_PBES2_EXPORT_PARAMS.hNcryptDescriptor", h_ncrypt_descriptor, 0x40, 0x40, true, 0xe94e1eb69e79a8fb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PKCS12_PBES2_EXPORT_PARAMS.pwszPbes2Alg", pwsz_pbes2_alg, 0x80, 0x40, true, 0xe110716fbca92727)
#else
#define _m00
#define _m01
#define _m02
#endif