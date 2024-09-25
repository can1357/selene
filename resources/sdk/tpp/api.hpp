#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace tpp
{
    // [TppAdjustRunningThreadGoal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xff084, 0x67960 bytes
    //
    _m0(sdk::unknown_ptr) adjust_running_thread_goal;
    
    // [TppFreeDirectParams]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x54618, 0x67960 bytes
    //
    _m1(sdk::unknown_ptr) free_direct_params;
    
    // [TppIsWorkerThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x66c9c, 0x67960 bytes
    //
    _m2(sdk::unknown_ptr) is_worker_thread;
    
    // [TppMaximumGroups]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x184cec, 0x74648 bytes
    //
    _m3(sdk::unknown_ptr) maximum_groups;
    
    // [TppQueryMaximumGroupCount]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x9e728, 0x74648 bytes
    //
    _m4(sdk::unknown_ptr) query_maximum_group_count;
    
    // [TppCallbackPerformDeferredWork]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 11
    // ntdll.dll .text:0x85750, 0x67960 bytes
    // ntdll.dll .text:0x7e588, 0x74648 bytes
    //
    _m5(sdk::unknown_ptr) callback_perform_deferred_work;
    
    // [TppWorkerSwitchNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x20490, 0x6fc38 bytes
    // ntdll.dll .text:0x20490, 0x6fc38 bytes
    //
    _m6(sdk::unknown_ptr) worker_switch_node;
    
    // [TppAdjustRunningThreadGoalWithLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1115a0, 0x6fc38 bytes
    // ntdll.dll .text:0x125840, 0x74648 bytes
    // ntdll.dll .text:0x111740, 0x6fc38 bytes
    //
    _m7(sdk::unknown_ptr) adjust_running_thread_goal_with_lock;
    
    // [TppPoolpDefaultPoolCpuSetCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b750, 0x6fc38 bytes
    // ntdll.dll .data:0x185298, 0x74648 bytes
    // ntdll.dll .data:0x16c750, 0x6fc38 bytes
    //
    _m8(sdk::unknown_ptr) poolp_default_pool_cpu_set_count;
    
    // [TppPoolpDefaultPoolCpuSetLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b640, 0x6fc38 bytes
    // ntdll.dll .data:0x1851d8, 0x74648 bytes
    // ntdll.dll .data:0x16c638, 0x6fc38 bytes
    //
    _m9(sdk::unknown_ptr) poolp_default_pool_cpu_set_lock;
    
    // [TppPoolpDefaultPoolCpuSets]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x168460, 0x6fc38 bytes
    // ntdll.dll .data:0x1824e0, 0x74648 bytes
    // ntdll.dll .data:0x169460, 0x6fc38 bytes
    //
    _n0(sdk::unknown_ptr) poolp_default_pool_cpu_sets;
    
    // [TppPoolpGlobalPoolMaxThreadsOverride]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b748, 0x6fc38 bytes
    // ntdll.dll .data:0x185290, 0x74648 bytes
    // ntdll.dll .data:0x16c74c, 0x6fc38 bytes
    //
    _n1(sdk::unknown_ptr) poolp_global_pool_max_threads_override;
    
    // [TppWaitTimerExpiration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83288, 0x6fc38 bytes
    // ntdll.dll .text:0x85c98, 0x74648 bytes
    // ntdll.dll .text:0x83428, 0x6fc38 bytes
    //
    _n2(sdk::unknown_ptr) wait_timer_expiration;
    
    // [TppWorkerFindTask]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x201f0, 0x6fc38 bytes
    // ntdll.dll .text:0x37870, 0x74648 bytes
    // ntdll.dll .text:0x201f0, 0x6fc38 bytes
    //
    _n3(sdk::unknown_ptr) worker_find_task;
    
    // [TppWorkerpOuterExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x11251c, 0x6fc38 bytes
    // ntdll.dll .text:0x126810, 0x74648 bytes
    // ntdll.dll .text:0x1126bc, 0x6fc38 bytes
    //
    _n4(sdk::unknown_ptr) workerp_outer_exception_filter;
    
    // [TppAllocAlpcCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53c60, 0x67960 bytes
    // ntdll.dll .text:0x78d24, 0x6fc38 bytes
    // ntdll.dll .text:0x4b994, 0x74648 bytes
    // ntdll.dll .text:0x78ec4, 0x6fc38 bytes
    //
    _n5(sdk::unknown_ptr) alloc_alpc_completion;
    
    // [TppAllocThreadData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7d85c, 0x67960 bytes
    // ntdll.dll .text:0x76400, 0x6fc38 bytes
    // ntdll.dll .text:0x78364, 0x74648 bytes
    // ntdll.dll .text:0x765a0, 0x6fc38 bytes
    //
    _n6(sdk::unknown_ptr) alloc_thread_data;
    
    // [TppAlpcpCallbackEpilog]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x32d30, 0x67960 bytes
    // ntdll.dll .text:0x6ce50, 0x6fc38 bytes
    // ntdll.dll .text:0x6e000, 0x74648 bytes
    // ntdll.dll .text:0x6cf70, 0x6fc38 bytes
    //
    _n7(sdk::unknown_ptr) alpcp_callback_epilog;
    
    // [TppAlpcpCleanupGroupMemberVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109560, 0x67960 bytes
    // ntdll.dll .rdata:0x11c740, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1314e0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c740, 0x6fc38 bytes
    //
    _n8(sdk::unknown_ptr) alpcp_cleanup_group_member_v_funcs;
    
    // [TppAlpcpExecuteCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x32980, 0x67960 bytes
    // ntdll.dll .text:0x3efc0, 0x6fc38 bytes
    // ntdll.dll .text:0x4f3b0, 0x74648 bytes
    // ntdll.dll .text:0x3efc0, 0x6fc38 bytes
    //
    _n9(sdk::unknown_ptr) alpcp_execute_callback;
    
    // [TppAlpcpFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54640, 0x67960 bytes
    // ntdll.dll .text:0x82d80, 0x6fc38 bytes
    // ntdll.dll .text:0x861a0, 0x74648 bytes
    // ntdll.dll .text:0x82f20, 0x6fc38 bytes
    //
    _o0(sdk::unknown_ptr) alpcp_free;
    
    // [TppAlpcpValidateAlpc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54318, 0x67960 bytes
    // ntdll.dll .text:0x78c9c, 0x6fc38 bytes
    // ntdll.dll .text:0x50918, 0x74648 bytes
    // ntdll.dll .text:0x78e3c, 0x6fc38 bytes
    //
    _o1(sdk::unknown_ptr) alpcp_validate_alpc;
    
    // [TppAreNodeWorkersSteadyState]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8e7c8, 0x67960 bytes
    // ntdll.dll .text:0x893c0, 0x6fc38 bytes
    // ntdll.dll .text:0x8a77c, 0x74648 bytes
    // ntdll.dll .text:0x89560, 0x6fc38 bytes
    //
    _o2(sdk::unknown_ptr) are_node_workers_steady_state;
    
    // [TppBarrierAdjust]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55164, 0x67960 bytes
    // ntdll.dll .text:0x6777c, 0x6fc38 bytes
    // ntdll.dll .text:0x67ff0, 0x74648 bytes
    // ntdll.dll .text:0x6789c, 0x6fc38 bytes
    //
    _o3(sdk::unknown_ptr) barrier_adjust;
    
    // [TppCallbackCheckThreadAfterCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x345e0, 0x67960 bytes
    // ntdll.dll .text:0x1301c, 0x6fc38 bytes
    // ntdll.dll .text:0x3664c, 0x74648 bytes
    // ntdll.dll .text:0x1301c, 0x6fc38 bytes
    //
    _o4(sdk::unknown_ptr) callback_check_thread_after_callback;
    
    // [TppCallbackCheckThreadBeforeCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x512e0, 0x67960 bytes
    // ntdll.dll .text:0x41d0c, 0x6fc38 bytes
    // ntdll.dll .text:0x7dc5c, 0x74648 bytes
    // ntdll.dll .text:0x41d0c, 0x6fc38 bytes
    //
    _o5(sdk::unknown_ptr) callback_check_thread_before_callback;
    
    // [TppCallbackEpilog]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x34260, 0x67960 bytes
    // ntdll.dll .text:0x12d00, 0x6fc38 bytes
    // ntdll.dll .text:0x3632c, 0x74648 bytes
    // ntdll.dll .text:0x12d00, 0x6fc38 bytes
    //
    _o6(sdk::unknown_ptr) callback_epilog;
    
    // [TppCallbackMayRunLongProlog]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78638, 0x67960 bytes
    // ntdll.dll .text:0x46738, 0x6fc38 bytes
    // ntdll.dll .text:0x4f868, 0x74648 bytes
    // ntdll.dll .text:0x46738, 0x6fc38 bytes
    //
    _o7(sdk::unknown_ptr) callback_may_run_long_prolog;
    
    // [TppCallbackSendAndDestroyAlpcMessage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82a6c, 0x67960 bytes
    // ntdll.dll .text:0x7f89c, 0x6fc38 bytes
    // ntdll.dll .text:0x8265c, 0x74648 bytes
    // ntdll.dll .text:0x7fa3c, 0x6fc38 bytes
    //
    _o8(sdk::unknown_ptr) callback_send_and_destroy_alpc_message;
    
    // [TppCancelTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4ffc8, 0x67960 bytes
    // ntdll.dll .text:0x3fde8, 0x6fc38 bytes
    // ntdll.dll .text:0x32c48, 0x74648 bytes
    // ntdll.dll .text:0x3fde8, 0x6fc38 bytes
    //
    _o9(sdk::unknown_ptr) cancel_timer;
    
    // [TppCancelWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fbd8, 0x67960 bytes
    // ntdll.dll .text:0x3f95c, 0x6fc38 bytes
    // ntdll.dll .text:0x307d8, 0x74648 bytes
    // ntdll.dll .text:0x3f95c, 0x6fc38 bytes
    //
    _p0(sdk::unknown_ptr) cancel_wait;
    
    // [TppCheckForTransactions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff3e4, 0x67960 bytes
    // ntdll.dll .text:0x11ef0, 0x6fc38 bytes
    // ntdll.dll .text:0x35658, 0x74648 bytes
    // ntdll.dll .text:0x11ef0, 0x6fc38 bytes
    //
    _p1(sdk::unknown_ptr) check_for_transactions;
    
    // [TppCleanupGroupAddMember]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51924, 0x67960 bytes
    // ntdll.dll .text:0x41e2c, 0x6fc38 bytes
    // ntdll.dll .text:0x5b890, 0x74648 bytes
    // ntdll.dll .text:0x41e2c, 0x6fc38 bytes
    //
    _p2(sdk::unknown_ptr) cleanup_group_add_member;
    
    // [TppCleanupGroupMemberCallbackProlog]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f2a4, 0x67960 bytes
    // ntdll.dll .text:0x3f340, 0x6fc38 bytes
    // ntdll.dll .text:0x4f63c, 0x74648 bytes
    // ntdll.dll .text:0x3f340, 0x6fc38 bytes
    //
    _p3(sdk::unknown_ptr) cleanup_group_member_callback_prolog;
    
    // [TppCleanupGroupMemberDestroy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f530, 0x67960 bytes
    // ntdll.dll .text:0x407ac, 0x6fc38 bytes
    // ntdll.dll .text:0x33158, 0x74648 bytes
    // ntdll.dll .text:0x407ac, 0x6fc38 bytes
    //
    _p4(sdk::unknown_ptr) cleanup_group_member_destroy;
    
    // [TppCleanupGroupMemberInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2e644, 0x67960 bytes
    // ntdll.dll .text:0x3da18, 0x6fc38 bytes
    // ntdll.dll .text:0x333a4, 0x74648 bytes
    // ntdll.dll .text:0x3da18, 0x6fc38 bytes
    //
    _p5(sdk::unknown_ptr) cleanup_group_member_initialize;
    
    // [TppCleanupGroupMemberRelease]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51214, 0x67960 bytes
    // ntdll.dll .text:0x40504, 0x6fc38 bytes
    // ntdll.dll .text:0x4f000, 0x74648 bytes
    // ntdll.dll .text:0x40504, 0x6fc38 bytes
    //
    _p6(sdk::unknown_ptr) cleanup_group_member_release;
    
    // [TppCleanupGroupMemberpNoPoolList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d9f0, 0x67960 bytes
    // ntdll.dll .data:0x164a98, 0x6fc38 bytes
    // ntdll.dll .data:0x17e9e8, 0x74648 bytes
    // ntdll.dll .data:0x165a98, 0x6fc38 bytes
    //
    _p7(sdk::unknown_ptr) cleanup_group_memberp_no_pool_list;
    
    // [TppCleanupGroupMemberpNoPoolListLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x155440, 0x67960 bytes
    // ntdll.dll .data:0x16f4d0, 0x6fc38 bytes
    // ntdll.dll .data:0x189280, 0x74648 bytes
    // ntdll.dll .data:0x1704d0, 0x6fc38 bytes
    //
    _p8(sdk::unknown_ptr) cleanup_group_memberp_no_pool_list_lock;
    
    // [TppCleanupGroupRemoveMember]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51850, 0x67960 bytes
    // ntdll.dll .text:0x41ca8, 0x6fc38 bytes
    // ntdll.dll .text:0x7ad58, 0x74648 bytes
    // ntdll.dll .text:0x41ca8, 0x6fc38 bytes
    //
    _p9(sdk::unknown_ptr) cleanup_group_remove_member;
    
    // [TppCompleteThreadData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f1d4, 0x67960 bytes
    // ntdll.dll .text:0x3ed1c, 0x6fc38 bytes
    // ntdll.dll .text:0x4f050, 0x74648 bytes
    // ntdll.dll .text:0x3ed1c, 0x6fc38 bytes
    //
    _q0(sdk::unknown_ptr) complete_thread_data;
    
    // [TppCritResetThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x858fc, 0x67960 bytes
    // ntdll.dll .text:0x8034c, 0x6fc38 bytes
    // ntdll.dll .text:0x814c4, 0x74648 bytes
    // ntdll.dll .text:0x804ec, 0x6fc38 bytes
    //
    _q1(sdk::unknown_ptr) crit_reset_thread;
    
    // [TppCritSetThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8108c, 0x67960 bytes
    // ntdll.dll .text:0x7a77c, 0x6fc38 bytes
    // ntdll.dll .text:0x7ded4, 0x74648 bytes
    // ntdll.dll .text:0x7a91c, 0x6fc38 bytes
    //
    _q2(sdk::unknown_ptr) crit_set_thread;
    
    // [TppDestroyTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f4c4, 0x67960 bytes
    // ntdll.dll .text:0x40740, 0x6fc38 bytes
    // ntdll.dll .text:0x7acfc, 0x74648 bytes
    // ntdll.dll .text:0x40740, 0x6fc38 bytes
    //
    _q3(sdk::unknown_ptr) destroy_timer;
    
    // [TppDestroyTimerSubQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x833e8, 0x67960 bytes
    // ntdll.dll .text:0x80ddc, 0x6fc38 bytes
    // ntdll.dll .text:0x8517c, 0x74648 bytes
    // ntdll.dll .text:0x80f7c, 0x6fc38 bytes
    //
    _q4(sdk::unknown_ptr) destroy_timer_sub_queue;
    
    // [TppDirectExecuteCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54530, 0x67960 bytes
    // ntdll.dll .text:0x77e30, 0x6fc38 bytes
    // ntdll.dll .text:0x7c9f0, 0x74648 bytes
    // ntdll.dll .text:0x77fd0, 0x6fc38 bytes
    //
    _q5(sdk::unknown_ptr) direct_execute_callback;
    
    // [TppDirectTaskVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109470, 0x67960 bytes
    // ntdll.dll .rdata:0x11c370, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131520, 0x74648 bytes
    // ntdll.dll .rdata:0x11c370, 0x6fc38 bytes
    //
    _q6(sdk::unknown_ptr) direct_task_v_funcs;
    
    // [TppDirectUnposted]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff150, 0x67960 bytes
    // ntdll.dll .text:0x111650, 0x6fc38 bytes
    // ntdll.dll .text:0x1258f0, 0x74648 bytes
    // ntdll.dll .text:0x1117f0, 0x6fc38 bytes
    //
    _q7(sdk::unknown_ptr) direct_unposted;
    
    // [TppEnqueueTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5037c, 0x67960 bytes
    // ntdll.dll .text:0x4038c, 0x6fc38 bytes
    // ntdll.dll .text:0x30cc0, 0x74648 bytes
    // ntdll.dll .text:0x4038c, 0x6fc38 bytes
    //
    _q8(sdk::unknown_ptr) enqueue_timer;
    
    // [TppETWCallbackCancel]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff59c, 0x67960 bytes
    // ntdll.dll .text:0x111b84, 0x6fc38 bytes
    // ntdll.dll .text:0x125e00, 0x74648 bytes
    // ntdll.dll .text:0x111d24, 0x6fc38 bytes
    //
    _q9(sdk::unknown_ptr) etw_callback_cancel;
    
    // [TppETWCallbackDequeue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x13b0, 0x67960 bytes
    // ntdll.dll .text:0x111c2c, 0x6fc38 bytes
    // ntdll.dll .text:0x125ea8, 0x74648 bytes
    // ntdll.dll .text:0x111dcc, 0x6fc38 bytes
    //
    _r0(sdk::unknown_ptr) etw_callback_dequeue;
    
    // [TppETWCallbackEnqueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1338, 0x67960 bytes
    // ntdll.dll .text:0x111cc8, 0x6fc38 bytes
    // ntdll.dll .text:0x125f44, 0x74648 bytes
    // ntdll.dll .text:0x111e68, 0x6fc38 bytes
    //
    _r1(sdk::unknown_ptr) etw_callback_enqueue;
    
    // [TppETWCallbackStart]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x116c, 0x67960 bytes
    // ntdll.dll .text:0x111d64, 0x6fc38 bytes
    // ntdll.dll .text:0x125fe0, 0x74648 bytes
    // ntdll.dll .text:0x111f04, 0x6fc38 bytes
    //
    _r2(sdk::unknown_ptr) etw_callback_start;
    
    // [TppETWCallbackStop]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10f4, 0x67960 bytes
    // ntdll.dll .text:0x111e00, 0x6fc38 bytes
    // ntdll.dll .text:0x12607c, 0x74648 bytes
    // ntdll.dll .text:0x111fa0, 0x6fc38 bytes
    //
    _r3(sdk::unknown_ptr) etw_callback_stop;
    
    // [TppETWPoolClose]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff620, 0x67960 bytes
    // ntdll.dll .text:0x111e9c, 0x6fc38 bytes
    // ntdll.dll .text:0x126118, 0x74648 bytes
    // ntdll.dll .text:0x11203c, 0x6fc38 bytes
    //
    _r4(sdk::unknown_ptr) etw_pool_close;
    
    // [TppETWPoolCreate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3158, 0x67960 bytes
    // ntdll.dll .text:0x111f18, 0x6fc38 bytes
    // ntdll.dll .text:0x126194, 0x74648 bytes
    // ntdll.dll .text:0x1120b8, 0x6fc38 bytes
    //
    _r5(sdk::unknown_ptr) etw_pool_create;
    
    // [TppETWPoolThreadMax]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30fc, 0x67960 bytes
    // ntdll.dll .text:0x111f94, 0x6fc38 bytes
    // ntdll.dll .text:0x126210, 0x74648 bytes
    // ntdll.dll .text:0x112134, 0x6fc38 bytes
    //
    _r6(sdk::unknown_ptr) etw_pool_thread_max;
    
    // [TppETWPoolThreadMin]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff678, 0x67960 bytes
    // ntdll.dll .text:0x112014, 0x6fc38 bytes
    // ntdll.dll .text:0x126290, 0x74648 bytes
    // ntdll.dll .text:0x1121b4, 0x6fc38 bytes
    //
    _r7(sdk::unknown_ptr) etw_pool_thread_min;
    
    // [TppETWTimerCancelNtTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x32c0, 0x67960 bytes
    // ntdll.dll .text:0x112094, 0x6fc38 bytes
    // ntdll.dll .text:0x126310, 0x74648 bytes
    // ntdll.dll .text:0x112234, 0x6fc38 bytes
    //
    _r8(sdk::unknown_ptr) etw_timer_cancel_nt_timer;
    
    // [TppETWTimerCancelled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2124, 0x67960 bytes
    // ntdll.dll .text:0x112110, 0x6fc38 bytes
    // ntdll.dll .text:0x12638c, 0x74648 bytes
    // ntdll.dll .text:0x1122b0, 0x6fc38 bytes
    //
    _r9(sdk::unknown_ptr) etw_timer_cancelled;
    
    // [TppETWTimerExpiration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1f88, 0x67960 bytes
    // ntdll.dll .text:0x112190, 0x6fc38 bytes
    // ntdll.dll .text:0x12640c, 0x74648 bytes
    // ntdll.dll .text:0x112330, 0x6fc38 bytes
    //
    _s0(sdk::unknown_ptr) etw_timer_expiration;
    
    // [TppETWTimerExpirationBegin]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2478, 0x67960 bytes
    // ntdll.dll .text:0x112230, 0x6fc38 bytes
    // ntdll.dll .text:0x1264ac, 0x74648 bytes
    // ntdll.dll .text:0x1123d0, 0x6fc38 bytes
    //
    _s1(sdk::unknown_ptr) etw_timer_expiration_begin;
    
    // [TppETWTimerSet]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x193c, 0x67960 bytes
    // ntdll.dll .text:0x1122ac, 0x6fc38 bytes
    // ntdll.dll .text:0x126528, 0x74648 bytes
    // ntdll.dll .text:0x11244c, 0x6fc38 bytes
    //
    _s2(sdk::unknown_ptr) etw_timer_set;
    
    // [TppETWTimerSetNtTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x16b8, 0x67960 bytes
    // ntdll.dll .text:0x112364, 0x6fc38 bytes
    // ntdll.dll .text:0x1265e0, 0x74648 bytes
    // ntdll.dll .text:0x112504, 0x6fc38 bytes
    //
    _s3(sdk::unknown_ptr) etw_timer_set_nt_timer;
    
    // [TppETWWorkerNodeSwitch]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff6d4, 0x67960 bytes
    // ntdll.dll .text:0x1123e8, 0x6fc38 bytes
    // ntdll.dll .text:0x126664, 0x74648 bytes
    // ntdll.dll .text:0x112588, 0x6fc38 bytes
    //
    _s4(sdk::unknown_ptr) etw_worker_node_switch;
    
    // [TppExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90a44, 0x67960 bytes
    // ntdll.dll .text:0x111984, 0x6fc38 bytes
    // ntdll.dll .text:0x125bfc, 0x74648 bytes
    // ntdll.dll .text:0x111b24, 0x6fc38 bytes
    //
    _s5(sdk::unknown_ptr) exception_filter;
    
    // [TppExecuteWaitCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f384, 0x67960 bytes
    // ntdll.dll .text:0x3ea98, 0x6fc38 bytes
    // ntdll.dll .text:0x4e884, 0x74648 bytes
    // ntdll.dll .text:0x3ea98, 0x6fc38 bytes
    //
    _s6(sdk::unknown_ptr) execute_wait_callback;
    
    // [TppExecuteWaitTimerCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87210, 0x67960 bytes
    // ntdll.dll .text:0x83930, 0x6fc38 bytes
    // ntdll.dll .text:0x50830, 0x74648 bytes
    // ntdll.dll .text:0x83ad0, 0x6fc38 bytes
    //
    _s7(sdk::unknown_ptr) execute_wait_timer_callback;
    
    // [TppFastAlpcAdjustConcurrencyCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55494, 0x67960 bytes
    // ntdll.dll .text:0x78ab4, 0x6fc38 bytes
    // ntdll.dll .text:0x4f5a4, 0x74648 bytes
    // ntdll.dll .text:0x78c54, 0x6fc38 bytes
    //
    _s8(sdk::unknown_ptr) fast_alpc_adjust_concurrency_count;
    
    // [TppFreeDirectParamsCache]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x825cc, 0x67960 bytes
    // ntdll.dll .text:0x7c0c0, 0x6fc38 bytes
    // ntdll.dll .text:0x7e53c, 0x74648 bytes
    // ntdll.dll .text:0x7c260, 0x6fc38 bytes
    //
    _s9(sdk::unknown_ptr) free_direct_params_cache;
    
    // [TppFreeThreadData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82698, 0x67960 bytes
    // ntdll.dll .text:0x7c45c, 0x6fc38 bytes
    // ntdll.dll .text:0x7f0a8, 0x74648 bytes
    // ntdll.dll .text:0x7c5fc, 0x6fc38 bytes
    //
    _t0(sdk::unknown_ptr) free_thread_data;
    
    // [TppFreeWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51800, 0x67960 bytes
    // ntdll.dll .text:0x427e0, 0x6fc38 bytes
    // ntdll.dll .text:0x7ac70, 0x74648 bytes
    // ntdll.dll .text:0x427e0, 0x6fc38 bytes
    //
    _t1(sdk::unknown_ptr) free_wait;
    
    // [TppGetCurrentThreadNumaNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51150, 0x67960 bytes
    // ntdll.dll .text:0x3d934, 0x6fc38 bytes
    // ntdll.dll .text:0x33da4, 0x74648 bytes
    // ntdll.dll .text:0x3d934, 0x6fc38 bytes
    //
    _t2(sdk::unknown_ptr) get_current_thread_numa_node;
    
    // [TppHeapTag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154078, 0x67960 bytes
    // ntdll.dll .data:0x16b218, 0x6fc38 bytes
    // ntdll.dll .data:0x184d00, 0x74648 bytes
    // ntdll.dll .data:0x16c218, 0x6fc38 bytes
    //
    _t3(sdk::unknown_ptr) heap_tag;
    
    // [TppInitializeTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x50fc8, 0x67960 bytes
    // ntdll.dll .text:0x3d664, 0x6fc38 bytes
    // ntdll.dll .text:0x2ffd8, 0x74648 bytes
    // ntdll.dll .text:0x3d664, 0x6fc38 bytes
    //
    _t4(sdk::unknown_ptr) initialize_timer;
    
    // [TppInitializeTimerQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x516cc, 0x67960 bytes
    // ntdll.dll .text:0x4388c, 0x6fc38 bytes
    // ntdll.dll .text:0x4d1a4, 0x74648 bytes
    // ntdll.dll .text:0x4388c, 0x6fc38 bytes
    //
    _t5(sdk::unknown_ptr) initialize_timer_queue;
    
    // [TppInitializeTimerSubQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x515c4, 0x67960 bytes
    // ntdll.dll .text:0x43784, 0x6fc38 bytes
    // ntdll.dll .text:0x4d218, 0x74648 bytes
    // ntdll.dll .text:0x43784, 0x6fc38 bytes
    //
    _t6(sdk::unknown_ptr) initialize_timer_sub_queue;
    
    // [TppIopCallbackEpilog]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54260, 0x67960 bytes
    // ntdll.dll .text:0x6cf90, 0x6fc38 bytes
    // ntdll.dll .text:0x6d3c0, 0x74648 bytes
    // ntdll.dll .text:0x6d0b0, 0x6fc38 bytes
    //
    _t7(sdk::unknown_ptr) iop_callback_epilog;
    
    // [TppIopCancelPendingCallbacks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfeea0, 0x67960 bytes
    // ntdll.dll .text:0x111240, 0x6fc38 bytes
    // ntdll.dll .text:0x1254c0, 0x74648 bytes
    // ntdll.dll .text:0x1113e0, 0x6fc38 bytes
    //
    _t8(sdk::unknown_ptr) iop_cancel_pending_callbacks;
    
    // [TppIopCleanupGroupMemberVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1094a0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c250, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1314a0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c250, 0x6fc38 bytes
    //
    _t9(sdk::unknown_ptr) iop_cleanup_group_member_v_funcs;
    
    // [TppIopExecuteCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f040, 0x67960 bytes
    // ntdll.dll .text:0x3ebb0, 0x6fc38 bytes
    // ntdll.dll .text:0x4f090, 0x74648 bytes
    // ntdll.dll .text:0x3ebb0, 0x6fc38 bytes
    //
    _u0(sdk::unknown_ptr) iop_execute_callback;
    
    // [TppIopFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54190, 0x67960 bytes
    // ntdll.dll .text:0x44590, 0x6fc38 bytes
    // ntdll.dll .text:0x818d0, 0x74648 bytes
    // ntdll.dll .text:0x44590, 0x6fc38 bytes
    //
    _u1(sdk::unknown_ptr) iop_free;
    
    // [TppIopValidateIo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fed0, 0x67960 bytes
    // ntdll.dll .text:0x3fc88, 0x6fc38 bytes
    // ntdll.dll .text:0x4bc84, 0x74648 bytes
    // ntdll.dll .text:0x3fc88, 0x6fc38 bytes
    //
    _u2(sdk::unknown_ptr) iop_validate_io;
    
    // [TppItePush]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x552b4, 0x67960 bytes
    // ntdll.dll .text:0x678cc, 0x6fc38 bytes
    // ntdll.dll .text:0x68140, 0x74648 bytes
    // ntdll.dll .text:0x679ec, 0x6fc38 bytes
    //
    _u3(sdk::unknown_ptr) ite_push;
    
    // [TppIteWakeWaiters]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x552e4, 0x67960 bytes
    // ntdll.dll .text:0x678fc, 0x6fc38 bytes
    // ntdll.dll .text:0x68170, 0x74648 bytes
    // ntdll.dll .text:0x67a1c, 0x6fc38 bytes
    //
    _u4(sdk::unknown_ptr) ite_wake_waiters;
    
    // [TppJobpCallbackEpilog]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54260, 0x67960 bytes
    // ntdll.dll .text:0x6cf90, 0x6fc38 bytes
    // ntdll.dll .text:0x6d3c0, 0x74648 bytes
    // ntdll.dll .text:0x6d0b0, 0x6fc38 bytes
    //
    _u5(sdk::unknown_ptr) jobp_callback_epilog;
    
    // [TppJobpCleanupGroupMemberVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109580, 0x67960 bytes
    // ntdll.dll .rdata:0x11c840, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131530, 0x74648 bytes
    // ntdll.dll .rdata:0x11c840, 0x6fc38 bytes
    //
    _u6(sdk::unknown_ptr) jobp_cleanup_group_member_v_funcs;
    
    // [TppJobpExecuteCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x838d0, 0x67960 bytes
    // ntdll.dll .text:0x7eb00, 0x6fc38 bytes
    // ntdll.dll .text:0x50980, 0x74648 bytes
    // ntdll.dll .text:0x7eca0, 0x6fc38 bytes
    //
    _u7(sdk::unknown_ptr) jobp_execute_callback;
    
    // [TppJobpFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54c10, 0x67960 bytes
    // ntdll.dll .text:0x840e0, 0x6fc38 bytes
    // ntdll.dll .text:0x87b20, 0x74648 bytes
    // ntdll.dll .text:0x84280, 0x6fc38 bytes
    //
    _u8(sdk::unknown_ptr) jobp_free;
    
    // [TppJobpRundownJob]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54cd8, 0x67960 bytes
    // ntdll.dll .text:0x7df78, 0x6fc38 bytes
    // ntdll.dll .text:0x50f10, 0x74648 bytes
    // ntdll.dll .text:0x7e118, 0x6fc38 bytes
    //
    _u9(sdk::unknown_ptr) jobp_rundown_job;
    
    // [TppJobpStopCallbackGeneration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfef10, 0x67960 bytes
    // ntdll.dll .text:0x1112d0, 0x6fc38 bytes
    // ntdll.dll .text:0x125560, 0x74648 bytes
    // ntdll.dll .text:0x111470, 0x6fc38 bytes
    //
    _v0(sdk::unknown_ptr) jobp_stop_callback_generation;
    
    // [TppJobpValidateJob]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x54b78, 0x67960 bytes
    // ntdll.dll .text:0x7e068, 0x6fc38 bytes
    // ntdll.dll .text:0x50e44, 0x74648 bytes
    // ntdll.dll .text:0x7e208, 0x6fc38 bytes
    //
    _v1(sdk::unknown_ptr) jobp_validate_job;
    
    // [TppNumberNodes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154068, 0x67960 bytes
    // ntdll.dll .data:0x16b208, 0x6fc38 bytes
    // ntdll.dll .data:0x184cf0, 0x74648 bytes
    // ntdll.dll .data:0x16c208, 0x6fc38 bytes
    //
    _v2(sdk::unknown_ptr) number_nodes;
    
    // [TppPHDelete]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5086c, 0x67960 bytes
    // ntdll.dll .text:0x3ff0c, 0x6fc38 bytes
    // ntdll.dll .text:0x31744, 0x74648 bytes
    // ntdll.dll .text:0x3ff0c, 0x6fc38 bytes
    //
    _v3(sdk::unknown_ptr) ph_delete;
    
    // [TppPHExtractMin]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x508d4, 0x67960 bytes
    // ntdll.dll .text:0x3ff74, 0x6fc38 bytes
    // ntdll.dll .text:0x317ac, 0x74648 bytes
    // ntdll.dll .text:0x3ff74, 0x6fc38 bytes
    //
    _v4(sdk::unknown_ptr) ph_extract_min;
    
    // [TppPHInsert]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x50418, 0x67960 bytes
    // ntdll.dll .text:0x40428, 0x6fc38 bytes
    // ntdll.dll .text:0x30d5c, 0x74648 bytes
    // ntdll.dll .text:0x40428, 0x6fc38 bytes
    //
    _v5(sdk::unknown_ptr) ph_insert;
    
    // [TppPoolAddWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x803f0, 0x67960 bytes
    // ntdll.dll .text:0x780ac, 0x6fc38 bytes
    // ntdll.dll .text:0x7b2f8, 0x74648 bytes
    // ntdll.dll .text:0x7824c, 0x6fc38 bytes
    //
    _v6(sdk::unknown_ptr) pool_add_worker;
    
    // [TppPoolRemoveWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81bb8, 0x67960 bytes
    // ntdll.dll .text:0x7afb8, 0x6fc38 bytes
    // ntdll.dll .text:0x7cf80, 0x74648 bytes
    // ntdll.dll .text:0x7b158, 0x6fc38 bytes
    //
    _v7(sdk::unknown_ptr) pool_remove_worker;
    
    // [TppPoolUpdateNodeRelation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5275c, 0x67960 bytes
    // ntdll.dll .text:0x457b4, 0x6fc38 bytes
    // ntdll.dll .text:0x4fde4, 0x74648 bytes
    // ntdll.dll .text:0x457b4, 0x6fc38 bytes
    //
    _v8(sdk::unknown_ptr) pool_update_node_relation;
    
    // [TppPoolUpdateTrimmedWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6b448, 0x67960 bytes
    // ntdll.dll .text:0x794c0, 0x6fc38 bytes
    // ntdll.dll .text:0x69a58, 0x74648 bytes
    // ntdll.dll .text:0x79660, 0x6fc38 bytes
    //
    _v9(sdk::unknown_ptr) pool_update_trimmed_worker;
    
    // [TppPoolpDereferenceGlobalPool]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f75c, 0x67960 bytes
    // ntdll.dll .text:0x409d8, 0x6fc38 bytes
    // ntdll.dll .text:0x2fca0, 0x74648 bytes
    // ntdll.dll .text:0x409d8, 0x6fc38 bytes
    //
    _w0(sdk::unknown_ptr) poolp_dereference_global_pool;
    
    // [TppPoolpFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x832d8, 0x67960 bytes
    // ntdll.dll .text:0x80ccc, 0x6fc38 bytes
    // ntdll.dll .text:0x8506c, 0x74648 bytes
    // ntdll.dll .text:0x80e6c, 0x6fc38 bytes
    //
    _w1(sdk::unknown_ptr) poolp_free;
    
    // [TppPoolpGlobalPool]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154400, 0x67960 bytes
    // ntdll.dll .data:0x16b638, 0x6fc38 bytes
    // ntdll.dll .data:0x1851d0, 0x74648 bytes
    // ntdll.dll .data:0x16c630, 0x6fc38 bytes
    //
    _w2(sdk::unknown_ptr) poolp_global_pool;
    
    // [TppPoolpGlobalPoolLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154408, 0x67960 bytes
    // ntdll.dll .data:0x16b648, 0x6fc38 bytes
    // ntdll.dll .data:0x1851e0, 0x74648 bytes
    // ntdll.dll .data:0x16c628, 0x6fc38 bytes
    //
    _w3(sdk::unknown_ptr) poolp_global_pool_lock;
    
    // [TppPoolpGlobalPoolMaxThreads]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544b8, 0x67960 bytes
    // ntdll.dll .data:0x16b74c, 0x6fc38 bytes
    // ntdll.dll .data:0x185294, 0x74648 bytes
    // ntdll.dll .data:0x16c748, 0x6fc38 bytes
    //
    _w4(sdk::unknown_ptr) poolp_global_pool_max_threads;
    
    // [TppPoolpGlobalPoolStackSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154070, 0x67960 bytes
    // ntdll.dll .data:0x16b210, 0x6fc38 bytes
    // ntdll.dll .data:0x184cf8, 0x74648 bytes
    // ntdll.dll .data:0x16c210, 0x6fc38 bytes
    //
    _w5(sdk::unknown_ptr) poolp_global_pool_stack_size;
    
    // [TppPoolpList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d640, 0x67960 bytes
    // ntdll.dll .data:0x164610, 0x6fc38 bytes
    // ntdll.dll .data:0x17e400, 0x74648 bytes
    // ntdll.dll .data:0x165610, 0x6fc38 bytes
    //
    _w6(sdk::unknown_ptr) poolp_list;
    
    // [TppPoolpListLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1543e8, 0x67960 bytes
    // ntdll.dll .data:0x16b620, 0x6fc38 bytes
    // ntdll.dll .data:0x1851b8, 0x74648 bytes
    // ntdll.dll .data:0x16c618, 0x6fc38 bytes
    //
    _w7(sdk::unknown_ptr) poolp_list_lock;
    
    // [TppPoolpReferenceGlobalPool]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51324, 0x67960 bytes
    // ntdll.dll .text:0x3e3dc, 0x6fc38 bytes
    // ntdll.dll .text:0x31938, 0x74648 bytes
    // ntdll.dll .text:0x3e3dc, 0x6fc38 bytes
    //
    _w8(sdk::unknown_ptr) poolp_reference_global_pool;
    
    // [TppPoolpSerializedPool]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1543f0, 0x67960 bytes
    // ntdll.dll .data:0x16b630, 0x6fc38 bytes
    // ntdll.dll .data:0x1851c8, 0x74648 bytes
    // ntdll.dll .data:0x16c610, 0x6fc38 bytes
    //
    _w9(sdk::unknown_ptr) poolp_serialized_pool;
    
    // [TppPoolpSerializedPoolLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1543f8, 0x67960 bytes
    // ntdll.dll .data:0x16b628, 0x6fc38 bytes
    // ntdll.dll .data:0x1851c0, 0x74648 bytes
    // ntdll.dll .data:0x16c620, 0x6fc38 bytes
    //
    _x0(sdk::unknown_ptr) poolp_serialized_pool_lock;
    
    // [TppPrepareDirectParams]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x34810, 0x67960 bytes
    // ntdll.dll .text:0x13220, 0x6fc38 bytes
    // ntdll.dll .text:0x367fc, 0x74648 bytes
    // ntdll.dll .text:0x13220, 0x6fc38 bytes
    //
    _x1(sdk::unknown_ptr) prepare_direct_params;
    
    // [TppQueueRemoveHead]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8e764, 0x67960 bytes
    // ntdll.dll .text:0x8935c, 0x6fc38 bytes
    // ntdll.dll .text:0x126714, 0x74648 bytes
    // ntdll.dll .text:0x894fc, 0x6fc38 bytes
    //
    _x2(sdk::unknown_ptr) queue_remove_head;
    
    // [TppRaiseHandleStatus]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff434, 0x67960 bytes
    // ntdll.dll .text:0x111a1c, 0x6fc38 bytes
    // ntdll.dll .text:0x125ca0, 0x74648 bytes
    // ntdll.dll .text:0x111bbc, 0x6fc38 bytes
    //
    _x3(sdk::unknown_ptr) raise_handle_status;
    
    // [TppRaiseInvalidParameter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff4e4, 0x67960 bytes
    // ntdll.dll .text:0x111acc, 0x6fc38 bytes
    // ntdll.dll .text:0x125d48, 0x74648 bytes
    // ntdll.dll .text:0x111c6c, 0x6fc38 bytes
    //
    _x4(sdk::unknown_ptr) raise_invalid_parameter;
    
    // [TppReportExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff564, 0x67960 bytes
    // ntdll.dll .text:0x111b4c, 0x6fc38 bytes
    // ntdll.dll .text:0x125dc8, 0x74648 bytes
    // ntdll.dll .text:0x111cec, 0x6fc38 bytes
    //
    _x5(sdk::unknown_ptr) report_exception_filter;
    
    // [TppSetTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x500e8, 0x67960 bytes
    // ntdll.dll .text:0x400f8, 0x6fc38 bytes
    // ntdll.dll .text:0x30b88, 0x74648 bytes
    // ntdll.dll .text:0x400f8, 0x6fc38 bytes
    //
    _x6(sdk::unknown_ptr) set_timer;
    
    // [TppSetupNextWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x50474, 0x67960 bytes
    // ntdll.dll .text:0x40018, 0x6fc38 bytes
    // ntdll.dll .text:0x2fea0, 0x74648 bytes
    // ntdll.dll .text:0x40018, 0x6fc38 bytes
    //
    _x7(sdk::unknown_ptr) setup_next_wait;
    
    // [TppSimplepCleanupGroupMemberVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109530, 0x67960 bytes
    // ntdll.dll .rdata:0x11c200, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131460, 0x74648 bytes
    // ntdll.dll .rdata:0x11c200, 0x6fc38 bytes
    //
    _x8(sdk::unknown_ptr) simplep_cleanup_group_member_v_funcs;
    
    // [TppSimplepExecuteCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52a40, 0x67960 bytes
    // ntdll.dll .text:0x3e8c0, 0x6fc38 bytes
    // ntdll.dll .text:0x4eaa0, 0x74648 bytes
    // ntdll.dll .text:0x3e8c0, 0x6fc38 bytes
    //
    _x9(sdk::unknown_ptr) simplep_execute_callback;
    
    // [TppSimplepFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52d80, 0x67960 bytes
    // ntdll.dll .text:0x40770, 0x6fc38 bytes
    // ntdll.dll .text:0x32fe0, 0x74648 bytes
    // ntdll.dll .text:0x40770, 0x6fc38 bytes
    //
    _y0(sdk::unknown_ptr) simplep_free;
    
    // [TppSimplepTaskVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109550, 0x67960 bytes
    // ntdll.dll .rdata:0x11c220, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131450, 0x74648 bytes
    // ntdll.dll .rdata:0x11c220, 0x6fc38 bytes
    //
    _y1(sdk::unknown_ptr) simplep_task_v_funcs;
    
    // [TppSingleTimerExpiration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x50988, 0x67960 bytes
    // ntdll.dll .text:0x40558, 0x6fc38 bytes
    // ntdll.dll .text:0x30f1c, 0x74648 bytes
    // ntdll.dll .text:0x40558, 0x6fc38 bytes
    //
    _y2(sdk::unknown_ptr) single_timer_expiration;
    
    // [TppStartThreadData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f210, 0x67960 bytes
    // ntdll.dll .text:0x3ed58, 0x6fc38 bytes
    // ntdll.dll .text:0x4eb80, 0x74648 bytes
    // ntdll.dll .text:0x3ed58, 0x6fc38 bytes
    //
    _y3(sdk::unknown_ptr) start_thread_data;
    
    // [TppStopWaitCallbackGeneration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x553b0, 0x67960 bytes
    // ntdll.dll .text:0x84940, 0x6fc38 bytes
    // ntdll.dll .text:0x88980, 0x74648 bytes
    // ntdll.dll .text:0x84ae0, 0x6fc38 bytes
    //
    _y4(sdk::unknown_ptr) stop_wait_callback_generation;
    
    // [TppTerminateProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff588, 0x67960 bytes
    // ntdll.dll .text:0x111b70, 0x6fc38 bytes
    // ntdll.dll .text:0x125dec, 0x74648 bytes
    // ntdll.dll .text:0x111d10, 0x6fc38 bytes
    //
    _y5(sdk::unknown_ptr) terminate_process;
    
    // [TppTimerQueueExpiration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x505e0, 0x67960 bytes
    // ntdll.dll .text:0x3f5c0, 0x6fc38 bytes
    // ntdll.dll .text:0x314d0, 0x74648 bytes
    // ntdll.dll .text:0x3f5c0, 0x6fc38 bytes
    //
    _y6(sdk::unknown_ptr) timer_queue_expiration;
    
    // [TppTimerpCleanupGroupMemberVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1094c0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c290, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131480, 0x74648 bytes
    // ntdll.dll .rdata:0x11c290, 0x6fc38 bytes
    //
    _y7(sdk::unknown_ptr) timerp_cleanup_group_member_v_funcs;
    
    // [TppTimerpExecuteCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78b00, 0x67960 bytes
    // ntdll.dll .text:0x3e7c0, 0x6fc38 bytes
    // ntdll.dll .text:0x4e9b0, 0x74648 bytes
    // ntdll.dll .text:0x3e7c0, 0x6fc38 bytes
    //
    _y8(sdk::unknown_ptr) timerp_execute_callback;
    
    // [TppTimerpFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4efa0, 0x67960 bytes
    // ntdll.dll .text:0x41df0, 0x6fc38 bytes
    // ntdll.dll .text:0x7acc0, 0x74648 bytes
    // ntdll.dll .text:0x41df0, 0x6fc38 bytes
    //
    _y9(sdk::unknown_ptr) timerp_free;
    
    // [TppTimerpStopCallbackGeneration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55350, 0x67960 bytes
    // ntdll.dll .text:0x84140, 0x6fc38 bytes
    // ntdll.dll .text:0x88550, 0x74648 bytes
    // ntdll.dll .text:0x842e0, 0x6fc38 bytes
    //
    _z0(sdk::unknown_ptr) timerp_stop_callback_generation;
    
    // [TppTimerpTaskVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109510, 0x67960 bytes
    // ntdll.dll .rdata:0x11c2c0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131380, 0x74648 bytes
    // ntdll.dll .rdata:0x11c2c0, 0x6fc38 bytes
    //
    _z1(sdk::unknown_ptr) timerp_task_v_funcs;
    
    // [TppTimerpValidateTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4ff28, 0x67960 bytes
    // ntdll.dll .text:0x3fd44, 0x6fc38 bytes
    // ntdll.dll .text:0x34ad8, 0x74648 bytes
    // ntdll.dll .text:0x3fd44, 0x6fc38 bytes
    //
    _z2(sdk::unknown_ptr) timerp_validate_timer;
    
    // [TppUpdatePoolNodeStatus]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87130, 0x67960 bytes
    // ntdll.dll .text:0x80520, 0x6fc38 bytes
    // ntdll.dll .text:0x851b4, 0x74648 bytes
    // ntdll.dll .text:0x806c0, 0x6fc38 bytes
    //
    _z3(sdk::unknown_ptr) update_pool_node_status;
    
    // [TppUpdateSubQueueTimer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5021c, 0x67960 bytes
    // ntdll.dll .text:0x4022c, 0x6fc38 bytes
    // ntdll.dll .text:0x30db8, 0x74648 bytes
    // ntdll.dll .text:0x4022c, 0x6fc38 bytes
    //
    _z4(sdk::unknown_ptr) update_sub_queue_timer;
    
    // [TppValidateCleanupGroupMember]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4ffa0, 0x67960 bytes
    // ntdll.dll .text:0x3fdbc, 0x6fc38 bytes
    // ntdll.dll .text:0x34d94, 0x74648 bytes
    // ntdll.dll .text:0x3fdbc, 0x6fc38 bytes
    //
    _z5(sdk::unknown_ptr) validate_cleanup_group_member;
    
    // [TppWaitCompletion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f290, 0x67960 bytes
    // ntdll.dll .text:0x3e9a0, 0x6fc38 bytes
    // ntdll.dll .text:0x4e7b0, 0x74648 bytes
    // ntdll.dll .text:0x3e9a0, 0x6fc38 bytes
    //
    _z6(sdk::unknown_ptr) wait_completion;
    
    // [TppWaitpCleanupGroupMemberVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109480, 0x67960 bytes
    // ntdll.dll .rdata:0x11c230, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131430, 0x74648 bytes
    // ntdll.dll .rdata:0x11c230, 0x6fc38 bytes
    //
    _z7(sdk::unknown_ptr) waitp_cleanup_group_member_v_funcs;
    
    // [TppWaitpTaskVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109520, 0x67960 bytes
    // ntdll.dll .rdata:0x11c380, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131510, 0x74648 bytes
    // ntdll.dll .rdata:0x11c380, 0x6fc38 bytes
    //
    _z8(sdk::unknown_ptr) waitp_task_v_funcs;
    
    // [TppWaitpValidateWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fcf8, 0x67960 bytes
    // ntdll.dll .text:0x3fa98, 0x6fc38 bytes
    // ntdll.dll .text:0x31b9c, 0x74648 bytes
    // ntdll.dll .text:0x3fa98, 0x6fc38 bytes
    //
    _z9(sdk::unknown_ptr) waitp_validate_wait;
    
    // [TppWorkCallbackEpilog]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x34ca0, 0x67960 bytes
    // ntdll.dll .text:0x6cf90, 0x6fc38 bytes
    // ntdll.dll .text:0x6d3c0, 0x74648 bytes
    // ntdll.dll .text:0x6d0b0, 0x6fc38 bytes
    //
    _a0(sdk::unknown_ptr) work_callback_epilog;
    
    // [TppWorkCallbackPrologRelease]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52868, 0x67960 bytes
    // ntdll.dll .text:0x3ede8, 0x6fc38 bytes
    // ntdll.dll .text:0x4ec48, 0x74648 bytes
    // ntdll.dll .text:0x3ede8, 0x6fc38 bytes
    //
    _a1(sdk::unknown_ptr) work_callback_prolog_release;
    
    // [TppWorkCancelPendingCallbacks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55310, 0x67960 bytes
    // ntdll.dll .text:0x841d0, 0x6fc38 bytes
    // ntdll.dll .text:0x87fc0, 0x74648 bytes
    // ntdll.dll .text:0x84370, 0x6fc38 bytes
    //
    _a2(sdk::unknown_ptr) work_cancel_pending_callbacks;
    
    // [TppWorkInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x510c0, 0x67960 bytes
    // ntdll.dll .text:0x3d8a8, 0x6fc38 bytes
    // ntdll.dll .text:0x33314, 0x74648 bytes
    // ntdll.dll .text:0x3d8a8, 0x6fc38 bytes
    //
    _a3(sdk::unknown_ptr) work_initialize;
    
    // [TppWorkPost]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x50b54, 0x67960 bytes
    // ntdll.dll .text:0x20b54, 0x6fc38 bytes
    // ntdll.dll .text:0x352d8, 0x74648 bytes
    // ntdll.dll .text:0x20b54, 0x6fc38 bytes
    //
    _a4(sdk::unknown_ptr) work_post;
    
    // [TppWorkUnposted]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff1d0, 0x67960 bytes
    // ntdll.dll .text:0x111700, 0x6fc38 bytes
    // ntdll.dll .text:0x1259a0, 0x74648 bytes
    // ntdll.dll .text:0x1118a0, 0x6fc38 bytes
    //
    _a5(sdk::unknown_ptr) work_unposted;
    
    // [TppWorkWait]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x51268, 0x67960 bytes
    // ntdll.dll .text:0x40484, 0x6fc38 bytes
    // ntdll.dll .text:0x2fc08, 0x74648 bytes
    // ntdll.dll .text:0x40484, 0x6fc38 bytes
    //
    _a6(sdk::unknown_ptr) work_wait;
    
    // [TppWorkerThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x32de0, 0x67960 bytes
    // ntdll.dll .text:0x120e0, 0x6fc38 bytes
    // ntdll.dll .text:0x35720, 0x74648 bytes
    // ntdll.dll .text:0x120e0, 0x6fc38 bytes
    //
    _a7(sdk::unknown_ptr) worker_thread;
    
    // [TppWorkerpInnerExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90a1c, 0x67960 bytes
    // ntdll.dll .text:0x112498, 0x6fc38 bytes
    // ntdll.dll .text:0x126778, 0x74648 bytes
    // ntdll.dll .text:0x112638, 0x6fc38 bytes
    //
    _a8(sdk::unknown_ptr) workerp_inner_exception_filter;
    
    // [TppWorkpCleanupGroupMemberVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1094e0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c270, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1314c0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c270, 0x6fc38 bytes
    //
    _a9(sdk::unknown_ptr) workp_cleanup_group_member_v_funcs;
    
    // [TppWorkpExecuteCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x34ce0, 0x67960 bytes
    // ntdll.dll .text:0x63770, 0x6fc38 bytes
    // ntdll.dll .text:0x62820, 0x74648 bytes
    // ntdll.dll .text:0x63890, 0x6fc38 bytes
    //
    _b0(sdk::unknown_ptr) workp_execute_callback;
    
    // [TppWorkpFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f4f0, 0x67960 bytes
    // ntdll.dll .text:0x40b00, 0x6fc38 bytes
    // ntdll.dll .text:0x7bc90, 0x74648 bytes
    // ntdll.dll .text:0x40b00, 0x6fc38 bytes
    //
    _b1(sdk::unknown_ptr) workp_free;
    
    // [TppWorkpTaskVFuncs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109500, 0x67960 bytes
    // ntdll.dll .rdata:0x11c2b0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131570, 0x74648 bytes
    // ntdll.dll .rdata:0x11c2b0, 0x6fc38 bytes
    //
    _b2(sdk::unknown_ptr) workp_task_v_funcs;
    
    // [TppWorkpValidateWork]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fa50, 0x67960 bytes
    // ntdll.dll .text:0x406d4, 0x6fc38 bytes
    // ntdll.dll .text:0x4e740, 0x74648 bytes
    // ntdll.dll .text:0x406d4, 0x6fc38 bytes
    //
    _b3(sdk::unknown_ptr) workp_validate_work;
};
#include "magic/api.end.hpp"
