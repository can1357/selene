#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::keyboard_processing
{
    // [MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b80e8, 0x243e0 bytes
    // win32kbase.sys .text:0x1ffa70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b5ec8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) mark_queues_for_key_state_update_worker;
};
#include "magic/api.end.hpp"
