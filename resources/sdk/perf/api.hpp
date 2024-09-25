#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace perf
{
    // [PerfDiagpRestartCKCL]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x50e6dc, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) diagp_restart_ckcl;
    
    // [PerfDiagpUpdateCKCLEnableFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x56e14c, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) diagp_update_ckcl_enable_flags;
    
    // [PerfInfoLogIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x2274f0, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) info_log_ipi;
    
    // [PerfDiagpStartPerfDiagLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x792390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x848fdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79f62c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) diagp_start_perf_diag_logger;
    
    // [PerfDiagpUpdatePerfDiagLoggerEnableFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7935d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x849338, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a0878, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) diagp_update_perf_diag_logger_enable_flags;
    
    // [PerfInfoLogInterruptHv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a4170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3ff0, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) info_log_interrupt_hv;
    
    // [PerfInfoLogIpiReceive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a41c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4040, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) info_log_ipi_receive;
    
    // [PerfInfoLogIpiSend]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a4210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4090, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) info_log_ipi_send;
    
    // [PerfDiagGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2feb60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1a0e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc321c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1a140, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) diag_globals;
    
    // [PerfDiagInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a7e68, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6307c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5b3fc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa466f0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) diag_initialize;
    
    // [PerfDiagpBootSystemProxyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x57187c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b1080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8690a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8c10, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) diagp_boot_system_proxy_callback;
    
    // [PerfDiagpBootUserProxyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a389c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b10b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8690d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8c40, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) diagp_boot_user_proxy_callback;
    
    // [PerfDiagpInitializeLoggerInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50e794, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7936ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84944c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a098c, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) diagp_initialize_logger_info;
    
    // [PerfDiagpIsTracingAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50e5dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7934c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x849220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a0760, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) diagp_is_tracing_allowed;
    
    // [PerfDiagpProxyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50e384, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x793390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8490f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a0630, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) diagp_proxy_worker;
    
    // [PerfDiagpRequestState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a38c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b10dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8690fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8c6c, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) diagp_request_state;
    
    // [PerfDiagpSaveActiveDCLLogFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523e18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92ca38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d1840, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b308, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) diagp_save_active_dcl_log_file_name;
    
    // [PerfDiagpSecondaryLogonProxyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5246a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92cbc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d19c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b490, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) diagp_secondary_logon_proxy_callback;
    
    // [PerfDiagpShutdownProxyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x524724, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92cbf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d19f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92b4c0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) diagp_shutdown_proxy_callback;
    
    // [PerfGlobalGroupMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab280, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb480, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da80, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb480, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) global_group_mask;
    
    // [PerfInfoLogInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb3010, 0x32828 bytes
    // ntoskrnl.exe .text:0x243200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34efd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef640, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) info_log_interrupt;
    
    // [PerfInfoLogSysCallEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227528, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a41b0, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) info_log_sys_call_entry;
    
    // [PerfInfoLogSysCallExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227594, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a43d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ea080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4250, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) info_log_sys_call_exit;
    
    // [PerfInfoLogUnexpectedInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227600, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ea110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a42f0, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) info_log_unexpected_interrupt;
    
    // [PerfInfoLogVirtualAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a6bc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9349a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9daaa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x933278, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) info_log_virtual_alloc;
    
    // [PerfInfoLogVirtualFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a6c3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x934ab4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dabb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x933384, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) info_log_virtual_free;
    
    // [PerfLogExecutiveResourceAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227db4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ebab8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4c60, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) log_executive_resource_acquire;
    
    // [PerfLogExecutiveResourceInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227ec8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4ef4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ebbd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4d74, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) log_executive_resource_initialize;
    
    // [PerfLogExecutiveResourceRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227f68, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4f9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ebc80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4e1c, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) log_executive_resource_release;
    
    // [PerfLogExecutiveResourceSetOwnerPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22815c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a5190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ebe74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a5010, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) log_executive_resource_set_owner_pointer;
    
    // [PerfLogExecutiveResourceWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x228270, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a52ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ebf90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a512c, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) log_executive_resource_wait;
    
    // [PerfLogImageLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a8980, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69d18c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70acd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6382cc, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) log_image_load;
    
    // [PerfLogImageUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a8770, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f4318, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f646c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70943c, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) log_image_unload;
    
    // [PerfLogSpinLockAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2283e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a5428, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a52a8, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) log_spin_lock_acquire;
    
    // [PerfLogSpinLockRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22845c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a549c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec184, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a531c, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) log_spin_lock_release;
};
#include "magic/api.end.hpp"
