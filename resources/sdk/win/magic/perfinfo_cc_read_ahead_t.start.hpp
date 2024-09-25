#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_READ_AHEAD.WorkItemKey", work_item_key, 0x0, 0x40, true, 0xbc433027823bb43d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_READ_AHEAD.FileOffset", file_offset, 0x40, 0x40, true, 0xdac691c0c7555325)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_READ_AHEAD.Size", size, 0x80, 0x20, true, 0x9a57da3e9d5e165d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_READ_AHEAD.PagePriority", page_priority, 0xa0, 0x20, true, 0x4429ce96d5787768)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_READ_AHEAD.DetectedPattern", detected_pattern, 0xc0, 0x20, true, 0x66f30ad838da2106)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif