#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::protocol_bind_properties
{
    // [??1ProtocolBindProperties@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0xabbd4, 0x1d2c0 bytes
    // ndis.sys .text:0xad244, 0x1e858 bytes
    // ndis.sys .text:0xac704, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
