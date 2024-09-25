#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::network_interface_persisted_state
{
    // [??0NdisNetworkInterfacePersistedState@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x39194, 0x1d2c0 bytes
    // ndis.sys .text:0x331e4, 0x1e858 bytes
    // ndis.sys .text:0x391b4, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1NdisNetworkInterfacePersistedState@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x38cec, 0x1d2c0 bytes
    // ndis.sys .text:0x2d37c, 0x1e858 bytes
    // ndis.sys .text:0x38d0c, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
