#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::chdr_converter_dx12
{
    // [CheckSupport@CHDRConverterDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8dd60, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) check_support;
    
    // [Cleanup@CHDRConverterDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8de90, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) cleanup;
    
    // [Convert@CHDRConverterDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8e090, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) convert;
    
    // [Create3DLutResource@CHDRConverterDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8e208, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) create3d_lut_resource;
    
    // [CreateConstantBuffer@CHDRConverterDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8e5a0, 0x18b10 bytes
    //
    _m4(sdk::unknown_ptr) create_constant_buffer;
    
    // [??1CHDRConverterDx12@@UEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8bf68, 0x18b10 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@CHDRConverterDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8f0e0, 0x18b10 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [UpdateHDRConvertCB@CHDRConverterDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x901b0, 0x18b10 bytes
    //
    _m7(sdk::unknown_ptr) update_hdr_convert_cb;
    
    // [WaitForAll@CHDRConverterDx12]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x902a0, 0x18b10 bytes
    //
    _m8(sdk::unknown_ptr) wait_for_all;
};
#include "magic/api.end.hpp"
