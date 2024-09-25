#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "IcFrame.P1Home", p1_home, 0x0, 0x40, true, 0xa2a6638b28883064)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "IcFrame.P2Home", p2_home, 0x40, 0x40, true, 0xceb569290e869783)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "IcFrame.P3Home", p3_home, 0x80, 0x40, true, 0x48ee4c12031bcaef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "IcFrame.P4Home", p4_home, 0xc0, 0x40, true, 0x341874e4df4bc716)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif