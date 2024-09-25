#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_paper_white_brightness_listener
{
    // [??0CPaperWhiteBrightnessListener@@AEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x22e08, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CPaperWhiteBrightnessListener@@AEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x23a0c, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [NotifyPaperWhiteBrightnessChange@CPaperWhiteBrightnessListener]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x92120, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) notify_paper_white_brightness_change;
    
    // [RegisterCallback@CPaperWhiteBrightnessListener]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x92218, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) register_callback;
    
    // [RegisterPaperWhiteBrightnessCallback@CPaperWhiteBrightnessListener]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x924b8, 0x18b10 bytes
    //
    _m4(sdk::unknown_ptr) register_paper_white_brightness_callback;
    
    // [s_Singleton@CPaperWhiteBrightnessListener]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .data:0xcd228, 0x18b10 bytes
    //
    _m5(sdk::unknown_ptr) s_singleton;
};
#include "magic/api.end.hpp"
