#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_LOGOTYPE_DETAILS.pwszMimeType", pwsz_mime_type, 0x0, 0x40, true, 0x8059328f4b137f62)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_DETAILS.cHashedUrl", c_hashed_url, 0x40, 0x20, true, 0xf813a98aa97d762d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_hashed_url_t*), "_CERT_LOGOTYPE_DETAILS.rgHashedUrl", rg_hashed_url, 0x80, 0x40, true, 0x73b71562ff21665d)
#else
#define _m00
#define _m01
#define _m02
#endif