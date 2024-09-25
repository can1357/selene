#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace tag::obj_lock
{
    // [LockExclusive@tagObjLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9c110, 0x243e0 bytes
    // win32kbase.sys .text:0xa4080, 0x27ef0 bytes
    // win32kbase.sys .text:0x84f40, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) lock_exclusive;
    
    // [LockInitialize@tagObjLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x10bf0, 0x243e0 bytes
    // win32kbase.sys .text:0xb92a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x716d0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) lock_initialize;
    
    // [LockInitializeProcessCreator@tagObjLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x10bf0, 0x243e0 bytes
    // win32kbase.sys .text:0xb92a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x716d0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) lock_initialize_process_creator;
    
    // [LockInitializeThreadCreator@tagObjLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x10bf0, 0x243e0 bytes
    // win32kbase.sys .text:0xb92a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x716d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) lock_initialize_thread_creator;
    
    // [LockShared@tagObjLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x12cbb0, 0x243e0 bytes
    // win32kbase.sys .text:0x160370, 0x27ef0 bytes
    // win32kbase.sys .text:0x12a430, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) lock_shared;
    
    // [LockUnInitialize@tagObjLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) lock_un_initialize;
    
    // [LockUnInitializeProcessCreator@tagObjLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) lock_un_initialize_process_creator;
    
    // [LockUnInitializeThreadCreator@tagObjLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) lock_un_initialize_thread_creator;
    
    // [UnLockExclusive@tagObjLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd200, 0x243e0 bytes
    // win32kbase.sys .text:0x7c4c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5cd00, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) un_lock_exclusive;
    
    // [UnLockShared@tagObjLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x12cbf0, 0x243e0 bytes
    // win32kbase.sys .text:0x1603b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12a470, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) un_lock_shared;
};
#include "magic/api.end.hpp"
