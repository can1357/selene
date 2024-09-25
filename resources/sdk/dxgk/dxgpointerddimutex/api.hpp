#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgpointerddimutex
{
    // [??0DXGPOINTERDDIMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x1f0a4, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGPOINTERDDIMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x1f0c4, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
