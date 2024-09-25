#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_BAD_MEMORY_EVENT_ENTRY.BugCheckCode", bug_check_code, 0x0, 0x20, true, 0xf961feedd0bb1c33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_BAD_MEMORY_EVENT_ENTRY.Active", active, 0x20, 0x20, true, 0xddbff41b1e033e82)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_BAD_MEMORY_EVENT_ENTRY.Data", data, 0x40, 0x20, true, 0x8b081d6463756d33)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MI_BAD_MEMORY_EVENT_ENTRY.PhysicalAddress", physical_address, 0x80, 0x40, true, 0xa18bd3456240e7ec)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_BAD_MEMORY_EVENT_ENTRY.WorkItem", work_item, 0xc0, 0x0, true, 0x369d5d559e9a4f04)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif