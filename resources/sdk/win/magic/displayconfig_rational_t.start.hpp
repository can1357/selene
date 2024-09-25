#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_RATIONAL.Numerator", numerator, 0x0, 0x20, true, 0x5913d2a6f5a0428e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_RATIONAL.Denominator", denominator, 0x20, 0x20, true, 0x3bfa95c41384dac0)
#else
#define _m00
#define _m01
#endif