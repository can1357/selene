#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyMachine.m_QueueHead", m_queue_head, 0x0, 0x8, true, 0x8738d12833439dce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyMachine.m_QueueTail", m_queue_tail, 0x8, 0x8, true, 0x9bdeca6c8696e39c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyMachine.m_QueueDepth", m_queue_depth, 0x10, 0x8, true, 0xb20d0b550cd451cb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyMachine.m_HistoryIndex", m_history_index, 0x18, 0x8, true, 0xef5fb28ca049861b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPowerPolicyMachine.m_PkgPnp", m_pkg_pnp, 0x40, 0x40, true, 0x639d4b0c5ae9eec5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxPowerPolicyMachine.m_EventWorkerContext", m_event_worker_context, 0x80, 0x40, true, 0xca2553400a45ae76)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPowerPolicyMachine.m_QueueLock", m_queue_lock, 0xc0, 0x80, true, 0xda9f624146e8a0ed)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxPowerPolicyMachine.m_StateMachineLock", m_state_machine_lock, 0x140, 0x40, true, 0xea3e88919705df3d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pnp_event_worker_t ), "FxPowerPolicyMachine.m_EventWorker", m_event_worker, 0x280, 0x40, true, 0x7c6f9067bb04aa6e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxPowerPolicyMachine.m_WorkItemFinished", m_work_item_finished, 0x2c0, 0x40, true, 0xe2d531467328fec5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyMachine.m_QueueFlags", m_queue_flags, 0x300, 0x8, true, 0xd536d62e07ab1029)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_QueueFlagsByName.WorkItemQueued", work_item_queued, 0x0, 0x1, true, 0x41d193b809973cb5, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_QueueFlagsByName.Closed", closed, 0x1, 0x1, true, 0x21c99ad662d96ac, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_QueueFlagsByName.DelayDeletion", delay_deletion, 0x2, 0x1, true, 0xa2760b64fd3aae72, 1, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_queue_flags_by_name_t), "FxPowerPolicyMachine.m_QueueFlagsByName", m_queue_flags_by_name, 0x300, 0x8, true, 0x3eeef36b9d6aaa56)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerPolicyMachine.m_WorkItemRunningCount", m_work_item_running_count, 0x308, 0x8, true, 0x1308fa4161121edd)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::work_item_t), "FxPowerPolicyMachine.m_WorkItem", m_work_item, 0x340, 0x40, true, 0x62094be7fcccaa60)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "FxPowerPolicyMachine.m_EventWorkQueueItem", m_event_work_queue_item, 0x380, 0x0, true, 0xcc8615075d1151c9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum fx::power_policy_event_t, 8>), "FxPowerPolicyMachine.m_Queue", m_queue, 0x480, 0x0, true, 0xc9564f2fa1286a9c)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::power_policy_machine_state_history_t), "FxPowerPolicyMachine.m_States", m_states, 0x580, 0x80, true, 0x48132d6f8580ec96)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_policy_owner_settings_t*), "FxPowerPolicyMachine.m_Owner", m_owner, 0x600, 0x40, true, 0xa826ed220828723e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPowerPolicyMachine.m_SingularEventsPresent", m_singular_events_present, 0x640, 0x20, true, 0xab87ee87edcd5198)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolStartKnown", pwr_pol_start_known, 0x0, 0x1, true, 0x4bc3245b89c0b92, 1, uint32_t)
#define _m23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolStopKnown", pwr_pol_stop_known, 0x0, 0x1, true, 0x932292ba9b6f3591, 1, uint32_t)
#define _m24 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolSxKnown", pwr_pol_sx_known, 0x0, 0x1, true, 0xac32f77ecb3e6553, 1, uint32_t)
#define _m25 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolS0Known", pwr_pol_s0_known, 0x0, 0x1, true, 0x99cb188a9f4715e5, 1, uint32_t)
#define _m26 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolPowerDownKnown", pwr_pol_power_down_known, 0x0, 0x1, true, 0x8678a45155d8be49, 1, uint32_t)
#define _m27 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolPowerUpKnown", pwr_pol_power_up_known, 0x0, 0x1, true, 0x25f4c3fa4da0d745, 1, uint32_t)
#define _m28 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolPowerDownIoStoppedKnown", pwr_pol_power_down_io_stopped_known, 0x0, 0x1, true, 0x76ed3df94304899, 1, uint32_t)
#define _m29 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolPowerUpHwStartedKnown", pwr_pol_power_up_hw_started_known, 0x0, 0x1, true, 0x2808ee11963d58ff, 1, uint32_t)
#define _m30 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolWakeArrivedKnown", pwr_pol_wake_arrived_known, 0x0, 0x1, true, 0x99d593f89cfbcf00, 1, uint32_t)
#define _m31 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolWakeSuccessKnown", pwr_pol_wake_success_known, 0x0, 0x1, true, 0x2043607685d8f8e, 1, uint32_t)
#define _m32 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolWakeFailedKnown", pwr_pol_wake_failed_known, 0x0, 0x1, true, 0xcc05c7d9f79510da, 1, uint32_t)
#define _m33 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolIoPresentKnown", pwr_pol_io_present_known, 0x0, 0x1, true, 0x3c9ad20f298b403, 1, uint32_t)
#define _m34 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolPowerTimeoutExpiredKnown", pwr_pol_power_timeout_expired_known, 0x0, 0x1, true, 0x699980c9a4bf2559, 1, uint32_t)
#define _m35 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolS0IdlePolicyChangedKnown", pwr_pol_s0_idle_policy_changed_known, 0x0, 0x1, true, 0x9a8ed6d41ad6de44, 1, uint32_t)
#define _m36 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolSurpriseRemoveKnown", pwr_pol_surprise_remove_known, 0x0, 0x1, true, 0x7c40ad703994d28f, 1, uint32_t)
#define _m37 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolUsbSelectiveSuspendCallbackKnown", pwr_pol_usb_selective_suspend_callback_known, 0x0, 0x1, true, 0x64ff4be3618d1536, 1, uint32_t)
#define _m38 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolUsbSelectiveSuspendCompletedKnown", pwr_pol_usb_selective_suspend_completed_known, 0x0, 0x1, true, 0x7b07636274971f9, 1, uint32_t)
#define _m39 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolPowerDownFailedKnown", pwr_pol_power_down_failed_known, 0x0, 0x1, true, 0xcf3794e77dfc8c9f, 1, uint32_t)
#define _m40 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName.PwrPolPowerUpFailedKnown", pwr_pol_power_up_failed_known, 0x0, 0x1, true, 0x7c95f38f34253b2f, 1, uint32_t)
#define _m41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_m_singular_events_present_by_name_t), "FxPowerPolicyMachine.m_SingularEventsPresentByName", m_singular_events_present_by_name, 0x640, 0x20, true, 0xcac5e1bd5018e02)
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
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#endif