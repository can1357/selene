#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_AOAC.Lock", lock, 0x0, 0x0, false, 0xe6a1f2098c8a47fe)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_AOAC.HandleList", handle_list, 0x0, 0x0, false, 0xc808fc9a647403c1)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_AOAC.HandleListCount", handle_list_count, 0x0, 0x0, false, 0x3eb0cb50ca39a12e)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_AOAC.PendingIrpList", pending_irp_list, 0x0, 0x0, false, 0xa9713fee105cd2f6)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_AOAC.PendingIrpListCount", pending_irp_list_count, 0x0, 0x0, false, 0x463fc2a71df4b6fa)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_AOAC.ActiveRef", active_ref, 0x0, 0x0, false, 0xbebfab04ddd3d5ef)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::tmp_ref_reason_t), "_NDIS_MINIPORT_AOAC.TempRefReason", temp_ref_reason, 0x0, 0x0, false, 0x35744db7d176306c)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timer_t), "_NDIS_MINIPORT_AOAC.TempRefTimer", temp_ref_timer, 0x0, 0x0, false, 0xae1b0bfb7819ad3b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::work_item_t), "_NDIS_MINIPORT_AOAC.TempRefWorkItem", temp_ref_work_item, 0x0, 0x0, false, 0xbc934f2a09e9db0a)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_AOAC.TempDerefInProgress", temp_deref_in_progress, 0x0, 0x0, false, 0x9438766fb73df993)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_AOAC.DerefTimeoutMilliseconds", deref_timeout_milliseconds, 0x0, 0x0, false, 0x2863e8bfb712c401)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_AOAC.WakeWorkItemScheduled", wake_work_item_scheduled, 0x0, 0x0, false, 0x307ba074db0779d6)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::miniport_event_t), "_NDIS_MINIPORT_AOAC.WakeWorkItemWakeReason", wake_work_item_wake_reason, 0x0, 0x0, false, 0x7fcd49a06b8596d2)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::work_item_t), "_NDIS_MINIPORT_AOAC.WakeWorkItem", wake_work_item, 0x0, 0x0, false, 0x4b2bf7e3ac6033db)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::nic_active_state_t), "_NDIS_MINIPORT_AOAC.ActiveState", active_state, 0x0, 0x0, false, 0x335183169420372b)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ss_stop_flags_t), "_NDIS_MINIPORT_AOAC.StopFlags", stop_flags, 0x0, 0x0, false, 0x32cc890b2d707dc3)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_AOAC.SSIdleConfirmed", ss_idle_confirmed, 0x0, 0x0, false, 0xca5382830b24207d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_AOAC.SSIdleConfirmInProgress", ss_idle_confirm_in_progress, 0x0, 0x0, false, 0x7de288899ac18470)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_AOAC.RemoteWakeEnabled", remote_wake_enabled, 0x0, 0x0, false, 0xd00c437402b00e53)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_AOAC.DeviceGone", device_gone, 0x0, 0x0, false, 0xa3367432447a56c6)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_MINIPORT_AOAC.PowerSuspendCompleteEvent", power_suspend_complete_event, 0x0, 0x0, false, 0xb76ee5049a79d2eb)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_MINIPORT_AOAC.NicQuietCheckCompleteEvent", nic_quiet_check_complete_event, 0x0, 0x0, false, 0x8c9548e19536d3d3)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_AOAC.StartTime", start_time, 0x0, 0x0, false, 0x33780989004a5ad7)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 2>), "_NDIS_MINIPORT_AOAC.LastUnexpectedFailureLine", last_unexpected_failure_line, 0x0, 0x0, false, 0xca84df618b34a273)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_AOAC.TakeStartToRefTime", take_start_to_ref_time, 0x0, 0x0, false, 0x9bb7f58eef414c09)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_MINIPORT_AOAC.LastWakeTime", last_wake_time, 0x0, 0x0, false, 0xd99a04d3988e342a)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_AOAC.TakeWakeToRefTime", take_wake_to_ref_time, 0x0, 0x0, false, 0x42214677c108870f)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 15>), "_NDIS_MINIPORT_AOAC.ComponentRefCounts", component_ref_counts, 0x0, 0x0, false, 0xf81840cdf30d5883)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::aoac_component_ref_time_t, 15>), "_NDIS_MINIPORT_AOAC.CsRefTimes", cs_ref_times, 0x0, 0x0, false, 0x13c94ea570e642ec)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_AOAC.CsPowerTransitions", cs_power_transitions, 0x0, 0x0, false, 0xcfad7fd35a31399f)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_AOAC.TotalCsActiveTime", total_cs_active_time, 0x0, 0x0, false, 0x1c48a30585bdaf2e)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_AOAC.TotalCsResiliencyTime", total_cs_resiliency_time, 0x0, 0x0, false, 0xb6f8677fdd4c717d)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_AOAC.CurrentActiveStartTime", current_active_start_time, 0x0, 0x0, false, 0x8ae1b4c98893f297)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_AOAC.CsSurpriseWakes", cs_surprise_wakes, 0x0, 0x0, false, 0x749e59d5c5813ec1)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_AOAC.CsSpuriousWakes", cs_spurious_wakes, 0x0, 0x0, false, 0x47a2cbdfdf3e6c99)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::miniport_cs_traffic_stats_t, 3>), "_NDIS_MINIPORT_AOAC.CsTrafficStats", cs_traffic_stats, 0x0, 0x0, false, 0x22d211d4414c502f)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_cs_spurious_wake_stats_t), "_NDIS_MINIPORT_AOAC.CsSpuriousWakeStats", cs_spurious_wake_stats, 0x0, 0x0, false, 0xc1971bf12ca8efca)
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
#endif