#pragma once
#include <sdkgen/support_library.hpp>
#include "trace_type_t.hpp"

namespace io  { struct status_block_t;     }
namespace rtl { struct critical_section_t; }

#include "magic/api.start.hpp"
namespace tp
{
    struct io_t;
    struct alpc_t;
    struct pool_t;
    struct wait_t;
    struct work_t;
    struct timer_t;
    struct cleanup_group_t;
    struct callback_instance_t;
    struct callback_environ_v3_t;
    struct pool_stack_information_t;

    // [TpWorkOnBehalfClearTicket]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x33fd0, 0x74648 bytes
    //
    _m0(sdk::unknown_ptr) work_on_behalf_clear_ticket;
    
    // [TpWorkOnBehalfSetTicket]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x4ec10, 0x74648 bytes
    //
    _m1(sdk::unknown_ptr) work_on_behalf_set_ticket;
    
    // [TpSetDefaultPoolCpuSets]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x111348, 0x6fc38 bytes
    // ntdll.dll .text:0x1255e8, 0x74648 bytes
    // ntdll.dll .text:0x1114e8, 0x6fc38 bytes
    //
    _m2(sdk::unknown_ptr) set_default_pool_cpu_sets;
    
    // [TpSetPoolThreadCpuSets]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1114f0, 0x6fc38 bytes
    // ntdll.dll .text:0x125790, 0x74648 bytes
    // ntdll.dll .text:0x111690, 0x6fc38 bytes
    //
    _m3(sdk::unknown_ptr) set_pool_thread_cpu_sets;
    
    // [TpAdjustBindingCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51068, 0x67960 bytes
    // ntdll.dll .text:0x3d704, 0x6fc38 bytes
    // ntdll.dll .text:0x2ff80, 0x74648 bytes
    // ntdll.dll .text:0x3d704, 0x6fc38 bytes
    //
    _m4(sdk::unknown_ptr) adjust_binding_count;
    
    // [TpAllocAlpcCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54be0, 0x67960 bytes
    // ntdll.dll .text:0x78c00, 0x6fc38 bytes
    // ntdll.dll .text:0x88950, 0x74648 bytes
    // ntdll.dll .text:0x78da0, 0x6fc38 bytes
    //
    _m5(sdk::function<int32_t(struct tp::alpc_t**, void*, sdk::function<void(struct tp::callback_instance_t*, void*, struct tp::alpc_t*)>*, void*, struct tp::callback_environ_v3_t*)>*) alloc_alpc_completion;
    
    // [TpAllocAlpcCompletionEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53ee0, 0x67960 bytes
    // ntdll.dll .text:0x78d00, 0x6fc38 bytes
    // ntdll.dll .text:0x4b970, 0x74648 bytes
    // ntdll.dll .text:0x78ea0, 0x6fc38 bytes
    //
    _m6(sdk::function<int32_t(struct tp::alpc_t**, void*, sdk::function<void(struct tp::callback_instance_t*, void*, struct tp::alpc_t*, void*)>*, void*, struct tp::callback_environ_v3_t*)>*) alloc_alpc_completion_ex;
    
    // [TpAllocCleanupGroup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x80dc0, 0x67960 bytes
    // ntdll.dll .text:0x7d480, 0x6fc38 bytes
    // ntdll.dll .text:0x81400, 0x74648 bytes
    // ntdll.dll .text:0x7d620, 0x6fc38 bytes
    //
    _m7(sdk::function<int32_t(struct tp::cleanup_group_t**)>*) alloc_cleanup_group;
    
    // [TpAllocIoCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53f90, 0x67960 bytes
    // ntdll.dll .text:0x44310, 0x6fc38 bytes
    // ntdll.dll .text:0x4be20, 0x74648 bytes
    // ntdll.dll .text:0x44310, 0x6fc38 bytes
    //
    _m8(sdk::function<int32_t(struct tp::io_t**, void*, sdk::function<void(struct tp::callback_instance_t*, void*, void*, struct io::status_block_t*, struct tp::io_t*)>*, void*, struct tp::callback_environ_v3_t*)>*) alloc_io_completion;
    
    // [TpAllocJobNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54990, 0x67960 bytes
    // ntdll.dll .text:0x7e0d0, 0x6fc38 bytes
    // ntdll.dll .text:0x50c60, 0x74648 bytes
    // ntdll.dll .text:0x7e270, 0x6fc38 bytes
    //
    _m9(sdk::unknown_ptr) alloc_job_notification;
    
    // [TpAllocPool]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x537f0, 0x67960 bytes
    // ntdll.dll .text:0x45d00, 0x6fc38 bytes
    // ntdll.dll .text:0x4bd50, 0x74648 bytes
    // ntdll.dll .text:0x45d00, 0x6fc38 bytes
    //
    _n0(sdk::function<int32_t(struct tp::pool_t**, void*)>*) alloc_pool;
    
    // [TpAllocPoolInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x522f0, 0x67960 bytes
    // ntdll.dll .text:0x452c8, 0x6fc38 bytes
    // ntdll.dll .text:0x4c130, 0x74648 bytes
    // ntdll.dll .text:0x452c8, 0x6fc38 bytes
    //
    _n1(sdk::unknown_ptr) alloc_pool_internal;
    
    // [TpAllocTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f180, 0x67960 bytes
    // ntdll.dll .text:0x40b50, 0x6fc38 bytes
    // ntdll.dll .text:0x2e830, 0x74648 bytes
    // ntdll.dll .text:0x40b50, 0x6fc38 bytes
    //
    _n2(sdk::function<int32_t(struct tp::timer_t**, sdk::function<void(struct tp::callback_instance_t*, void*, struct tp::timer_t*)>*, void*, struct tp::callback_environ_v3_t*)>*) alloc_timer;
    
    // [TpAllocWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4efe0, 0x67960 bytes
    // ntdll.dll .text:0x41b10, 0x6fc38 bytes
    // ntdll.dll .text:0x4daa0, 0x74648 bytes
    // ntdll.dll .text:0x41b10, 0x6fc38 bytes
    //
    _n3(sdk::function<int32_t(struct tp::wait_t**, sdk::function<void(struct tp::callback_instance_t*, void*, struct tp::wait_t*, uint32_t)>*, void*, struct tp::callback_environ_v3_t*)>*) alloc_wait;
    
    // [TpAllocWork]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f910, 0x67960 bytes
    // ntdll.dll .text:0x3e5f0, 0x6fc38 bytes
    // ntdll.dll .text:0x5b750, 0x74648 bytes
    // ntdll.dll .text:0x3e5f0, 0x6fc38 bytes
    //
    _n4(sdk::function<int32_t(struct tp::work_t**, sdk::function<void(struct tp::callback_instance_t*, void*, struct tp::work_t*)>*, void*, struct tp::callback_environ_v3_t*)>*) alloc_work;
    
    // [TpAlpcRegisterCompletionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55440, 0x67960 bytes
    // ntdll.dll .text:0x78a60, 0x6fc38 bytes
    // ntdll.dll .text:0x52680, 0x74648 bytes
    // ntdll.dll .text:0x78c00, 0x6fc38 bytes
    //
    _n5(sdk::unknown_ptr) alpc_register_completion_list;
    
    // [TpAlpcUnregisterCompletionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55540, 0x67960 bytes
    // ntdll.dll .text:0x78b50, 0x6fc38 bytes
    // ntdll.dll .text:0x52640, 0x74648 bytes
    // ntdll.dll .text:0x78cf0, 0x6fc38 bytes
    //
    _n6(sdk::unknown_ptr) alpc_unregister_completion_list;
    
    // [TpBindFileToDirect]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53f04, 0x67960 bytes
    // ntdll.dll .text:0x44508, 0x6fc38 bytes
    // ntdll.dll .text:0x4bd94, 0x74648 bytes
    // ntdll.dll .text:0x44508, 0x6fc38 bytes
    //
    _n7(sdk::unknown_ptr) bind_file_to_direct;
    
    // [TpCallbackDetectedUnrecoverableError]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff280, 0x67960 bytes
    // ntdll.dll .text:0x1117e0, 0x6fc38 bytes
    // ntdll.dll .text:0x125a80, 0x74648 bytes
    // ntdll.dll .text:0x111980, 0x6fc38 bytes
    //
    _n8(sdk::unknown_ptr) callback_detected_unrecoverable_error;
    
    // [TpCallbackIndependent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55590, 0x67960 bytes
    // ntdll.dll .text:0x63940, 0x6fc38 bytes
    // ntdll.dll .text:0x4f2c0, 0x74648 bytes
    // ntdll.dll .text:0x63a60, 0x6fc38 bytes
    //
    _n9(sdk::unknown_ptr) callback_independent;
    
    // [TpCallbackLeaveCriticalSectionOnCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89440, 0x67960 bytes
    // ntdll.dll .text:0x87500, 0x6fc38 bytes
    // ntdll.dll .text:0x8c620, 0x74648 bytes
    // ntdll.dll .text:0x876a0, 0x6fc38 bytes
    //
    _o0(sdk::function<void(struct tp::callback_instance_t*, struct rtl::critical_section_t*)>*) callback_leave_critical_section_on_completion;
    
    // [TpCallbackMayRunLong]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x785d0, 0x67960 bytes
    // ntdll.dll .text:0x466d0, 0x6fc38 bytes
    // ntdll.dll .text:0x4f800, 0x74648 bytes
    // ntdll.dll .text:0x466d0, 0x6fc38 bytes
    //
    _o1(sdk::function<int32_t(struct tp::callback_instance_t*)>*) callback_may_run_long;
    
    // [TpCallbackReleaseMutexOnCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff2b0, 0x67960 bytes
    // ntdll.dll .text:0x111810, 0x6fc38 bytes
    // ntdll.dll .text:0x125ab0, 0x74648 bytes
    // ntdll.dll .text:0x1119b0, 0x6fc38 bytes
    //
    _o2(sdk::function<void(struct tp::callback_instance_t*, void*)>*) callback_release_mutex_on_completion;
    
    // [TpCallbackReleaseSemaphoreOnCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff2f0, 0x67960 bytes
    // ntdll.dll .text:0x111850, 0x6fc38 bytes
    // ntdll.dll .text:0x125af0, 0x74648 bytes
    // ntdll.dll .text:0x1119f0, 0x6fc38 bytes
    //
    _o3(sdk::function<void(struct tp::callback_instance_t*, void*, uint32_t)>*) callback_release_semaphore_on_completion;
    
    // [TpCallbackSendAlpcMessageOnCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6cb90, 0x67960 bytes
    // ntdll.dll .text:0x13700, 0x6fc38 bytes
    // ntdll.dll .text:0x6b390, 0x74648 bytes
    // ntdll.dll .text:0x13700, 0x6fc38 bytes
    //
    _o4(sdk::unknown_ptr) callback_send_alpc_message_on_completion;
    
    // [TpCallbackSendPendingAlpcMessage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82a30, 0x67960 bytes
    // ntdll.dll .text:0x111890, 0x6fc38 bytes
    // ntdll.dll .text:0x82620, 0x74648 bytes
    // ntdll.dll .text:0x111a30, 0x6fc38 bytes
    //
    _o5(sdk::unknown_ptr) callback_send_pending_alpc_message;
    
    // [TpCallbackSetEventOnCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87950, 0x67960 bytes
    // ntdll.dll .text:0x843d0, 0x6fc38 bytes
    // ntdll.dll .text:0x88460, 0x74648 bytes
    // ntdll.dll .text:0x84570, 0x6fc38 bytes
    //
    _o6(sdk::function<void(struct tp::callback_instance_t*, void*)>*) callback_set_event_on_completion;
    
    // [TpCallbackUnloadDllOnCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85140, 0x67960 bytes
    // ntdll.dll .text:0x7c500, 0x6fc38 bytes
    // ntdll.dll .text:0x81340, 0x74648 bytes
    // ntdll.dll .text:0x7c6a0, 0x6fc38 bytes
    //
    _o7(sdk::function<void(struct tp::callback_instance_t*, void*)>*) callback_unload_dll_on_completion;
    
    // [TpCancelAsyncIoOperation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x518c0, 0x67960 bytes
    // ntdll.dll .text:0x43630, 0x6fc38 bytes
    // ntdll.dll .text:0x4bc20, 0x74648 bytes
    // ntdll.dll .text:0x43630, 0x6fc38 bytes
    //
    _o8(sdk::function<void(struct tp::io_t*)>*) cancel_async_io_operation;
    
    // [TpCaptureCaller]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f360, 0x67960 bytes
    // ntdll.dll .text:0x702f0, 0x6fc38 bytes
    // ntdll.dll .text:0x78310, 0x74648 bytes
    // ntdll.dll .text:0x70490, 0x6fc38 bytes
    //
    _o9(sdk::function<void(enum tp::trace_type_t)>*) capture_caller;
    
    // [TpCheckTerminateWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x66c50, 0x67960 bytes
    // ntdll.dll .text:0x4cf50, 0x6fc38 bytes
    // ntdll.dll .text:0x5e010, 0x74648 bytes
    // ntdll.dll .text:0x4cf50, 0x6fc38 bytes
    //
    _p0(sdk::function<void(void*)>*) check_terminate_worker;
    
    // [TpDbgDumpHeapUsage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff330, 0x67960 bytes
    // ntdll.dll .text:0x1118d0, 0x6fc38 bytes
    // ntdll.dll .text:0x125b30, 0x74648 bytes
    // ntdll.dll .text:0x111a70, 0x6fc38 bytes
    //
    _p1(sdk::unknown_ptr) dbg_dump_heap_usage;
    
    // [TpDbgSetLogRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0x125bf0, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _p2(sdk::unknown_ptr) dbg_set_log_routine;
    
    // [TpDereferenceGlobalPool]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85a78, 0x67960 bytes
    // ntdll.dll .text:0x46688, 0x6fc38 bytes
    // ntdll.dll .text:0x5021c, 0x74648 bytes
    // ntdll.dll .text:0x46688, 0x6fc38 bytes
    //
    _p3(sdk::unknown_ptr) dereference_global_pool;
    
    // [TpDisablePoolCallbackChecks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x879b0, 0x67960 bytes
    // ntdll.dll .text:0x84380, 0x6fc38 bytes
    // ntdll.dll .text:0x88d30, 0x74648 bytes
    // ntdll.dll .text:0x84520, 0x6fc38 bytes
    //
    _p4(sdk::unknown_ptr) disable_pool_callback_checks;
    
    // [TpDisassociateCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83bd0, 0x67960 bytes
    // ntdll.dll .text:0x7ee20, 0x6fc38 bytes
    // ntdll.dll .text:0x84a10, 0x74648 bytes
    // ntdll.dll .text:0x7efc0, 0x6fc38 bytes
    //
    _p5(sdk::function<void(struct tp::callback_instance_t*)>*) disassociate_callback;
    
    // [TpInitializePackage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x46e8, 0x67960 bytes
    // ntdll.dll .text:0x70f5c, 0x6fc38 bytes
    // ntdll.dll .text:0x7f8ec, 0x74648 bytes
    // ntdll.dll .text:0x710fc, 0x6fc38 bytes
    //
    _p6(sdk::unknown_ptr) initialize_package;
    
    // [TpIsTimerSet]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fcc0, 0x67960 bytes
    // ntdll.dll .text:0x3fa60, 0x6fc38 bytes
    // ntdll.dll .text:0x31c10, 0x74648 bytes
    // ntdll.dll .text:0x3fa60, 0x6fc38 bytes
    //
    _p7(sdk::function<uint32_t(struct tp::timer_t*)>*) is_timer_set;
    
    // [TpPoolReferenceExistingGlobalPool]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8501c, 0x67960 bytes
    // ntdll.dll .text:0x4683c, 0x6fc38 bytes
    // ntdll.dll .text:0x50264, 0x74648 bytes
    // ntdll.dll .text:0x4683c, 0x6fc38 bytes
    //
    _p8(sdk::unknown_ptr) pool_reference_existing_global_pool;
    
    // [TpPostTask]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x50d88, 0x67960 bytes
    // ntdll.dll .text:0x20930, 0x6fc38 bytes
    // ntdll.dll .text:0x3541c, 0x74648 bytes
    // ntdll.dll .text:0x20930, 0x6fc38 bytes
    //
    _p9(sdk::unknown_ptr) post_task;
    
    // [TpPostWork]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x50c50, 0x67960 bytes
    // ntdll.dll .text:0x3fcf0, 0x6fc38 bytes
    // ntdll.dll .text:0x34d40, 0x74648 bytes
    // ntdll.dll .text:0x3fcf0, 0x6fc38 bytes
    //
    _q0(sdk::function<void(struct tp::work_t*)>*) post_work;
    
    // [TpQueryPoolStackInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfef20, 0x67960 bytes
    // ntdll.dll .text:0x1112e0, 0x6fc38 bytes
    // ntdll.dll .text:0x125580, 0x74648 bytes
    // ntdll.dll .text:0x111480, 0x6fc38 bytes
    //
    _q1(sdk::function<int32_t(struct tp::pool_t*, struct tp::pool_stack_information_t*)>*) query_pool_stack_information;
    
    // [TpReleaseAlpcCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x546a0, 0x67960 bytes
    // ntdll.dll .text:0x78c30, 0x6fc38 bytes
    // ntdll.dll .text:0x508a0, 0x74648 bytes
    // ntdll.dll .text:0x78dd0, 0x6fc38 bytes
    //
    _q2(sdk::function<void(struct tp::alpc_t*)>*) release_alpc_completion;
    
    // [TpReleaseCleanupGroup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81670, 0x67960 bytes
    // ntdll.dll .text:0x81230, 0x6fc38 bytes
    // ntdll.dll .text:0x85710, 0x74648 bytes
    // ntdll.dll .text:0x813d0, 0x6fc38 bytes
    //
    _q3(sdk::function<void(struct tp::cleanup_group_t*)>*) release_cleanup_group;
    
    // [TpReleaseCleanupGroupMembers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54e80, 0x67960 bytes
    // ntdll.dll .text:0x674b0, 0x6fc38 bytes
    // ntdll.dll .text:0x67cf0, 0x74648 bytes
    // ntdll.dll .text:0x675d0, 0x6fc38 bytes
    //
    _q4(sdk::function<void(struct tp::cleanup_group_t*, uint32_t, void*)>*) release_cleanup_group_members;
    
    // [TpReleaseIoCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x541f0, 0x67960 bytes
    // ntdll.dll .text:0x7b4d0, 0x6fc38 bytes
    // ntdll.dll .text:0x4bce0, 0x74648 bytes
    // ntdll.dll .text:0x7b670, 0x6fc38 bytes
    //
    _q5(sdk::function<void(struct tp::io_t*)>*) release_io_completion;
    
    // [TpReleaseJobNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54c70, 0x67960 bytes
    // ntdll.dll .text:0x7df10, 0x6fc38 bytes
    // ntdll.dll .text:0x50ea0, 0x74648 bytes
    // ntdll.dll .text:0x7e0b0, 0x6fc38 bytes
    //
    _q6(sdk::unknown_ptr) release_job_notification;
    
    // [TpReleasePool]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x830c0, 0x67960 bytes
    // ntdll.dll .text:0x80aa0, 0x6fc38 bytes
    // ntdll.dll .text:0x84e40, 0x74648 bytes
    // ntdll.dll .text:0x80c40, 0x6fc38 bytes
    //
    _q7(sdk::function<void(struct tp::pool_t*)>*) release_pool;
    
    // [TpReleaseTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4eef0, 0x67960 bytes
    // ntdll.dll .text:0x41d50, 0x6fc38 bytes
    // ntdll.dll .text:0x4e480, 0x74648 bytes
    // ntdll.dll .text:0x41d50, 0x6fc38 bytes
    //
    _q8(sdk::function<void(struct tp::timer_t*)>*) release_timer;
    
    // [TpReleaseWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51740, 0x67960 bytes
    // ntdll.dll .text:0x42720, 0x6fc38 bytes
    // ntdll.dll .text:0x4dc80, 0x74648 bytes
    // ntdll.dll .text:0x42720, 0x6fc38 bytes
    //
    _q9(sdk::function<void(struct tp::wait_t*)>*) release_wait;
    
    // [TpReleaseWork]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f8a0, 0x67960 bytes
    // ntdll.dll .text:0x40a90, 0x6fc38 bytes
    // ntdll.dll .text:0x4e6d0, 0x74648 bytes
    // ntdll.dll .text:0x40a90, 0x6fc38 bytes
    //
    _r0(sdk::function<void(struct tp::work_t*)>*) release_work;
    
    // [TpReserveTaskPost]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4ea4c, 0x67960 bytes
    // ntdll.dll .text:0x432b4, 0x6fc38 bytes
    // ntdll.dll .text:0x4f9d0, 0x74648 bytes
    // ntdll.dll .text:0x432b4, 0x6fc38 bytes
    //
    _r1(sdk::unknown_ptr) reserve_task_post;
    
    // [TpSetDefaultPoolMaxThreads]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfef90, 0x67960 bytes
    // ntdll.dll .text:0x1113a0, 0x6fc38 bytes
    // ntdll.dll .text:0x125640, 0x74648 bytes
    // ntdll.dll .text:0x111540, 0x6fc38 bytes
    //
    _r2(sdk::unknown_ptr) set_default_pool_max_threads;
    
    // [TpSetDefaultPoolStackInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84ed0, 0x67960 bytes
    // ntdll.dll .text:0x46b60, 0x6fc38 bytes
    // ntdll.dll .text:0x50b10, 0x74648 bytes
    // ntdll.dll .text:0x46b60, 0x6fc38 bytes
    //
    _r3(sdk::unknown_ptr) set_default_pool_stack_information;
    
    // [TpSetPoolMaxThreads]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53840, 0x67960 bytes
    // ntdll.dll .text:0x465c0, 0x6fc38 bytes
    // ntdll.dll .text:0x80890, 0x74648 bytes
    // ntdll.dll .text:0x465c0, 0x6fc38 bytes
    //
    _r4(sdk::function<void(struct tp::pool_t*, uint32_t)>*) set_pool_max_threads;
    
    // [TpSetPoolMaxThreadsSoftLimit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x538b0, 0x67960 bytes
    // ntdll.dll .text:0x804d0, 0x6fc38 bytes
    // ntdll.dll .text:0x83700, 0x74648 bytes
    // ntdll.dll .text:0x80670, 0x6fc38 bytes
    //
    _r5(sdk::unknown_ptr) set_pool_max_threads_soft_limit;
    
    // [TpSetPoolMinThreads]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54720, 0x67960 bytes
    // ntdll.dll .text:0x827f0, 0x6fc38 bytes
    // ntdll.dll .text:0x85340, 0x74648 bytes
    // ntdll.dll .text:0x82990, 0x6fc38 bytes
    //
    _r6(sdk::function<int32_t(struct tp::pool_t*, uint32_t)>*) set_pool_min_threads;
    
    // [TpSetPoolStackInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84ff0, 0x67960 bytes
    // ntdll.dll .text:0x46c80, 0x6fc38 bytes
    // ntdll.dll .text:0x50c30, 0x74648 bytes
    // ntdll.dll .text:0x46c80, 0x6fc38 bytes
    //
    _r7(sdk::function<int32_t(struct tp::pool_t*, struct tp::pool_stack_information_t*)>*) set_pool_stack_information;
    
    // [TpSetPoolThreadBasePriority]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88560, 0x67960 bytes
    // ntdll.dll .text:0x846b0, 0x6fc38 bytes
    // ntdll.dll .text:0x88e00, 0x74648 bytes
    // ntdll.dll .text:0x84850, 0x6fc38 bytes
    //
    _r8(sdk::unknown_ptr) set_pool_thread_base_priority;
    
    // [TpSetPoolWorkerThreadIdleTimeout]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x539f0, 0x67960 bytes
    // ntdll.dll .text:0x46630, 0x6fc38 bytes
    // ntdll.dll .text:0x4b860, 0x74648 bytes
    // ntdll.dll .text:0x46630, 0x6fc38 bytes
    //
    _r9(sdk::unknown_ptr) set_pool_worker_thread_idle_timeout;
    
    // [TpSetTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fd50, 0x67960 bytes
    // ntdll.dll .text:0x3faf0, 0x6fc38 bytes
    // ntdll.dll .text:0x31c50, 0x74648 bytes
    // ntdll.dll .text:0x3faf0, 0x6fc38 bytes
    //
    _s0(sdk::function<void(struct tp::timer_t*, int64_t*, uint32_t, uint32_t)>*) set_timer;
    
    // [TpSetTimerEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fd60, 0x67960 bytes
    // ntdll.dll .text:0x3fb00, 0x6fc38 bytes
    // ntdll.dll .text:0x32d70, 0x74648 bytes
    // ntdll.dll .text:0x3fb00, 0x6fc38 bytes
    //
    _s1(sdk::function<int32_t(struct tp::timer_t*, int64_t*, uint32_t, uint32_t)>*) set_timer_ex;
    
    // [TpSetWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f280, 0x67960 bytes
    // ntdll.dll .text:0x3e8b0, 0x6fc38 bytes
    // ntdll.dll .text:0x82aa0, 0x74648 bytes
    // ntdll.dll .text:0x3e8b0, 0x6fc38 bytes
    //
    _s2(sdk::function<void(struct tp::wait_t*, void*, int64_t*)>*) set_wait;
    
    // [TpSetWaitEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fac0, 0x67960 bytes
    // ntdll.dll .text:0x3f840, 0x6fc38 bytes
    // ntdll.dll .text:0x308d0, 0x74648 bytes
    // ntdll.dll .text:0x3f840, 0x6fc38 bytes
    //
    _s3(sdk::function<int32_t(struct tp::wait_t*, void*, int64_t*, void*)>*) set_wait_ex;
    
    // [TpSimpleTryPost]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52b50, 0x67960 bytes
    // ntdll.dll .text:0x3d770, 0x6fc38 bytes
    // ntdll.dll .text:0x33020, 0x74648 bytes
    // ntdll.dll .text:0x3d770, 0x6fc38 bytes
    //
    _s4(sdk::function<int32_t(sdk::function<void(struct tp::callback_instance_t*, void*)>*, void*, struct tp::callback_environ_v3_t*)>*) simple_try_post;
    
    // [TpStartAsyncIoOperation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fe70, 0x67960 bytes
    // ntdll.dll .text:0x3fc10, 0x6fc38 bytes
    // ntdll.dll .text:0x34ca0, 0x74648 bytes
    // ntdll.dll .text:0x3fc10, 0x6fc38 bytes
    //
    _s5(sdk::function<void(struct tp::io_t*)>*) start_async_io_operation;
    
    // [TpTimerOutstandingCallbackCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51f00, 0x67960 bytes
    // ntdll.dll .text:0x43ee0, 0x6fc38 bytes
    // ntdll.dll .text:0x4d480, 0x74648 bytes
    // ntdll.dll .text:0x43ee0, 0x6fc38 bytes
    //
    _s6(sdk::unknown_ptr) timer_outstanding_callback_count;
    
    // [TpTrimPools]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6ac70, 0x67960 bytes
    // ntdll.dll .text:0x64b00, 0x6fc38 bytes
    // ntdll.dll .text:0x693e0, 0x74648 bytes
    // ntdll.dll .text:0x64c20, 0x6fc38 bytes
    //
    _s7(sdk::unknown_ptr) trim_pools;
    
    // [TpUnreserveTaskPost]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4eacc, 0x67960 bytes
    // ntdll.dll .text:0x43334, 0x6fc38 bytes
    // ntdll.dll .text:0x4fb50, 0x74648 bytes
    // ntdll.dll .text:0x43334, 0x6fc38 bytes
    //
    _s8(sdk::unknown_ptr) unreserve_task_post;
    
    // [TpWaitForAlpcCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54e10, 0x67960 bytes
    // ntdll.dll .text:0x78b90, 0x6fc38 bytes
    // ntdll.dll .text:0x51d70, 0x74648 bytes
    // ntdll.dll .text:0x78d30, 0x6fc38 bytes
    //
    _s9(sdk::function<void(struct tp::alpc_t*)>*) wait_for_alpc_completion;
    
    // [TpWaitForIoCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86f40, 0x67960 bytes
    // ntdll.dll .text:0x83d00, 0x6fc38 bytes
    // ntdll.dll .text:0x87a10, 0x74648 bytes
    // ntdll.dll .text:0x83ea0, 0x6fc38 bytes
    //
    _t0(sdk::function<void(struct tp::io_t*, uint32_t)>*) wait_for_io_completion;
    
    // [TpWaitForJobNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54dd0, 0x67960 bytes
    // ntdll.dll .text:0x7ded0, 0x6fc38 bytes
    // ntdll.dll .text:0x51010, 0x74648 bytes
    // ntdll.dll .text:0x7e070, 0x6fc38 bytes
    //
    _t1(sdk::unknown_ptr) wait_for_job_notification;
    
    // [TpWaitForTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f7c0, 0x67960 bytes
    // ntdll.dll .text:0x3f4e0, 0x6fc38 bytes
    // ntdll.dll .text:0x2fb30, 0x74648 bytes
    // ntdll.dll .text:0x3f4e0, 0x6fc38 bytes
    //
    _t2(sdk::function<void(struct tp::timer_t*, uint32_t)>*) wait_for_timer;
    
    // [TpWaitForWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52c90, 0x67960 bytes
    // ntdll.dll .text:0x436a0, 0x6fc38 bytes
    // ntdll.dll .text:0x4fce0, 0x74648 bytes
    // ntdll.dll .text:0x436a0, 0x6fc38 bytes
    //
    _t3(sdk::function<void(struct tp::wait_t*, uint32_t)>*) wait_for_wait;
    
    // [TpWaitForWork]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x520a0, 0x67960 bytes
    // ntdll.dll .text:0x7db30, 0x6fc38 bytes
    // ntdll.dll .text:0x4c950, 0x74648 bytes
    // ntdll.dll .text:0x7dcd0, 0x6fc38 bytes
    //
    _t4(sdk::function<void(struct tp::work_t*, uint32_t)>*) wait_for_work;
    
    // [TpWaitOutstandingCallbackCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x520d8, 0x67960 bytes
    // ntdll.dll .text:0x43490, 0x6fc38 bytes
    // ntdll.dll .text:0x4cae0, 0x74648 bytes
    // ntdll.dll .text:0x43490, 0x6fc38 bytes
    //
    _t5(sdk::unknown_ptr) wait_outstanding_callback_count;
};
#include "magic/api.end.hpp"
