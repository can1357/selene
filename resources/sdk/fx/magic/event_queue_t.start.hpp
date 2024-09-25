#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxEventQueue.m_QueueHead", m_queue_head, 0x0, 0x8, true, 0xf4f20a73eb507b93)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxEventQueue.m_QueueTail", m_queue_tail, 0x8, 0x8, true, 0x3f55d20a2f746148)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxEventQueue.m_QueueDepth", m_queue_depth, 0x10, 0x8, true, 0xcaf91706547132a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxEventQueue.m_HistoryIndex", m_history_index, 0x18, 0x8, true, 0xc15e55d3118e6471)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxEventQueue.m_PkgPnp", m_pkg_pnp, 0x40, 0x40, true, 0x494b0937a577b072)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxEventQueue.m_EventWorkerContext", m_event_worker_context, 0x80, 0x40, true, 0x7852af56f9e120e3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxEventQueue.m_QueueLock", m_queue_lock, 0xc0, 0x80, true, 0xb6030ee0ea9371e9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxEventQueue.m_StateMachineLock", m_state_machine_lock, 0x140, 0x40, true, 0x373dbeb7c7118b62)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pnp_event_worker_t ), "FxEventQueue.m_EventWorker", m_event_worker, 0x280, 0x40, true, 0xaaa68cb741b96194)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxEventQueue.m_WorkItemFinished", m_work_item_finished, 0x2c0, 0x40, true, 0xe69a01cdeb0cbb09)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxEventQueue.m_QueueFlags", m_queue_flags, 0x300, 0x8, true, 0xee594f2fb1d7ac2d)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxEventQueue.m_QueueFlagsByName.WorkItemQueued", work_item_queued, 0x0, 0x1, true, 0xd385bbcbf01320ef, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxEventQueue.m_QueueFlagsByName.Closed", closed, 0x1, 0x1, true, 0xd381cbde50ae25c8, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxEventQueue.m_QueueFlagsByName.DelayDeletion", delay_deletion, 0x2, 0x1, true, 0xe58d39f4ef2ecefc, 1, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_queue_flags_by_name_t), "FxEventQueue.m_QueueFlagsByName", m_queue_flags_by_name, 0x300, 0x8, true, 0xd95289efb13b3937)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxEventQueue.m_WorkItemRunningCount", m_work_item_running_count, 0x308, 0x8, true, 0x778692e1e60f2297)
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
#endif