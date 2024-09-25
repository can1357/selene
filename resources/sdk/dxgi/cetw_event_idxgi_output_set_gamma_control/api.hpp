#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_output_set_gamma_control
{
    // [??0CETWEvent_IDXGIOutput_SetGammaControl@@QEAA@PEAXPEBUDXGI_GAMMA_CONTROL@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4fc84, 0x17e70 bytes
    // dxgi.dll .text:0x4fd74, 0x17e70 bytes
    // dxgi.dll .text:0x5ad38, 0x18b10 bytes
    // dxgi.dll .text:0x51204, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGIOutput_SetGammaControl@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x504d0, 0x17e70 bytes
    // dxgi.dll .text:0x505c0, 0x17e70 bytes
    // dxgi.dll .text:0x5b4e4, 0x18b10 bytes
    // dxgi.dll .text:0x51a50, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
