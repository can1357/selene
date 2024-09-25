#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_output_set_display_surface
{
    // [??0CETWEvent_IDXGIOutput_SetDisplaySurface@@QEAA@PEAXPEAUIDXGISurface@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4fbcc, 0x17e70 bytes
    // dxgi.dll .text:0x4fcbc, 0x17e70 bytes
    // dxgi.dll .text:0x5ac80, 0x18b10 bytes
    // dxgi.dll .text:0x5114c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGIOutput_SetDisplaySurface@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x50464, 0x17e70 bytes
    // dxgi.dll .text:0x50554, 0x17e70 bytes
    // dxgi.dll .text:0x5b478, 0x18b10 bytes
    // dxgi.dll .text:0x519e4, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
