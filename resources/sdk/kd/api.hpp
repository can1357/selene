#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/sysdbg_command_t.hpp"
#include "../nt/device_power_state_t.hpp"

#include "magic/api.start.hpp"
namespace kd
{
    // [KdAllocateDynamicMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa4ed30, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa4ebb4, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) allocate_dynamic_memory;
    
    // [KdEncodeDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3aff28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ab988, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) encode_data_block;
    
    // [KdIgnoredSavingSupervisorXStateFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc32070, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc483d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc32020, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) ignored_saving_supervisor_x_state_features;
    
    // [KdPowerTransitionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50af90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e1700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ad50, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) power_transition_ex;
    
    // [KdPullRemoteFileEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x9b4780, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9cac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3780, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) pull_remote_file_ex;
    
    // [Kd_ACPI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342578, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4adc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17570, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ad8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) acpi_mask;
    
    // [KdAcquireDebuggerLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3d14, 0x32828 bytes
    // ntoskrnl.exe .text:0x50aae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e74f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50a8a0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) acquire_debugger_lock;
    
    // [Kd_ALPC_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342434, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4990, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1742c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf499c, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) alpc_mask;
    
    // [Kd_AMLI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342574, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ad0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1756c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4adc, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) amli_mask;
    
    // [Kd_APPCOMPAT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423ec, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4948, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173f4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4954, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) appcompat_mask;
    
    // [KdAutoEnableOnEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f589, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406e2, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56a80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc406a2, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) auto_enable_on_event;
    
    // [Kd_AUTOCHK_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34252c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17534, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a94, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) autochk_mask;
    
    // [KdBlockEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f599, 0x32828 bytes
    // ntoskrnl.exe .data:0xc42f00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56a83, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42ec0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) block_enable;
    
    // [KdBreakAfterSymbolLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f02c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc42f39, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aada, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42efa, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) break_after_symbol_load;
    
    // [Kd_BURNENG_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342514, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1750c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a7c, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) burneng_mask;
    
    // [Kd_CACHEMGR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423dc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4938, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173e4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4944, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) cachemgr_mask;
    
    // [KdCallPowerHandlers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3d30, 0x32828 bytes
    // ntoskrnl.exe .text:0x50ab54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5536c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50a914, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) call_power_handlers;
    
    // [Kd_CAPIMG_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34237c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17384, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48e4, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) capimg_mask;
    
    // [Kd_CDAUDIO_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b24, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b20, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) cdaudio_mask;
    
    // [Kd_CDROM_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425bc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175c4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b24, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) cdrom_mask;
    
    // [Kd_CFR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423d4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4930, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173cc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf493c, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) cfr_mask;
    
    // [KdChangeOption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3dc8, 0x32828 bytes
    // ntoskrnl.exe .text:0x50aca0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50aa60, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) change_option;
    
    // [KdCheckForDebugBreak]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111e98, 0x32828 bytes
    // ntoskrnl.exe .text:0x38049c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34acfc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x381258, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) check_for_debug_break;
    
    // [Kd_CLASSPNP_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b1c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b18, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) classpnp_mask;
    
    // [Kd_CNG_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf490c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4908, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) cng_mask;
    
    // [KdComPortInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fcf8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4bd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17658, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4bd8, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) com_port_in_use;
    
    // [KdComponentTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25c290, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x73d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x8490, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x73c0, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) component_table;
    
    // [Kd_CONFIG_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b04, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b00, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) config_mask;
    
    // [KdCopyDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3b38, 0x32828 bytes
    // ntoskrnl.exe .text:0x50a718, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50a4d8, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) copy_data_block;
    
    // [Kd_COVERAGE_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4944, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4940, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) coverage_mask;
    
    // [Kd_CRASHDUMP_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425c4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b2c, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) crashdump_mask;
    
    // [Kd_CRASHDUMPXHCI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34238c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17394, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48f4, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) crashdumpxhci_mask;
    
    // [Kd_DCOMSS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342528, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a8c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17520, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a88, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) dcomss_mask;
    
    // [KdDebugDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f548, 0x32828 bytes
    // ntoskrnl.exe .data:0xc49d08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49ce8, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) debug_device;
    
    // [KdDebuggerDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3500, 0x32828 bytes
    // ntoskrnl.exe .data:0xc00b20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc01ea0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00b20, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) debugger_data_block;
    
    // [KdDebuggerEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3109c2, 0x32828 bytes
    // ntoskrnl.exe .data:0xc32078, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aad9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc32028, 0x1fe000 bytes
    //
    _p5(uint8_t**) debugger_enabled;
    
    // [KdDebuggerEnteredCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f538, 0x32828 bytes
    // ntoskrnl.exe .data:0xc32060, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc483cc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc32010, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) debugger_entered_count;
    
    // [KdDebuggerEnteredWithoutLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f540, 0x32828 bytes
    // ntoskrnl.exe .data:0xc32064, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc483d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc32014, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) debugger_entered_without_lock;
    
    // [KdDebuggerLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be2c0, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22280, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48280, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22280, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) debugger_lock;
    
    // [KdDebuggerLockMaxWaitTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308a2c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2b1a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc41324, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2b124, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) debugger_lock_max_wait_time;
    
    // [KdDebuggerNotPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3109c3, 0x32828 bytes
    // ntoskrnl.exe .data:0xc42f01, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aaa9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42ec1, 0x1fe000 bytes
    //
    _q0(uint8_t**) debugger_not_present;
    
    // [KdDecodeDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3c30, 0x32828 bytes
    // ntoskrnl.exe .text:0x50a7d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50a594, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) decode_data_block;
    
    // [Kd_DEFAULT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342444, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1743c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49ac, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) default_mask;
    
    // [KdDeregisterPowerHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3c58, 0x32828 bytes
    // ntoskrnl.exe .text:0x50a800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50a5c0, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) deregister_power_handler;
    
    // [Kd_DFRGIFC_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342448, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49ac, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17440, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49a8, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) dfrgifc_mask;
    
    // [Kd_DFSC_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34243c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4998, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17444, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49a4, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) dfsc_mask;
    
    // [KdDisableCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34310c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17c40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cd0, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) disable_count;
    
    // [KdDisableDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3e28, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb510, 0x1fe000 bytes
    //
    _q7(sdk::function<int32_t()>*) disable_debugger;
    
    // [KdDisableDebuggerWithLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3e30, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca428, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5538a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb528, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) disable_debugger_with_lock;
    
    // [Kd_DISK_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425b4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175ac, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b1c, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) disk_mask;
    
    // [Kd_DMADMIN_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424c4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a2c, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) dmadmin_mask;
    
    // [Kd_DMCONFIG_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a2c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a28, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) dmconfig_mask;
    
    // [Kd_DMIO_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424cc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a34, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) dmio_mask;
    
    // [Kd_DMSERVER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a14, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a10, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) dmserver_mask;
    
    // [Kd_DMSYNTH_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34255c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ab8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17564, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ac4, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) dmsynth_mask;
    
    // [Kd_DRIVEEXTENDER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342394, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1738c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48fc, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) driveextender_mask;
    
    // [KdDumpEnableOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc191f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc312b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19258, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) dump_enable_offset;
    
    // [Kd_EMS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342404, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4960, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173fc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf496c, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) ems_mask;
    
    // [KdEnableDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3efc, 0x32828 bytes
    // ntoskrnl.exe .text:0x50ad10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553ac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50aad0, 0x1fe000 bytes
    //
    _r8(sdk::function<int32_t()>*) enable_debugger;
    
    // [KdEnableDebuggerWithLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3f30, 0x32828 bytes
    // ntoskrnl.exe .text:0x50ad4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553afc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ab0c, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) enable_debugger_with_lock;
    
    // [Kd_ENDOFTABLE_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34236c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b3c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17374, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b40, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) endoftable_mask;
    
    // [KdEnterDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5738, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5028, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9c14c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4028, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) enter_debugger;
    
    // [KdEnteredDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f028, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4061c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc569a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405dc, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) entered_debugger;
    
    // [Kd_ENVIRON_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342408, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf496c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17400, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4968, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) environ_mask;
    
    // [KdEventLoggingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3109c1, 0x32828 bytes
    // ntoskrnl.exe .data:0xc42f02, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc483e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42ef8, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) event_logging_enabled;
    
    // [KdEventLoggingPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f598, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aaa8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc406b0, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) event_logging_present;
    
    // [Kd_EXFAT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423a4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4900, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1739c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf490c, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) exfat_mask;
    
    // [KdExitDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5838, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5190, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9c008, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4190, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) exit_debugger;
    
    // [Kd_FASTFAT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342554, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ab0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1754c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4abc, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) fastfat_mask;
    
    // [Kd_FCPORT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424d4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174cc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a3c, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) fcport_mask;
    
    // [Kd_FDC_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a4c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a48, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) fdc_mask;
    
    // [Kd_FILETRACE_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4904, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4900, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) filetrace_mask;
    
    // [Kd_FLOPPY_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424ec, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174f4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a54, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) floppy_mask;
    
    // [Kd_FLTMGR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34251c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17524, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a84, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) fltmgr_mask;
    
    // [Kd_FLTREGRESS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf492c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4928, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) fltregress_mask;
    
    // [Kd_FSLIB_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342370, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48d4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17378, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48d4, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) fslib_mask;
    
    // [Kd_FSTUB_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b2c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b28, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) fstub_mask;
    
    // [Kd_FUSION_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342508, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a6c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17500, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a68, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) fusion_mask;
    
    // [Kd_FVEVOL_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423fc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4958, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17404, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4964, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) fvevol_mask;
    
    // [KdGetDebugDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab68, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c54b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c21f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c6380, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) get_debug_device;
    
    // [Kd_GPIO_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342388, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48ec, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17380, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48e8, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) gpio_mask;
    
    // [Kd_HALIA64_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342570, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ad4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17578, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ad0, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) halia64_mask;
    
    // [Kd_HEAP_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342420, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4984, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17428, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4980, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) heap_mask;
    
    // [Kd_HPS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34248c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17494, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49f4, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) hps_mask;
    
    // [KdHvComPortInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25d8a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4bf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17650, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4bf8, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) hv_com_port_in_use;
    
    // [Kd_I8042PRT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34259c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4af8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b04, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) i8042prt_mask;
    
    // [Kd_IDEP_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424f4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174ec, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a5c, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) idep_mask;
    
    // [Kd_IDLETASK_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342504, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174fc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a6c, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) idletask_mask;
    
    // [KdIgnoreUmExceptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f58a, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56a81, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc406a0, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) ignore_um_exceptions;
    
    // [Kd_IHVAUDIO_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34249c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a04, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) ihvaudio_mask;
    
    // [Kd_IHVBUS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342490, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49f4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17498, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49f0, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) ihvbus_mask;
    
    // [Kd_IHVDRIVER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424a4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1749c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a0c, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) ihvdriver_mask;
    
    // [Kd_IHVNETWORK_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342498, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49fc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17490, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49f8, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) ihvnetwork_mask;
    
    // [Kd_IHVSTREAMING_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342494, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1748c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49fc, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) ihvstreaming_mask;
    
    // [Kd_IHVVIDEO_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a04, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a00, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) ihvvideo_mask;
    
    // [Kd_IMAPI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342510, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a74, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17518, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a70, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) imapi_mask;
    
    // [Kd_INFINIBAND_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a0c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a08, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) infiniband_mask;
    
    // [KdInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6740, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b3160, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9d050, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b2160, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) init_system;
    
    // [Kd_IOSTRESS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342424, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4980, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1741c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf498c, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) iostress_mask;
    
    // [KdIsThisAKdTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f61f0, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b3008, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa1ec4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b2008, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) is_this_a_kd_trap;
    
    // [Kd_ISAPNP_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34247c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17484, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49e4, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) isapnp_mask;
    
    // [Kd_KBDCLASS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342588, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4aec, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17580, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ae8, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) kbdclass_mask;
    
    // [Kd_KBDHID_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342590, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4af4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17598, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4af0, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) kbdhid_mask;
    
    // [Kd_KSECDD_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423cc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4928, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4934, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) ksecdd_mask;
    
    // [Kd_KTM_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342428, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf498c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17420, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4988, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) ktm_mask;
    
    // [Kd_LDR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342484, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1747c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49ec, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) ldr_mask;
    
    // [KdLocalDebugEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3109c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc42f38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aad8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42ef9, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) local_debug_enabled;
    
    // [KdLogBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f5c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc40700, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56aa0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc406c0, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) log_buffer;
    
    // [KdLogDbgPrint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5230, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7380, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6380, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) log_dbg_print;
    
    // [Kd_LSASS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4914, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4910, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) lsass_mask;
    
    // [Kd_LSERMOUS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342594, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4af0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1758c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4afc, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) lsermous_mask;
    
    // [Kd_LUAFV_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4954, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4950, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) luafv_mask;
    
    // [KdMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d1394, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ac2b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8a658, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ab228, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) mark_hiber_phase;
    
    // [Kd_MCHGR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a5c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a58, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) mchgr_mask;
    
    // [Kd_MM_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342440, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49a4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17448, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49a0, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) mm_mask;
    
    // [Kd_MMCSS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342414, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4970, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1740c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf497c, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) mmcss_mask;
    
    // [Kd_MOUCLASS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342584, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ae0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1757c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4aec, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) mouclass_mask;
    
    // [Kd_MOUHID_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34258c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ae8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17594, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4af4, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) mouhid_mask;
    
    // [Kd_MOUNTMGR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf493c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4938, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) mountmgr_mask;
    
    // [Kd_MPIO_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423c4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4920, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf492c, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) mpio_mask;
    
    // [Kd_MSDSM_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4924, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4920, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) msdsm_mask;
    
    // [Kd_NDIS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf495c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4958, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) ndis_mask;
    
    // [Kd_NETAPI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342548, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4aac, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4aa8, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) netapi_mask;
    
    // [Kd_NTFS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425cc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b34, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) ntfs_mask;
    
    // [Kd_NTOSPNP_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342558, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4abc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17550, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ab8, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) ntospnp_mask;
    
    // [Kd_NVCTRACE_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423f4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4950, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173ec, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf495c, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) nvctrace_mask;
    
    // [KdPageDebuggerSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f588, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406e1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56a68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc406a1, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) page_debugger_section;
    
    // [Kd_PCI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a34, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a30, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) pci_mask;
    
    // [Kd_PCIIDE_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a54, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a50, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) pciide_mask;
    
    // [Kd_PERFLIB_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34242c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4988, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17434, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4994, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) perflib_mask;
    
    // [KdPerformanceCounterRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f5a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56a88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc406b8, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) performance_counter_rate;
    
    // [KdPitchDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5dc4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f2d4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09994, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f324, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) pitch_debugger;
    
    // [Kd_PNPMEM_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a1c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a18, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) pnpmem_mask;
    
    // [Kd_PNPMGR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34254c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4aa8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17554, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ab4, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) pnpmgr_mask;
    
    // [KdPollBreakIn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b2f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x50baf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ad40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50b8b0, 0x1fe000 bytes
    //
    _z4(sdk::function<uint8_t()>*) poll_break_in;
    
    // [KdPortLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cac, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64428, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cac, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) port_locked;
    
    // [Kd_POWER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342390, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48f4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17398, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48f0, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) power_mask;
    
    // [KdPowerTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4040, 0x32828 bytes
    // ntoskrnl.exe .text:0x50af70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ad30, 0x1fe000 bytes
    //
    _z7(sdk::function<int32_t(enum nt::device_power_state_t)>*) power_transition;
    
    // [Kd_PREFETCHER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424dc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174e4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a44, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) prefetcher_mask;
    
    // [KdPreviouslyEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343109, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cd4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17c44, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cd4, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) previously_enabled;
    
    // [KdPrintBufferAllocateSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f550, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56a40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc40660, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) print_buffer_allocate_size;
    
    // [KdPrintBufferChanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x311a04, 0x32828 bytes
    // ntoskrnl.exe .data:0xc33084, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc49404, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc33044, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) print_buffer_changes;
    
    // [KdPrintBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b64, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f3c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0caf4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f9c, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) print_buffer_size;
    
    // [KdPrintCircularBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5460, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04e20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06c38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04e60, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) print_circular_buffer;
    
    // [KdPrintDefaultCircularBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x310a00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc32080, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc48400, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc32040, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) print_default_circular_buffer;
    
    // [KdPrintRolloverCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x311a00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc33080, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc49400, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc33040, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) print_rollover_count;
    
    // [KdPrintSkippedCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x311a08, 0x32828 bytes
    // ntoskrnl.exe .data:0xc340a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4940c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc34060, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) print_skipped_count;
    
    // [KdPrintTruncatedCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x311a0c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc33088, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc49408, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc33048, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) print_truncated_count;
    
    // [KdPrintWritePointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3e90, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04e28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06c40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04e68, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) print_write_pointer;
    
    // [Kd_PRINTSPOOLER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34246c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17474, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49d4, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) printspooler_mask;
    
    // [Kd_PROCESSOR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424b4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174ac, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a1c, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) processor_mask;
    
    // [Kd_PSHED_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf491c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4918, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) pshed_mask;
    
    // [KdPullRemoteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5368, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b4724, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9ca68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3724, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) pull_remote_file;
    
    // [Kd_REDBOOK_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b14, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b10, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) redbook_mask;
    
    // [KdRefreshDebuggerNotPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a7b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e59f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb930, 0x1fe000 bytes
    //
    _b4(sdk::function<uint8_t()>*) refresh_debugger_not_present;
    
    // [Kd_REFS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342384, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1737c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48ec, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) refs_mask;
    
    // [KdRegisterDebuggerDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f7118, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b3434, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9e55c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b2434, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) register_debugger_data_block;
    
    // [KdRegisterPowerHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149e8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50a970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50a730, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) register_power_handler;
    
    // [KdReleaseDebuggerLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d40fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x50b190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50af50, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) release_debugger_lock;
    
    // [KdResetUmAttachPid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f018, 0x32828 bytes
    // ntoskrnl.exe .data:0xc40611, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc569a5, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405d1, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) reset_um_attach_pid;
    
    // [KdResetUmBreakPid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f010, 0x32828 bytes
    // ntoskrnl.exe .data:0xc40610, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc569a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405d0, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) reset_um_break_pid;
    
    // [Kd_RPCPROXY_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342530, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a94, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17538, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a90, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) rpcproxy_mask;
    
    // [Kd_RSFILTER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a3c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a38, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) rsfilter_mask;
    
    // [Kd_RTLTHREADPOOL_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342488, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49ec, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17480, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49e8, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) rtlthreadpool_mask;
    
    // [Kd_SAMSS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342550, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ab4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17558, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ab0, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) samss_mask;
    
    // [Kd_SBP2PORT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423e4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4940, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173dc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf494c, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) sbp2port_mask;
    
    // [Kd_SCCLIENT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342540, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4aa4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17548, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4aa0, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) scclient_mask;
    
    // [Kd_SCSERVER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342544, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4aa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1753c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4aac, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) scserver_mask;
    
    // [Kd_SCSIMINIPORT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425a4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1759c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b0c, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) scsiminiport_mask;
    
    // [Kd_SCSIPORT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b0c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b08, 0x1fe000 bytes
    //
    _c9(sdk::unknown_ptr) scsiport_mask;
    
    // [Kd_SE_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342398, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48fc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17390, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48f8, 0x1fe000 bytes
    //
    _d0(sdk::unknown_ptr) se_mask;
    
    // [KdSendTraceData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f81fc, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b52d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9d970, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b42d0, 0x1fe000 bytes
    //
    _d1(sdk::unknown_ptr) send_trace_data;
    
    // [Kd_SERENUM_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342538, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a9c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17530, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a98, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) serenum_mask;
    
    // [Kd_SERIAL_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34253c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17544, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4aa4, 0x1fe000 bytes
    //
    _d3(sdk::unknown_ptr) serial_mask;
    
    // [Kd_SERMOUSE_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342598, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4afc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17590, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4af8, 0x1fe000 bytes
    //
    _d4(sdk::unknown_ptr) sermouse_mask;
    
    // [KdSetDbgPrintBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4224, 0x32828 bytes
    // ntoskrnl.exe .text:0x50b6b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553ec4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50b474, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) set_dbg_print_buffer_size;
    
    // [KdSetEventLoggingPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8328, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5420, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9fee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4420, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) set_event_logging_present;
    
    // [KdSetOwedBreakpoints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d45c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x50beb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5543b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50bc70, 0x1fe000 bytes
    //
    _d7(sdk::unknown_ptr) set_owed_breakpoints;
    
    // [Kd_SETUP_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b34, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b30, 0x1fe000 bytes
    //
    _d8(sdk::unknown_ptr) setup_mask;
    
    // [Kd_SHPC_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342478, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49dc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17470, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49d8, 0x1fe000 bytes
    //
    _d9(sdk::unknown_ptr) shpc_mask;
    
    // [Kd_SIS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342520, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a84, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17528, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a80, 0x1fe000 bytes
    //
    _e0(sdk::unknown_ptr) sis_mask;
    
    // [Kd_SMSS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425d4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175cc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b3c, 0x1fe000 bytes
    //
    _e1(sdk::unknown_ptr) smss_mask;
    
    // [Kd_SOFTPCI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342500, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a64, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17508, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a60, 0x1fe000 bytes
    //
    _e2(sdk::unknown_ptr) softpci_mask;
    
    // [Kd_SR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424ac, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a14, 0x1fe000 bytes
    //
    _e3(sdk::unknown_ptr) sr_mask;
    
    // [Kd_SSPICLI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423ac, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4908, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4914, 0x1fe000 bytes
    //
    _e4(sdk::unknown_ptr) sspicli_mask;
    
    // [Kd_STORAGECLASSMEMORY_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342374, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1736c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48dc, 0x1fe000 bytes
    //
    _e5(sdk::unknown_ptr) storageclassmemory_mask;
    
    // [Kd_STORMINIPORT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342470, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49d4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17478, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49d0, 0x1fe000 bytes
    //
    _e6(sdk::unknown_ptr) storminiport_mask;
    
    // [Kd_STORPORT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342474, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1746c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49dc, 0x1fe000 bytes
    //
    _e7(sdk::unknown_ptr) storport_mask;
    
    // [Kd_STORPROP_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425ac, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b14, 0x1fe000 bytes
    //
    _e8(sdk::unknown_ptr) storprop_mask;
    
    // [Kd_STORVSP_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423b4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4910, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173ac, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf491c, 0x1fe000 bytes
    //
    _e9(sdk::unknown_ptr) storvsp_mask;
    
    // [Kd_SVCHOST_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342568, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4acc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17560, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ac8, 0x1fe000 bytes
    //
    _f0(sdk::unknown_ptr) svchost_mask;
    
    // [Kd_SXS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34250c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17514, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a74, 0x1fe000 bytes
    //
    _f1(sdk::unknown_ptr) sxs_mask;
    
    // [KdSystemDebugControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x653854, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b6fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x966360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b5750, 0x1fe000 bytes
    //
    _f2(sdk::function<int32_t(enum win::sysdbg_command_t, void*, uint32_t, void*, uint32_t, uint32_t*, char)>*) system_debug_control;
    
    // [Kd_SYSTEM_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b38, 0x1fe000 bytes
    //
    _f3(sdk::unknown_ptr) system_mask;
    
    // [Kd_TAPE_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424fc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17504, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a64, 0x1fe000 bytes
    //
    _f4(sdk::unknown_ptr) tape_mask;
    
    // [Kd_TCPIP6_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342480, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49e4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17488, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49e0, 0x1fe000 bytes
    //
    _f5(sdk::unknown_ptr) tcpip6_mask;
    
    // [Kd_TCPIP_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342560, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ac4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17568, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ac0, 0x1fe000 bytes
    //
    _f6(sdk::unknown_ptr) tcpip_mask;
    
    // [Kd_TERMSRV_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424e4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174dc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a4c, 0x1fe000 bytes
    //
    _f7(sdk::unknown_ptr) termsrv_mask;
    
    // [Kd_THREADORDER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34240c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4968, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17414, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4974, 0x1fe000 bytes
    //
    _f8(sdk::unknown_ptr) threadorder_mask;
    
    // [KdTimerDifference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x312fa0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc345c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc49920, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc34580, 0x1fe000 bytes
    //
    _f9(sdk::unknown_ptr) timer_difference;
    
    // [KdTimerStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f590, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aaa0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc406a8, 0x1fe000 bytes
    //
    _g0(sdk::unknown_ptr) timer_start;
    
    // [KdTimerStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x312fa8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc345c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4a940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc34588, 0x1fe000 bytes
    //
    _g1(sdk::unknown_ptr) timer_stop;
    
    // [Kd_TPM_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342410, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4974, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17418, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4970, 0x1fe000 bytes
    //
    _g2(sdk::unknown_ptr) tpm_mask;
    
    // [KdTransportMaxPacketSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5df0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc123e4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0999c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12444, 0x1fe000 bytes
    //
    _g3(sdk::unknown_ptr) transport_max_packet_size;
    
    // [KdTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xced60, 0x32828 bytes
    // ntoskrnl.exe .text:0x2840bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x210504, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32af5c, 0x1fe000 bytes
    //
    _g4(sdk::unknown_ptr) trap;
    
    // [Kd_TWOTRACK_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342580, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ae4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17588, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ae0, 0x1fe000 bytes
    //
    _g5(sdk::unknown_ptr) twotrack_mask;
    
    // [Kd_TXF_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4934, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4930, 0x1fe000 bytes
    //
    _g6(sdk::unknown_ptr) txf_mask;
    
    // [Kd_UDFS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423bc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4918, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173c4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4924, 0x1fe000 bytes
    //
    _g7(sdk::unknown_ptr) udfs_mask;
    
    // [Kd_UHCD_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342534, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1752c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a9c, 0x1fe000 bytes
    //
    _g8(sdk::unknown_ptr) uhcd_mask;
    
    // [KdUmAttachPid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f01c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc40614, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc569a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405d4, 0x1fe000 bytes
    //
    _g9(sdk::unknown_ptr) um_attach_pid;
    
    // [KdUmBreakMarker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f014, 0x32828 bytes
    // ntoskrnl.exe .data:0xc40608, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56998, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405c8, 0x1fe000 bytes
    //
    _h0(sdk::unknown_ptr) um_break_marker;
    
    // [KdUmBreakPid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f020, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4060c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5699c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405cc, 0x1fe000 bytes
    //
    _h1(sdk::unknown_ptr) um_break_pid;
    
    // [Kd_UNIMODEM_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342524, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1751c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a8c, 0x1fe000 bytes
    //
    _h2(sdk::unknown_ptr) unimodem_mask;
    
    // [KdUpdateTimeSlipEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d411c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50b20c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553d48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50afcc, 0x1fe000 bytes
    //
    _h3(sdk::unknown_ptr) update_time_slip_event;
    
    // [Kd_USBSTOR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3423e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf494c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4948, 0x1fe000 bytes
    //
    _h4(sdk::unknown_ptr) usbstor_mask;
    
    // [Kd_USERGDI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342418, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf497c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17410, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4978, 0x1fe000 bytes
    //
    _h5(sdk::unknown_ptr) usergdi_mask;
    
    // [Kd_VDS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342460, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49c4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17468, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49c0, 0x1fe000 bytes
    //
    _h6(sdk::unknown_ptr) vds_mask;
    
    // [Kd_VDSBAS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34245c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17464, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49c4, 0x1fe000 bytes
    //
    _h7(sdk::unknown_ptr) vdsbas_mask;
    
    // [Kd_VDSDYN_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342458, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49bc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17450, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49b8, 0x1fe000 bytes
    //
    _h8(sdk::unknown_ptr) vdsdyn_mask;
    
    // [Kd_VDSDYNDR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342454, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1744c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49bc, 0x1fe000 bytes
    //
    _h9(sdk::unknown_ptr) vdsdyndr_mask;
    
    // [Kd_VDSLDR_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342450, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49b4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17458, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49b0, 0x1fe000 bytes
    //
    _i0(sdk::unknown_ptr) vdsldr_mask;
    
    // [Kd_VDSUTIL_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34244c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17454, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49b4, 0x1fe000 bytes
    //
    _i1(sdk::unknown_ptr) vdsutil_mask;
    
    // [Kd_VERIFIER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342464, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1745c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49cc, 0x1fe000 bytes
    //
    _i2(sdk::unknown_ptr) verifier_mask;
    
    // [KdVersionBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5dc8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f2e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc099a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f330, 0x1fe000 bytes
    //
    _i3(sdk::unknown_ptr) version_block;
    
    // [Kd_VIDEO_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34256c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ac8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17574, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ad4, 0x1fe000 bytes
    //
    _i4(sdk::unknown_ptr) video_mask;
    
    // [Kd_VIDEOPRT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342564, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ac0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1755c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4acc, 0x1fe000 bytes
    //
    _i5(sdk::unknown_ptr) videoprt_mask;
    
    // [Kd_VPCI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342378, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48dc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17370, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48d8, 0x1fe000 bytes
    //
    _i6(sdk::unknown_ptr) vpci_mask;
    
    // [Kd_VSS_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424bc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174c4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a24, 0x1fe000 bytes
    //
    _i7(sdk::unknown_ptr) vss_mask;
    
    // [Kd_VSSDYNDISK_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342468, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf49cc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17460, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf49c8, 0x1fe000 bytes
    //
    _i8(sdk::unknown_ptr) vssdyndisk_mask;
    
    // [Kd_W32TIME_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a44, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a40, 0x1fe000 bytes
    //
    _i9(sdk::unknown_ptr) w32time_mask;
    
    // [Kd_WDI_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342430, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4994, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17438, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4990, 0x1fe000 bytes
    //
    _j0(sdk::unknown_ptr) wdi_mask;
    
    // [Kd_WDT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342400, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4964, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17408, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4960, 0x1fe000 bytes
    //
    _j1(sdk::unknown_ptr) wdt_mask;
    
    // [Kd_WER_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342380, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48e4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17388, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48e0, 0x1fe000 bytes
    //
    _j2(sdk::unknown_ptr) wer_mask;
    
    // [Kd_WHEA_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34241c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4978, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17424, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4984, 0x1fe000 bytes
    //
    _j3(sdk::unknown_ptr) whea_mask;
    
    // [Kd_WIN2000_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9aa0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11468, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bee8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc114c8, 0x1fe000 bytes
    //
    _j4(sdk::unknown_ptr) win2000_mask;
    
    // [Kd_WMICORE_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342518, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a7c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17510, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a78, 0x1fe000 bytes
    //
    _j5(sdk::unknown_ptr) wmicore_mask;
    
    // [Kd_WMILIB_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34257c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4ad8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17584, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ae4, 0x1fe000 bytes
    //
    _j6(sdk::unknown_ptr) wmilib_mask;
    
    // [Kd_WOW64_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342438, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf499c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17430, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4998, 0x1fe000 bytes
    //
    _j7(sdk::unknown_ptr) wow64_mask;
    
    // [Kd_WSOCKTRANSPORT_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3424c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4a24, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd174c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4a20, 0x1fe000 bytes
    //
    _j8(sdk::unknown_ptr) wsocktransport_mask;
    
    // [Kd_XSAVE_Mask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34239c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd173a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4904, 0x1fe000 bytes
    //
    _j9(sdk::unknown_ptr) xsave_mask;
};
#include "magic/api.end.hpp"
