#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details_abi::feature_state_data
{
    // [RecordFeatureUsage@FeatureStateData@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x1874c, 0x17e70 bytes
    // dxgi.dll .text:0x189ac, 0x17e70 bytes
    // dxgi.dll .text:0x13ebc, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) record_feature_usage;
    
    // [ProcessShutdown@FeatureStateData@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24038, 0x17e70 bytes
    // dxgi.dll .text:0x24338, 0x17e70 bytes
    // dxgi.dll .text:0x92d4, 0x18b10 bytes
    // dxgi.dll .text:0x25158, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) process_shutdown;
    
    // [RecordUsage@FeatureStateData@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x18280, 0x17e70 bytes
    // dxgi.dll .text:0x184e0, 0x17e70 bytes
    // dxgi.dll .text:0xa59c, 0x18b10 bytes
    // dxgi.dll .text:0x139f0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) record_usage;
    
    // [RetrieveUsageUnderLock@FeatureStateData@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x18cc8, 0x17e70 bytes
    // dxgi.dll .text:0x18f28, 0x17e70 bytes
    // dxgi.dll .text:0xa464, 0x18b10 bytes
    // dxgi.dll .text:0x14438, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) retrieve_usage_under_lock;
};
#include "magic/api.end.hpp"
