#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace bg
{
    // [BgSetFrameBufferAccessCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEBGFX:0x728008, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) set_frame_buffer_access_counter;
    
    // [BgDisplaySafeToPowerOffScreen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5bf26c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65b900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be0dc, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) display_safe_to_power_off_screen;
    
    // [BgSetBootGraphicsInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x9f4684, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd3a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3684, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) set_boot_graphics_information;
    
    // [BgSetFrameBufferAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x9ef008, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad8008, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee008, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) set_frame_buffer_access;
    
    // [BgAcquireSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72bbb4, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f2b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd190, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1b40, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) acquire_spin_lock;
    
    // [BgConsoleDestroyInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72b7b8, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1f5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadb294, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f0f5c, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) console_destroy_interface;
    
    // [BgConsoleGetInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728a90, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef810, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xada5ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee810, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) console_get_interface;
    
    // [BgConvertResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d230, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4550, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd1a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3550, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) convert_resources;
    
    // [BgDisplayBackgroundUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72bb50, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f2748, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad807c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1748, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) display_background_update;
    
    // [BgDisplayFade]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728814, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef524, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadb210, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee524, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) display_fade;
    
    // [BgDisplayProgressIndicator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72a1a4, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f2334, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad8040, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1334, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) display_progress_indicator;
    
    // [BgDisplayString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d240, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4570, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd1c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3570, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) display_string;
    
    // [BgFreeContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x7281c0, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef038, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd238, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee038, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) free_context;
    
    // [BgGetContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x7283a0, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef248, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd27c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee248, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) get_context;
    
    // [BgGetDisplayContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728000, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef028, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad8028, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee028, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) get_display_context;
    
    // [BgGetIsColorOverridden]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d2ac, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f2b58, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd2c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1b58, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) get_is_color_overridden;
    
    // [BgInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faf40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc131c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13220, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) internal;
    
    // [BgLibraryDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d2c4, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f45e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd2e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f35e0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) library_destroy;
    
    // [BgLibraryDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72b73c, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadb258, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f0ed0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) library_disable;
    
    // [BgLibraryEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12451c, 0x32828 bytes
    // ntoskrnl.exe .text:0x38929c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65b938, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389dbc, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) library_enable;
    
    // [BgLibraryInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728cb8, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef854, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xada57c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee854, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) library_initialize;
    
    // [BgMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72852c, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f464c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd354, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f364c, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) mark_hiber_phase;
    
    // [BgQueryBootGraphicsInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1254e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x397314, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ae8e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3987d4, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) query_boot_graphics_information;
    
    // [BgReleaseSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72bbac, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f2b28, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd38c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1b28, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) release_spin_lock;
};
#include "magic/api.end.hpp"
