#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::client_port_info
{
    // [Release@ClientPortInfo@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbe8e4, 0x243e0 bytes
    // win32kbase.sys .text:0xbe5f4, 0x27ef0 bytes
    // win32kbase.sys .text:0xab3a4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
