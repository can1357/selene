#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_ID.dwIdChoice", dw_id_choice, 0x0, 0x20, true, 0x1c40cd39282293ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_issuer_serial_number_t), "_CERT_ID.IssuerSerialNumber", issuer_serial_number, 0x40, 0x0, true, 0x41cb3fd851404f82)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_ID.KeyId", key_id, 0x40, 0x80, true, 0x66ca35ad361f08e1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_ID.HashId", hash_id, 0x40, 0x80, true, 0x78b1c32720cc1491)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif