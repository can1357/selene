#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPnpMachine.m_QueueHead", m_queue_head, 0x0, 0x8, true, 0xc95f3c3a4bf9de9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPnpMachine.m_QueueTail", m_queue_tail, 0x8, 0x8, true, 0x3a852bc1413474eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPnpMachine.m_QueueDepth", m_queue_depth, 0x10, 0x8, true, 0x835ccaa645e4454b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPnpMachine.m_HistoryIndex", m_history_index, 0x18, 0x8, true, 0x2f0b35b1f117c5e3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPnpMachine.m_PkgPnp", m_pkg_pnp, 0x40, 0x40, true, 0x8a169feafa81e41a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxPnpMachine.m_EventWorkerContext", m_event_worker_context, 0x80, 0x40, true, 0xfc01f71635890eeb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPnpMachine.m_QueueLock", m_queue_lock, 0xc0, 0x80, true, 0x71dabce17ad9a4e7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxPnpMachine.m_StateMachineLock", m_state_machine_lock, 0x140, 0x40, true, 0x74ab7e0787d33ec4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pnp_event_worker_t ), "FxPnpMachine.m_EventWorker", m_event_worker, 0x280, 0x40, true, 0x6f7fc9a9249f8e02)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxPnpMachine.m_WorkItemFinished", m_work_item_finished, 0x2c0, 0x40, true, 0x7d333a322d4c56bc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPnpMachine.m_QueueFlags", m_queue_flags, 0x300, 0x8, true, 0xb94b11812491ba98)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpMachine.m_QueueFlagsByName.WorkItemQueued", work_item_queued, 0x0, 0x1, true, 0x615dd87684fec353, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpMachine.m_QueueFlagsByName.Closed", closed, 0x1, 0x1, true, 0x6a1fbfbb726b63b3, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpMachine.m_QueueFlagsByName.DelayDeletion", delay_deletion, 0x2, 0x1, true, 0xc6b1e096df3de90e, 1, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_queue_flags_by_name_t), "FxPnpMachine.m_QueueFlagsByName", m_queue_flags_by_name, 0x300, 0x8, true, 0x86c7230ba90c82d3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPnpMachine.m_WorkItemRunningCount", m_work_item_running_count, 0x308, 0x8, true, 0x7020fef860f37359)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::work_item_t), "FxPnpMachine.m_WorkItem", m_work_item, 0x340, 0x40, true, 0xdacd13888b4cda23)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum fx::pnp_event_t, 8>), "FxPnpMachine.m_Queue", m_queue, 0x380, 0x0, true, 0x7726e58c9f01393a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_machine_state_history_t), "FxPnpMachine.m_States", m_states, 0x480, 0x80, true, 0x9936db3f9e2f873e)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPnpMachine.m_FireAndForget", m_fire_and_forget, 0x500, 0x8, true, 0xebaa6609af85fc37)
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
#endif