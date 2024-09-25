#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ZERO_COST_COUNTS.NativeSum", native_sum, 0x0, 0x40, true, 0x892c071de7ae1449)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ZERO_COST_COUNTS.CachedSum", cached_sum, 0x40, 0x40, true, 0x61f28b56e72db9ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ZERO_COST_COUNTS.AlternateSum", alternate_sum, 0x0, 0x0, false, 0xff0f489162248505)
#else
#define _m00
#define _m01
#define _m02
#endif