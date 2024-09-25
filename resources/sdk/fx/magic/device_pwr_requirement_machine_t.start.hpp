#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevicePwrRequirementMachine.m_QueueHead", m_queue_head, 0x0, 0x8, true, 0xac9cc9b57ea7b6d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevicePwrRequirementMachine.m_QueueTail", m_queue_tail, 0x8, 0x8, true, 0x4e4e9749af91c5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevicePwrRequirementMachine.m_QueueDepth", m_queue_depth, 0x10, 0x8, true, 0x320e05fda6dd849a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevicePwrRequirementMachine.m_HistoryIndex", m_history_index, 0x18, 0x8, true, 0x3fe98d43f41877eb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxDevicePwrRequirementMachine.m_PkgPnp", m_pkg_pnp, 0x40, 0x40, true, 0x1a97df9200d72514)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDevicePwrRequirementMachine.m_EventWorkerContext", m_event_worker_context, 0x80, 0x40, true, 0xe111e6eeb13ff85b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDevicePwrRequirementMachine.m_QueueLock", m_queue_lock, 0xc0, 0x80, true, 0xc736e09ed4f22d4c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxDevicePwrRequirementMachine.m_StateMachineLock", m_state_machine_lock, 0x140, 0x40, true, 0x800566faa68baea1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pnp_event_worker_t ), "FxDevicePwrRequirementMachine.m_EventWorker", m_event_worker, 0x280, 0x40, true, 0x83ea26ba354addbf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxDevicePwrRequirementMachine.m_WorkItemFinished", m_work_item_finished, 0x2c0, 0x40, true, 0xd0cc77feadf734d1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevicePwrRequirementMachine.m_QueueFlags", m_queue_flags, 0x300, 0x8, true, 0x1c283aed280a814)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevicePwrRequirementMachine.m_QueueFlagsByName.WorkItemQueued", work_item_queued, 0x0, 0x1, true, 0x8ff6b8cecbd24f8a, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevicePwrRequirementMachine.m_QueueFlagsByName.Closed", closed, 0x1, 0x1, true, 0x3fe2157effa7ca87, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevicePwrRequirementMachine.m_QueueFlagsByName.DelayDeletion", delay_deletion, 0x2, 0x1, true, 0x29348fcab8453819, 1, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_queue_flags_by_name_t), "FxDevicePwrRequirementMachine.m_QueueFlagsByName", m_queue_flags_by_name, 0x300, 0x8, true, 0xaa33234ca74f4a59)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevicePwrRequirementMachine.m_WorkItemRunningCount", m_work_item_running_count, 0x308, 0x8, true, 0x8a450c3ad318b228)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::work_item_t), "FxDevicePwrRequirementMachine.m_WorkItem", m_work_item, 0x340, 0x40, true, 0x71eda3ed5c1124a4)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "FxDevicePwrRequirementMachine.m_EventWorkQueueItem", m_event_work_queue_item, 0x380, 0x0, true, 0x4615a31c3845e0ca)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pox_interface_t*), "FxDevicePwrRequirementMachine.m_PoxInterface", m_pox_interface, 0x480, 0x40, true, 0xb9bbc15ff7bf1ac2)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevicePwrRequirementMachine.m_CurrentState", m_current_state, 0x4c0, 0x8, true, 0x182d94fede58b7d8)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum fx::device_pwr_requirement_events_t, 8>), "FxDevicePwrRequirementMachine.m_Queue", m_queue, 0x4e0, 0x0, true, 0x6f3a4ceab650c5cf)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::device_pwr_requirement_machine_state_history_t), "FxDevicePwrRequirementMachine.m_States", m_states, 0x5e0, 0x40, true, 0xd27af12556cc109c)
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
#endif