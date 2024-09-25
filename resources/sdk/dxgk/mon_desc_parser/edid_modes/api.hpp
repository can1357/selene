#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::mon_desc_parser::edid_modes
{
    // [GetModeCounts@EDID_MODES@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ead0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x22bdc, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ef54, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) get_mode_counts;
    
    // [ModeFromCeaVideoFormat@EDID_MODES@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5edf0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x73908, 0x84380 bytes
    // dxgkrnl.sys .text:0x5ef80, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) mode_from_cea_video_format;
    
    // [ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1db80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x21c74, 0x84380 bytes
    // dxgkrnl.sys .text:0x1e004, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) mode_from_detailed_timing_block;
    
    // [ModeFromStandardTimingBlock@EDID_MODES@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1e4a4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x225a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1e928, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) mode_from_standard_timing_block;
    
    // [ModesFromEstablishedTimings@EDID_MODES@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ed64, 0x762b0 bytes
    // dxgkrnl.sys .text:0x22e70, 0x84380 bytes
    // dxgkrnl.sys .text:0x1f1e8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) modes_from_established_timings;
    
    // [ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20e08, 0x762b0 bytes
    // dxgkrnl.sys .text:0x29d9c, 0x84380 bytes
    // dxgkrnl.sys .text:0x20e50, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) obtain_supported_frequency_ranges;
    
    // [ObtainSupportedModes@EDID_MODES@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1df74, 0x762b0 bytes
    // dxgkrnl.sys .text:0x22068, 0x84380 bytes
    // dxgkrnl.sys .text:0x1e3f8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) obtain_supported_modes;
};
#include "magic/api.end.hpp"
