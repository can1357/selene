#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdmm_vidpntargetmodeset_interface_v1_impl
{
    // [VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3a4210, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) virtual_refresh_rate_support;
    
    // [AcquireFirstModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75480, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144610, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d8d60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147520, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_first_mode_info;
    
    // [AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75920, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10e530, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1aeb30, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11a560, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_next_mode_info;
    
    // [AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x72780, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144520, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e0110, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147430, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) acquire_pinned_mode_info;
    
    // [CompareVideoSignalInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a7410, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dd530, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a25e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dd600, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) compare_video_signal_info;
    
    // [FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a78a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ddc60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a2d20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ddd30, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) find_closest_target_mode;
    
    // [GetNumModes@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a7c10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2de0d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3100, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2de1a0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_num_modes;
    
    // [InitializeInterface@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xebe98, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x179df0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20ab7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x179fe8, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) initialize_interface;
    
    // [IsCompatibleWithMonitorMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xcfb20, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x129760, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dedd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdf560, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) is_compatible_with_monitor_mode;
    
    // [IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x838e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10e690, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1aedd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11a6c0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) is_supported_by_monitor;
    
    // [PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x839d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10eb60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ae770, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11ab90, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) pin_mode;
    
    // [ReleaseModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75a60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10cda0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1af330, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x118dd0, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) release_mode_info;
    
    // [UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x84780, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x145e10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d7570, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x148d20, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) unpin_mode;
};
#include "magic/api.end.hpp"
