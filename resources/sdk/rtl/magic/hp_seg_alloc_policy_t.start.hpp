#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HP_SEG_ALLOC_POLICY.MinLargePages", min_large_pages, 0x0, 0x40, true, 0x558b28eb1c1bbf1a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HP_SEG_ALLOC_POLICY.MaxLargePages", max_large_pages, 0x40, 0x40, true, 0x5a40059fc3f117c8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_HP_SEG_ALLOC_POLICY.MinUtilization", min_utilization, 0x80, 0x8, true, 0x47519924497e9c1)
#else
#define _m00
#define _m01
#define _m02
#endif