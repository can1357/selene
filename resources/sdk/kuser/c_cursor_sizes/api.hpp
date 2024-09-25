#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_cursor_sizes
{
    // [zzzRefreshSizes@CCursorSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xcb0c4, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) zzz_refresh_sizes;
    
    // [zzzUpdateGlobalCursorSize@CCursorSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xbc460, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) zzz_update_global_cursor_size;
    
    // [??0CCursorSizes@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x127a7c, 0x1596d bytes
    // win32kfull.sys .text:0x1289bc, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [GetSizeForIndex@CCursorSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1eca0, 0x1596d bytes
    // win32kfull.sys .text:0x1f0b0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_size_for_index;
    
    // [RefreshSizes@CCursorSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2aa54, 0x1596d bytes
    // win32kfull.sys .text:0x2ae64, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) refresh_sizes;
    
    // [UpdateGlobalCursorSize@CCursorSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xd244c, 0x1596d bytes
    // win32kfull.sys .text:0xd310c, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) update_global_cursor_size;
    
    // [GetCurrentCursorSize@CCursorSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2e06c, 0x1596d bytes
    // win32kfull.sys .text:0xc6c0c, 0x1659e bytes
    // win32kfull.sys .text:0x2e47c, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) get_current_cursor_size;
    
    // [GetSizeForDpi@CCursorSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10e3fc, 0x1596d bytes
    // win32kfull.sys .text:0x1036e8, 0x1659e bytes
    // win32kfull.sys .text:0x10f32c, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) get_size_for_dpi;
    
    // [HandleRequestCursorSizesRequest@CCursorSizes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10c67c, 0x1596d bytes
    // win32kfull.sys .text:0x10318c, 0x1659e bytes
    // win32kfull.sys .text:0x10d5ac, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) handle_request_cursor_sizes_request;
};
#include "magic/api.end.hpp"
