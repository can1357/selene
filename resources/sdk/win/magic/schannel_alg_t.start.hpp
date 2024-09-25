#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_ALG.dwUse", dw_use, 0x0, 0x20, true, 0xef2fe04f319da40d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_ALG.Algid", algid, 0x20, 0x20, true, 0x28c204067301b43d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_ALG.cBits", c_bits, 0x40, 0x20, true, 0x2b72b3f5c5bd251f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_ALG.dwFlags", dw_flags, 0x60, 0x20, true, 0xa5bf9b955e88e917)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCHANNEL_ALG.dwReserved", dw_reserved, 0x80, 0x20, true, 0xc1f14f8bb00f875f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif