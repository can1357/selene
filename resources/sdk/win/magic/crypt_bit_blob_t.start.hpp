#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_BIT_BLOB.cbData", cb_data, 0x0, 0x20, true, 0x992ea472c796f3dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CRYPT_BIT_BLOB.pbData", pb_data, 0x40, 0x40, true, 0xb55fcbb844588729)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_BIT_BLOB.cUnusedBits", c_unused_bits, 0x80, 0x20, true, 0x9c87b267648dae33)
#else
#define _m00
#define _m01
#define _m02
#endif