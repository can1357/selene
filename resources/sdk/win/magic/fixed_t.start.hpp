#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FIXED.fract", fract, 0x0, 0x10, true, 0x70a115ad58a2fec0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_FIXED.value", value, 0x10, 0x10, true, 0x4b60259f84a932ba)
#else
#define _m00
#define _m01
#endif