#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_X942_DH_PARAMETERS.p", p, 0x0, 0x80, true, 0x4d4f10409b793fed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_X942_DH_PARAMETERS.g", g, 0x80, 0x80, true, 0x9c1aff6095916fe6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_X942_DH_PARAMETERS.q", q, 0x100, 0x80, true, 0xb48741c9e7ca01eb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_X942_DH_PARAMETERS.j", j, 0x180, 0x80, true, 0x6231b78c9943c21d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_x942_dh_validation_params_t*), "_CERT_X942_DH_PARAMETERS.pValidationParams", p_validation_params, 0x200, 0x40, true, 0x974264491fbd3dec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif