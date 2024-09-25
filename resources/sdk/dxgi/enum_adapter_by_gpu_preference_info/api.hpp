#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::enum_adapter_by_gpu_preference_info
{
    // [PrepareInfoForTelemetry@EnumAdapterByGpuPreferenceInfo]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xde2c, 0x17e70 bytes
    // dxgi.dll .text:0xde5c, 0x17e70 bytes
    // dxgi.dll .text:0x162f0, 0x18b10 bytes
    // dxgi.dll .text:0x930c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) prepare_info_for_telemetry;
};
#include "magic/api.end.hpp"
