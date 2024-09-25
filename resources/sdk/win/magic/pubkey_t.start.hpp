#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBKEY.magic", magic, 0x0, 0x20, true, 0xbb1ba700dc18b11c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBKEY.bitlen", bitlen, 0x20, 0x20, true, 0x668c45c54bad8ddb)
#else
#define _m00
#define _m01
#endif