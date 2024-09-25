#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMETARECORD.rdSize", rd_size, 0x0, 0x20, true, 0xedfbe9a99ba57123)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagMETARECORD.rdFunction", rd_function, 0x20, 0x10, true, 0x70d1ab3b5292b1df)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "tagMETARECORD.rdParm", rd_parm, 0x30, 0x10, true, 0x11f133dc4ecfc6f4)
#else
#define _m00
#define _m01
#define _m02
#endif