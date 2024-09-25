#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POOL_ENTRY.Allocated", allocated, 0x0, 0x8, true, 0xa6b1675a9ab7ac03)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_POOL_ENTRY.AllocatorBackTraceIndex", allocator_back_trace_index, 0x10, 0x10, true, 0x5ef401b1000e62b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOL_ENTRY.Size", size, 0x20, 0x20, true, 0xbaf79adbcd601609)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SYSTEM_POOL_ENTRY.Tag", tag, 0x40, 0x20, true, 0x476796e88df54965)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOL_ENTRY.TagUlong", tag_ulong, 0x40, 0x20, true, 0x632f4d2a1560c3fc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_POOL_ENTRY.ProcessChargedQuota", process_charged_quota, 0x40, 0x40, true, 0x850bc3690724c094)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif