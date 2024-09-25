#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FLOAT128.LowPart", low_part, 0x0, 0x40, true, 0x5b40afa1c03b079e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FLOAT128.HighPart", high_part, 0x40, 0x40, true, 0xdb9339b74bc0c01d)
#else
#define _m00
#define _m01
#endif