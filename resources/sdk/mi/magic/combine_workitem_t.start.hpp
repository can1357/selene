#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_COMBINE_WORKITEM.NextEntry", next_entry, 0x0, 0x40, true, 0xf38ac3067fadcbf8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_COMBINE_WORKITEM.WorkItem", work_item, 0x40, 0x0, true, 0x4c7d204c8d3aae32)
#else
#define _m00
#define _m01
#endif