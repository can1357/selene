#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_TIME_STAMP_REQUEST_INFO.pszTimeStampAlgorithm", psz_time_stamp_algorithm, 0x0, 0x40, true, 0x66c77a530862c134)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_TIME_STAMP_REQUEST_INFO.pszContentType", psz_content_type, 0x40, 0x40, true, 0x65ad282c94426e16)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_TIME_STAMP_REQUEST_INFO.Content", content, 0x80, 0x80, true, 0x5d8c5a58394c27cd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIME_STAMP_REQUEST_INFO.cAttribute", c_attribute, 0x100, 0x20, true, 0xba295769c4f05311)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_t*), "_CRYPT_TIME_STAMP_REQUEST_INFO.rgAttribute", rg_attribute, 0x140, 0x40, true, 0x2c1fa8dfaf19a127)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif