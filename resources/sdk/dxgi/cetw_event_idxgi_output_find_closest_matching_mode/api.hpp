#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_output_find_closest_matching_mode
{
    // [??0CETWEvent_IDXGIOutput_FindClosestMatchingMode@@QEAA@PEAXPEBUDXGI_MODE_DESC@@1PEBUIUnknown@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4f684, 0x17e70 bytes
    // dxgi.dll .text:0x4f774, 0x17e70 bytes
    // dxgi.dll .text:0x5a738, 0x18b10 bytes
    // dxgi.dll .text:0x50c04, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGIOutput_FindClosestMatchingMode@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x501dc, 0x17e70 bytes
    // dxgi.dll .text:0x502cc, 0x17e70 bytes
    // dxgi.dll .text:0x5b1f0, 0x18b10 bytes
    // dxgi.dll .text:0x5175c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
