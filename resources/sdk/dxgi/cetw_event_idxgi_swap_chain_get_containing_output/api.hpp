#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_swap_chain_get_containing_output
{
    // [??0CETWEvent_IDXGISwapChain_GetContainingOutput@@QEAA@PEAXPEBQEAUIDXGIOutput@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x63600, 0x17e70 bytes
    // dxgi.dll .text:0x636f0, 0x17e70 bytes
    // dxgi.dll .text:0x6f3d0, 0x18b10 bytes
    // dxgi.dll .text:0x64b20, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGISwapChain_GetContainingOutput@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x637f8, 0x17e70 bytes
    // dxgi.dll .text:0x638e8, 0x17e70 bytes
    // dxgi.dll .text:0x6f68c, 0x18b10 bytes
    // dxgi.dll .text:0x64d18, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
