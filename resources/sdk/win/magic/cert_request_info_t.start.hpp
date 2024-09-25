#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REQUEST_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0xe9fc61d252de0eda)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_REQUEST_INFO.Subject", subject, 0x40, 0x80, true, 0xc6d5c7b130c886af)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_public_key_info_t), "_CERT_REQUEST_INFO.SubjectPublicKeyInfo", subject_public_key_info, 0xc0, 0x80, true, 0x5136e28aba600cb0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REQUEST_INFO.cAttribute", c_attribute, 0x240, 0x20, true, 0x5514463148f38696)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_t*), "_CERT_REQUEST_INFO.rgAttribute", rg_attribute, 0x280, 0x40, true, 0x489a2a8224090e95)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif