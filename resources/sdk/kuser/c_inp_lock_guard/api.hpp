#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_inp_lock_guard
{
    // [LeaveGuardOnDwmWerStart@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f4020, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) leave_guard_on_dwm_wer_start;
    
    // [LeaveGuardOnWerStart@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f4070, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) leave_guard_on_wer_start;
    
    // [LockSharedWithoutGuard@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xa76a0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) lock_shared_without_guard;
    
    // [UnLockWithoutGuard@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f4740, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) un_lock_without_guard;
    
    // [RefPointerMsgIdAndUnLock@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6f20, 0x27ef0 bytes
    // win32kbase.sys .text:0xd4fd0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) ref_pointer_msg_id_and_un_lock;
    
    // [UnRefPointerMsgIdAndLockExclusive@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f4770, 0x27ef0 bytes
    // win32kbase.sys .text:0xd50e0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) un_ref_pointer_msg_id_and_lock_exclusive;
    
    // [EnterGuard@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1addf0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3f40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ac510, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) enter_guard;
    
    // [IncrementWaiters@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ade30, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3f80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ac550, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) increment_waiters;
    
    // [Initialize@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2562c, 0x243e0 bytes
    // win32kbase.sys .text:0x7fde8, 0x27ef0 bytes
    // win32kbase.sys .text:0x75f2c, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) initialize;
    
    // [isManipulationThreadInTermination@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc09d0, 0x243e0 bytes
    // win32kbase.sys .text:0xd2fb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2d230, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) is_manipulation_thread_in_termination;
    
    // [isOwned@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc0a50, 0x243e0 bytes
    // win32kbase.sys .text:0xd30a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x85030, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) is_owned;
    
    // [LeaveGuard@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ade40, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3f90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ac560, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) leave_guard;
    
    // [LeaveGuardOnThreadTermination@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc0890, 0x243e0 bytes
    // win32kbase.sys .text:0xd2e40, 0x27ef0 bytes
    // win32kbase.sys .text:0x84fe0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) leave_guard_on_thread_termination;
    
    // [LockExclusive@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc08e0, 0x243e0 bytes
    // win32kbase.sys .text:0xd2ee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd48a0, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) lock_exclusive;
    
    // [LockExclusiveWithoutGuard@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1aded0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f40e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ac5f0, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) lock_exclusive_without_guard;
    
    // [LockShared@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1adef0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f4120, 0x27ef0 bytes
    // win32kbase.sys .text:0xd4c40, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) lock_shared;
    
    // [UnLock@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc0a10, 0x243e0 bytes
    // win32kbase.sys .text:0xd3030, 0x27ef0 bytes
    // win32kbase.sys .text:0xd5090, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) un_lock;
    
    // [Uninitialize@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24da8, 0x243e0 bytes
    // win32kbase.sys .text:0x86588, 0x27ef0 bytes
    // win32kbase.sys .text:0x76be8, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) uninitialize;
    
    // [WaitForGuard@CInpLockGuard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ae860, 0x243e0 bytes
    // win32kbase.sys .text:0x1f4dd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ac610, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) wait_for_guard;
};
#include "magic/api.end.hpp"
