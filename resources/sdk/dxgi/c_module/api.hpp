#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_module
{
    // [EvaluateBufferUpgradeEligibility@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x155cc, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) evaluate_buffer_upgrade_eligibility;
    
    // [HasAnyHdrOutput@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x179b8, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) has_any_hdr_output;
    
    // [InitBufferUpgradeEligibility@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x14fcc, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) init_buffer_upgrade_eligibility;
    
    // [InitWindowedSwapEffectUpgrade@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x146a0, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) init_windowed_swap_effect_upgrade;
    
    // [WindowedSwapEffectUpgradeEnabled@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1d7dc, 0x18b10 bytes
    //
    _m4(sdk::unknown_ptr) windowed_swap_effect_upgrade_enabled;
    
    // [AcquireExclusiveModeMutex@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x581f8, 0x17e70 bytes
    // dxgi.dll .text:0x582e8, 0x17e70 bytes
    // dxgi.dll .text:0x632d8, 0x18b10 bytes
    // dxgi.dll .text:0x59778, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) acquire_exclusive_mode_mutex;
    
    // [CHECK_EXCLUSIVE_MODE_MUTEX_NAME@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xace40, 0x17e70 bytes
    // dxgi.dll .rdata:0xad170, 0x17e70 bytes
    // dxgi.dll .rdata:0xac358, 0x18b10 bytes
    // dxgi.dll .rdata:0xae608, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) check_exclusive_mode_mutex_name;
    
    // [??0CModule@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x12a94, 0x17e70 bytes
    // dxgi.dll .text:0x12cf4, 0x17e70 bytes
    // dxgi.dll .text:0xc7c4, 0x18b10 bytes
    // dxgi.dll .text:0xe204, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) construct_instance;
    
    // [??1CModule@@UEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7fb4, 0x17e70 bytes
    // dxgi.dll .text:0x7fb4, 0x17e70 bytes
    // dxgi.dll .text:0xc024, 0x18b10 bytes
    // dxgi.dll .text:0x1cb64, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) destroy_instance;
    
    // [DllMainInt@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7b00, 0x17e70 bytes
    // dxgi.dll .text:0x7b00, 0x17e70 bytes
    // dxgi.dll .text:0xbbc0, 0x18b10 bytes
    // dxgi.dll .text:0x1c6b0, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) dll_main_int;
    
    // [EXCLUSIVE_MODE_MUTEX_NAME@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xace80, 0x17e70 bytes
    // dxgi.dll .rdata:0xad1b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac398, 0x18b10 bytes
    // dxgi.dll .rdata:0xae648, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) exclusive_mode_mutex_name;
    
    // [GetUsersAppGPUPreference@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59354, 0x17e70 bytes
    // dxgi.dll .text:0x59444, 0x17e70 bytes
    // dxgi.dll .text:0x64c80, 0x18b10 bytes
    // dxgi.dll .text:0x5a8f4, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) get_users_app_gpu_preference;
    
    // [MaximizedWindowedModeFullscreenEnabled@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb548, 0x17e70 bytes
    // dxgi.dll .text:0xb578, 0x17e70 bytes
    // dxgi.dll .text:0x1bec8, 0x18b10 bytes
    // dxgi.dll .text:0x6758, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) maximized_windowed_mode_fullscreen_enabled;
    
    // [MaximizedWindowedModeFullscreenEnabledForGameDVR@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb57c, 0x17e70 bytes
    // dxgi.dll .text:0xb5ac, 0x17e70 bytes
    // dxgi.dll .text:0x1befc, 0x18b10 bytes
    // dxgi.dll .text:0x678c, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) maximized_windowed_mode_fullscreen_enabled_for_game_dvr;
    
    // [MaximizedWindowedSwapEffectTransition@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb0bc, 0x17e70 bytes
    // dxgi.dll .text:0xb0ec, 0x17e70 bytes
    // dxgi.dll .text:0x1bfbc, 0x18b10 bytes
    // dxgi.dll .text:0x1f8fc, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) maximized_windowed_swap_effect_transition;
    
    // [QueryMaximizedWindowedFullscreen@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xf660, 0x17e70 bytes
    // dxgi.dll .text:0xf690, 0x17e70 bytes
    // dxgi.dll .text:0x148e0, 0x18b10 bytes
    // dxgi.dll .text:0xab40, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) query_maximized_windowed_fullscreen;
    
    // [RecordJournalImpl@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd730, 0x17e70 bytes
    // dxgi.dll .text:0xd760, 0x17e70 bytes
    // dxgi.dll .text:0x20180, 0x18b10 bytes
    // dxgi.dll .text:0x8940, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) record_journal_impl;
    
    // [ReportJournal@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59b9c, 0x17e70 bytes
    // dxgi.dll .text:0x59c8c, 0x17e70 bytes
    // dxgi.dll .text:0x655a0, 0x18b10 bytes
    // dxgi.dll .text:0x5b15c, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) report_journal;
    
    // [SDKLoadLibraryW@CModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59c2c, 0x17e70 bytes
    // dxgi.dll .text:0x59d1c, 0x17e70 bytes
    // dxgi.dll .text:0x65630, 0x18b10 bytes
    // dxgi.dll .text:0x5b1ec, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) sdk_load_library_w;
};
#include "magic/api.end.hpp"
