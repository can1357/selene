#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SecHandle.dwLower", dw_lower, 0x0, 0x40, true, 0xd3b569c3e78502b0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SecHandle.dwUpper", dw_upper, 0x40, 0x40, true, 0xa47b112e50155a5e)
#else
#define _m00
#define _m01
#endif