#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::window_arrangement_spi
{
    // [ArrangementParameterInfo@WindowArrangementSPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x957f4, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) arrangement_parameter_info;
};
#include "magic/api.end.hpp"
