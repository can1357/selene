#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_LEVEL_TRIM_RANGE.Offset", offset, 0x0, 0x40, true, 0x21f4e154c4ba5203)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_LEVEL_TRIM_RANGE.Length", length, 0x40, 0x40, true, 0xf5c16fc844c00940)
#else
#define _m00
#define _m01
#endif