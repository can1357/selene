#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::chdr_converter
{
    // [AddRef@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x26d70, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) add_ref;
    
    // [CheckSupport@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8c440, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) check_support;
    
    // [Cleanup@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8c614, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) cleanup;
    
    // [??0CHDRConverter@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8bc30, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [Convert@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8c760, 0x18b10 bytes
    //
    _m4(sdk::unknown_ptr) convert;
    
    // [??1CHDRConverter@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8bea8, 0x18b10 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [DeterminePaperWhiteNits@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8c8d8, 0x18b10 bytes
    //
    _m6(sdk::unknown_ptr) determine_paper_white_nits;
    
    // [GetCompensatedMaxLuminance@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8cb80, 0x18b10 bytes
    //
    _m7(sdk::unknown_ptr) get_compensated_max_luminance;
    
    // [Initialize@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8ce20, 0x18b10 bytes
    //
    _m8(sdk::unknown_ptr) initialize;
    
    // [OnPaperWhiteBrightnessChange@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8d398, 0x18b10 bytes
    //
    _m9(sdk::unknown_ptr) on_paper_white_brightness_change;
    
    // [OnStrengthChange@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8d62c, 0x18b10 bytes
    //
    _n0(sdk::unknown_ptr) on_strength_change;
    
    // [QueryInterface@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8d6f0, 0x18b10 bytes
    //
    _n1(sdk::unknown_ptr) query_interface;
    
    // [ReadAutoHDRRegConfig@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8d770, 0x18b10 bytes
    //
    _n2(sdk::unknown_ptr) read_auto_hdr_reg_config;
    
    // [Release@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8d860, 0x18b10 bytes
    //
    _n3(sdk::unknown_ptr) release;
    
    // [Reset@CHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8d9a0, 0x18b10 bytes
    //
    _n4(sdk::unknown_ptr) reset;
};
#include "magic/api.end.hpp"
