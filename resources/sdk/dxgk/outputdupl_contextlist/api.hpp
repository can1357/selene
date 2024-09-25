#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::outputdupl_contextlist
{
    // [??0_OUTPUTDUPL_CONTEXTLIST@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x2aeb0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1_OUTPUTDUPL_CONTEXTLIST@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x559b0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
