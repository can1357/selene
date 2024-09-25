#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_COMPRESSION.RatioNumerator", ratio_numerator, 0x0, 0x0, false, 0xab9f4723138f33ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_COMPRESSION.RatioDenominator", ratio_denominator, 0x0, 0x0, false, 0x6dced8dc347253a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_COMPRESSION.RatioConstantMargin", ratio_constant_margin, 0x0, 0x0, false, 0xe18e441cbe629331)
#else
#define _m00
#define _m01
#define _m02
#endif