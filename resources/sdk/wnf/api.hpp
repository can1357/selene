#pragma once
#include <sdkgen/support_library.hpp>
#include "state_name_t.hpp"

#include "magic/api.start.hpp"
namespace wnf
{
    // [WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3b4f8, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) cmfc_host_os_feature_configuration_changed;
    
    // [WNF_CONT_CONTAINER_STATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x124e0, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) cont_container_state;
    
    // [WNF_DUMP_ALLOW_CRASHDUMP_POLICY_VALUE_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x13130, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) dump_allow_crashdump_policy_value_changed;
    
    // [WNF_DUMP_ALLOW_LIVEDUMP_POLICY_VALUE_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x13138, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) dump_allow_livedump_policy_value_changed;
    
    // [WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xe340, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) hpm_global_human_presence_state;
    
    // [WNF_KSR_STATE_TRANSITION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3fa40, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) ksr_state_transition;
    
    // [WNF_MM_BAD_MEMORY_QUARANTINED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x132d8, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) mm_bad_memory_quarantined;
    
    // [WNF_PNPD_DRIVER_STORE_NODES_UDPATED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x12218, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) pnpd_driver_store_nodes_udpated;
    
    // [WNF_PO_BACKGROUND_ACTIVITY_POLICY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x25f1d8, 0x32828 bytes
    //
    _m8(sdk::unknown_ptr) po_background_activity_policy;
    
    // [WNF_PO_FAN_NOISE_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x132b0, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) po_fan_noise_change;
    
    // [WNF_PO_HIBERNATE_POLICY_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xe3e0, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) po_hibernate_policy_change;
    
    // [WNF_PO_INITIAL_GLOBAL_USER_PRESENCE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xe3f8, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) po_initial_global_user_presence;
    
    // [WNF_PO_SLEEPSTUDY_SESSION_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x104c8, 0x1fd000 bytes
    //
    _n2(sdk::unknown_ptr) po_sleepstudy_session_change;
    
    // [WNF_PO_TERMINAL_INACTIVITY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3b5d0, 0x1fd000 bytes
    //
    _n3(sdk::unknown_ptr) po_terminal_inactivity;
    
    // [WNF_SEB_NON_OFFLOADED_AUDIO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x260368, 0x32828 bytes
    //
    _n4(sdk::unknown_ptr) seb_non_offloaded_audio;
    
    // [WNF_SEB_OFFLOADED_AUDIO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x260370, 0x32828 bytes
    //
    _n5(sdk::unknown_ptr) seb_offloaded_audio;
    
    // [WNF_SHEL_INACTIVITY_TIMEOUT_IN_MS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3b4d0, 0x1fd000 bytes
    //
    _n6(sdk::unknown_ptr) shel_inactivity_timeout_in_ms;
    
    // [WNF_CONT_RESTORE_FROM_SNAPSHOT_COMPLETE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xdf98, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xdb00, 0x1fe000 bytes
    //
    _n7(struct wnf::state_name_t*) cont_restore_from_snapshot_complete;
    
    // [WNF_PO_WEAK_CHARGER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d670, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2d9b0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) po_weak_charger;
    
    // [WNF_BLTH_BLUETOOTH_DEVICE_DOCK_STATUS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xf030, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13478, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xeaf0, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) blth_bluetooth_device_dock_status;
    
    // [WNF_CI_BLOCKED_DRIVER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d6c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b610, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2da08, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) ci_blocked_driver;
    
    // [WNF_CMFC_FEATURE_CONFIGURATION_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xab10, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x112a8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf810, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) cmfc_feature_configuration_changed;
    
    // [WNF_DEP_OOBE_COMPLETE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d698, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b5e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d9d8, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) dep_oobe_complete;
    
    // [WNF_MM_PHYSICAL_MEMORY_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d578, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b4a8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d8b8, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) mm_physical_memory_change;
    
    // [WNF_OLIC_OS_LICENSE_NON_GENUINE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d628, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b568, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d968, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) olic_os_license_non_genuine;
    
    // [WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xeef8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13228, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe9b8, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) po_basic_brightness_engine_disabled;
    
    // [WNF_PO_BATTERY_CHARGE_LIMITING_MODE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d6f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b638, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2da30, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) po_battery_charge_limiting_mode;
    
    // [WNF_PO_BRIGHTNESS_ALS_OFFSET]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xeef0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13230, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe9b0, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) po_brightness_als_offset;
    
    // [WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d630, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b570, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d970, 0x1fe000 bytes
    //
    _o8(struct wnf::state_name_t*) po_drips_device_constraints_registered;
    
    // [WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d5c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b500, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d908, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) po_drips_device_constraints_updated;
    
    // [WNF_PO_INPUT_SUPPRESS_NOTIFICATION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xfd18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b590, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf820, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) po_input_suppress_notification;
    
    // [WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xfd08, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b4a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf808, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) po_input_suppress_notification_ex;
    
    // [WNF_PO_MODERN_STANDBY_EXIT_INITIATED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d690, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b5d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d9d0, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) po_modern_standby_exit_initiated;
    
    // [WNF_PO_OPPORTUNISTIC_CS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xa390, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11938, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb2d0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) po_opportunistic_cs;
    
    // [WNF_PO_POWER_BUTTON_STATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d600, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b540, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d940, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) po_power_button_state;
    
    // [WNF_PO_PRESLEEP_NOTIFICATION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d5c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b4f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d900, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) po_presleep_notification;
    
    // [WNF_PO_RECONCILED_WEAK_CHARGER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d650, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b598, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d990, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) po_reconciled_weak_charger;
    
    // [WNF_PO_SW_HW_DRIPS_DIVERGENCE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d620, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b560, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d960, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) po_sw_hw_drips_divergence;
    
    // [WNF_PO_SYSTEM_TIME_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xd0f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b480, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc880, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) po_system_time_changed;
    
    // [WNF_PO_UMPO_SCENARIO_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xa4f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfea8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb438, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) po_umpo_scenario_change;
    
    // [WNF_PO_VIDEO_INITIALIALIZED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xef00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13220, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe9c0, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) po_video_initialialized;
    
    // [WNF_PO_WAKE_ON_VOICE_STATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d590, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x14820, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d8d0, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) po_wake_on_voice_state;
    
    // [WNF_SEB_AUDIO_ACTIVITY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xf058, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13480, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xeb18, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) seb_audio_activity;
    
    // [WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xfd00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x14810, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf800, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) seb_dev_mnf_custom_notification_received;
    
    // [WNF_SEB_MIXED_REALITY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xef90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x132d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xea50, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) seb_mixed_reality;
    
    // [WNF_SEB_MOBILE_HOTSPOT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xf028, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13468, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xeae8, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) seb_mobile_hotspot;
    
    // [WNF_SEB_SYSTEM_LPE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d6e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b628, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2da20, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) seb_system_lpe;
    
    // [WNF_SRC_SYSTEM_RADIO_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xf038, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13488, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xeaf8, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) src_system_radio_changed;
    
    // [WNF_SRUM_SCREENONSTUDY_SESSION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xf040, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13460, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xeb00, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) srum_screenonstudy_session;
    
    // [WNF_USB_ERROR_NOTIFICATION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xecb0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11a08, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe770, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) usb_error_notification;
    
    // [WNF_BOOT_DIRTY_SHUTDOWN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f040, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d610, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b550, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d950, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) boot_dirty_shutdown;
    
    // [WNF_BOOT_INVALID_TIME_SOURCE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261690, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d570, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x14818, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d8b0, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) boot_invalid_time_source;
    
    // [WNF_ETW_SUBSYSTEM_INITIALIZED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260290, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xde40, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xef40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcec0, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) etw_subsystem_initialized;
    
    // [WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2799d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20ac8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x27218, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x20a38, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) exec_thermal_limiter_terminate_background_tasks;
    
    // [WNF_FLT_RUNDOWN_WAIT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f070, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d660, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b5a8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d9a0, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) flt_rundown_wait;
    
    // [WNF_FSRL_OPLOCK_BREAK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e7b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e158, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x18a68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e0d8, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) fsrl_oplock_break;
    
    // [WNF_FSRL_TIERED_VOLUME_DETECTED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27efe0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d580, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b4b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d8c0, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) fsrl_tiered_volume_detected;
    
    // [WnfGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271898, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1da30, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1ce48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1d9b0, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) guid;
    
    // [WNF_HVL_CPU_MGMT_PARTITION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f068, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d658, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b5a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d998, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) hvl_cpu_mgmt_partition;
    
    // [WNF_MM_BAD_MEMORY_PENDING_REMOVAL]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f030, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xfd10, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b530, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf818, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) mm_bad_memory_pending_removal;
    
    // [WNF_PNPA_DEVNODES_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260270, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd8a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12170, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd4b8, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) pnpa_devnodes_changed;
    
    // [WNF_PNPA_DEVNODES_CHANGED_SESSION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260278, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd8b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12180, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd4c8, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) pnpa_devnodes_changed_session;
    
    // [WNF_PNPA_HARDWAREPROFILES_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27efd0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d560, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b490, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d8a0, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) pnpa_hardwareprofiles_changed;
    
    // [WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f0a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d6d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b620, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2da18, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) pnpa_hardwareprofiles_changed_session;
    
    // [WNF_PNPA_PORTS_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f018, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d5d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b508, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d910, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) pnpa_ports_changed;
    
    // [WNF_PNPA_PORTS_CHANGED_SESSION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27efd8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d568, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b498, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d8a8, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) pnpa_ports_changed_session;
    
    // [WNF_PNPA_VOLUMES_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f0b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd8a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12178, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd4c0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) pnpa_volumes_changed;
    
    // [WNF_PNPA_VOLUMES_CHANGED_SESSION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f028, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d5f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b528, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d930, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) pnpa_volumes_changed_session;
    
    // [WNF_PNPB_AWAITING_RESPONSE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e1e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb548, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe810, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9f78, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) pnpb_awaiting_response;
    
    // [WNF_PNPC_CONTAINER_CONFIG_REQUESTED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261698, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcb18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xef38, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc468, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) pnpc_container_config_requested;
    
    // [WNF_PNPC_DEVICE_INSTALL_REQUESTED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f000, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d5a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b4d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d8e8, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) pnpc_device_install_requested;
    
    // [WNF_PO_BATTERY_CHARGE_LEVEL]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f058, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d640, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b580, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d980, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) po_battery_charge_level;
    
    // [WNF_PO_BATTERY_DISCHARGING]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f050, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d638, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b578, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d978, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) po_battery_discharging;
    
    // [WNF_PO_CHARGE_ESTIMATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f188, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd438, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf930, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcba8, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) po_charge_estimate;
    
    // [WNF_PO_COMPOSITE_BATTERY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f020, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d5e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b520, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d928, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) po_composite_battery;
    
    // [WNF_PO_DISCHARGE_ESTIMATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f180, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd430, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf938, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcba0, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) po_discharge_estimate;
    
    // [WNF_PO_DISCHARGE_START_FILETIME]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f190, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd440, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf928, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcbb0, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) po_discharge_start_filetime;
    
    // [WNF_PO_ENERGY_SAVER_OVERRIDE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f1e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd468, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfc18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcbd8, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) po_energy_saver_override;
    
    // [WNF_PO_ENERGY_SAVER_SETTING]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260be0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xeea0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x131c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe960, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) po_energy_saver_setting;
    
    // [WNF_PO_ENERGY_SAVER_STATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260c08, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xef58, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13298, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xea18, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) po_energy_saver_state;
    
    // [WNF_PO_POWER_STATE_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27efc8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d558, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b488, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d898, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) po_power_state_change;
    
    // [WNF_PO_PREVIOUS_SHUTDOWN_STATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2799e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20ad0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x27220, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x20a40, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) po_previous_shutdown_state;
    
    // [WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260300, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xeea8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11940, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe968, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) po_primary_display_visible_state;
    
    // [WNF_PO_SCENARIO_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f078, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d668, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b5b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d9a8, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) po_scenario_change;
    
    // [WNF_PO_SLEEP_STUDY_USER_PRESENCE_CHANGED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2603d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa938, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10500, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd148, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) po_sleep_study_user_presence_changed;
    
    // [WNF_PO_THERMAL_HIBERNATE_OCCURRED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27eff0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d598, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b4c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d8d8, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) po_thermal_hibernate_occurred;
    
    // [WNF_PO_THERMAL_OVERTHROTTLE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27eff8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d5a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b4c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d8e0, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) po_thermal_overthrottle;
    
    // [WNF_PO_THERMAL_SHUTDOWN_OCCURRED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f038, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d608, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b548, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d948, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) po_thermal_shutdown_occurred;
    
    // [WNF_PO_THERMAL_STANDBY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f088, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d680, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b5c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d9c0, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) po_thermal_standby;
    
    // [WNF_PO_USER_AWAY_PREDICTION]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260358, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xf050, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13458, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xeb10, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) po_user_away_prediction;
    
    // [WNF_PS_WAKE_CHARGE_RESOURCE_POLICY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f0a0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d6d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b618, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2da10, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) ps_wake_charge_resource_policy;
    
    // [WNF_SBS_UPDATE_AVAILABLE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f048, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d618, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b558, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d958, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) sbs_update_available;
    
    // [WNF_SEB_APP_LAUNCH_PREFETCH]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e3b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbf28, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfd48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb870, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) seb_app_launch_prefetch;
    
    // [WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260360, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xf048, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13470, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xeb08, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) seb_full_screen_video_playback;
    
    // [WNF_SEB_LOW_LATENCY_POWER_REQUEST]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f090, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd5e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12390, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcd28, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) seb_low_latency_power_request;
    
    // [WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260b48, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xec88, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12d38, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe748, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) seb_network_connectivity_in_standby;
    
    // [WNF_SEB_TIME_ZONE_CHANGE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27f060, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d648, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b588, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d988, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) seb_time_zone_change;
    
    // [WNF_UBPM_CONSOLE_MONITOR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f0d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd470, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x103e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd380, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) ubpm_console_monitor;
    
    // [WNF_WER_SERVICE_START]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27efe8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d588, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b4b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d8c8, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) wer_service_start;
    
    // [WNF_SHEL_FOCUS_CHANGE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .rdata:0x2e5030, 0x13864 bytes
    //
    _v9(sdk::unknown_ptr) shel_focus_change;
    
    // [WNF_SPI_PRIMARY_MONITOR_DPI_CHANGED]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3a90, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f3a60, 0x1596d bytes
    //
    _w0(sdk::unknown_ptr) spi_primary_monitor_dpi_changed;
    
    // [WNF_INPT_SETTINGS_CHANGE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c858, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804c8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a898, 0x243e0 bytes
    //
    _w1(sdk::unknown_ptr) inpt_settings_change;
    
    // [WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f3a78, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f4468, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f3a48, 0x1596d bytes
    //
    _w2(sdk::unknown_ptr) ism_input_update_after_track_interval;
    
    // [WNF_ISM_LAST_USER_ACTIVITY]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x216220, 0x243e0 bytes
    // win32kbase.sys .rdata:0x266508, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x214268, 0x243e0 bytes
    //
    _w3(sdk::unknown_ptr) ism_last_user_activity;
    
    // [WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x105b20, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x216de0, 0x243e0 bytes
    // win32kbase.sys .rdata:0x266e78, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x213f20, 0x243e0 bytes
    //
    _w4(sdk::unknown_ptr) dx_display_config_change_notification;
    
    // [WNF_DX_MONITOR_CHANGE_NOTIFICATION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109e68, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c868, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804d0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8a8, 0x243e0 bytes
    //
    _w5(sdk::unknown_ptr) dx_monitor_change_notification;
    
    // [WNF_DXGK_ADAPTER_TDR_NOTIFICATION]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x105e98, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c878, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804e0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8b8, 0x243e0 bytes
    //
    _w6(sdk::unknown_ptr) dxgk_adapter_tdr_notification;
    
    // [WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x105cd8, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x2161d8, 0x243e0 bytes
    // win32kbase.sys .rdata:0x267018, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x2165b8, 0x243e0 bytes
    //
    _w7(sdk::unknown_ptr) po_primary_display_logical_state;
    
    // [WNF_SPI_LOGICALDPIOVERRIDE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x105860, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x216a80, 0x243e0 bytes
    // win32kbase.sys .rdata:0x266450, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x2138b8, 0x243e0 bytes
    //
    _w8(sdk::unknown_ptr) spi_logicaldpioverride;
    
    // [WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109f60, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c880, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2804e8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a8c0, 0x243e0 bytes
    //
    _w9(sdk::unknown_ptr) tope_inp_pointer_device_activity;
    
    // [WNF_PO_D3COLD_STATE_CHANGED]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2c470, 0x1cf0 bytes
    //
    _x0(sdk::unknown_ptr) po_d3cold_state_changed;
    
    // [WNF_NDIS_ADAPTER_ARRIVAL]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a6f8, 0x1c8a8 bytes
    // ndis.sys .rdata:0xd0598, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7940, 0x1e858 bytes
    // ndis.sys .rdata:0xd0740, 0x1d2c0 bytes
    //
    _x1(sdk::unknown_ptr) ndis_adapter_arrival;
    
    // [WNF_CI_CODEINTEGRITY_MODE_CHANGE]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .rdata:0x26320, 0x13a78 bytes
    //
    _x2(sdk::unknown_ptr) ci_codeintegrity_mode_change;
    
    // [WNF_CI_HVCI_IMAGE_INCOMPATIBLE]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2fc48, 0x13a78 bytes
    // ci.dll .rdata:0x26260, 0x13a78 bytes
    // ci.dll .rdata:0x2fc48, 0x13a78 bytes
    //
    _x3(sdk::unknown_ptr) ci_hvci_image_incompatible;
    
    // [WNF_CI_SMODE_CHANGE]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x2fc40, 0x13a78 bytes
    // ci.dll .rdata:0x261e8, 0x13a78 bytes
    // ci.dll .rdata:0x2fc40, 0x13a78 bytes
    //
    _x4(sdk::unknown_ptr) ci_smode_change;
    
    // [WNF_AFD_IGNORE_ORDERLY_RELEASE_CHANGE]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1fa58, 0x15fb8 bytes
    // afd.sys .rdata:0x4fd18, 0x187f8 bytes
    // afd.sys .rdata:0x1fa58, 0x15fb8 bytes
    //
    _x5(sdk::unknown_ptr) afd_ignore_orderly_release_change;
    
    // [WNF_WSQM_IS_OPTED_IN]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1eba8, 0x15e38 bytes
    // afd.sys .rdata:0x1fa50, 0x15fb8 bytes
    // afd.sys .rdata:0x1fa50, 0x15fb8 bytes
    //
    _x6(sdk::unknown_ptr) wsqm_is_opted_in;
    
    // [WNF_SEB_IP_ADDRESS_AVAILABLE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1df20, 0x15e38 bytes
    // afd.sys .rdata:0x1dfc0, 0x15fb8 bytes
    // afd.sys .rdata:0x4e2e0, 0x187f8 bytes
    // afd.sys .rdata:0x1dfc0, 0x15fb8 bytes
    //
    _x7(sdk::unknown_ptr) seb_ip_address_available;
    
    // [WNF_EDP_PURGE_APP_LEARNING_EVT]
    // Ldr = [tcpip.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .rdata:0x1dfce0, 0x7a898 bytes
    // tcpip.sys .rdata:0x1d9a20, 0x91370 bytes
    // tcpip.sys .rdata:0x1ded30, 0x7a860 bytes
    //
    _x8(sdk::unknown_ptr) edp_purge_app_learning_evt;
    
    // [WNF_DXGK_CABC_ON_OR_OFF]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .rdata:0x8b638, 0x84380 bytes
    //
    _x9(sdk::unknown_ptr) dxgk_cabc_on_or_off;
    
    // [WnfPacketCompletionRoutine]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x5ea00, 0x84380 bytes
    //
    _y0(sdk::unknown_ptr) packet_completion_routine;
    
    // [WNF_SEB_SYSTEM_AC]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .rdata:0x3e1d8, 0x60098 bytes
    //
    _y1(sdk::unknown_ptr) seb_system_ac;
    
    // [WNF_DX_DISPLAY_COLORIMETRY_DATA_CHANGED]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x7f648, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8a050, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x7f728, 0x762b0 bytes
    //
    _y2(sdk::unknown_ptr) dx_display_colorimetry_data_changed;
    
    // [WNF_DX_SDR_WHITE_LEVEL_CHANGED]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x800b0, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x9a060, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x80190, 0x762b0 bytes
    //
    _y3(sdk::unknown_ptr) dx_sdr_white_level_changed;
    
    // [WNF_DX_VAIL_CHANGE_NOTIFICATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x7fea8, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x99de8, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x7ff88, 0x762b0 bytes
    //
    _y4(sdk::unknown_ptr) dx_vail_change_notification;
    
    // [WNF_DXGK_PATH_FAILED_OR_INVALIDATED]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x7f930, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x997f0, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x7fa10, 0x762b0 bytes
    //
    _y5(sdk::unknown_ptr) dxgk_path_failed_or_invalidated;
    
    // [WnfScreenOnCallback]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20170, 0x762b0 bytes
    // dxgkrnl.sys .text:0x25b70, 0x84380 bytes
    // dxgkrnl.sys .text:0x20ca0, 0x762b0 bytes
    //
    _y6(sdk::unknown_ptr) screen_on_callback;
    
    // [WNF_DX_DEVICE_REMOVAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x3e210, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x80058, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x99ff8, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x80138, 0x762b0 bytes
    //
    _y7(sdk::unknown_ptr) dx_device_removal;
    
    // [WNF_DX_HARDWARE_CONTENT_PROTECTION_TILT_NOTIFICATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x3e0f0, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x7fec0, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x99e00, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x7ffa0, 0x762b0 bytes
    //
    _y8(sdk::unknown_ptr) dx_hardware_content_protection_tilt_notification;
    
    // [WNF_DX_INTERNAL_PANEL_DIMENSIONS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x375c8, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x77db0, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8bd28, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x777f0, 0x762b0 bytes
    //
    _y9(sdk::unknown_ptr) dx_internal_panel_dimensions;
    
    // [WNF_DX_MODE_CHANGE_NOTIFICATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x37930, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x75588, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8a048, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x75aa0, 0x762b0 bytes
    //
    _z0(sdk::unknown_ptr) dx_mode_change_notification;
    
    // [WNF_DX_MODERN_OUTPUTDUPLICATION_CONTEXTS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x3dcc0, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x7f878, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x99728, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x7f958, 0x762b0 bytes
    //
    _z1(sdk::unknown_ptr) dx_modern_outputduplication_contexts;
    
    // [WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x3db18, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x7f6a0, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x994e0, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x7f780, 0x762b0 bytes
    //
    _z2(sdk::unknown_ptr) dx_network_display_state_change_notification;
    
    // [WNF_DX_OCCLUSION_CHANGE_NOTIFICATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x37aa8, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x75580, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8a040, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x75a98, 0x762b0 bytes
    //
    _z3(sdk::unknown_ptr) dx_occlusion_change_notification;
    
    // [WNF_DX_STEREO_CONFIG]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x3d970, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x7f480, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x99220, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x7f558, 0x762b0 bytes
    //
    _z4(sdk::unknown_ptr) dx_stereo_config;
    
    // [WNF_DX_VIDMM_BUDGETCHANGE_NOTIFICATION]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b750, 0x158b bytes
    // dxgmms2.sys .rdata:0x450e8, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x5a9a0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x450e8, 0x1c52 bytes
    //
    _z5(sdk::unknown_ptr) dx_vidmm_budgetchange_notification;
    
    // [WNF_DX_AUTOHDR_LEVEL_CHANGED]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xabb68, 0x18b10 bytes
    //
    _z6(sdk::unknown_ptr) dx_autohdr_level_changed;
    
    // [WNF_DX_GPM_TARGET]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac398, 0x17e70 bytes
    // dxgi.dll .rdata:0xac6d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xab8b8, 0x18b10 bytes
    // dxgi.dll .rdata:0xad580, 0x17e70 bytes
    //
    _z7(sdk::unknown_ptr) dx_gpm_target;
};
#include "magic/api.end.hpp"
