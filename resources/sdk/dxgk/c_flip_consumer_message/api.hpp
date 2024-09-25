#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_consumer_message
{
    // [??0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x655f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79830, 0x84380 bytes
    // dxgkrnl.sys .text:0x65780, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CFlipConsumerMessage@@MEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65634, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79874, 0x84380 bytes
    // dxgkrnl.sys .text:0x657c4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
