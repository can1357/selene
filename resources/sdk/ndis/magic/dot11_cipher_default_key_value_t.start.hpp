#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_CIPHER_DEFAULT_KEY_VALUE.Header", header, 0x0, 0x20, true, 0x364bf218571528c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_CIPHER_DEFAULT_KEY_VALUE.uKeyIndex", u_key_index, 0x20, 0x20, true, 0xf153b81ae670ae54)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_cipher_algorithm_t), "DOT11_CIPHER_DEFAULT_KEY_VALUE.AlgorithmId", algorithm_id, 0x40, 0x20, true, 0xe104116ad2e9425e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "DOT11_CIPHER_DEFAULT_KEY_VALUE.MacAddr", mac_addr, 0x60, 0x30, true, 0xff92c575e3d848da)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_CIPHER_DEFAULT_KEY_VALUE.bDelete", b_delete, 0x90, 0x8, true, 0xc525804d23da733)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_CIPHER_DEFAULT_KEY_VALUE.bStatic", b_static, 0x98, 0x8, true, 0x5353c1e2ccfb823f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "DOT11_CIPHER_DEFAULT_KEY_VALUE.usKeyLength", us_key_length, 0xa0, 0x10, true, 0xb0bb44ad16e741f1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "DOT11_CIPHER_DEFAULT_KEY_VALUE.ucKey", uc_key, 0xb0, 0x8, true, 0x509120234cd1a06f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif