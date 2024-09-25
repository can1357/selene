#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWakeInterruptMachine.m_QueueHead", m_queue_head, 0x0, 0x8, true, 0x67be546d5a1db27a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWakeInterruptMachine.m_QueueTail", m_queue_tail, 0x8, 0x8, true, 0x9455d36ae213fc9e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWakeInterruptMachine.m_QueueDepth", m_queue_depth, 0x10, 0x8, true, 0xe3ee472a300d34b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWakeInterruptMachine.m_HistoryIndex", m_history_index, 0x18, 0x8, true, 0x20d02e8c5d9079d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxWakeInterruptMachine.m_PkgPnp", m_pkg_pnp, 0x40, 0x40, true, 0x7b059dc722557ef3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxWakeInterruptMachine.m_EventWorkerContext", m_event_worker_context, 0x80, 0x40, true, 0x44047b520e297376)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWakeInterruptMachine.m_QueueLock", m_queue_lock, 0xc0, 0x80, true, 0x2b123186b1d05d84)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxWakeInterruptMachine.m_StateMachineLock", m_state_machine_lock, 0x140, 0x40, true, 0x763d36c89889e873)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pnp_event_worker_t ), "FxWakeInterruptMachine.m_EventWorker", m_event_worker, 0x280, 0x40, true, 0x963989e15aa8c1c6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxWakeInterruptMachine.m_WorkItemFinished", m_work_item_finished, 0x2c0, 0x40, true, 0xee2f0eb464b0ecf)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWakeInterruptMachine.m_QueueFlags", m_queue_flags, 0x300, 0x8, true, 0x4dbbbb8d42e01917)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWakeInterruptMachine.m_QueueFlagsByName.WorkItemQueued", work_item_queued, 0x0, 0x1, true, 0x11ad98dc9baf3db1, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWakeInterruptMachine.m_QueueFlagsByName.Closed", closed, 0x1, 0x1, true, 0x803fde05b2c63a23, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWakeInterruptMachine.m_QueueFlagsByName.DelayDeletion", delay_deletion, 0x2, 0x1, true, 0xcd683d2d1299ddf9, 1, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_queue_flags_by_name_t), "FxWakeInterruptMachine.m_QueueFlagsByName", m_queue_flags_by_name, 0x300, 0x8, true, 0xa87f2f405a222e44)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWakeInterruptMachine.m_WorkItemRunningCount", m_work_item_running_count, 0x308, 0x8, true, 0x50f55927f46d45d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::work_item_t), "FxWakeInterruptMachine.m_WorkItem", m_work_item, 0x340, 0x40, true, 0x2c32c924c8d622a9)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "FxWakeInterruptMachine.m_EventWorkQueueItem", m_event_work_queue_item, 0x380, 0x0, true, 0x428c08fca193cc9a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::interrupt_t*), "FxWakeInterruptMachine.m_Interrupt", m_interrupt, 0x480, 0x40, true, 0x11c5d159f5a636c8)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWakeInterruptMachine.m_ActiveForWake", m_active_for_wake, 0x4c0, 0x8, true, 0xdbdf54288198bc80)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWakeInterruptMachine.m_Claimed", m_claimed, 0x4c8, 0x8, true, 0x83c4d38ec11bc94e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t), "FxWakeInterruptMachine.m_IsrEvent", m_isr_event, 0x500, 0x0, true, 0xff3de5cee74e546c)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWakeInterruptMachine.m_CurrentState", m_current_state, 0x600, 0x8, true, 0xfb34af5fdcb10d86)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum fx::wake_interrupt_events_t, 8>), "FxWakeInterruptMachine.m_Queue", m_queue, 0x620, 0x0, true, 0xd954628ce75e236d)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::wake_interrupt_machine_state_history_t), "FxWakeInterruptMachine.m_States", m_states, 0x720, 0x40, true, 0xe4ff21465a636a6)
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
#define _m24
#endif