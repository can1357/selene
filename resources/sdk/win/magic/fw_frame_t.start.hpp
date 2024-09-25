#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FwFrame.P1Home", p1_home, 0x0, 0x40, true, 0x4d4256752d15bae7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FwFrame.P2Home", p2_home, 0x40, 0x40, true, 0x33ede0fc6303e50d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FwFrame.P3Home", p3_home, 0x80, 0x40, true, 0xf60ae9f63548ac9b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FwFrame.P4Home", p4_home, 0xc0, 0x40, true, 0x1e5ba3246e004313)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FwFrame.SavedRcx", saved_rcx, 0x100, 0x40, true, 0x9d2139d4b0934424)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FwFrame.SavedRdx", saved_rdx, 0x140, 0x40, true, 0x8ae81f1559c5f004)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FwFrame.SavedR8", saved_r8, 0x180, 0x40, true, 0x2aef7b63361cdf1f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FwFrame.SavedR9", saved_r9, 0x1c0, 0x40, true, 0x322ae05ffbc3f241)
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