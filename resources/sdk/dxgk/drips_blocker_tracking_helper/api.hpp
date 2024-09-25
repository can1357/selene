#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::drips_blocker_tracking_helper
{
    // [AddActiveTime@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ba4bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fb298, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba58c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_active_time;
    
    // [AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ba5b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fb390, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba684, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_d0_lag_time_to_last_active_entry;
    
    // [AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ba6cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fb4a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba79c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) add_gpu_time_to_process_entry;
    
    // [AddNewProcessEntry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ba748, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fb524, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba818, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) add_new_process_entry;
    
    // [AddNewReasonForProcessEntry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ba7d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fb5ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba8a0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) add_new_reason_for_process_entry;
    
    // [AddProcessEntry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ba8b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fb690, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ba984, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) add_process_entry;
    
    // [AddWakeUpToProcessEntry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2baa14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fb7f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2baae4, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) add_wake_up_to_process_entry;
    
    // [DoGetProcessEntry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2baa8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fb8cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bab5c, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) do_get_process_entry;
    
    // [EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2babcc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fba0c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bac9c, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) emit_sleep_study_blocker_activation_telemetry;
    
    // [EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2bad2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fbb6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2badfc, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) emit_sleep_study_blocker_data_events;
    
    // [EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2bb1dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fc010, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bb2ac, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) emit_sleep_study_blocker_metadata_event;
    
    // [EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2bb374, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fc19c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bb444, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) emit_sleep_study_blocker_telemetry;
    
    // [EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2bb4dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fc304, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bb5ac, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) emit_sleep_study_total_time_modern_standby_telemetry;
    
    // [EnableAccountingForProcess@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2bb634, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fc45c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bb704, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) enable_accounting_for_process;
    
    // [EnableEntryAccounting@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2bb758, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fc580, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bb828, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) enable_entry_accounting;
    
    // [EngageDFx@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2bb80c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fc624, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bb8dc, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) engage_d_fx;
    
    // [EtwProfilerTypeName@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2bb8c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fc6e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bb998, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) etw_profiler_type_name;
    
    // [FinalizeTracking@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be180, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2feffc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be250, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) finalize_tracking;
    
    // [GetProcessEntry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be358, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff1bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be428, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) get_process_entry;
    
    // [NotifyProcessFreeze@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be428, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff28c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be4f8, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) notify_process_freeze;
    
    // [PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be530, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff394, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be600, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) prepare_drips_blocker_process_name;
    
    // [RemoveProcessEntry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be64c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff4a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be71c, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) remove_process_entry;
    
    // [ResetDAM@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be788, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff5dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be858, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) reset_dam;
    
    // [ShouldIgnore@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be7b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff604, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be880, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) should_ignore;
    
    // [UpdateLastActiveEntry@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be844, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff668, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be914, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) update_last_active_entry;
};
#include "magic/api.end.hpp"
