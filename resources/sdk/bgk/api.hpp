#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace bgk
{
    // [BgkSetBootGraphicsInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x9f44c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd104, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f34c4, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) set_boot_graphics_information;
    
    // [BgkAcquireDisplayOwnership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c687c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f9630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53b840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f93f0, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) acquire_display_ownership;
    
    // [BgkDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72b724, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f2b08, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadaa68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1b08, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) destroy;
    
    // [BgkDisplayCharacter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d0a8, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4340, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadcf80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3340, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) display_character;
    
    // [BgkDisplayString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c6914, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f96f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53b900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f94b0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) display_string;
    
    // [BgkDisplayStringEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c69c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f97a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53b9b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f9564, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) display_string_ex;
    
    // [BgkDrawText]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d138, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f43dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd01c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f33dc, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) draw_text;
    
    // [BgkGetConsoleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d154, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4410, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd050, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3410, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) get_console_state;
    
    // [BgkGetCursorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d18c, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4460, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3460, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) get_cursor_state;
    
    // [BgkInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c02ac, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa9599c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb893c4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa94b8c, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) initialize;
    
    // [BgkNotifyDisplayOwnershipChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12521c, 0x32828 bytes
    // ntoskrnl.exe .text:0x397040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e1a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398500, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) notify_display_ownership_change;
    
    // [BgkNotifyDisplayOwnershipLost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c6a68, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f9860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53ba70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f9620, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) notify_display_ownership_lost;
    
    // [BgkQueryBootGraphicsInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x729e70, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f048c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad8f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef48c, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) query_boot_graphics_information;
    
    // [BgkResumeFinished]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d01b8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d5dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa85898, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98ccec, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) resume_finished;
    
    // [BgkResumePrepare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d10e4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x992a28, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa858d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x991a38, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) resume_prepare;
    
    // [BgkSetCursor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d1e0, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f44f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd130, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f34f0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) set_cursor;
    
    // [BgkSetDisplayOwnership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13e504, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e1a40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe10, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) set_display_ownership;
    
    // [BgkSetTextColor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c6ac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f98c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53bad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f9680, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) set_text_color;
    
    // [BgkSetVirtualFrameBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149cc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c78b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8780, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) set_virtual_frame_buffer;
    
    // [BgkSolidColorFill]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c6b04, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f9910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53bb20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f96d0, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) solid_color_fill;
};
#include "magic/api.end.hpp"
