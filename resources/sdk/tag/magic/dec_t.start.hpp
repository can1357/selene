#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagDEC.wReserved", w_reserved, 0x0, 0x10, true, 0x4c7c1c37bde610dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagDEC.scale", scale, 0x10, 0x8, true, 0xed5404f444b5140d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagDEC.sign", sign, 0x18, 0x8, true, 0xc0b74ff93850384d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagDEC.signscale", signscale, 0x10, 0x10, true, 0xb27a40b55477006)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDEC.Hi32", hi32, 0x20, 0x20, true, 0x1ecb3912926e27db)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDEC.Lo32", lo32, 0x40, 0x20, true, 0x17c795a3c7d82b7a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDEC.Mid32", mid32, 0x60, 0x20, true, 0x269835115db1b507)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagDEC.Lo64", lo64, 0x40, 0x40, true, 0x3f32c15504c8b7e7)
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