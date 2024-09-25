#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::monitorfrequencyrangeset_interface_v1_impl
{
    // [AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b2150, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f1a90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b2bd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f1800, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_first_frequency_range_info;
    
    // [AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b2660, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f20c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b3140, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f1e30, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_next_frequency_range_info;
    
    // [DxgMonitorFrequencyRangeSetInterfaceV1@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x55b30, 0x60098 bytes
    // dxgkrnl.sys .data:0xaedd0, 0x762b0 bytes
    // dxgkrnl.sys .data:0x12fed0, 0x84380 bytes
    // dxgkrnl.sys .data:0xaedd0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) dxg_monitor_frequency_range_set_interface_v1;
    
    // [GetNumFrequencyRanges@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b3060, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f2da0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b3830, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f2b10, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_num_frequency_ranges;
    
    // [ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b33a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f3160, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b3bf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f2ed0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) release_frequency_range_info;
};
#include "magic/api.end.hpp"
