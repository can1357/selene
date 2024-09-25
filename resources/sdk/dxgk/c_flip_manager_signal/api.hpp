#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_manager_signal
{
    // [Create@CFlipManagerSignal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7be54, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [??1CFlipManagerSignal@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7bda0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
