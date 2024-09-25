#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_AUTHORITY_KEY_ID_INFO.KeyId", key_id, 0x0, 0x80, true, 0x5ca378a02ef155c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_AUTHORITY_KEY_ID_INFO.CertIssuer", cert_issuer, 0x80, 0x80, true, 0x5ccb78eba4fad27d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_AUTHORITY_KEY_ID_INFO.CertSerialNumber", cert_serial_number, 0x100, 0x80, true, 0x286dd8d80ef2a308)
#else
#define _m00
#define _m01
#define _m02
#endif