#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FtmMarshaledObjectContainer._capacity", capacity, 0x20, 0x20, true, 0x496a84966a1a0196)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FtmMarshaledObjectContainer._count", count, 0x40, 0x20, true, 0x1cb286c76c42aa0a)
#else
#define _m00
#define _m01
#endif