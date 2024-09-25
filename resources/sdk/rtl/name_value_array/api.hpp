#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace rtl::name_value_array
{
    // [Clear@RtlNameValueArray]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7eb98, 0x17e70 bytes
    // dxgi.dll .text:0x7ed18, 0x17e70 bytes
    // dxgi.dll .text:0x7f6a4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) clear;
    
    // [Free@RtlNameValueArray]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7ec40, 0x17e70 bytes
    // dxgi.dll .text:0x7edc0, 0x17e70 bytes
    // dxgi.dll .text:0x7f74c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) free;
    
    // [GetValue@RtlNameValueArray]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7ec84, 0x17e70 bytes
    // dxgi.dll .text:0x7ee04, 0x17e70 bytes
    // dxgi.dll .text:0x7f790, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) get_value;
    
    // [Insert@RtlNameValueArray]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7ece0, 0x17e70 bytes
    // dxgi.dll .text:0x7ee60, 0x17e70 bytes
    // dxgi.dll .text:0x7f7ec, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) insert;
};
#include "magic/api.end.hpp"
