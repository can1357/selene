#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_output_take_ownership
{
    // [??0CETWEvent_IDXGIOutput_TakeOwnership@@QEAA@PEAXPEBUIUnknown@@H@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4fd74, 0x17e70 bytes
    // dxgi.dll .text:0x4fe64, 0x17e70 bytes
    // dxgi.dll .text:0x5ae28, 0x18b10 bytes
    // dxgi.dll .text:0x512f4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGIOutput_TakeOwnership@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5053c, 0x17e70 bytes
    // dxgi.dll .text:0x5062c, 0x17e70 bytes
    // dxgi.dll .text:0x5b550, 0x18b10 bytes
    // dxgi.dll .text:0x51abc, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
