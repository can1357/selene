#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "QFrame.P1Home", p1_home, 0x0, 0x0, false, 0x256e61f9de3e393)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "QFrame.P2Home", p2_home, 0x0, 0x0, false, 0xcbb19712c006eaef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "QFrame.P3Home", p3_home, 0x0, 0x0, false, 0x4d5fe283703e3427)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "QFrame.P4Home", p4_home, 0x0, 0x0, false, 0x5cebce278dca376d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint128_t), "QFrame.SavedXmm0", saved_xmm0, 0x0, 0x0, false, 0xa5b170f320990224)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "QFrame.SavedRax", saved_rax, 0x0, 0x0, false, 0x78ba07acf4d033c0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "QFrame.SavedRcx", saved_rcx, 0x0, 0x0, false, 0x68b872090551973d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "QFrame.SavedRdx", saved_rdx, 0x0, 0x0, false, 0xfddf0700070ceb48)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "QFrame.SavedR8", saved_r8, 0x0, 0x0, false, 0xd87900acfc81376f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "QFrame.SavedR9", saved_r9, 0x0, 0x0, false, 0x19f60b000039b43b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "QFrame.ReturnAddress", return_address, 0x0, 0x0, false, 0x935f968b4a344845)
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
#endif