#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint9_t), "_FILEOFFSET_INFORMATION.DontUse", dont_use, 0x0, 0x9, true, 0x1950fe9ee55fa652, 9, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint48_t), "_FILEOFFSET_INFORMATION.Offset", offset, 0x9, 0x30, true, 0x8941b2f87608af9b, 48, uint64_t)
#else
#define _m00
#define _m01
#endif