#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxThreadedEventQueue.m_QueueHead", m_queue_head, 0x0, 0x8, true, 0x863ddc6f02ce67b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxThreadedEventQueue.m_QueueTail", m_queue_tail, 0x8, 0x8, true, 0x50db3108ddccd6a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxThreadedEventQueue.m_QueueDepth", m_queue_depth, 0x10, 0x8, true, 0x862634f1f410b8ca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxThreadedEventQueue.m_HistoryIndex", m_history_index, 0x18, 0x8, true, 0x711024a88109c429)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxThreadedEventQueue.m_PkgPnp", m_pkg_pnp, 0x40, 0x40, true, 0x4f8826d844c9b2a6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxThreadedEventQueue.m_EventWorkerContext", m_event_worker_context, 0x80, 0x40, true, 0xbee3f059c8a657b9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxThreadedEventQueue.m_QueueLock", m_queue_lock, 0xc0, 0x80, true, 0xd8d4a9cc98451572)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxThreadedEventQueue.m_StateMachineLock", m_state_machine_lock, 0x140, 0x40, true, 0x54370f448472d2d1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pnp_event_worker_t ), "FxThreadedEventQueue.m_EventWorker", m_event_worker, 0x280, 0x40, true, 0x585edc399907518b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxThreadedEventQueue.m_WorkItemFinished", m_work_item_finished, 0x2c0, 0x40, true, 0x9557240f30c9320a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxThreadedEventQueue.m_QueueFlags", m_queue_flags, 0x300, 0x8, true, 0xcfa0a636522390fb)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxThreadedEventQueue.m_QueueFlagsByName.WorkItemQueued", work_item_queued, 0x0, 0x1, true, 0xedbf1655e8702596, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxThreadedEventQueue.m_QueueFlagsByName.Closed", closed, 0x1, 0x1, true, 0x239953373e222a0b, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxThreadedEventQueue.m_QueueFlagsByName.DelayDeletion", delay_deletion, 0x2, 0x1, true, 0x6a1d832395c9b1ae, 1, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_queue_flags_by_name_t), "FxThreadedEventQueue.m_QueueFlagsByName", m_queue_flags_by_name, 0x300, 0x8, true, 0xa3d12fd6cbb8adb9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxThreadedEventQueue.m_WorkItemRunningCount", m_work_item_running_count, 0x308, 0x8, true, 0x1902f1c8c348c34d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::work_item_t), "FxThreadedEventQueue.m_WorkItem", m_work_item, 0x340, 0x40, true, 0xeae634e52cd34b08)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "FxThreadedEventQueue.m_EventWorkQueueItem", m_event_work_queue_item, 0x380, 0x0, true, 0x1fae9798682a657b)
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
#endif