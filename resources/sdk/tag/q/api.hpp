#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace tag::q
{
    // [AreMultipleThreadsAttached@tagQ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x3cca0, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) are_multiple_threads_attached;
    
    // [CheckTransferState@tagQ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc0450, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) check_transfer_state;
    
    // [IsAnyThreadAttached@tagQ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc0af0, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) is_any_thread_attached;
    
    // [IsSingleThreadAttached@tagQ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc0510, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) is_single_thread_attached;
    
    // [LockFocusWnd@tagQ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x12b70, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) lock_focus_wnd;
    
    // [UnlockFocusWnd@tagQ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xbc050, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) unlock_focus_wnd;
    
    // [zzzAttachToQueue@tagQ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc0058, 0x1659e bytes
    //
    _m6(sdk::unknown_ptr) zzz_attach_to_queue;
};
#include "magic/api.end.hpp"
