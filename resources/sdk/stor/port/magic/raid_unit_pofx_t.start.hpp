#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_RAID_UNIT_POFX.PoHandle", po_handle, 0x0, 0x40, true, 0xcabd36bab23ca9a0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_UNIT_POFX.PoFxDevice", po_fx_device, 0x40, 0x40, true, 0xe0aa5937bd96aa01)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_POFX.CurrentFState", current_f_state, 0x80, 0x20, true, 0x4e4ff2beb6b419ef)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_POFX.D3IdleTimeout", d3_idle_timeout, 0xa0, 0x20, true, 0x5ef72fd9b6787ed4)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_POFX.MinD3IdleTimeout", min_d3_idle_timeout, 0xc0, 0x20, true, 0x6a0aca93069f46c9)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_POFX.CurrentD3IdleTimeout", current_d3_idle_timeout, 0xe0, 0x20, true, 0xe48f0462578acc3a)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.WakeCapable", wake_capable, 0x100, 0x1, true, 0x1e913cad3a2389bf, 1, uint32_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.Active", active, 0x101, 0x1, true, 0x2f9be5aef46a9d9b, 1, uint32_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.MiniportOptedIn", miniport_opted_in, 0x102, 0x1, true, 0x6a939f784db35f2c, 1, uint32_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.DevicePowerRequired", device_power_required, 0x103, 0x1, true, 0xad1b6f5144b05c27, 1, uint32_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.SetPowerupReason", set_powerup_reason, 0x104, 0x1, true, 0x8e57f47a59b2b134, 1, uint32_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.DPNRInCS", dpnr_in_cs, 0x105, 0x1, true, 0xe421f691f084edaf, 1, uint32_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.F1InCS", f1_in_cs, 0x106, 0x1, true, 0xfe191c666e3bb547, 1, uint32_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.AdaptiveD3IdleTimeoutEnabled", adaptive_d3_idle_timeout_enabled, 0x108, 0x1, true, 0x9606535d94fa3c49, 1, uint32_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.IoCoalescingOn", io_coalescing_on, 0x10a, 0x1, true, 0x8b72018762dd5f98, 1, uint32_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.OnBatteryPower", on_battery_power, 0x10b, 0x1, true, 0xef6d31cc5ca79859, 1, uint32_t)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_POFX.WaitWakeActiveReference", wait_wake_active_reference, 0x120, 0x20, true, 0x36f8b475a47ea930)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_RAID_UNIT_POFX.WaitWakeIrp", wait_wake_irp, 0x200, 0x40, true, 0xa89db0c2b6066c4f)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RAID_UNIT_POFX.ActivePendingRequestQueue", active_pending_request_queue, 0x240, 0x80, true, 0x686673a2fce52150)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_POFX.ActiveLock", active_lock, 0x2c0, 0x40, true, 0x696d035cfa864314)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_UNIT_POFX.IoCoalescingRegistration", io_coalescing_registration, 0x300, 0x40, true, 0x2f7d539a290c7756)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_UNIT_POFX.AcDcRegistration", ac_dc_registration, 0x340, 0x40, true, 0x56ab8faa179ce7ea)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::timer_t*), "_RAID_UNIT_POFX.PowerCycleCheckTimer", power_cycle_check_timer, 0x380, 0x40, true, 0xc5b9c17306608896)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::timer_t*), "_RAID_UNIT_POFX.MaintenanceTimer", maintenance_timer, 0x3c0, 0x40, true, 0x97359011c0308b90)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_UNIT_POFX.PreviousMaintenanceTime", previous_maintenance_time, 0x400, 0x40, true, 0x508dc27037c3a66e)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_POFX.ActiveRefsDuringMaintenanceTime", active_refs_during_maintenance_time, 0x440, 0x20, true, 0x20a61e19b7ea50d3)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_interlocked_flags_t), "_RAID_UNIT_POFX.InterlockedFlags", interlocked_flags, 0x460, 0x20, true, 0xd31419f00bf21374)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.DFxPowerDownInCS", d_fx_power_down_in_cs, 0x107, 0x1, true, 0x877323a7732e33d2, 1, uint32_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.AdaptiveD3IdleTimeoutEngaged", adaptive_d3_idle_timeout_engaged, 0x109, 0x1, true, 0x9c0ca427716ad901, 1, uint32_t)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_POFX.AdaptiveD3IdleTimeoutEngagedCount", adaptive_d3_idle_timeout_engaged_count, 0x140, 0x40, true, 0xc4045eb7091e3aad)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_POFX.AdaptiveD3IdleTimeoutCheckedCount", adaptive_d3_idle_timeout_checked_count, 0x180, 0x40, true, 0xcd350ef8635185e2)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_UNIT_POFX.LastIdleTimestamp", last_idle_timestamp, 0x1c0, 0x40, true, 0xeaa09238797787cf)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_POFX.MiniportActiveReferences", miniport_active_references, 0x0, 0x0, false, 0x5f3cd97a256031c4)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_POFX.IoctlActiveReferences", ioctl_active_references, 0x0, 0x0, false, 0x26be34228ba50396)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RAID_UNIT_POFX.PendingRequests", pending_requests, 0x0, 0x0, false, 0xb606cda548fc4166)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_POFX.ActiveReferences", active_references, 0x0, 0x0, false, 0x786d6cc8fe5ad257)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.F1ForPlaceholderMode", f1_for_placeholder_mode, 0x0, 0x0, false, 0xa4ded3c47122f942, 1, uint32_t)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_POFX.MiniportActiveReferenceAcquires", miniport_active_reference_acquires, 0x0, 0x0, false, 0x1f13e0818fcfbaa7)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_POFX.MiniportActiveReferenceReleases", miniport_active_reference_releases, 0x0, 0x0, false, 0xa429d936f676daf1)
#define _m26 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_POFX.InterlockedFlags.ActiveForMaintenanceTime", active_for_maintenance_time, 0x0, 0x1, true, 0x4381534f178f17e0, 1, uint32_t)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_POFX.InterlockedFlags.AsUlong", as_ulong, 0x0, 0x20, true, 0x8f2fac1eaaaeace1)
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
#define _m26
#define _m27
#endif