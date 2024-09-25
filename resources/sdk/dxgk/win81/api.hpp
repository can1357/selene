#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::win81
{
    // [AdjustScaleFactorForOverride@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x31658c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) adjust_scale_factor_for_override;
    
    // [GetPhysicalSizeFromEDID@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x19204c, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) get_physical_size_from_edid;
    
    // [AdjustDesktopScaleFactorForOverride@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x191bc8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa1dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3164fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aa27c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) adjust_desktop_scale_factor_for_override;
    
    // [CalcDpi@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x191c54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa28c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x316630, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aa32c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) calc_dpi;
    
    // [CalculateMinMaxOverride@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x191c8c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa2d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3166a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aa378, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) calculate_min_max_override;
    
    // [DetermineViewDistance@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x191d38, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa38c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31675c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aa42c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) determine_view_distance;
    
    // [DxgkUpdateGdiInfo@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x191da4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa3fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3167c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aa49c, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) dxgk_update_gdi_info;
    
    // [FillDpiInfo@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x191e90, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa5bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3169ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aa65c, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) fill_dpi_info;
    
    // [FillOverridesAndAdjustedScaleFactor@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x191fa8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa6dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x316b0c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aa77c, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) fill_overrides_and_adjusted_scale_factor;
    
    // [HeuristicallyDetermineViewingDistance@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x192130, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa79c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x316c28, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aa83c, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) heuristically_determine_viewing_distance;
    
    // [HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x192234, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa8a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x316d2c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aa948, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) heuristically_pick_scale_factors_for_internal_edidless_bdd;
    
    // [IsNativeResolutionOnlyTVTiming@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1922ac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa928, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x316dac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aa9c8, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) is_native_resolution_only_tv_timing;
    
    // [IsNetbookResolution@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x192310, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa990, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x316e14, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aaa30, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) is_netbook_resolution;
    
    // [OemSpecifiedViewDist@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x192330, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aa9b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x316e3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aaa58, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) oem_specified_view_dist;
    
    // [SatisfyMinResolutionBarForScaleIdx@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x192388, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aaa1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x316ea0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aaabc, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) satisfy_min_resolution_bar_for_scale_idx;
    
    // [UpdateGdiInfoForVidPnSource@Win81]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x192438, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2aaac8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x316f58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aab68, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) update_gdi_info_for_vid_pn_source;
};
#include "magic/api.end.hpp"
