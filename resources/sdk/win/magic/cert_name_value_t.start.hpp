#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_NAME_VALUE.dwValueType", dw_value_type, 0x0, 0x20, true, 0x30a99066da2a6b3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_NAME_VALUE.Value", value, 0x40, 0x80, true, 0xde04bf83436b0e9b)
#else
#define _m00
#define _m01
#endif