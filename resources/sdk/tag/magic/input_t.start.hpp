#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagINPUT.type", type, 0x0, 0x20, true, 0xa35aeac134d18f64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::mouseinput_t), "tagINPUT.mi", mi, 0x40, 0x0, true, 0x53d3954d37f99ec7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::keybdinput_t), "tagINPUT.ki", ki, 0x40, 0xc0, true, 0x464bc6029fb803fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::hardwareinput_t), "tagINPUT.hi", hi, 0x40, 0x40, true, 0xf4ba0d3c84743fe6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif