#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "InFrame.P1Home", p1_home, 0x0, 0x40, true, 0x47b411c9d164c807)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "InFrame.P2Home", p2_home, 0x40, 0x40, true, 0x4acbf3e5a7fb2544)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "InFrame.P3Home", p3_home, 0x80, 0x40, true, 0xf5232decb4e3e8fb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "InFrame.P4Home", p4_home, 0xc0, 0x40, true, 0x2b0909445f34ac3e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "InFrame.SavedRbp", saved_rbp, 0x100, 0x40, true, 0x3b3267ccaa75cbb2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "InFrame.SavedRsi", saved_rsi, 0x140, 0x40, true, 0x83c9c150c5295eb3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "InFrame.SavedRdi", saved_rdi, 0x180, 0x40, true, 0xc70be572c0857d53)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif