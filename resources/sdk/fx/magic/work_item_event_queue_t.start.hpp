#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWorkItemEventQueue.m_QueueHead", m_queue_head, 0x0, 0x8, true, 0x62069a5964dfe3f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWorkItemEventQueue.m_QueueTail", m_queue_tail, 0x8, 0x8, true, 0x8f1158db685d1571)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWorkItemEventQueue.m_QueueDepth", m_queue_depth, 0x10, 0x8, true, 0xb7c9df58cd70d93d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWorkItemEventQueue.m_HistoryIndex", m_history_index, 0x18, 0x8, true, 0x92b0312593a55eb9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxWorkItemEventQueue.m_PkgPnp", m_pkg_pnp, 0x40, 0x40, true, 0x92d934dc896617d3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxWorkItemEventQueue.m_EventWorkerContext", m_event_worker_context, 0x80, 0x40, true, 0xd489b9dbd806fec0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWorkItemEventQueue.m_QueueLock", m_queue_lock, 0xc0, 0x80, true, 0x41996dc2dd404cdb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxWorkItemEventQueue.m_StateMachineLock", m_state_machine_lock, 0x140, 0x40, true, 0x1fe66c0241da7aa3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pnp_event_worker_t ), "FxWorkItemEventQueue.m_EventWorker", m_event_worker, 0x280, 0x40, true, 0xde8b5f0da13dc484)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxWorkItemEventQueue.m_WorkItemFinished", m_work_item_finished, 0x2c0, 0x40, true, 0x20e1270857347a32)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWorkItemEventQueue.m_QueueFlags", m_queue_flags, 0x300, 0x8, true, 0x4c7768cbf742d250)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItemEventQueue.m_QueueFlagsByName.WorkItemQueued", work_item_queued, 0x0, 0x1, true, 0xcc09314f559cc441, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItemEventQueue.m_QueueFlagsByName.Closed", closed, 0x1, 0x1, true, 0x5900e6118f47d79c, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItemEventQueue.m_QueueFlagsByName.DelayDeletion", delay_deletion, 0x2, 0x1, true, 0xb0deaf0ea19f7f5f, 1, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_queue_flags_by_name_t), "FxWorkItemEventQueue.m_QueueFlagsByName", m_queue_flags_by_name, 0x300, 0x8, true, 0xd9b3c099c5c5b9df)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWorkItemEventQueue.m_WorkItemRunningCount", m_work_item_running_count, 0x308, 0x8, true, 0x19c71aafd249ae96)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::work_item_t), "FxWorkItemEventQueue.m_WorkItem", m_work_item, 0x340, 0x40, true, 0xc5852e4e730d998d)
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
#endif