#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_enumerated_mode
{
    // [??0CDXGIEnumeratedMode@@QEAA@AEBU_D3DKMT_DISPLAYMODE@@W4DXGI_FORMAT@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23c8, 0x17e70 bytes
    // dxgi.dll .text:0x23c8, 0x17e70 bytes
    // dxgi.dll .text:0x5fe0, 0x18b10 bytes
    // dxgi.dll .text:0x4248, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CDXGIEnumeratedMode@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x1f1b4, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
