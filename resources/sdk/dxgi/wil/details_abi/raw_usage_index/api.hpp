#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details_abi::raw_usage_index
{
    // [FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x1a6e4, 0x17e70 bytes
    // dxgi.dll .text:0x1a994, 0x17e70 bytes
    // dxgi.dll .text:0x15f14, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) find_insertion_point_or_increment;
    
    // [LowerBound@RawUsageIndex@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x1a7fc, 0x17e70 bytes
    // dxgi.dll .text:0x1ab0c, 0x17e70 bytes
    // dxgi.dll .text:0x1608c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) lower_bound;
    
    // [Iterate@RawUsageIndex@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17a8c, 0x17e70 bytes
    // dxgi.dll .text:0x17cec, 0x17e70 bytes
    // dxgi.dll .text:0x9acc, 0x18b10 bytes
    // dxgi.dll .text:0x131fc, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) iterate;
    
    // [RecordUsage@RawUsageIndex@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17970, 0x17e70 bytes
    // dxgi.dll .text:0x17bd0, 0x17e70 bytes
    // dxgi.dll .text:0x50858, 0x18b10 bytes
    // dxgi.dll .text:0x130e0, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) record_usage;
    
    // [RecordUsageInternal@RawUsageIndex@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17bcc, 0x17e70 bytes
    // dxgi.dll .text:0x17e2c, 0x17e70 bytes
    // dxgi.dll .text:0xca90, 0x18b10 bytes
    // dxgi.dll .text:0x1333c, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) record_usage_internal;
    
    // [SetBuffer@RawUsageIndex@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ac48, 0x17e70 bytes
    // dxgi.dll .text:0x1af58, 0x17e70 bytes
    // dxgi.dll .text:0x9e6c, 0x18b10 bytes
    // dxgi.dll .text:0x164d8, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer;
    
    // [Swap@RawUsageIndex@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ab90, 0x17e70 bytes
    // dxgi.dll .text:0x1aea0, 0x17e70 bytes
    // dxgi.dll .text:0x9f94, 0x18b10 bytes
    // dxgi.dll .text:0x16420, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) swap;
};
#include "magic/api.end.hpp"
