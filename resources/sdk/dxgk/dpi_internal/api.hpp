#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dpi_internal
{
    // [GetNativeResolution@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x170c, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) get_native_resolution;
    
    // [HasValidPreferredDetailedTimingDescriptor@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x1764, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) has_valid_preferred_detailed_timing_descriptor;
    
    // [IsPreferredModeInterlaced@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x126c4, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) is_preferred_mode_interlaced;
    
    // [IsAudioAvailableInEdid@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18e3e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a4018, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2a40b8, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) is_audio_available_in_edid;
    
    // [AvgXY@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1c68, 0x60098 bytes
    // dxgkrnl.sys .text:0xbcfc, 0x762b0 bytes
    // dxgkrnl.sys .text:0xdfbc, 0x84380 bytes
    // dxgkrnl.sys .text:0xc188, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) avg_xy;
    
    // [CalculateMinMaxOverride@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xcc14, 0x60098 bytes
    // dxgkrnl.sys .text:0x18cb8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1d654, 0x84380 bytes
    // dxgkrnl.sys .text:0x1907c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) calculate_min_max_override;
    
    // [FillOverridesAndAdjustedScaleFactor@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ae4, 0x60098 bytes
    // dxgkrnl.sys .text:0xbb24, 0x762b0 bytes
    // dxgkrnl.sys .text:0xddd4, 0x84380 bytes
    // dxgkrnl.sys .text:0xbfb0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) fill_overrides_and_adjusted_scale_factor;
    
    // [FindPlateauIndexForScaleFactor@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1c48, 0x60098 bytes
    // dxgkrnl.sys .text:0xbcd4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xdf94, 0x84380 bytes
    // dxgkrnl.sys .text:0xc160, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) find_plateau_index_for_scale_factor;
    
    // [GetCurrentSourceResolution@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x72678, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x131c84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c26fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1351e8, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_current_source_resolution;
    
    // [GetCurrentTargetResolution@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x72840, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x131b7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c25d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1350e0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_current_target_resolution;
    
    // [GetPreferredScaleFactorForMonitor@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x71738, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1306dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c23b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x134c70, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) get_preferred_scale_factor_for_monitor;
    
    // [HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2825c, 0x60098 bytes
    // dxgkrnl.sys .text:0x48d38, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4f26c, 0x84380 bytes
    // dxgkrnl.sys .text:0x48f90, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) heuristically_pick_scale_factors_for_internal_edidless_bdd;
};
#include "magic/api.end.hpp"
