#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LUID.LowPart", low_part, 0x0, 0x20, true, 0xe956066a0fcb703e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_LUID.HighPart", high_part, 0x20, 0x20, true, 0x5652d8d9aaba8e11)
#else
#define _m00
#define _m01
#endif