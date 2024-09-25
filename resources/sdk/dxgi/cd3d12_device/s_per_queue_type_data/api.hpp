#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cd3d12_device::s_per_queue_type_data
{
    // [CommandListSubmitted@SPerQueueTypeData@CD3D12Device]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x77380, 0x17e70 bytes
    // dxgi.dll .text:0x774b0, 0x17e70 bytes
    // dxgi.dll .text:0x825c8, 0x18b10 bytes
    // dxgi.dll .text:0x788e0, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) command_list_submitted;
};
#include "magic/api.end.hpp"
