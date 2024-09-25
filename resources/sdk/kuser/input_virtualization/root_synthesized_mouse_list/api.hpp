#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_virtualization::root_synthesized_mouse_list
{
    // [GetInstance@RootSynthesizedMouseList@InputVirtualization]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b8080, 0x243e0 bytes
    // win32kbase.sys .text:0x1ffa10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b5e60, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_instance;
};
#include "magic/api.end.hpp"
