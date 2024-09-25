#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace clfs
{
    // [CLFS_LSN_INVALID_EXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e7c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1cc28, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x20038, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1cba8, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) lsn_invalid_ext;
    
    // [CLFS_LSN_NULL_EXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26e7c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1e290, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1c020, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1e210, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) lsn_null_ext;
};
#include "magic/api.end.hpp"
