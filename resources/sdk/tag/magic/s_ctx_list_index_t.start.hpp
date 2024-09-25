#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tagSCtxListIndex.idx", idx, 0x0, 0x20, true, 0x993199a724cdf2fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tagSCtxListIndex.next", next, 0x20, 0x20, true, 0x5622985bc76cab18)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tagSCtxListIndex.prev", prev, 0x40, 0x20, true, 0xd1d85a9871b1144d)
#else
#define _m00
#define _m01
#define _m02
#endif