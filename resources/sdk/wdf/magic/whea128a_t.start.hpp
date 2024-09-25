#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA128A.Low", low, 0x0, 0x40, true, 0x758f75ccd631753f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WHEA128A.High", high, 0x40, 0x40, true, 0x592f1ed3ffc3c3aa)
#else
#define _m00
#define _m01
#endif