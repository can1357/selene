#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_output_get_display_mode_list
{
    // [??0CETWEvent_IDXGIOutput_GetDisplayModeList@@QEAA@PEAXW4DXGI_FORMAT@@IPEBIPEBUDXGI_MODE_DESC@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4f78c, 0x17e70 bytes
    // dxgi.dll .text:0x4f87c, 0x17e70 bytes
    // dxgi.dll .text:0x5a840, 0x18b10 bytes
    // dxgi.dll .text:0x50d0c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGIOutput_GetDisplayModeList@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x50248, 0x17e70 bytes
    // dxgi.dll .text:0x50338, 0x17e70 bytes
    // dxgi.dll .text:0x5b25c, 0x18b10 bytes
    // dxgi.dll .text:0x517c8, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
