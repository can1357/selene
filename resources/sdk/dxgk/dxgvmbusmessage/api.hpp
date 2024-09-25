#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvmbusmessage
{
    // [??1DXGVMBUSMESSAGE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x5cc4c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [InitializeMessage@DXGVMBUSMESSAGE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x365c58, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) initialize_message;
};
#include "magic/api.end.hpp"
