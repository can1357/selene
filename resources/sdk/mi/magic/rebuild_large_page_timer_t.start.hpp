#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_REBUILD_LARGE_PAGE_TIMER.WorkItem", work_item, 0x0, 0x0, true, 0x8dd6d55c37444722)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_REBUILD_LARGE_PAGE_TIMER.SecondsLeft", seconds_left, 0x100, 0x8, true, 0xe0e4c4da7cff6ac8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_REBUILD_LARGE_PAGE_TIMER.RebuildActive", rebuild_active, 0x108, 0x8, true, 0x81d4f2af0356a37a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_REBUILD_LARGE_PAGE_TIMER.NextPassDelta", next_pass_delta, 0x110, 0x8, true, 0xd2af0d3f678bc296)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_REBUILD_LARGE_PAGE_TIMER.LargeSubPagesActive", large_sub_pages_active, 0x118, 0x8, true, 0x91a467104bbe1e5e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif