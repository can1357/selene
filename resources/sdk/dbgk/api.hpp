#pragma once
#include <sdkgen/support_library.hpp>
#include "livedump_flags_t.hpp"

#include "magic/api.start.hpp"
namespace dbgk
{
    struct livedump_callback_routine_t;

    // [DbgkErrorPortRegisteredEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a218, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) error_port_registered_event;
    
    // [DbgkWerCaptureLiveKernelDump2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x80edf0, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) wer_capture_live_kernel_dump2;
    
    // [DbgkWerReportExceptionWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc477b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc47760, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) wer_report_exception_worker;
    
    // [DbgkEnableWerUserReporting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa2c8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c31c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2c8, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) enable_wer_user_reporting;
    
    // [DbgkFlushErrorPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x702400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x769764, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x663010, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) flush_error_port;
    
    // [DbgkInitializeServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8817e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932504, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87ff94, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) initialize_server_silo;
    
    // [DbgkPostEnclaveModuleMessages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e80a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529134, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e7f90, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) post_enclave_module_messages;
    
    // [DbgkPostModuleMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e8124, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5291b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e800c, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) post_module_message;
    
    // [DbgkQueueUserExceptionReport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x883c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934f8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x882410, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) queue_user_exception_report;
    
    // [DbgkUserReportWorkRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8841a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9354c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x882950, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) user_report_work_routine;
    
    // [DbgkCaptureLiveDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x620100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88516c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9360e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88391c, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) capture_live_dump;
    
    // [DbgkCaptureLiveKernelDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bb2ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8818, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529898, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e86f8, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) capture_live_kernel_dump;
    
    // [DbgkClearProcessDebugObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3930, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9323b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75dbe0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) clear_process_debug_object;
    
    // [DbgkCopyProcessDebugPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f8634, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x684140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7658b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66f578, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) copy_process_debug_port;
    
    // [DbgkCreateMinimalProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56eb20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a8368, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82621c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x786ed0, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) create_minimal_process;
    
    // [DbgkCreateMinimalThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61fddc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x884dac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934a0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88355c, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) create_minimal_thread;
    
    // [DbgkCreateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x456724, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ffa44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7074dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64be24, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) create_thread;
    
    // [DbgkDebugObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa0d8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0f0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c128, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0f0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) debug_object_type;
    
    // [DbgkErrorPortCommTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa274, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2c4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c320, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2c4, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) error_port_comm_timeout;
    
    // [DbgkErrorPortStartTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa188, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa164, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c1a0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa164, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) error_port_start_timeout;
    
    // [DbgkExitProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61fe74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x884e5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934abc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88360c, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) exit_process;
    
    // [DbgkExitThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61ff1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x884f18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934b78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8836c8, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) exit_thread;
    
    // [DbgkForwardException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f388, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x715f90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934de4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71d9d0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) forward_exception;
    
    // [DbgkInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3f60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6a028, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2d21c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa69700, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) initialize;
    
    // [DbgkLkmdRegisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d4d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x777060, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787440, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) lkmd_register_callback;
    
    // [DbgkLkmdUnregisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x620504, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8855c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x936510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x883d70, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) lkmd_unregister_callback;
    
    // [DbgkMapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47f2f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ec87c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76d1d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64e1b0, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) map_view_of_section;
    
    // [DbgkOpenProcessDebugPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61d0b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x881844, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932564, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87fff4, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) open_process_debug_port;
    
    // [DbgkRegisterErrorPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56c0a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x883e94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x935194, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x882644, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) register_error_port;
    
    // [DbgkSendSystemDllMessages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61d1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x881938, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932658, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8800e8, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) send_system_dll_messages;
    
    // [DbgkUnMapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x484c88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x661894, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f5a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d55fc, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) un_map_view_of_section;
    
    // [DbgkWerAddSecondaryData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x620cc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x885de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x936d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x884590, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) wer_add_secondary_data;
    
    // [DbgkWerCaptureLiveKernelDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x620e50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x885f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80ed70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x884730, 0x1fe000 bytes
    //
    _p2(sdk::function<int32_t(const wchar_t*, uint32_t, uint64_t, uint64_t, uint64_t, uint64_t, void*, dbgk::livedump_callback_routine_t*, dbgk::livedump_flags_t)>*) wer_capture_live_kernel_dump;
};
#include "magic/api.end.hpp"
