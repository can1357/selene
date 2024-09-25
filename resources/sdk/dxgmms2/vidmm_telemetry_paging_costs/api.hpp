#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_telemetry_paging_costs
{
    // [AddData@VIDMM_TELEMETRY_PAGING_COSTS]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xe4df8, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) add_data;
    
    // [ConvertTimingData@VIDMM_TELEMETRY_PAGING_COSTS]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xe4fc0, 0x20ba bytes
    //
    _m1(sdk::unknown_ptr) convert_timing_data;
    
    // [LogData@VIDMM_TELEMETRY_PAGING_COSTS]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xe5418, 0x20ba bytes
    //
    _m2(sdk::unknown_ptr) log_data;
};
#include "magic/api.end.hpp"
