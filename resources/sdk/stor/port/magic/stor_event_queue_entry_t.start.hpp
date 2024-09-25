#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STOR_EVENT_QUEUE_ENTRY.NextLink", next_link, 0x0, 0x80, true, 0xd2ba864764fea40b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STOR_EVENT_QUEUE_ENTRY.SortedListEntry", sorted_list_entry, 0x80, 0x80, true, 0x710e08191665c2b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EVENT_QUEUE_ENTRY.Timeout", timeout, 0x100, 0x20, true, 0x619941a33a630b3a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_EVENT_QUEUE_ENTRY.StartTime", start_time, 0x140, 0x40, true, 0xbaae0d25e767b502)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_EVENT_QUEUE_ENTRY.InSortedQueue", in_sorted_queue, 0x180, 0x1, true, 0xf3de444d0bd814fe, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EVENT_QUEUE_ENTRY.Flags", flags, 0x180, 0x20, true, 0xce837a4ba19acaa9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EVENT_QUEUE_ENTRY.QueueIndex", queue_index, 0x120, 0x20, true, 0xe351409cd4e90027)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EVENT_QUEUE_ENTRY.Node", node, 0x0, 0x0, false, 0xaa4895c5953346dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif