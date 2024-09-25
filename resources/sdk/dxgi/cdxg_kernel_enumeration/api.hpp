#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxg_kernel_enumeration
{
    // [??0CDXGKernelEnumeration@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xe624, 0x17e70 bytes
    // dxgi.dll .text:0xe654, 0x17e70 bytes
    // dxgi.dll .text:0x167fc, 0x18b10 bytes
    // dxgi.dll .text:0x9b04, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [D3DKMTCacheHybridQueryValue@CDXGKernelEnumeration]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x585f0, 0x17e70 bytes
    // dxgi.dll .text:0x586e0, 0x17e70 bytes
    // dxgi.dll .text:0x63970, 0x18b10 bytes
    // dxgi.dll .text:0x59b90, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) d3dkmt_cache_hybrid_query_value;
    
    // [D3DKMTEscape@CDXGKernelEnumeration]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x58630, 0x17e70 bytes
    // dxgi.dll .text:0x58720, 0x17e70 bytes
    // dxgi.dll .text:0x639c0, 0x18b10 bytes
    // dxgi.dll .text:0x59bd0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) d3dkmt_escape;
    
    // [D3DKMTGetCachedHybridQueryValue@CDXGKernelEnumeration]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x58650, 0x17e70 bytes
    // dxgi.dll .text:0x58740, 0x17e70 bytes
    // dxgi.dll .text:0x639e0, 0x18b10 bytes
    // dxgi.dll .text:0x59bf0, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) d3dkmt_get_cached_hybrid_query_value;
    
    // [D3DKMTQueryAdapterInfo@CDXGKernelEnumeration]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x58690, 0x17e70 bytes
    // dxgi.dll .text:0x58780, 0x17e70 bytes
    // dxgi.dll .text:0x63a30, 0x18b10 bytes
    // dxgi.dll .text:0x59c30, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) d3dkmt_query_adapter_info;
    
    // [??1CDXGKernelEnumeration@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24090, 0x17e70 bytes
    // dxgi.dll .text:0x24390, 0x17e70 bytes
    // dxgi.dll .text:0x2b4d4, 0x18b10 bytes
    // dxgi.dll .text:0x251b0, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [DisplayConfigGetDeviceInfo@CDXGKernelEnumeration]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa5f0, 0x17e70 bytes
    // dxgi.dll .text:0xa5f0, 0x17e70 bytes
    // dxgi.dll .text:0x24730, 0x18b10 bytes
    // dxgi.dll .text:0x1ee00, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) display_config_get_device_info;
};
#include "magic/api.end.hpp"
