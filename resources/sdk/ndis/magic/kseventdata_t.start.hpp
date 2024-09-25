#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSEVENTDATA.NotificationType", notification_type, 0x0, 0x0, false, 0x96249222a167cafe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "KSEVENTDATA.EventHandle.Event", event, 0x0, 0x0, false, 0xad263a627d5fb257)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_event_handle_t), "KSEVENTDATA.EventHandle", event_handle, 0x0, 0x0, false, 0x4729cc28142de56f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "KSEVENTDATA.SemaphoreHandle.Semaphore", semaphore, 0x0, 0x0, false, 0xff7f2d0040e62480)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "KSEVENTDATA.SemaphoreHandle.Adjustment", adjustment, 0x0, 0x0, false, 0x6ff92a3804d9e9c5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_semaphore_handle_t), "KSEVENTDATA.SemaphoreHandle", semaphore_handle, 0x0, 0x0, false, 0xb21663d2c2f15a33)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "KSEVENTDATA.EventObject.Event", event, 0x0, 0x0, false, 0xc96224d3e0adb27)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "KSEVENTDATA.EventObject.Increment", increment, 0x0, 0x0, false, 0x192af4ca340f7232)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_event_object_t), "KSEVENTDATA.EventObject", event_object, 0x0, 0x0, false, 0x61690ab5f5aae668)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "KSEVENTDATA.SemaphoreObject.Semaphore", semaphore, 0x0, 0x0, false, 0xc64b1489310e9cbf)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "KSEVENTDATA.SemaphoreObject.Increment", increment, 0x0, 0x0, false, 0xb37e0ff3bb40d58b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "KSEVENTDATA.SemaphoreObject.Adjustment", adjustment, 0x0, 0x0, false, 0x1769365bde9c9be5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_semaphore_object_t), "KSEVENTDATA.SemaphoreObject", semaphore_object, 0x0, 0x0, false, 0xce76e5cb70687bc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t*), "KSEVENTDATA.Dpc.Dpc", dpc, 0x0, 0x0, false, 0xfe707461d506ddc3)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSEVENTDATA.Dpc.ReferenceCount", reference_count, 0x0, 0x0, false, 0xf8ada86ad0d25a3f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_dpc_t), "KSEVENTDATA.Dpc", dpc, 0x0, 0x0, false, 0x8f482e1ec5a1b242)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t*), "KSEVENTDATA.WorkItem.WorkQueueItem", work_queue_item, 0x0, 0x0, false, 0xcf2b0190f79af888)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::work_queue_type_t), "KSEVENTDATA.WorkItem.WorkQueueType", work_queue_type, 0x0, 0x0, false, 0xfcc4de25a9c09738)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_work_item_t), "KSEVENTDATA.WorkItem", work_item, 0x0, 0x0, false, 0x557d774d6623c2c9)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t*), "KSEVENTDATA.KsWorkItem.WorkQueueItem", work_queue_item, 0x0, 0x0, false, 0x378d597f54f3e27e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "KSEVENTDATA.KsWorkItem.KsWorkerObject", ks_worker_object, 0x0, 0x0, false, 0xae7059222e09d3f8)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_ks_work_item_t), "KSEVENTDATA.KsWorkItem", ks_work_item, 0x0, 0x0, false, 0xebf87d0dfb643be0)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 2>), "KSEVENTDATA.Alignment.Alignment", alignment, 0x0, 0x0, false, 0x6df640a67bb84eb5)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_alignment_t), "KSEVENTDATA.Alignment", alignment, 0x0, 0x0, false, 0xdd138da1a3db520e)
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
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif