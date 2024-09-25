#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerMachine.m_QueueHead", m_queue_head, 0x0, 0x8, true, 0xb1db543486800e44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerMachine.m_QueueTail", m_queue_tail, 0x8, 0x8, true, 0x13af85749e2259bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerMachine.m_QueueDepth", m_queue_depth, 0x10, 0x8, true, 0xed37c6af855b492)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerMachine.m_HistoryIndex", m_history_index, 0x18, 0x8, true, 0xf38c6e6b0b8c1d08)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxPowerMachine.m_PkgPnp", m_pkg_pnp, 0x40, 0x40, true, 0x2d3e70f1d01f1005)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxPowerMachine.m_EventWorkerContext", m_event_worker_context, 0x80, 0x40, true, 0x22764aaeeccfd9f8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPowerMachine.m_QueueLock", m_queue_lock, 0xc0, 0x80, true, 0x93cf9cbf06c3b07d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxPowerMachine.m_StateMachineLock", m_state_machine_lock, 0x140, 0x40, true, 0xe34c1c85cc89098f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_pnp_event_worker_t ), "FxPowerMachine.m_EventWorker", m_event_worker, 0x280, 0x40, true, 0x1742d1b80327f7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxPowerMachine.m_WorkItemFinished", m_work_item_finished, 0x2c0, 0x40, true, 0x25e47abaf4372227)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerMachine.m_QueueFlags", m_queue_flags, 0x300, 0x8, true, 0xe7db2694baa6c922)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_QueueFlagsByName.WorkItemQueued", work_item_queued, 0x0, 0x1, true, 0xcaa7dcb146489bc8, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_QueueFlagsByName.Closed", closed, 0x1, 0x1, true, 0x2977786b8d6dcdee, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_QueueFlagsByName.DelayDeletion", delay_deletion, 0x2, 0x1, true, 0x51d6388ad00ec412, 1, uint8_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_queue_flags_by_name_t), "FxPowerMachine.m_QueueFlagsByName", m_queue_flags_by_name, 0x300, 0x8, true, 0xc72c5f7abfec1569)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerMachine.m_WorkItemRunningCount", m_work_item_running_count, 0x308, 0x8, true, 0xbf46a351767a4a37)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::work_item_t), "FxPowerMachine.m_WorkItem", m_work_item, 0x340, 0x40, true, 0x53f381a98e61a5b9)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "FxPowerMachine.m_EventWorkQueueItem", m_event_work_queue_item, 0x380, 0x0, true, 0x9d09e5923d491a4b)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::power_machine_event_queue_t), "FxPowerMachine.m_Queue", m_queue, 0x480, 0x80, true, 0x9c0f8a9a546f2fde)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::power_machine_state_history_t), "FxPowerMachine.m_States", m_states, 0x500, 0x80, true, 0x5e3f11f979ddb92d)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPowerMachine.m_WaitWakeLock", m_wait_wake_lock, 0x580, 0x80, true, 0xa776e274d63fd557)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPowerMachine.m_WaitWakeIrpToBeProcessedList", m_wait_wake_irp_to_be_processed_list, 0x600, 0x80, true, 0x9f5ce1f99ae3f211)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPowerMachine.m_SingularEventsPresent", m_singular_events_present, 0x680, 0x10, true, 0x40168d7a9f3978c5)
#define _m23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerD0Known", power_d0_known, 0x0, 0x1, true, 0x94fbf3c4d029bd65, 1, uint16_t)
#define _m24 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerDxKnown", power_dx_known, 0x0, 0x1, true, 0xc908c00da9e33249, 1, uint16_t)
#define _m25 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerWakeArrivalKnown", power_wake_arrival_known, 0x0, 0x1, true, 0x7348409b975bb126, 1, uint16_t)
#define _m26 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerWakeSucceededKnown", power_wake_succeeded_known, 0x0, 0x1, true, 0x54c5b991214cfe42, 1, uint16_t)
#define _m27 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerWakeFailedKnown", power_wake_failed_known, 0x0, 0x1, true, 0xfc6f2f63e879d5fb, 1, uint16_t)
#define _m28 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerWakeCanceledKnown", power_wake_canceled_known, 0x0, 0x1, true, 0x8679fd5cb01e0a0f, 1, uint16_t)
#define _m29 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerImplicitD0Known", power_implicit_d0_known, 0x0, 0x1, true, 0xbc87b686c1d603f4, 1, uint16_t)
#define _m30 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerImplicitD3Known", power_implicit_d3_known, 0x0, 0x1, true, 0xc4d2f18ab63743f0, 1, uint16_t)
#define _m31 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerParentToD0Known", power_parent_to_d0_known, 0x0, 0x1, true, 0xbb06709bd2993fe3, 1, uint16_t)
#define _m32 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerMarkPageableKnown", power_mark_pageable_known, 0x0, 0x1, true, 0xc80eb0f73d84965d, 1, uint16_t)
#define _m33 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerMarkNonpageableKnown", power_mark_nonpageable_known, 0x0, 0x1, true, 0x3cbd51a338f1f0f8, 1, uint16_t)
#define _m34 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerCompleteD0Known", power_complete_d0_known, 0x0, 0x1, true, 0xfb74153944ff8ce2, 1, uint16_t)
#define _m35 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPowerMachine.m_SingularEventsPresentByName.PowerCompleteDxKnown", power_complete_dx_known, 0x0, 0x1, true, 0x138245762e4290fb, 1, uint16_t)
#define _m36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_m_singular_events_present_by_name_t), "FxPowerMachine.m_SingularEventsPresentByName", m_singular_events_present_by_name, 0x680, 0x10, true, 0xd8ee9ffc35924a7a)
#define _m37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerMachine.m_IoCallbackFailure", m_io_callback_failure, 0x690, 0x8, true, 0xfe0c5b79172c8eea)
#define _m38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerMachine.m_PowerDownFailure", m_power_down_failure, 0x698, 0x8, true, 0x65d88a376c393017)
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
#endif