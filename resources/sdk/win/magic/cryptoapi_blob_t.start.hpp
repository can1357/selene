#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTOAPI_BLOB.cbData", cb_data, 0x0, 0x20, true, 0xacaf44b2d4c432c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CRYPTOAPI_BLOB.pbData", pb_data, 0x40, 0x40, true, 0xeb09aebfeaeb38d0)
#else
#define _m00
#define _m01
#endif