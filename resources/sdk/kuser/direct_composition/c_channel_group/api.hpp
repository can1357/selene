#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_channel_group
{
    // [Initialize@CChannelGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbe4b4, 0x243e0 bytes
    // win32kbase.sys .text:0xd915c, 0x27ef0 bytes
    // win32kbase.sys .text:0x7dbcc, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
    
    // [InsertChannel@CChannelGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb1904, 0x243e0 bytes
    // win32kbase.sys .text:0xc6c5c, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7d3c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) insert_channel;
    
    // [OnConnectionDisconnected@CChannelGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7fe84, 0x243e0 bytes
    // win32kbase.sys .text:0xcfba8, 0x27ef0 bytes
    // win32kbase.sys .text:0x815f4, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) on_connection_disconnected;
    
    // [OnConnectionReconnected@CChannelGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7fde4, 0x243e0 bytes
    // win32kbase.sys .text:0xcfa24, 0x27ef0 bytes
    // win32kbase.sys .text:0x81554, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) on_connection_reconnected;
};
#include "magic/api.end.hpp"
