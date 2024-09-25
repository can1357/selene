#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_factory_create_swap_chain
{
    // [??0CETWEvent_IDXGIFactory_CreateSwapChain@@QEAA@PEAXPEBUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC@@PEBQEAUIDXGISwapChain@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5d464, 0x17e70 bytes
    // dxgi.dll .text:0x5d554, 0x17e70 bytes
    // dxgi.dll .text:0x69204, 0x18b10 bytes
    // dxgi.dll .text:0x5e988, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGIFactory_CreateSwapChain@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5db44, 0x17e70 bytes
    // dxgi.dll .text:0x5dc34, 0x17e70 bytes
    // dxgi.dll .text:0x69774, 0x18b10 bytes
    // dxgi.dll .text:0x5f068, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
