#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RIP_INFO.dwError", dw_error, 0x0, 0x20, true, 0xdc2d17657cdbae75)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RIP_INFO.dwType", dw_type, 0x20, 0x20, true, 0xa4b10af74da4d6b0)
#else
#define _m00
#define _m01
#endif