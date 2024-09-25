#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_SELECTIVE_SUSPEND.Lock", lock, 0x0, 0x0, false, 0x86b574c45f4166e7)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SELECTIVE_SUSPEND.IdleTimeout", idle_timeout, 0x0, 0x0, false, 0xe310af1b262dc4f6)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timer_t), "_NDIS_SELECTIVE_SUSPEND.IdleTimer", idle_timer, 0x0, 0x0, false, 0x1bc665deb2da4d29)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SELECTIVE_SUSPEND.IdleTickCount", idle_tick_count, 0x0, 0x0, false, 0x54d3779e082a9686)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_SELECTIVE_SUSPEND.IdleWorkItemCompleteEvent", idle_work_item_complete_event, 0x0, 0x0, false, 0x38113b59a847c2f1)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_SELECTIVE_SUSPEND.PowerSuspendCompleteEvent", power_suspend_complete_event, 0x0, 0x0, false, 0x89c71029470c2a6a)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_SELECTIVE_SUSPEND.IdleNotificationCompleteEvent", idle_notification_complete_event, 0x0, 0x0, false, 0xafc40b7d22f0c15d)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_SELECTIVE_SUSPEND.IdleNotificationDoneEvent", idle_notification_done_event, 0x0, 0x0, false, 0x6caae655ad6f7cf0)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_SELECTIVE_SUSPEND.DevicePowerReadyEvent", device_power_ready_event, 0x0, 0x0, false, 0x25c91017dc10c389)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_SELECTIVE_SUSPEND.WdfD0LockedForSSEvent", wdf_d0_locked_for_ss_event, 0x0, 0x0, false, 0xedf249f142328d6f)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::work_item_t), "_NDIS_SELECTIVE_SUSPEND.IdleTimerWorkItem", idle_timer_work_item, 0x0, 0x0, false, 0xbbbbed37c002be4d)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::work_item_t), "_NDIS_SELECTIVE_SUSPEND.IdleCancelWorkItem", idle_cancel_work_item, 0x0, 0x0, false, 0x63b2f1c09431670b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::irp_work_item_t), "_NDIS_SELECTIVE_SUSPEND.ResumeWorkItem", resume_work_item, 0x0, 0x0, false, 0x47795be6f2f4471b)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ss_idle_flags_t), "_NDIS_SELECTIVE_SUSPEND.Flags", flags, 0x0, 0x0, false, 0xd90af4d27743a9f1)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ss_stop_flags_t), "_NDIS_SELECTIVE_SUSPEND.StopFlags", stop_flags, 0x0, 0x0, false, 0xca0436302d355843)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ss_control_ops_t), "_NDIS_SELECTIVE_SUSPEND.PendingControlOps", pending_control_ops, 0x0, 0x0, false, 0xe5c7cab349ddda25)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_SELECTIVE_SUSPEND.PendingPnPEventCount", pending_pn_p_event_count, 0x0, 0x0, false, 0x69aa28a2b20d218)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_SELECTIVE_SUSPEND.PendingSendNblCount", pending_send_nbl_count, 0x0, 0x0, false, 0x52dd0952040c9a19)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_SELECTIVE_SUSPEND.PendingCancelSendCount", pending_cancel_send_count, 0x0, 0x0, false, 0xeb4066ad4c4dcdf7)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_SELECTIVE_SUSPEND.PendingDirectOidCount", pending_direct_oid_count, 0x0, 0x0, false, 0x8aa2a1c0acb0a88d)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_SELECTIVE_SUSPEND.PendingCancelDirectOidCount", pending_cancel_direct_oid_count, 0x0, 0x0, false, 0x8b0cdd2fd586e2b0)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_SELECTIVE_SUSPEND.PendingPnPOpCount", pending_pn_p_op_count, 0x0, 0x0, false, 0x8bb8cf585c6ada4e)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_queue_t), "_NDIS_SELECTIVE_SUSPEND.PendingSendNblQueue", pending_send_nbl_queue, 0x0, 0x0, false, 0xc23e963a294721ca)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_queue_t), "_NDIS_SELECTIVE_SUSPEND.PendingReceiveNblQueue", pending_receive_nbl_queue, 0x0, 0x0, false, 0x88fbcc1bffbbd6e0)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_SELECTIVE_SUSPEND.PendingReceiveReturnCount", pending_receive_return_count, 0x0, 0x0, false, 0x15d484b44293496d)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_SELECTIVE_SUSPEND.PendingDirectOidQueue", pending_direct_oid_queue, 0x0, 0x0, false, 0xf9096f9ce15f787d)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::oid_cache_entry_t*), "_NDIS_SELECTIVE_SUSPEND.OidCacheArray", oid_cache_array, 0x0, 0x0, false, 0x97efdfc66e4619e)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_SELECTIVE_SUSPEND.QueuedSendNblTracker", queued_send_nbl_tracker, 0x0, 0x0, false, 0x7bf13868d0541c94)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_SELECTIVE_SUSPEND.QueuedReceiveReturnNblTracker", queued_receive_return_nbl_tracker, 0x0, 0x0, false, 0x2eadc365acad583e)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 2>), "_NDIS_SELECTIVE_SUSPEND.LastUnexpectedFailureLine", last_unexpected_failure_line, 0x0, 0x0, false, 0xb58dc3f86053b864)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::ss_resume_reason_t), "_NDIS_SELECTIVE_SUSPEND.LastResumeReason", last_resume_reason, 0x0, 0x0, false, 0xd120c340262b556d)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SELECTIVE_SUSPEND.LastResumeContext", last_resume_context, 0x0, 0x0, false, 0x7348ca30c0471c5)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::ss_resume_reason_t), "_NDIS_SELECTIVE_SUSPEND.LastBusyEvent", last_busy_event, 0x0, 0x0, false, 0x98fcce2ea3f54f1f)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SELECTIVE_SUSPEND.LastBusyContext", last_busy_context, 0x0, 0x0, false, 0x1203216ce300d1bd)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SELECTIVE_SUSPEND.SuspendCount", suspend_count, 0x0, 0x0, false, 0x17fc71366cc130c6)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_SELECTIVE_SUSPEND.LastSuspendTime", last_suspend_time, 0x0, 0x0, false, 0x651a275b25be69ee)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_SELECTIVE_SUSPEND.LastCancelTime", last_cancel_time, 0x0, 0x0, false, 0xaf2bf1eed27577c5)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_SELECTIVE_SUSPEND.LastResumeLatencyMs", last_resume_latency_ms, 0x0, 0x0, false, 0xa03ab1b2473968eb)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_SELECTIVE_SUSPEND.TotalResumeLatencyMs", total_resume_latency_ms, 0x0, 0x0, false, 0x82e001f54a433491)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_SELECTIVE_SUSPEND.LastSuspendIntervalMs", last_suspend_interval_ms, 0x0, 0x0, false, 0xc0b3eb53707d5886)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_SELECTIVE_SUSPEND.TotalSuspendedTimeMs", total_suspended_time_ms, 0x0, 0x0, false, 0xf70a905607d5a0f9)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::device_power_state_t), "_NDIS_SELECTIVE_SUSPEND.LastRequestedIdlePowerState", last_requested_idle_power_state, 0x0, 0x0, false, 0x86c94cdb0e4afe1c)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#endif