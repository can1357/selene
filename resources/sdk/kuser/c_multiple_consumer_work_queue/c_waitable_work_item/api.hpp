#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_multiple_consumer_work_queue::c_waitable_work_item
{
    // [Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2db030, 0x13864 bytes
    // win32kfull.sys .text:0x2defc4, 0x1596d bytes
    // win32kfull.sys .text:0x2decc8, 0x1659e bytes
    // win32kfull.sys .text:0x2defd4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) cancel;
};
#include "magic/api.end.hpp"
