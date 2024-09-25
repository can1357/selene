#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace txtp
{
    // [TxtpDestroyCacheEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEBGFX:0x72a6a0, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) destroy_cache_entry;
    
    // [TxtpAddCacheEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72a5fc, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f25fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad99c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f15fc, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) add_cache_entry;
    
    // [TxtpGetCacheEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x125858, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ac654, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aedd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af900, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) get_cache_entry;
    
    // [TxtpJustifyRectangle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x72e2c8, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f59b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xade9f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9f49b8, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) justify_rectangle;
    
    // [TxtpTextCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4270, 0x32828 bytes
    // ntoskrnl.exe .data:0xc02b38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04538, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02bb0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) text_cache;
};
#include "magic/api.end.hpp"
