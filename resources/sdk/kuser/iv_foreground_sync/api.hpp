#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_foreground_sync
{
    // [ivOnChildPartitionConnected@IVForegroundSync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x209708, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) iv_on_child_partition_connected;
    
    // [ivReceiveForegroundUpdate@IVForegroundSync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x209790, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) iv_receive_foreground_update;
    
    // [ivSendForegroundUpdate@IVForegroundSync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20990c, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) iv_send_foreground_update;
};
#include "magic/api.end.hpp"
