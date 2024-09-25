#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_channel
{
    // [Unlock@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kbase.sys .text:0x6905c, 0x1eb80 bytes
    // win32kbase.sys .text:0xcfb70, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) unlock;
    
    // [CompleteDisconnection@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) complete_disconnection;
    
    // [CompleteReconnection@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) complete_reconnection;
    
    // [DestroyHandle@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2dec8, 0x1eb80 bytes
    // win32kbase.sys .text:0x7caf0, 0x243e0 bytes
    // win32kbase.sys .text:0xc69f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x80b08, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_handle;
    
    // [GetType@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_type;
    
    // [Initialize@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x68f80, 0x1eb80 bytes
    // win32kbase.sys .text:0x7ad20, 0x243e0 bytes
    // win32kbase.sys .text:0xa2810, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7b60, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [OnProcessCreation@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e83c, 0x1eb80 bytes
    // win32kbase.sys .text:0x40008, 0x243e0 bytes
    // win32kbase.sys .text:0x25c14, 0x27ef0 bytes
    // win32kbase.sys .text:0x7df20, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) on_process_creation;
    
    // [OnProcessDestruction@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e780, 0x1eb80 bytes
    // win32kbase.sys .text:0x3fe04, 0x243e0 bytes
    // win32kbase.sys .text:0x25dd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e0f0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) on_process_destruction;
    
    // [ReferenceHandleAndLock@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69464, 0x1eb80 bytes
    // win32kbase.sys .text:0x74c50, 0x243e0 bytes
    // win32kbase.sys .text:0x27d30, 0x27ef0 bytes
    // win32kbase.sys .text:0xcd60, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) reference_handle_and_lock;
    
    // [Release@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69034, 0x1eb80 bytes
    // win32kbase.sys .text:0x7cb94, 0x243e0 bytes
    // win32kbase.sys .text:0xc6a98, 0x27ef0 bytes
    // win32kbase.sys .text:0x80bac, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) release;
    
    // [UnlockAndUnreference@CChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8960, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dea10, 0x243e0 bytes
    // win32kbase.sys .text:0x22cfd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc7d0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) unlock_and_unreference;
};
#include "magic/api.end.hpp"
