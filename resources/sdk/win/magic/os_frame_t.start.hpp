#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "OsFrame.P1Home", p1_home, 0x0, 0x40, true, 0xf6a6af828f97be8e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "OsFrame.P2Home", p2_home, 0x40, 0x40, true, 0x1f44e0b65162e453)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "OsFrame.P3Home", p3_home, 0x80, 0x40, true, 0xa417b76afd666a91)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "OsFrame.P4Home", p4_home, 0xc0, 0x40, true, 0x4f19da5886d62294)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "OsFrame.SavedXmm0", saved_xmm0, 0x100, 0x40, true, 0x49810cc38fcfe7fd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "OsFrame.SavedXmm1", saved_xmm1, 0x140, 0x40, true, 0x3f5047875dc8350)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "OsFrame.SavedXmm2", saved_xmm2, 0x180, 0x40, true, 0x37888fc120d0021a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "OsFrame.SavedXmm3", saved_xmm3, 0x1c0, 0x40, true, 0x67ee32d08bad335d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif