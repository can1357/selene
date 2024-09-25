#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_output_get_frame_statistics
{
    // [??0CETWEvent_IDXGIOutput_GetFrameStatistics@@QEAA@PEAXPEBUDXGI_FRAME_STATISTICS@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4f958, 0x17e70 bytes
    // dxgi.dll .text:0x4fa48, 0x17e70 bytes
    // dxgi.dll .text:0x5aa0c, 0x18b10 bytes
    // dxgi.dll .text:0x50ed8, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGIOutput_GetFrameStatistics@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x50320, 0x17e70 bytes
    // dxgi.dll .text:0x50410, 0x17e70 bytes
    // dxgi.dll .text:0x5b334, 0x18b10 bytes
    // dxgi.dll .text:0x518a0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
