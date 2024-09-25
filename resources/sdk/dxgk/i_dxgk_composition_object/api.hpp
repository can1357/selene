#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::i_dxgk_composition_object
{
    // [MarkInvalid@IDxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a740, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1adc0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) mark_invalid;
    
    // [Close@IDxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a790, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb90, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae10, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) close;
    
    // [OkToClose@IDxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a790, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb90, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae10, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) ok_to_close;
    
    // [Open@IDxgkCompositionObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a790, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb90, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae10, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) open;
};
#include "magic/api.end.hpp"
