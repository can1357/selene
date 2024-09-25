#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::virtual_touchpad
{
    // [CaptureContact@VirtualTouchpad@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20af78, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) capture_contact;
};
#include "magic/api.end.hpp"
