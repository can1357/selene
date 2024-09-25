#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvideosignalmode
{
    // [EnableExperimentalRefreshRates@DMMVIDEOSIGNALMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .data:0x131e98, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) enable_experimental_refresh_rates;
    
    // [IsUnspecifiedFrequency@DMMVIDEOSIGNALMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0xab18, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2444, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) is_unspecified_frequency;
    
    // [Initialize@DMMVIDEOSIGNALMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2130, 0x60098 bytes
    // dxgkrnl.sys .text:0x5e10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x71c0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [DivideAndRound@DMMVIDEOSIGNALMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7374, 0x60098 bytes
    // dxgkrnl.sys .text:0x7920, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd65c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1957c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) divide_and_round;
    
    // [GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x34434, 0x60098 bytes
    // dxgkrnl.sys .text:0x5bb38, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6b8e4, 0x84380 bytes
    // dxgkrnl.sys .text:0x5bcc8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_truncated_monitor_v_sync_freq;
    
    // [HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7444, 0x60098 bytes
    // dxgkrnl.sys .text:0xabc0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x50fc, 0x84380 bytes
    // dxgkrnl.sys .text:0x2464, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) have_equivalent_monitor_frequency_requirements;
    
    // [IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7528, 0x60098 bytes
    // dxgkrnl.sys .text:0xac10, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb7d8, 0x84380 bytes
    // dxgkrnl.sys .text:0x24b4, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) is_freq_within_tolerance_range;
    
    // [_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x218c, 0x60098 bytes
    // dxgkrnl.sys .text:0x5e74, 0x762b0 bytes
    // dxgkrnl.sys .text:0xbbac, 0x84380 bytes
    // dxgkrnl.sys .text:0x7224, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) validate_ddi_video_signal_mode_info;
};
#include "magic/api.end.hpp"
