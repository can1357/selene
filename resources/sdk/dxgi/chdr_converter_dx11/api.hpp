#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::chdr_converter_dx11
{
    // [CheckSupport@CHDRConverterDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x906b0, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) check_support;
    
    // [Cleanup@CHDRConverterDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x90820, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) cleanup;
    
    // [Convert@CHDRConverterDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x90a10, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) convert;
    
    // [??1CHDRConverterDx11@@UEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8bf0c, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@CHDRConverterDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x90bd0, 0x18b10 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [UpdateHDRConvertCB@CHDRConverterDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x91960, 0x18b10 bytes
    //
    _m5(sdk::unknown_ptr) update_hdr_convert_cb;
    
    // [WaitForAll@CHDRConverterDx11]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x91a00, 0x18b10 bytes
    //
    _m6(sdk::unknown_ptr) wait_for_all;
};
#include "magic/api.end.hpp"
