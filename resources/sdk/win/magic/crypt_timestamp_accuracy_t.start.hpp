#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_ACCURACY.dwSeconds", dw_seconds, 0x0, 0x20, true, 0x67e31d6db1e227f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_ACCURACY.dwMillis", dw_millis, 0x20, 0x20, true, 0xe0453356cb24db5e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_TIMESTAMP_ACCURACY.dwMicros", dw_micros, 0x40, 0x20, true, 0x9ec90e64ba1bee70)
#else
#define _m00
#define _m01
#define _m02
#endif