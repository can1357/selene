#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::dxgprocessvidmmlock
{
    // [AcquireExclusive@DXGPROCESSVIDMMLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1550, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) acquire_exclusive;
    
    // [Release@DXGPROCESSVIDMMLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1528, 0x158b bytes
    //
    _m1(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
