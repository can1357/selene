#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace civ::channel
{
    // [ContainerConnected@CIVChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20e724, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) container_connected;
    
    // [Initialize@CIVChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20e750, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [OnChildNotification@CIVChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20ebc0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) on_child_notification;
    
    // [PacketCallback@CIVChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20efb4, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) packet_callback;
    
    // [Receive@CIVChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20f3bc, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) receive;
    
    // [Reconnect@CIVChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20f668, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) reconnect;
    
    // [sHeaderCallback@CIVChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20f950, 0x27ef0 bytes
    //
    _m6(sdk::unknown_ptr) s_header_callback;
    
    // [sOnChildNotification@CIVChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20fb90, 0x27ef0 bytes
    //
    _m7(sdk::unknown_ptr) s_on_child_notification;
    
    // [sPacketCallback@CIVChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20fbc0, 0x27ef0 bytes
    //
    _m8(sdk::unknown_ptr) s_packet_callback;
    
    // [Uninitialize@CIVChannel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20f858, 0x27ef0 bytes
    //
    _m9(sdk::unknown_ptr) uninitialize;
};
#include "magic/api.end.hpp"
