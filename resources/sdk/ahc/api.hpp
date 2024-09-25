#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ahc
{
    // [AhcCacheQueryHwId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e764c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97cecc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5eac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97b7ac, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) cache_query_hw_id;
};
#include "magic/api.end.hpp"
