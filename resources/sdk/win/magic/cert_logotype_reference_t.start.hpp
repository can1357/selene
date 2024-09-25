#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_LOGOTYPE_REFERENCE.cHashedUrl", c_hashed_url, 0x0, 0x20, true, 0x243ec9c400b2c305)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_hashed_url_t*), "_CERT_LOGOTYPE_REFERENCE.rgHashedUrl", rg_hashed_url, 0x40, 0x40, true, 0xee1dbda8b51eaa85)
#else
#define _m00
#define _m01
#endif