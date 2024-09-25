#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_IO_GATEWAY.Lock", lock, 0x0, 0x40, true, 0x2e3552b9dcea5afb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STOR_IO_GATEWAY.PendingList", pending_list, 0x40, 0x80, true, 0xff06d28ca99d4845)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_IO_GATEWAY.PendingIoCount", pending_io_count, 0xc0, 0x20, true, 0x2ba77ad031507b9d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_IO_GATEWAY.HighWaterMark", high_water_mark, 0xe0, 0x20, true, 0x6a6b3016dff904bd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_IO_GATEWAY.LowWaterMark", low_water_mark, 0x100, 0x20, true, 0x194e8fa39a2ee077)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_IO_GATEWAY.OutstandingMax", outstanding_max, 0x120, 0x20, true, 0xab6e4e5ffc8f22ff)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_STOR_IO_GATEWAY.BusyCount", busy_count, 0x140, 0x20, true, 0x25c8ff8caa43981e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_STOR_IO_GATEWAY.PauseCount", pause_count, 0x160, 0x20, true, 0x9cc0a582777c01d0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_adapter_extension_t*), "_STOR_IO_GATEWAY.Adapter", adapter, 0x180, 0x40, true, 0xa8040af260707b92)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::cont_resource_list_t), "_STOR_IO_GATEWAY.ResourceList", resource_list, 0x200, 0x0, true, 0x16022662c40838f9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_IO_GATEWAY.Outstanding", outstanding, 0x600, 0x20, true, 0x1845e47ed6d8dbf9)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_STOR_IO_GATEWAY.EmptyEvent", empty_event, 0x640, 0x40, true, 0x91ebeddfa09eddb3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_IO_GATEWAY.PendingEvent", pending_event, 0x680, 0x8, true, 0x7fe97fc2f5d38cf8)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_notification_info_t), "_STOR_IO_GATEWAY.EmptyNotificationInfo", empty_notification_info, 0x6c0, 0x0, true, 0x1558f2aee30e075b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STOR_IO_GATEWAY.HighPriorityPendingList", high_priority_pending_list, 0x7c0, 0x80, true, 0x331a12122552d560)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STOR_IO_GATEWAY.QosReqList", qos_req_list, 0x840, 0x80, true, 0x14e153504b78b50d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_STOR_IO_GATEWAY.SlowPathCount", slow_path_count, 0x8c0, 0x20, true, 0x12de34b51b2711c1)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_IO_GATEWAY.Index", index, 0x0, 0x0, false, 0x74d2e0e1d65f4ebd)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_shared_work_item_context_t), "_STOR_IO_GATEWAY.IoResourceWorkItem", io_resource_work_item, 0x0, 0x0, false, 0x86f071fcf23bb2b3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif