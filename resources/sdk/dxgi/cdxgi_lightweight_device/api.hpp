#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_lightweight_device
{
    // [??0CDXGILightweightDevice@@IEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70b0c, 0x17e70 bytes
    // dxgi.dll .text:0x70c1c, 0x17e70 bytes
    // dxgi.dll .text:0x7c274, 0x18b10 bytes
    // dxgi.dll .text:0x7204c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [CreateForAdapter@CDXGILightweightDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71530, 0x17e70 bytes
    // dxgi.dll .text:0x71640, 0x17e70 bytes
    // dxgi.dll .text:0x7cb54, 0x18b10 bytes
    // dxgi.dll .text:0x72a70, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) create_for_adapter;
    
    // [CreateInternalDevice@CDXGILightweightDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71734, 0x17e70 bytes
    // dxgi.dll .text:0x71844, 0x17e70 bytes
    // dxgi.dll .text:0x7cd84, 0x18b10 bytes
    // dxgi.dll .text:0x72c74, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) create_internal_device;
    
    // [??1CDXGILightweightDevice@@IEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70e0c, 0x17e70 bytes
    // dxgi.dll .text:0x70f1c, 0x17e70 bytes
    // dxgi.dll .text:0x7c4e8, 0x18b10 bytes
    // dxgi.dll .text:0x7234c, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [GetDeviceRemovedReason@CDXGILightweightDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71d60, 0x17e70 bytes
    // dxgi.dll .text:0x71e70, 0x17e70 bytes
    // dxgi.dll .text:0x7d370, 0x18b10 bytes
    // dxgi.dll .text:0x732a0, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) get_device_removed_reason;
    
    // [GetKernelContextHandle@CDXGILightweightDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ee80, 0x17e70 bytes
    // dxgi.dll .text:0x1f190, 0x17e70 bytes
    // dxgi.dll .text:0x26b00, 0x18b10 bytes
    // dxgi.dll .text:0x1ff80, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) get_kernel_context_handle;
    
    // [ReleaseFromSwapChain@CDXGILightweightDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72a30, 0x17e70 bytes
    // dxgi.dll .text:0x72b40, 0x17e70 bytes
    // dxgi.dll .text:0x7e0c0, 0x18b10 bytes
    // dxgi.dll .text:0x73f70, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) release_from_swap_chain;
};
#include "magic/api.end.hpp"
