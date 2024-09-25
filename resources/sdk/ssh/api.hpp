#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ssh
{
    // [SshSessionManagerFlushBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9952a8, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) session_manager_flush_buffers;
    
    // [SshSessionManagerTraceCsEnterReason]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x81050c, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) session_manager_trace_cs_enter_reason;
    
    // [SshSessionManagerTraceCsExitReason]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9952ec, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) session_manager_trace_cs_exit_reason;
    
    // [SshSessionManagerTraceDirtyTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x80a6a4, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) session_manager_trace_dirty_transition;
    
    // [SshSessionManagerTracePostSleepNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x99550c, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) session_manager_trace_post_sleep_notification;
    
    // [SshSessionManagerTracePreSleepNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9955f0, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) session_manager_trace_pre_sleep_notification;
    
    // [SshSessionManagerTraceShutdownAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x99569c, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) session_manager_trace_shutdown_action;
    
    // [SshSessionManagerTraceSystemStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x995720, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) session_manager_trace_system_stop;
    
    // [SSHSupportQueryIsLibraryEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d7ab0, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) support_query_is_library_enabled;
    
    // [SSHSupportQuerySystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x208c64, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) support_query_system_time;
    
    // [SshInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa3c3c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2c660, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3ca84, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) initialize;
    
    // [SSHSupportAcquirePushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x777704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868bbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be678, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) support_acquire_push_lock_exclusive;
    
    // [SSHSupportAllocateNonPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26951c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fdc04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cbbf8, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) support_allocate_non_paged;
    
    // [SSHSupportAllocatePaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670f9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73d27c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e47cc, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) support_allocate_paged;
    
    // [SSHSupportEtwRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7738ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82d5dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77efec, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) support_etw_register;
    
    // [SSHSupportEtwUnregister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f8c88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x995f88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7378, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) support_etw_unregister;
    
    // [SSHSupportEtwWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57aef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e16c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57ace0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) support_etw_write;
    
    // [SSHSupportFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x269504, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfc80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25c5d8, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) support_free;
    
    // [SSHSupportInitializePushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7724b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ed350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77dbb0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) support_initialize_push_lock;
    
    // [SSHSupportQueryInterruptTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57af2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fdbbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57ad1c, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) support_query_interrupt_time;
    
    // [SSHSupportRegisterPowerSettingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x773868, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x823d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77ef68, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) support_register_power_setting_callback;
    
    // [SSHSupportReleasePushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x269328, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fdbd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a368, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) support_release_push_lock_exclusive;
    
    // [SSHSupportUnregisterPowerSettingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f8ca4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x995fa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7394, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) support_unregister_power_setting_callback;
};
#include "magic/api.end.hpp"
