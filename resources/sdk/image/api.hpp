#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace image
{
    // [ImageLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f338, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xaa80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfce8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa680, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) load;
    
    // [ImageLoadGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f2cd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x98a900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa6db70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9891e0, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) load_guid;
    
    // [ImageUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f328, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xaa90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d1e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9c80, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) unload;
};
#include "magic/api.end.hpp"
