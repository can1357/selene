#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_ref_un_ref_pointer_msg_id
{
    // [ReferenceAndThreadLock@CRefUnRefPointerMsgId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6f6c, 0x27ef0 bytes
    // win32kbase.sys .text:0xd501c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) reference_and_thread_lock;
    
    // [ThreadUnlockAndUnReference@CRefUnRefPointerMsgId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd3080, 0x27ef0 bytes
    // win32kbase.sys .text:0xd505c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) thread_unlock_and_un_reference;
    
    // [UnReferenceOnThreadTermination@CRefUnRefPointerMsgId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f4da0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd5490, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) un_reference_on_thread_termination;
};
#include "magic/api.end.hpp"
