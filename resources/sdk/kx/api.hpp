#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kx
{
    // [KxDeferredDpcWatchdogViolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x429400, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) deferred_dpc_watchdog_violation;
    
    // [KxEnableOptionalXStateFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55e824, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) enable_optional_x_state_features;
    
    // [KxFlushMultipleTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x10bf5c, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) flush_multiple_tb;
    
    // [KxPlatformSwapStacksAndCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x42fd40, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) platform_swap_stacks_and_call;
    
    // [KxReenterRetpolinedCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x55f854, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) reenter_retpolined_code;
    
    // [KxSwapStacksAndRetireDpcList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x42fd80, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) swap_stacks_and_retire_dpc_list;
    
    // [KxDebugTrapOrFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3fed00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x433900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x400600, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) debug_trap_or_fault;
    
    // [KxDispatchInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x162720, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fad20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3fc600, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) dispatch_interrupt;
    
    // [KxExceptionDispatchOnExceptionStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f4d20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x429010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6600, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) exception_dispatch_on_exception_stack;
    
    // [KxInitializeProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x551380, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77cc0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78191c, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) initialize_processor_state;
    
    // [KxRetireDpcList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1628c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3faee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3fc7c0, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) retire_dpc_list;
    
    // [KxAcquireQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x66728, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ea220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x367edc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x208000, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) acquire_queued_spin_lock;
    
    // [KxAcquireSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb50a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23df90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b0210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2773a0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) acquire_spin_lock;
    
    // [KxContextToKframes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x973e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b7ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2113e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3555c0, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) context_to_kframes;
    
    // [KxFlushEntireTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a890, 0x32828 bytes
    // ntoskrnl.exe .text:0x30c010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b42d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277720, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) flush_entire_tb;
    
    // [KxFlushNonGlobalTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38aa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x253a34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30f9c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303874, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) flush_non_global_tb;
    
    // [KxFlushSingleTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x85688, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a747c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30fca4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34c23c, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) flush_single_tb;
    
    // [KxIsrLinkage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15e320, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f6e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42b350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f8750, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) isr_linkage;
    
    // [KxIsrLinkageShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x2408c0, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa13b00, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae3b00, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa12b00, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) isr_linkage_shadow;
    
    // [KxMcheckAbort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16b3c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x402f80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x437f40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x404880, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) mcheck_abort;
    
    // [KxMcheckAlternateReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16b4c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x403080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x438040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x404980, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) mcheck_alternate_return;
    
    // [KxMcheckAlternateReturnShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe KVASCODE:0x23f900, 0x32828 bytes
    // ntoskrnl.exe KVASCODE:0xa12a40, 0x1fe000 bytes
    // ntoskrnl.exe KVASCODE:0xae2a40, 0x1fd000 bytes
    // ntoskrnl.exe KVASCODE:0xa11a40, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) mcheck_alternate_return_shadow;
    
    // [KxNmiInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x166e80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ff500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4341c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x400e00, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) nmi_interrupt;
    
    // [KxReleaseQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe90f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e24e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x294770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263790, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) release_queued_spin_lock;
    
    // [KxReleaseSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb7f00, 0x32828 bytes
    // ntoskrnl.exe .text:0x23df50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b1580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x277410, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) release_spin_lock;
    
    // [KxSetAddressPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15c6d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f5080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4293b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f6960, 0x1fe000 bytes
    //
    _o5(sdk::function<void(uint32_t)>*) set_address_policy;
    
    // [KxSetTimeStampBusy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbf9b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c3484, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b56c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2444b4, 0x1fe000 bytes
    //
    _o6(sdk::function<uint8_t(volatile int32_t*)>*) set_time_stamp_busy;
    
    // [KxStartSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x162ce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fb4d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42c1e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fcdb0, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) start_system_thread;
    
    // [KxStartUserThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1630a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fb7e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42c560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd0c0, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) start_user_thread;
    
    // [KxSwitchKernelStackCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15ec80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f7750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42bda0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f9030, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) switch_kernel_stack_callout;
    
    // [KxTryToAcquireQueuedSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x85ff4, 0x32828 bytes
    // ntoskrnl.exe .text:0x22d88c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x343ef4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ea31c, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) try_to_acquire_queued_spin_lock;
    
    // [KxTryToAcquireSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7a114, 0x32828 bytes
    // ntoskrnl.exe .text:0x26ec68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2081a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320418, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) try_to_acquire_spin_lock;
    
    // [KxUnexpectedInterrupt0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15db10, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f6660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x42ab40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f7f40, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) unexpected_interrupt0;
    
    // [KxWaitForLockChainValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa7f40, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x331880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dab20, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) wait_for_lock_chain_valid;
    
    // [KxWaitForLockOwnerShip]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x61000, 0x32828 bytes
    // ntoskrnl.exe .text:0x34aee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c36d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22e070, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) wait_for_lock_owner_ship;
    
    // [KxWaitForLockOwnerShipWithIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb24f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x510860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e798, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x510670, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) wait_for_lock_owner_ship_with_irql;
    
    // [KxWaitForSpinLockAndAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53f00, 0x32828 bytes
    // ntoskrnl.exe .text:0x30edb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28d580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e47d0, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) wait_for_spin_lock_and_acquire;
};
#include "magic/api.end.hpp"
