#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dbgkp
{
    // [DbgkpErrorPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a118, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) error_port;
    
    // [DbgkpErrorPortLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a0d0, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) error_port_lock;
    
    // [DbgkpErrorProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a168, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) error_process;
    
    // [DbgkpGetServerSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7ac5ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x862dd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b3f6c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) get_server_silo_state;
    
    // [DbgkpInitializePhase0SiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7ac2c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x862df4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b3c44, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) initialize_phase0_silo_state;
    
    // [DbgkpInitializePhase1SiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7ac2d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x862e04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b3c54, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) initialize_phase1_silo_state;
    
    // [DbgkpWerIsFullLiveDumpDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x886a18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80ef9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8851c8, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) wer_is_full_live_dump_disabled;
    
    // [DbgkpBusy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323438, 0x32828 bytes
    // ntoskrnl.exe .data:0xc477a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f3c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47758, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) busy;
    
    // [DbgkpCloseObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61d48c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x881c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x880430, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) close_object;
    
    // [DbgkpConvertKernelToUserStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61d590, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x881da4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932ab4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x880554, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) convert_kernel_to_user_state_change;
    
    // [DbgkpCreateNotificationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3fe8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ac310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x862e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b3c90, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) create_notification_event;
    
    // [DbgkpDeleteErrorPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61f500, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x884498, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9357c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x882c48, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) delete_error_port;
    
    // [DbgkpDeleteObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) delete_object;
    
    // [DbgkpDereferenceErrorPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1badd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52931c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8178, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) dereference_error_port;
    
    // [DbgkpFreeDebugEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61d6f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x881f14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932c24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8806c4, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) free_debug_event;
    
    // [DbgkpInitializePhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a41dc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6a05c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb576b4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa69734, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) initialize_phase0;
    
    // [DbgkpInitializePhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3f8c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6a1a4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb577fc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6987c, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) initialize_phase1;
    
    // [DbgkpLkmdEnumApcOrDpcDataCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1badec, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e82c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e81a0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) lkmd_enum_apc_or_dpc_data_callback;
    
    // [DbgkpLkmdFireCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6205bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x885664, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9365b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x883e14, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) lkmd_fire_callbacks;
    
    // [DbgkpLkmdIsMemoryBlockPresentFromCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6206d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x885780, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9366d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x883f30, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) lkmd_is_memory_block_present_from_callback;
    
    // [DbgkpLkmdLaunchSnapApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6206e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8857a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9366f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x883f54, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) lkmd_launch_snap_apc;
    
    // [DbgkpLkmdLiveDumpDiagnosticInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343078, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5080, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17b28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5080, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) lkmd_live_dump_diagnostic_information;
    
    // [DbgkpLkmdSnapData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bae20, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e81e0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) lkmd_snap_data;
    
    // [DbgkpLkmdSnapDataEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bae48, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8334, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5293b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8214, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) lkmd_snap_data_ex;
    
    // [DbgkpLkmdSnapGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bae5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e836c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5293ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e824c, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) lkmd_snap_globals;
    
    // [DbgkpLkmdSnapKernelStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1baf20, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8448, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5294cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8328, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) lkmd_snap_kernel_stack;
    
    // [DbgkpLkmdSnapKernelStackSegmentCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bb050, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e85a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8480, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) lkmd_snap_kernel_stack_segment_callback;
    
    // [DbgkpLkmdSnapObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bb0b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e84f0, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) lkmd_snap_object;
    
    // [DbgkpLkmdSnapPendingIrps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x620820, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8858e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x936838, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x884098, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) lkmd_snap_pending_irps;
    
    // [DbgkpLkmdSnapThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bb194, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8704, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529784, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e85e4, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) lkmd_snap_thread;
    
    // [DbgkpLkmdSnapThreadApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62094c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x885a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x936970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8841d0, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) lkmd_snap_thread_apc;
    
    // [DbgkpLkmdSnapThreadInContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6209c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x885a9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9369ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88424c, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) lkmd_snap_thread_in_context;
    
    // [DbgkpLkmdSqmIncrementDword]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bb1f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8768, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5297e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8648, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) lkmd_sqm_increment_dword;
    
    // [DbgkpLkmdSqmIsOptedIn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x620ab0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x885ba4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x936afc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x884354, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) lkmd_sqm_is_opted_in;
    
    // [DbgkpLkmdSqmStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x620c38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x885d44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x936c9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8844f4, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) lkmd_sqm_status;
    
    // [DbgkpMarkProcessPeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61d754, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x881f7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932c8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88072c, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) mark_process_peb;
    
    // [DbgkpMaxModuleMsgs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa0b4, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0d0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c108, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0d0, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) max_module_msgs;
    
    // [DbgkpOpenHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61d824, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x882084, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932da4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x880834, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) open_handles;
    
    // [DbgkpPostFakeProcessCreateMessages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61d9b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88221c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932f3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8809cc, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) post_fake_process_create_messages;
    
    // [DbgkpPostFakeThreadMessages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61da60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8822e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x933004, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x880a94, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) post_fake_thread_messages;
    
    // [DbgkpPostModuleMessages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61de34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8826f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x933428, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x880ea0, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) post_module_messages;
    
    // [DbgkpProcessDebugPortMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323440, 0x32828 bytes
    // ntoskrnl.exe .data:0xc477c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f3e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47780, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) process_debug_port_mutex;
    
    // [DbgkpQueueMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61e2b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x882968, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9336cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x881118, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) queue_message;
    
    // [DbgkpRemoveErrorPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61f524, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8844c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9357f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x882c74, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) remove_error_port;
    
    // [DbgkpResumeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61ffb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x884fc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934c28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x883778, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) resume_process;
    
    // [DbgkpSectionToFileHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61ffc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x884fe4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934c48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x883794, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) section_to_file_handle;
    
    // [DbgkpSendApiMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61f620, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8845a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9358d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x882d54, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) send_api_message;
    
    // [DbgkpSendApiMessageLpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61f71c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x884690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9359c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x882e40, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) send_api_message_lpc;
    
    // [DbgkpSendErrorMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61f838, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8847c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x935afc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x882f70, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) send_error_message;
    
    // [DbgkpSetProcessDebugObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61e590, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x882c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9339c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x881410, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) set_process_debug_object;
    
    // [DbgkpStartSystemErrorHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61fcdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x884ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x935fdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x883450, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) start_system_error_handler;
    
    // [DbgkpSuppressDbgMsg]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x620070, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x885098, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934cfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x883848, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) suppress_dbg_msg;
    
    // [DbgkpSuspendProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6200c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x885130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x934da4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8838e0, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) suspend_process;
    
    // [DbgkpTriageDumpCheckPresentHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bb608, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529c94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8a90, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) triage_dump_check_present_hash_table;
    
    // [DbgkpTriageDumpFillHeaders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621ae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x886e50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9378f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x885600, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) triage_dump_fill_headers;
    
    // [DbgkpTriageDumpInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621be8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x886f6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937a0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88571c, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) triage_dump_initialize;
    
    // [DbgkpTriageDumpIsMemoryBlockPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621c90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887020, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8857d0, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) triage_dump_is_memory_block_present;
    
    // [DbgkpTriageDumpRestoreState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571ca8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7118c0, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) triage_dump_restore_state;
    
    // [DbgkpTriageDumpSaveState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7118f0, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) triage_dump_save_state;
    
    // [DbgkpTriageDumpSnapData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bb688, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8b10, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) triage_dump_snap_data;
    
    // [DbgkpTriageDumpWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621cf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937b30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x885840, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) triage_dump_write;
    
    // [DbgkpWakeTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61e8b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x882f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x933cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x881710, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) wake_target;
    
    // [DbgkpWerAllocateNonpagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bb5f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8b88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8a68, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) wer_allocate_nonpaged_pool;
    
    // [DbgkpWerAllocatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8861ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x936eb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88495c, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) wer_allocate_pool;
    
    // [DbgkpWerCaptureLiveFullDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62104c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8861d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x936ed8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x884980, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) wer_capture_live_full_dump;
    
    // [DbgkpWerCaptureLiveTriageDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6211c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x886378, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9370ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x884b28, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) wer_capture_live_triage_dump;
    
    // [DbgkpWerCleanupContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621330, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8864f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80f054, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x884ca0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) wer_cleanup_context;
    
    // [DbgkpWerDefaultPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323434, 0x32828 bytes
    // ntoskrnl.exe .data:0xc477a4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f3bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47754, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) wer_default_policy;
    
    // [DbgkpWerDeferredWriteRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6214d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8866d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x884e80, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) wer_deferred_write_routine;
    
    // [DbgkpWerDeferredWriteTimeoutSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323430, 0x32828 bytes
    // ntoskrnl.exe .data:0xc477a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f3b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47750, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) wer_deferred_write_timeout_seconds;
    
    // [DbgkpWerFreePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6215c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8867d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937374, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x884f88, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) wer_free_pool;
    
    // [DbgkpWerInitializeDeferredLiveDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6215e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8867f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937394, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x884fa8, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) wer_initialize_deferred_live_dump;
    
    // [DbgkpWerInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327068, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50930, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6d6, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50930, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) wer_initialized;
    
    // [DbgkpWerInvokeCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621734, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x886960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9374ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x885110, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) wer_invoke_callbacks;
    
    // [DbgkpWerProcessPolicyResult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6217e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x886b1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9375b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8852cc, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) wer_process_policy_result;
    
    // [DbgkpWerUpdateTriageDumpHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621834, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x886b74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937608, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x885324, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) wer_update_triage_dump_header;
    
    // [DbgkpWerWriteSecondaryData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6218c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x886c08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93769c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8853b8, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) wer_write_secondary_data;
    
    // [DbgkpWerWriteTriageDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x886d68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x885518, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) wer_write_triage_dump;
};
#include "magic/api.end.hpp"
