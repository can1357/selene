#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSAPUBKEY.magic", magic, 0x0, 0x20, true, 0xcc249f37d2bf969d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSAPUBKEY.bitlen", bitlen, 0x20, 0x20, true, 0x4bafc3c856182c79)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSAPUBKEY.pubexp", pubexp, 0x40, 0x20, true, 0x512c22fa8a737b21)
#else
#define _m00
#define _m01
#define _m02
#endif