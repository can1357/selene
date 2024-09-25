#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RAID_DEFERRED_QUEUE.Depth", depth, 0x0, 0x10, true, 0x1f15c02c856d7329)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RAID_DEFERRED_QUEUE.ItemSize", item_size, 0x10, 0x10, true, 0x7de98c6d9abf6ae1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_DEFERRED_QUEUE.Dpc", dpc, 0x40, 0x0, true, 0x22a9f5c323381cb9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_RAID_DEFERRED_QUEUE.FreeList", free_list, 0x280, 0x80, true, 0x697049c471b498e3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_RAID_DEFERRED_QUEUE.RunningList", running_list, 0x300, 0x80, true, 0x49751132b7dd69d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, struct stor::port::raid_deferred_header_t*)>*), "_RAID_DEFERRED_QUEUE.ProcessDeferredItem", process_deferred_item, 0x380, 0x40, true, 0xd07f0839d4553973)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif