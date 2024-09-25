#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_magic", e_magic, 0x0, 0x10, true, 0x63f30627c379631d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_cblp", e_cblp, 0x10, 0x10, true, 0xe5dd4952a42a45b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_cp", e_cp, 0x20, 0x10, true, 0x6e5b805c515b4678)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_crlc", e_crlc, 0x30, 0x10, true, 0xab43360b3c096260)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_cparhdr", e_cparhdr, 0x40, 0x10, true, 0xde8b28330bf4e85e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_minalloc", e_minalloc, 0x50, 0x10, true, 0x51bdd6a5d0263a89)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_maxalloc", e_maxalloc, 0x60, 0x10, true, 0xfed77d9ee686fd17)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_ss", e_ss, 0x70, 0x10, true, 0x860b1fc05dbd8662)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_sp", e_sp, 0x80, 0x10, true, 0x4004235fdc39a959)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_csum", e_csum, 0x90, 0x10, true, 0x615e198c4195d146)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_ip", e_ip, 0xa0, 0x10, true, 0x837e982bce39795e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_cs", e_cs, 0xb0, 0x10, true, 0x414a61a350e2e0b2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_lfarlc", e_lfarlc, 0xc0, 0x10, true, 0xac2ca3d8420edf99)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_ovno", e_ovno, 0xd0, 0x10, true, 0x10c3f082bf142214)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_IMAGE_DOS_HEADER.e_res", e_res, 0xe0, 0x40, true, 0x21e2610f77cce10d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_oemid", e_oemid, 0x120, 0x10, true, 0xa66e8bce2a7a77fa)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DOS_HEADER.e_oeminfo", e_oeminfo, 0x130, 0x10, true, 0x53b6a41688168841)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 10>), "_IMAGE_DOS_HEADER.e_res2", e_res2, 0x140, 0xa0, true, 0x8398d34c6c04d312)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IMAGE_DOS_HEADER.e_lfanew", e_lfanew, 0x1e0, 0x20, true, 0xe9b332ca654114fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif