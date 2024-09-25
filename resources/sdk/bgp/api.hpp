#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace bgp
{
    // [BgpFmRoundDefault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x126b40, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) fm_round_default;
    
    // [BgpFwMapFrameBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x65bbb0, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) fw_map_frame_buffer;
    
    // [BgpGxIsRectangleValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x238e44, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) gx_is_rectangle_valid;
    
    // [BgpDisplaySafeToPowerOffScreen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c04ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65cd04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bf31c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) display_safe_to_power_off_screen;
    
    // [BgpFwGetCurrentIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38850, 0x32828 bytes
    // ntoskrnl.exe .text:0x33a390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2815b0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) fw_get_current_irql;
    
    // [BgpFwSetBootGraphicsInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5bf4c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65bc50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be330, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) fw_set_boot_graphics_information;
    
    // [BgpAnimationRegionSave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326ec8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50520, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd177c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50520, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) animation_region_save;
    
    // [BgpBcInitializeCriticalMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c0390, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa954a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb88614, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa94698, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) bc_initialize_critical_mode;
    
    // [BgpClearScreen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bf2a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65b9b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be114, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) clear_screen;
    
    // [BgpConsoleClearScreen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d334, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f46e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd400, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f36e0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) console_clear_screen;
    
    // [BgpConsoleClearScreenEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d364, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4718, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd438, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3718, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) console_clear_screen_ex;
    
    // [BgpConsoleDisplayCharacter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d3e8, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f47b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd4d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f37b0, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) console_display_character;
    
    // [BgpConsoleDisplayCharacterEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d4f8, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f48c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd5e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f38c4, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) console_display_character_ex;
    
    // [BgpConsoleDisplayString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d77c, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd880, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3b60, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) console_display_string;
    
    // [BgpConsoleDrawCursor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d82c, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4c1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd938, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3c1c, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) console_draw_cursor;
    
    // [BgpConsoleGetCursorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d8dc, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadd9f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3ce0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) console_get_cursor_state;
    
    // [BgpConsoleGetFontName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c0748, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa95950, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb894d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa94b40, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) console_get_font_name;
    
    // [BgpConsoleGetState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d944, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadda60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3d50, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) console_get_state;
    
    // [BgpConsoleInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72b460, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f2820, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xada6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1820, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) console_initialize;
    
    // [BgpConsoleInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4350, 0x32828 bytes
    // ntoskrnl.exe .data:0xc032f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04cf0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc03330, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) console_interface;
    
    // [BgpConsoleScrollScreen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72d9ac, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xaddad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3dc0, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) console_scroll_screen;
    
    // [BgpConsoleSetCursor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72dbbc, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xaddce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f3fe0, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) console_set_cursor;
    
    // [BgpConsoleSetPointSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13e5ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b7820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aea4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b86e4, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) console_set_point_size;
    
    // [BgpConsoleSetTextColor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72dc58, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f5090, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xaddd90, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4090, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) console_set_text_color;
    
    // [BgpDisplayCharacterDestroyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72b810, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1fbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadb2f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f0fbc, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) display_character_destroy_context;
    
    // [BgpDisplayCharacterEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238b58, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bf404, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65baf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be274, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) display_character_ex;
    
    // [BgpDisplayCharacterGetContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72b670, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f2a4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xada4b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1a4c, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) display_character_get_context;
    
    // [BgpFmRoundUp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x126b28, 0x32828 bytes
    // ntoskrnl.exe .text:0x397d68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b06ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399228, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) fm_round_up;
    
    // [BgpFmSqrt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x126a50, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ad930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b0610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b0bd0, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) fm_sqrt;
    
    // [BgpFoDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72b9f8, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f21cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadb3a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f11cc, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) fo_destroy;
    
    // [BgpFoDetermineFontInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c0620, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa957f4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb88c04, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa949e4, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) fo_determine_font_information;
    
    // [BgpFoGetAdvanceWidth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238e74, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bf5e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65be30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be450, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) fo_get_advance_width;
    
    // [BgpFoGetFontHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72a9b8, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f134c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad9bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f034c, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) fo_get_font_handle;
    
    // [BgpFoGetStringAdvanceWidth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238e7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bf600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65be50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be470, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) fo_get_string_advance_width;
    
    // [BgpFoGetTextMetrics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1261c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x397c8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3af7f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39914c, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) fo_get_text_metrics;
    
    // [BgpFoInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c078c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa948ec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb892c8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa93adc, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) fo_initialize;
    
    // [BgpFwAcquireLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1255e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3977f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3af2c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398cb8, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) fw_acquire_lock;
    
    // [BgpFwAllocateMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1278c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x397a84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b126c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398f44, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) fw_allocate_memory;
    
    // [BgpFwDisplayBugCheckProgressUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x239c54, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c0570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65cdc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bf3e0, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) fw_display_bug_check_progress_update;
    
    // [BgpFwDisplayBugCheckScreen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x239e0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c0734, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65cf84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bf5a4, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) fw_display_bug_check_screen;
    
    // [BgpFwFreeMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x127a4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x397260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3afce8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398720, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) fw_free_memory;
    
    // [BgpFwInitializeLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1298, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa95a90, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb894c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa94c80, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) fw_initialize_lock;
    
    // [BgpFwInitializeReservePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x7287d8, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f15b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xada5a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f05b8, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) fw_initialize_reserve_pool;
    
    // [BgpFwLibraryDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72b770, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1f0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadaa88, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f0f0c, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) fw_library_destroy;
    
    // [BgpFwLibraryDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72b834, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f1fe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad81ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f0fe8, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) fw_library_disable;
    
    // [BgpFwLibraryEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x125390, 0x32828 bytes
    // ntoskrnl.exe .text:0x397d88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b1a84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399248, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) fw_library_enable;
    
    // [BgpFwLibraryInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728e8c, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f09e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad9c78, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef9e8, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) fw_library_initialize;
    
    // [BgpFwMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72855c, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f50f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadddf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f40f4, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) fw_mark_hiber_phase;
    
    // [BgpFwQueryBootGraphicsInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x127eb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x397864, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ae954, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398d24, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) fw_query_boot_graphics_information;
    
    // [BgpFwQueryPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1255a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x397380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aeb80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398840, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) fw_query_performance_counter;
    
    // [BgpFwReleaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1255a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3977a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3af270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398c68, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) fw_release_lock;
    
    // [BgpFwReserveAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x127b08, 0x32828 bytes
    // ntoskrnl.exe .text:0x397c0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b19d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3990cc, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) fw_reserve_allocate;
    
    // [BgpFwReservePoolSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728318, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef1ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadde48, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee1ac, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) fw_reserve_pool_swap;
    
    // [BgpGetBitsPerPixel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x125b44, 0x32828 bytes
    // ntoskrnl.exe .text:0x397780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3af110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398c40, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) get_bits_per_pixel;
    
    // [BgpGetResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd55f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x271474, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323000, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) get_resolution;
    
    // [BgpGxBlendColor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x126038, 0x32828 bytes
    // ntoskrnl.exe .text:0x3acba8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b1888, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3afe54, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) gx_blend_color;
    
    // [BgpGxBlendRectangle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72dd60, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f53f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xade440, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f43f0, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) gx_blend_rectangle;
    
    // [BgpGxConvertRectangle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x126174, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c931c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ae7ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca20c, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) gx_convert_rectangle;
    
    // [BgpGxConvertRectangleEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238c00, 0x32828 bytes
    // ntoskrnl.exe .text:0x39796c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3af6e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398e2c, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) gx_convert_rectangle_ex;
    
    // [BgpGxCopyBitmapToRectangle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728c24, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef92c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad8388, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee92c, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) gx_copy_bitmap_to_rectangle;
    
    // [BgpGxCopyRectangle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72df84, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f563c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xade664, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f463c, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) gx_copy_rectangle;
    
    // [BgpGxDrawBitmapImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72e044, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f5704, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xade730, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4704, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) gx_draw_bitmap_image;
    
    // [BgpGxDrawRectangle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1258d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x397398, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aee5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398858, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) gx_draw_rectangle;
    
    // [BgpGxFillRectangle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x126128, 0x32828 bytes
    // ntoskrnl.exe .text:0x397ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b1974, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399380, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) gx_fill_rectangle;
    
    // [BgpGxFindSubRectangle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72a760, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f02b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad87bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef2b4, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) gx_find_sub_rectangle;
    
    // [BgpGxInitializeRectangle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x126bcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ada84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b13dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b0d24, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) gx_initialize_rectangle;
    
    // [BgpGxMarkClean]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5700, 0x32828 bytes
    // ntoskrnl.exe .text:0x27183c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385cd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3233cc, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) gx_mark_clean;
    
    // [BgpGxParseBitmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728b84, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef880, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad842c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee880, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) gx_parse_bitmap;
    
    // [BgpGxProcessQrCodeBitmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a214, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c9298, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ae768, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca188, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) gx_process_qr_code_bitmap;
    
    // [BgpGxReadRectangle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728ce0, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef9d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad84d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee9d0, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) gx_read_rectangle;
    
    // [BgpGxRectangleCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72a6dc, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f12c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad9a94, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f02c0, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) gx_rectangle_create;
    
    // [BgpGxRectangleDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72a6c0, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f0290, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad9a70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef290, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) gx_rectangle_destroy;
    
    // [BgpGxRectangleSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x127b84, 0x32828 bytes
    // ntoskrnl.exe .text:0x397248, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b1d44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398708, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) gx_rectangle_size;
    
    // [BgpGxReservePoolRectangleSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72a904, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef6f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xadaad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ee6f8, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) gx_reserve_pool_rectangle_size;
    
    // [BgpRasGetGlyphAdvanceWidth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23a0ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c0abc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65d31c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bf92c, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) ras_get_glyph_advance_width;
    
    // [BgpRasGetGlyphTextCellDimensions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1261e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x397cbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3af828, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39917c, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) ras_get_glyph_text_cell_dimensions;
    
    // [BgpRasInitializeRasterizer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c09b4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa94fec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb88370, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa941dc, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) ras_initialize_rasterizer;
    
    // [BgpRasPrintGlyph]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x125b64, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ac6d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3af36c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af984, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) ras_print_glyph;
    
    // [BgpTextRegionSave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326ec0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50518, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd177d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50518, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) text_region_save;
    
    // [BgpTxtAdjustStaticRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238f10, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bf6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65bef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be510, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) txt_adjust_static_region;
    
    // [BgpTxtClearRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72e090, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f5754, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xade780, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4754, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) txt_clear_region;
    
    // [BgpTxtCreateRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x729bc4, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f10d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xada2ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f00d4, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) txt_create_region;
    
    // [BgpTxtDestroyRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72b928, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f20ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad8904, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f10ec, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) txt_destroy_region;
    
    // [BgpTxtDisplayCharacter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x125638, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ac418, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aeb98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af6c4, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) txt_display_character;
    
    // [BgpTxtDisplayString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72e0b0, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f5784, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xade7b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f4784, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) txt_display_string;
    
    // [BgpTxtGetRegionContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72a920, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f0944, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad870c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9ef944, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) txt_get_region_context;
    
    // [BgpTxtRegionSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x127fb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3971e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b1ce4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3986a8, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) txt_region_size;
};
#include "magic/api.end.hpp"
