#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::disp_broker::disp_broker_client
{
    // [LoadRegistrySettings@DispBrokerClient@DispBroker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2b160, 0x243e0 bytes
    // win32kbase.sys .text:0x6c9f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8a5c0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) load_registry_settings;
    
    // [s_pSessionBroker@DispBrokerClient@DispBroker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x258cd0, 0x243e0 bytes
    // win32kbase.sys .data:0x2adab0, 0x27ef0 bytes
    // win32kbase.sys .data:0x255d00, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) s_p_session_broker;
};
#include "magic/api.end.hpp"
