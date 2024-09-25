#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace wdip
{
    // [WdipSemGetLoggerDroppedEventCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x50ef08, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) sem_get_logger_dropped_event_count;
    
    // [WdipSemDeleteValueFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x791a10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8447b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785b88, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) sem_delete_value_from_registry;
    
    // [WdipAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x224440, 0x32828 bytes
    // ntoskrnl.exe .text:0x59f640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e6d48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59f4c0, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) access_check;
    
    // [WdipContextLoggerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301340, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c8ac, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc349a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1c90c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) context_logger_id;
    
    // [WdipDiagLoggerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301344, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c8a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc349a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1c908, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) diag_logger_id;
    
    // [WdipSemActivateInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531dc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76cd9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86cec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77480c, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) sem_activate_instance;
    
    // [WdipSemAddContextEventToScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559fd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x791ae8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x841ecc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785c60, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) sem_add_context_event_to_scenario;
    
    // [WdipSemAddEndEventToScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55a08c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x791ba8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8447f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785d20, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) sem_add_end_event_to_scenario;
    
    // [WdipSemAddScenarioToTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559e8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x791950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843dac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785ac8, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) sem_add_scenario_to_table;
    
    // [WdipSemAllocatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52f97c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a1da8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843aec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a9fc8, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) sem_allocate_pool;
    
    // [WdipSemBuildScenarioInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53217c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76bb9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8421c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77360c, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) sem_build_scenario_instance;
    
    // [WdipSemCaptureState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10abe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x39a5dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb0e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39ba9c, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) sem_capture_state;
    
    // [WdipSemCleanStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5588d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7901d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x841c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x784350, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) sem_clean_start;
    
    // [WdipSemCleanupGroupPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558934, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x790244, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84488c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7843bc, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) sem_cleanup_group_policy;
    
    // [WdipSemClearFrequentScenarioTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13e7e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b7c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb17c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af1fc, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) sem_clear_frequent_scenario_table;
    
    // [WdipSemDeleteTransitionalInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ebb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76bc10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x841f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x773680, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) sem_delete_transitional_instance;
    
    // [WdipSemDisableAllProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d838, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2614, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c108, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) sem_disable_all_providers;
    
    // [WdipSemDisableContextProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50e98c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76ce60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8424bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7748d0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) sem_disable_context_provider;
    
    // [WdipSemDisableContextProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50e920, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76cdf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x842354, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x774860, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) sem_disable_context_providers;
    
    // [WdipSemDisableScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50f934, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76c840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x815b00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7742b0, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) sem_disable_scenario;
    
    // [WdipSemDisabledScenarioTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fecb8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a210, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc34328, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a278, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) sem_disabled_scenario_table;
    
    // [WdipSemEnableAllProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559d8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79185c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7859d4, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) sem_enable_all_providers;
    
    // [WdipSemEnableContextProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531ecc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76cfb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8423c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x774a28, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) sem_enable_context_provider;
    
    // [WdipSemEnableContextProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531e78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76cf5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8422f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7749cc, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) sem_enable_context_providers;
    
    // [WdipSemEnableDisableTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50eafc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76d0b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x774b28, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) sem_enable_disable_trace;
    
    // [WdipSemEnableScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531ba8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76cacc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x815958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77453c, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) sem_enable_scenario;
    
    // [WdipSemEnableSemProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558ba4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7904b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84223c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78462c, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) sem_enable_sem_provider;
    
    // [WdipSemEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fecb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a218, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc34330, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a270, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) sem_enabled;
    
    // [WdipSemEnabledInstanceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2ff0e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c880, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc34980, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1c8e0, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) sem_enabled_instance_table;
    
    // [WdipSemFastAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ee5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76beb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8437a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x773920, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) sem_fast_allocate;
    
    // [WdipSemFastFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ee38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76be84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843878, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7738f4, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) sem_fast_free;
    
    // [WdipSemFreePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a05dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d088, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d1e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b958, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) sem_free_pool;
    
    // [WdipSemFreeScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559af4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79157c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8437e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7856f4, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) sem_free_scenario;
    
    // [WdipSemFrequentScenarioTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fecc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c460, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc34560, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a4a0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) sem_frequent_scenario_table;
    
    // [WdipSemGetGuidKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0c54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d738, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c008, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) sem_get_guid_key;
    
    // [WdipSemGetLoggerIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x510cac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76cc7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x815d0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7746ec, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) sem_get_logger_ids;
    
    // [WdipSemInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558814, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x790184, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x841c18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7842fc, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) sem_initialize;
    
    // [WdipSemInitializeGlobalState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55a14c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x791c70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8448e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785de8, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) sem_initialize_global_state;
    
    // [WdipSemInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301338, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c8a4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc34320, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1c904, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) sem_initialized;
    
    // [WdipSemLoadConfigInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558aa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7903c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84200c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78453c, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) sem_load_config_info;
    
    // [WdipSemLoadGroupPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558a58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79036c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x841cdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7844e4, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) sem_load_group_policy;
    
    // [WdipSemLoadLocalGroupPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a067c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d1f18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b9f0, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) sem_load_local_group_policy;
    
    // [WdipSemLoadNextContextProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558f4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x790874, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x842a9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7849ec, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) sem_load_next_context_provider;
    
    // [WdipSemLoadNextEndEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558c58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x790570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x842798, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7846e8, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) sem_load_next_end_event;
    
    // [WdipSemLoadNextScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5594a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x790f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843128, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785078, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) sem_load_next_scenario;
    
    // [WdipSemLoadScenarioTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5591c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x790af4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x842d1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x784c6c, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) sem_load_scenario_table;
    
    // [WdipSemLogInflightLimitExceededInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a020c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92cd24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d1b24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b5f4, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) sem_log_inflight_limit_exceeded_information;
    
    // [WdipSemLogTimeoutInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0868, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d20fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92bbf0, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) sem_log_timeout_information;
    
    // [WdipSemMarkInstanceForDeletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50faec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76c990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x815c44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x774400, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) sem_mark_instance_for_deletion;
    
    // [WdipSemMarkNextTimedOutInstanceForDeletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x490a0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66def0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d7b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e1040, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) sem_mark_next_timed_out_instance_for_deletion;
    
    // [WdipSemMergeEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55a118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x791c3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8448ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785db4, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) sem_merge_events;
    
    // [WdipSemMergeScenarios]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559f44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x791a58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x841e3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785bd0, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) sem_merge_scenarios;
    
    // [WdipSemOneSecond]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271890, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1a460, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1ce40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1a3e0, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) sem_one_second;
    
    // [WdipSemOpenRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559a80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7914f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785668, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) sem_open_registry_key;
    
    // [WdipSemPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326d60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc53ac0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6aed0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc53a80, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) sem_pool;
    
    // [WdipSemProviderTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2ff320, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a220, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32300, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a8c0, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) sem_provider_table;
    
    // [WdipSemPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2ff310, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c238, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc34318, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a490, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) sem_push_lock;
    
    // [WdipSemQueryEnabledInstanceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50fbe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76ca14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x815cc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x774484, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) sem_query_enabled_instance_table;
    
    // [WdipSemQueryInflightScenarioTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0354, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92ce74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d1c74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b744, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) sem_query_inflight_scenario_table;
    
    // [WdipSemQueryProviderTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559d3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x791808, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8439bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785980, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) sem_query_provider_table;
    
    // [WdipSemQueryScenarioTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76cc14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x815a98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x774684, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) sem_query_scenario_table;
    
    // [WdipSemQueryValueFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559980, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7913e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785558, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) sem_query_value_from_registry;
    
    // [WdipSemRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x301330, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c230, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc34310, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a488, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) sem_reg_handle;
    
    // [WdipSemReserveInstanceTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x532044, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76bac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8420fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x773538, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) sem_reserve_instance_table_entry;
    
    // [WdipSemRollBackProviderTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a010c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92cc14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d1a14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b4e4, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) sem_roll_back_provider_table;
    
    // [WdipSemScenarioTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2ff100, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc34340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a280, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) sem_scenario_table;
    
    // [WdipSemShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0170, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92cc80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d1a80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b550, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) sem_shutdown;
    
    // [WdipSemSqmAddToStream]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0e08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d8ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d26c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c1bc, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) sem_sqm_add_to_stream;
    
    // [WdipSemSqmEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0f54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92da50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d282c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c320, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) sem_sqm_enabled;
    
    // [WdipSemSqmIncrementDword]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0fa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92daa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d287c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c370, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) sem_sqm_increment_dword;
    
    // [WdipSemSqmInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5589d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7902e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x841db8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x784460, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) sem_sqm_init;
    
    // [WdipSemSqmLogInflightLimitExceededDataPoints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x490b04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66df78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d7bc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e10c8, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) sem_sqm_log_inflight_limit_exceeded_data_points;
    
    // [WdipSemSqmLogTimeoutDataPoints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a1038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92db40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d291c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92c410, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) sem_sqm_log_timeout_data_points;
    
    // [WdipSemStartTimeoutCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558950, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x790264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x841d34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7843dc, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) sem_start_timeout_check;
    
    // [WdipSemTimeoutEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2ff308, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c448, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc34548, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a8b0, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) sem_timeout_enabled;
    
    // [WdipSemTimeoutValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30133c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1c8a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc349a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1c900, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) sem_timeout_value;
    
    // [WdipSemUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0030, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92c9c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d17cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b294, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) sem_update;
    
    // [WdipSemUpdateFrequentScenarioTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a03c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92cee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d1ce4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b7b4, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) sem_update_frequent_scenario_table;
    
    // [WdipSemUpdateInflightScenarioTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a04f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92cfa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d1d98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b870, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) sem_update_inflight_scenario_table;
    
    // [WdipSemUpdateProviderEntriesForScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559b84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x791614, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843a10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78578c, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) sem_update_provider_entries_for_scenario;
    
    // [WdipSemUpdateProviderEntryForEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559bd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79166c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843a68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7857e4, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) sem_update_provider_entry_for_event;
    
    // [WdipSemUpdateProviderTableWithEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559ca0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x791764, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843918, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7858dc, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) sem_update_provider_table_with_event;
    
    // [WdipSemUpdateProviderTableWithScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x559c34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7916f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8438a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785868, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) sem_update_provider_table_with_scenario;
    
    // [WdipSemValidateEndEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50e8a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76d49c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86cc98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x774f0c, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) sem_validate_end_event;
    
    // [WdipSemWriteEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ee94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76beec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843e6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77395c, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) sem_write_event;
    
    // [WdipSemWriteInflightLimitExceededEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a08f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d3b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92bc84, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) sem_write_inflight_limit_exceeded_event;
    
    // [WdipSemWriteMisconfigEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a09d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d49c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2278, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92bd6c, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) sem_write_misconfig_event;
    
    // [WdipSemWriteProviderLimitExceededEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0a60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d52c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2308, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92bdfc, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) sem_write_provider_limit_exceeded_event;
    
    // [WdipSemWriteScenarioLimitExceededEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0ac4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d598, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2374, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92be68, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) sem_write_scenario_limit_exceeded_event;
    
    // [WdipSemWriteSemActionsEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ec98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76bc94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8425b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x773704, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) sem_write_sem_actions_event;
    
    // [WdipSemWriteSemFailureEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0b44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d23fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92bef0, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) sem_write_sem_failure_event;
    
    // [WdipSemWriteTimeoutEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a0bd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92d6b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d2490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92bf84, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) sem_write_timeout_event;
    
    // [WdipStartEndScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50f8cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76ca5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8158e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7744cc, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) start_end_scenario;
    
    // [WdipTimeoutCheckRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4908f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66de40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d7a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0f90, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) timeout_check_routine;
    
    // [WdipTimeoutTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2feb10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a0b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32170, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a110, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) timeout_timer;
    
    // [WdipTimeoutTimerParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2feb50, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a0a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc321b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a100, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) timeout_timer_parameters;
    
    // [WdipTimeoutTimerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd480c, 0x32828 bytes
    // ntoskrnl.exe .text:0x270d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3845d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3224d0, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) timeout_timer_routine;
    
    // [WdipTimeoutWorkEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2feb40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a098, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc321a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a0f0, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) timeout_work_enabled;
    
    // [WdipTimeoutWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2feb20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a0c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc32180, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a120, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) timeout_work_item;
};
#include "magic/api.end.hpp"
