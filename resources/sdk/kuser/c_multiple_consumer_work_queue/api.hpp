#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_multiple_consumer_work_queue
{
    // [Create@CMultipleConsumerWorkQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x11a278, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [CreateAndQueueWorkItem@CMultipleConsumerWorkQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2db0a8, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) create_and_queue_work_item;
    
    // [Destroy@CMultipleConsumerWorkQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x123248, 0x13864 bytes
    // win32kfull.sys .text:0x1204c4, 0x1596d bytes
    // win32kfull.sys .text:0x111134, 0x1659e bytes
    // win32kfull.sys .text:0x121404, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy;
    
    // [WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2db1ec, 0x13864 bytes
    // win32kfull.sys .text:0x97ee0, 0x1596d bytes
    // win32kfull.sys .text:0x2ded54, 0x1659e bytes
    // win32kfull.sys .text:0x98a50, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) wait_for_completion_and_release_work_item;
};
#include "magic/api.end.hpp"
