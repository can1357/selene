#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::scoped_d3d12_internal_device_child_creation
{
    // [??0ScopedD3D12InternalDeviceChildCreation@@QEAA@PEAUID3D12DebugDeviceInternal@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x76624, 0x17e70 bytes
    // dxgi.dll .text:0x7674c, 0x17e70 bytes
    // dxgi.dll .text:0x81948, 0x18b10 bytes
    // dxgi.dll .text:0x77b7c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1ScopedD3D12InternalDeviceChildCreation@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x76ba8, 0x17e70 bytes
    // dxgi.dll .text:0x76cd8, 0x17e70 bytes
    // dxgi.dll .text:0x81d9c, 0x18b10 bytes
    // dxgi.dll .text:0x78108, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
