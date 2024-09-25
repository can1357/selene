#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_SUBSEGMENT_STAT.Index", index, 0x0, 0x8, true, 0x2230d45890d76fd5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_LFH_SUBSEGMENT_STAT.Count", count, 0x8, 0x8, true, 0x69924c314a9d6bd5)
#else
#define _m00
#define _m01
#endif