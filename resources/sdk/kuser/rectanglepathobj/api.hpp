#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rectanglepathobj
{
    // [vInit@RECTANGLEPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb87f0, 0x13864 bytes
    // win32kfull.sys .text:0x13374c, 0x1596d bytes
    // win32kfull.sys .text:0x12cf8c, 0x1659e bytes
    // win32kfull.sys .text:0x13468c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_init;
};
#include "magic/api.end.hpp"
