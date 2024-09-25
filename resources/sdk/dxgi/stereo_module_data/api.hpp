#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::stereo_module_data
{
    // [EvalAvailability@StereoModuleData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x279c, 0x17e70 bytes
    // dxgi.dll .text:0x279c, 0x17e70 bytes
    // dxgi.dll .text:0x7d6c, 0x18b10 bytes
    // dxgi.dll .text:0x461c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) eval_availability;
    
    // [Init@StereoModuleData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2688, 0x17e70 bytes
    // dxgi.dll .text:0x2688, 0x17e70 bytes
    // dxgi.dll .text:0x7c58, 0x18b10 bytes
    // dxgi.dll .text:0x4508, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) init;
    
    // [IsStereoEnabledInternal@StereoModuleData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f908, 0x17e70 bytes
    // dxgi.dll .text:0x6fa18, 0x17e70 bytes
    // dxgi.dll .text:0x7b118, 0x18b10 bytes
    // dxgi.dll .text:0x70e48, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) is_stereo_enabled_internal;
};
#include "magic/api.end.hpp"
