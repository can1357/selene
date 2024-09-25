#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::io::device_object_pointer
{
    // [GetByObjectName@DeviceObjectPointer@Io]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x244108, 0x1596d bytes
    // win32kfull.sys .text:0x241b38, 0x1659e bytes
    // win32kfull.sys .text:0x243fd8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) get_by_object_name;
};
#include "magic/api.end.hpp"
