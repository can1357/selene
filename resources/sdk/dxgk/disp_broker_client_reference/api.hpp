#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::disp_broker_client_reference
{
    // [Assign@DispBrokerClientReference]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x19b78, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1eda8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a2cc, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) assign;
};
#include "magic/api.end.hpp"
