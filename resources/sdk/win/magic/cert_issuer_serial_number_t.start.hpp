#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_ISSUER_SERIAL_NUMBER.Issuer", issuer, 0x0, 0x80, true, 0xc59723cf08e80ce6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_ISSUER_SERIAL_NUMBER.SerialNumber", serial_number, 0x80, 0x80, true, 0xfc114ecfa7f30413)
#else
#define _m00
#define _m01
#endif