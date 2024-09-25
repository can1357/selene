#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_worker_thread
{
    // [DefragmentSegment@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xde17c, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) defragment_segment;
    
    // [EndOperation@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xde898, 0x20ba bytes
    //
    _m1(sdk::unknown_ptr) end_operation;
    
    // [FlushDeferredEvictions@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xdeadc, 0x20ba bytes
    //
    _m2(sdk::unknown_ptr) flush_deferred_evictions;
    
    // [SetWorkerThreadStatus@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x52460, 0x158b bytes
    //
    _m3(sdk::unknown_ptr) set_worker_thread_status;
    
    // [??0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x91e28, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xae570, 0x20ba bytes
    // dxgmms2.sys PAGE:0x92508, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8fc30, 0x158b bytes
    // dxgmms2.sys PAGE:0xb99c8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xde250, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb9f98, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) demote_allocations_to_fit_global_alloc;
    
    // [Flush@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90200, 0x158b bytes
    // dxgmms2.sys PAGE:0xba004, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdea0c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xba5d4, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) flush;
    
    // [FlushEvictQueue@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90288, 0x158b bytes
    // dxgmms2.sys PAGE:0xba0b8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdec24, 0x20ba bytes
    // dxgmms2.sys PAGE:0xba688, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) flush_evict_queue;
    
    // [HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90518, 0x158b bytes
    // dxgmms2.sys PAGE:0xba43c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdef90, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbaa0c, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) handle_recoverable_page_in_failure;
    
    // [Init@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6f0fc, 0x158b bytes
    // dxgmms2.sys PAGE:0x91cec, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xae434, 0x20ba bytes
    // dxgmms2.sys PAGE:0x923cc, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) init;
    
    // [ProcessEvictQueues@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x907b0, 0x158b bytes
    // dxgmms2.sys PAGE:0xba6f8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdf15c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbacc8, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) process_evict_queues;
    
    // [ProcessFrozenProcesses@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x90858, 0x158b bytes
    // dxgmms2.sys PAGE:0xba7f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdf254, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbadc0, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) process_frozen_processes;
    
    // [ProcessPendingTerminations@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88214, 0x158b bytes
    // dxgmms2.sys PAGE:0xba8ac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdf328, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbae7c, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) process_pending_terminations;
    
    // [RequestWorkerThreadStatus@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x524c4, 0x158b bytes
    // dxgmms2.sys PAGE:0x85904, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3518, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85ef4, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) request_worker_thread_status;
    
    // [Run@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6db70, 0x158b bytes
    // dxgmms2.sys PAGE:0x88fe0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa8670, 0x20ba bytes
    // dxgmms2.sys PAGE:0x895d0, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) run;
    
    // [SetTimeout@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x52448, 0x158b bytes
    // dxgmms2.sys PAGE:0x60250, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x95c9c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x60840, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) set_timeout;
    
    // [SubmitPacket@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x882c8, 0x158b bytes
    // dxgmms2.sys PAGE:0xba978, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdf3fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbaf48, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) submit_packet;
    
    // [SuspendAccessToAllocation@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66d64, 0x158b bytes
    // dxgmms2.sys PAGE:0xbab1c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdf560, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb0ec, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) suspend_access_to_allocation;
    
    // [SuspendDevices@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x909d8, 0x158b bytes
    // dxgmms2.sys PAGE:0xbaccc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdf704, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb29c, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) suspend_devices;
    
    // [TransitionToState@VIDMM_WORKER_THREAD]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5247c, 0x158b bytes
    // dxgmms2.sys PAGE:0x859a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa35c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85f94, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) transition_to_state;
};
#include "magic/api.end.hpp"
