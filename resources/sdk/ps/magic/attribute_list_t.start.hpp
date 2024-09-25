#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_ATTRIBUTE_LIST.TotalLength", total_length, 0x0, 0x40, true, 0x595e12fad9b4c23c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct ps::attribute_t, 1>), "_PS_ATTRIBUTE_LIST.Attributes", attributes, 0x40, 0x0, true, 0xc1ebb112fd4b11d2)
#else
#define _m00
#define _m01
#endif