#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_GROUP_AFFINITY.Mask", mask, 0x0, 0x0, false, 0xc238cbb483b7bd3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_GROUP_AFFINITY.Group", group, 0x0, 0x0, false, 0xf5ca8aebd8dfe0a7)
#else
#define _m00
#define _m01
#endif