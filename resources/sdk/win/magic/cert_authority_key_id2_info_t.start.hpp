#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_AUTHORITY_KEY_ID2_INFO.KeyId", key_id, 0x0, 0x80, true, 0xa3a8cff6e7e5a404)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_alt_name_info_t), "_CERT_AUTHORITY_KEY_ID2_INFO.AuthorityCertIssuer", authority_cert_issuer, 0x80, 0x80, true, 0x3b69dd020f6a66d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_AUTHORITY_KEY_ID2_INFO.AuthorityCertSerialNumber", authority_cert_serial_number, 0x100, 0x80, true, 0x78beb2c02ba10629)
#else
#define _m00
#define _m01
#define _m02
#endif