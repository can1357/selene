#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_factory_get_window_association
{
    // [??0CETWEvent_IDXGIFactory_GetWindowAssociation@@QEAA@PEAXPEBQEAUHWND__@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5d56c, 0x17e70 bytes
    // dxgi.dll .text:0x5d65c, 0x17e70 bytes
    // dxgi.dll .text:0x6930c, 0x18b10 bytes
    // dxgi.dll .text:0x5ea90, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGIFactory_GetWindowAssociation@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5dbb0, 0x17e70 bytes
    // dxgi.dll .text:0x5dca0, 0x17e70 bytes
    // dxgi.dll .text:0x697e0, 0x18b10 bytes
    // dxgi.dll .text:0x5f0d4, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
