#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_BIG_DATA.Signature", signature, 0x0, 0x10, true, 0x9bc8c34eea4226d6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_BIG_DATA.Count", count, 0x10, 0x10, true, 0xaf22003c2adda24a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_BIG_DATA.List", list, 0x20, 0x20, true, 0x27fbe7ad3f0929b9)
#else
#define _m00
#define _m01
#define _m02
#endif