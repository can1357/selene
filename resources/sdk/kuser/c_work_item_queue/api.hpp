#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_work_item_queue
{
    // [Create@CWorkItemQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x11a30c, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [WaitForWorkItem@CWorkItemQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kfull.sys .text:0x2db290, 0x13864 bytes
    // win32kfull.sys .text:0xe400c, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) wait_for_work_item;
    
    // [Destroy@CWorkItemQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1232a8, 0x13864 bytes
    // win32kfull.sys .text:0x120504, 0x1596d bytes
    // win32kfull.sys .text:0x1111cc, 0x1659e bytes
    // win32kfull.sys .text:0x121444, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy;
    
    // [QueueWorkItem@CWorkItemQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2db1b0, 0x13864 bytes
    // win32kfull.sys .text:0x2deffc, 0x1596d bytes
    // win32kfull.sys .text:0x2ded00, 0x1659e bytes
    // win32kfull.sys .text:0x2df00c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) queue_work_item;
};
#include "magic/api.end.hpp"
