#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_output_get_display_surface_data
{
    // [??0CETWEvent_IDXGIOutput_GetDisplaySurfaceData@@QEAA@PEAXPEAUIDXGISurface@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4f8a0, 0x17e70 bytes
    // dxgi.dll .text:0x4f990, 0x17e70 bytes
    // dxgi.dll .text:0x5a954, 0x18b10 bytes
    // dxgi.dll .text:0x50e20, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGIOutput_GetDisplaySurfaceData@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x502b4, 0x17e70 bytes
    // dxgi.dll .text:0x503a4, 0x17e70 bytes
    // dxgi.dll .text:0x5b2c8, 0x18b10 bytes
    // dxgi.dll .text:0x51834, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
