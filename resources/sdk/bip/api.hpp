#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace bip
{
    // [BipCreateRpcBinding]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x52338, 0x4652 bytes
    // netio.sys .text:0x638e0, 0x4dd3 bytes
    // netio.sys .text:0x63ae0, 0x4e8c bytes
    // netio.sys .text:0x638a0, 0x4dd3 bytes
    //
    _m0(sdk::unknown_ptr) create_rpc_binding;
};
#include "magic/api.end.hpp"
