#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace bgkp
{
    // [BgkpAcquireConsole]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c6b68, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f9988, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53bb98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f9748, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) acquire_console;
    
    // [BgkpDisableConsole]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a9bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f99ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53bbbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f976c, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) disable_console;
    
    // [BgkpLockBgfxCodeSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728674, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1730, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadb590, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f0730, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) lock_bgfx_code_section;
    
    // [BgkpReleaseConsole]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c6b84, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f99d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53bbe4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f9794, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) release_console;
    
    // [BgkpResetDisplay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c6b90, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f99f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53bc00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f97b0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) reset_display;
    
    // [BgkpTryEnableConsole]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1251e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x397f20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b1e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3993e0, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) try_enable_console;
    
    // [BgkpUnlockBgfxCodeSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72872c, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef3f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadb320, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee3f0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) unlock_bgfx_code_section;
    
    // [BgkpVgaBltRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c6c14, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f9a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53bca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f9850, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) vga_blt_routine;
};
#include "magic/api.end.hpp"
