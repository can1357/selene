#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_output
{
    // [GetActivePathAndMode@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1b00c, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) get_active_path_and_mode;
    
    // [IsHdrEnabled@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1ac64, 0x18b10 bytes
    //
    _m1(sdk::unknown_ptr) is_hdr_enabled;
    
    // [PreferPhysicallyContiguous@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x610c4, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) prefer_physically_contiguous;
    
    // [??1CDXGIOutput@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x49bfc, 0x17e70 bytes
    // dxgi.dll .text:0x49cec, 0x17e70 bytes
    // dxgi.dll .text:0x4b17c, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [GetDescImpl@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x751c, 0x17e70 bytes
    // dxgi.dll .text:0x751c, 0x17e70 bytes
    // dxgi.dll .text:0x1c0cc, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) get_desc_impl;
    
    // [GetDescImplFromGDI@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x763c, 0x17e70 bytes
    // dxgi.dll .text:0x763c, 0x17e70 bytes
    // dxgi.dll .text:0x1c1ec, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) get_desc_impl_from_gdi;
    
    // [IsIndirectOutput@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x1aa64, 0x17e70 bytes
    // dxgi.dll .text:0x1ad74, 0x17e70 bytes
    // dxgi.dll .text:0x162f4, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) is_indirect_output;
    
    // [CheckExclusiveOwnership@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5086c, 0x17e70 bytes
    // dxgi.dll .text:0x5095c, 0x17e70 bytes
    // dxgi.dll .text:0x5b878, 0x18b10 bytes
    // dxgi.dll .text:0x51dec, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) check_exclusive_ownership;
    
    // [CheckHardwareCompositionSupport@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3c30, 0x17e70 bytes
    // dxgi.dll .text:0x3c30, 0x17e70 bytes
    // dxgi.dll .text:0x6940, 0x18b10 bytes
    // dxgi.dll .text:0x5ab0, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) check_hardware_composition_support;
    
    // [CheckOverlayColorSpaceSupport@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5220, 0x17e70 bytes
    // dxgi.dll .text:0x5220, 0x17e70 bytes
    // dxgi.dll .text:0x5d40, 0x18b10 bytes
    // dxgi.dll .text:0x2ce0, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) check_overlay_color_space_support;
    
    // [CheckOverlaySupport@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2560, 0x17e70 bytes
    // dxgi.dll .text:0x2560, 0x17e70 bytes
    // dxgi.dll .text:0x2610, 0x18b10 bytes
    // dxgi.dll .text:0x43e0, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) check_overlay_support;
    
    // [CheckPowerState@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x50984, 0x17e70 bytes
    // dxgi.dll .text:0x50a74, 0x17e70 bytes
    // dxgi.dll .text:0x5b9a4, 0x18b10 bytes
    // dxgi.dll .text:0x51f04, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) check_power_state;
    
    // [??0CDXGIOutput@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xecd0, 0x17e70 bytes
    // dxgi.dll .text:0xed00, 0x17e70 bytes
    // dxgi.dll .text:0x54d90, 0x18b10 bytes
    // dxgi.dll .text:0xa1b0, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) construct_instance;
    
    // [DestroyAllDuplicateOutputKernelContexts@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x528b0, 0x17e70 bytes
    // dxgi.dll .text:0x529a0, 0x17e70 bytes
    // dxgi.dll .text:0x5d92c, 0x18b10 bytes
    // dxgi.dll .text:0x53e30, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) destroy_all_duplicate_output_kernel_contexts;
    
    // [DriverSupportsKernelOverlayCaps@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1a978, 0x17e70 bytes
    // dxgi.dll .text:0x1ac88, 0x17e70 bytes
    // dxgi.dll .text:0x1aebc, 0x18b10 bytes
    // dxgi.dll .text:0x16208, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) driver_supports_kernel_overlay_caps;
    
    // [DuplicateOutput@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x52950, 0x17e70 bytes
    // dxgi.dll .text:0x52a40, 0x17e70 bytes
    // dxgi.dll .text:0x5d9d0, 0x18b10 bytes
    // dxgi.dll .text:0x53ed0, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) duplicate_output;
    
    // [DuplicateOutput1@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x52920, 0x17e70 bytes
    // dxgi.dll .text:0x52a10, 0x17e70 bytes
    // dxgi.dll .text:0x5d9a0, 0x18b10 bytes
    // dxgi.dll .text:0x53ea0, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) duplicate_output1;
    
    // [DuplicateOutputInternal@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5298c, 0x17e70 bytes
    // dxgi.dll .text:0x52a7c, 0x17e70 bytes
    // dxgi.dll .text:0x5da0c, 0x18b10 bytes
    // dxgi.dll .text:0x53f0c, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) duplicate_output_internal;
    
    // [FillModeDescFromDesktop@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x52cb4, 0x17e70 bytes
    // dxgi.dll .text:0x52da4, 0x17e70 bytes
    // dxgi.dll .text:0x5dd48, 0x18b10 bytes
    // dxgi.dll .text:0x54234, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) fill_mode_desc_from_desktop;
    
    // [FillModeDescFromDesktopWithKernel@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x22c0, 0x17e70 bytes
    // dxgi.dll .text:0x22c0, 0x17e70 bytes
    // dxgi.dll .text:0x5ecc, 0x18b10 bytes
    // dxgi.dll .text:0x4140, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) fill_mode_desc_from_desktop_with_kernel;
    
    // [FillModeDescFromDesktopWithQDC@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x52dac, 0x17e70 bytes
    // dxgi.dll .text:0x52e9c, 0x17e70 bytes
    // dxgi.dll .text:0x6ad8, 0x18b10 bytes
    // dxgi.dll .text:0x5432c, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) fill_mode_desc_from_desktop_with_qdc;
    
    // [FillModeDescFromRemoteDesktop@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x52f88, 0x17e70 bytes
    // dxgi.dll .text:0x53078, 0x17e70 bytes
    // dxgi.dll .text:0x5de40, 0x18b10 bytes
    // dxgi.dll .text:0x54508, 0x17e70 bytes
    //
    _o1(sdk::unknown_ptr) fill_mode_desc_from_remote_desktop;
    
    // [FinalRelease@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xe940, 0x17e70 bytes
    // dxgi.dll .text:0xe970, 0x17e70 bytes
    // dxgi.dll .text:0x5df00, 0x18b10 bytes
    // dxgi.dll .text:0x9e20, 0x17e70 bytes
    //
    _o2(sdk::unknown_ptr) final_release;
    
    // [FindClosestMatchingMode@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53180, 0x17e70 bytes
    // dxgi.dll .text:0x53270, 0x17e70 bytes
    // dxgi.dll .text:0x5e0f0, 0x18b10 bytes
    // dxgi.dll .text:0x54700, 0x17e70 bytes
    //
    _o3(sdk::unknown_ptr) find_closest_matching_mode;
    
    // [FindClosestMatchingMode1@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x530b0, 0x17e70 bytes
    // dxgi.dll .text:0x531a0, 0x17e70 bytes
    // dxgi.dll .text:0x5e020, 0x18b10 bytes
    // dxgi.dll .text:0x54630, 0x17e70 bytes
    //
    _o4(sdk::unknown_ptr) find_closest_matching_mode1;
    
    // [FindClosestMatchingModeDwm@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21d50, 0x17e70 bytes
    // dxgi.dll .text:0x22030, 0x17e70 bytes
    // dxgi.dll .text:0x29f5c, 0x18b10 bytes
    // dxgi.dll .text:0x22cd0, 0x17e70 bytes
    //
    _o5(sdk::unknown_ptr) find_closest_matching_mode_dwm;
    
    // [FindClosestMatchingModeFromDesktop@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53360, 0x17e70 bytes
    // dxgi.dll .text:0x53450, 0x17e70 bytes
    // dxgi.dll .text:0x5e2c0, 0x18b10 bytes
    // dxgi.dll .text:0x548e0, 0x17e70 bytes
    //
    _o6(sdk::unknown_ptr) find_closest_matching_mode_from_desktop;
    
    // [FindClosestMatchingModeImpl@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53434, 0x17e70 bytes
    // dxgi.dll .text:0x53524, 0x17e70 bytes
    // dxgi.dll .text:0x5e388, 0x18b10 bytes
    // dxgi.dll .text:0x549b4, 0x17e70 bytes
    //
    _o7(sdk::unknown_ptr) find_closest_matching_mode_impl;
    
    // [FindClosestMatchingModeValidate@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53c08, 0x17e70 bytes
    // dxgi.dll .text:0x53cf8, 0x17e70 bytes
    // dxgi.dll .text:0x5eb04, 0x18b10 bytes
    // dxgi.dll .text:0x55188, 0x17e70 bytes
    //
    _o8(sdk::unknown_ptr) find_closest_matching_mode_validate;
    
    // [ForgetThisPrimary@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23dc0, 0x17e70 bytes
    // dxgi.dll .text:0x240c0, 0x17e70 bytes
    // dxgi.dll .text:0x2b190, 0x18b10 bytes
    // dxgi.dll .text:0x24ec0, 0x17e70 bytes
    //
    _o9(sdk::unknown_ptr) forget_this_primary;
    
    // [GetAdapterLuid@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x40dc, 0x17e70 bytes
    // dxgi.dll .text:0x40dc, 0x17e70 bytes
    // dxgi.dll .text:0x1b670, 0x18b10 bytes
    // dxgi.dll .text:0x5f5c, 0x17e70 bytes
    //
    _p0(sdk::unknown_ptr) get_adapter_luid;
    
    // [GetDesc@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9590, 0x17e70 bytes
    // dxgi.dll .text:0x9590, 0x17e70 bytes
    // dxgi.dll .text:0x22cf0, 0x18b10 bytes
    // dxgi.dll .text:0x1de10, 0x17e70 bytes
    //
    _p1(sdk::unknown_ptr) get_desc;
    
    // [GetDesc1@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x74a0, 0x17e70 bytes
    // dxgi.dll .text:0x74a0, 0x17e70 bytes
    // dxgi.dll .text:0x223c0, 0x18b10 bytes
    // dxgi.dll .text:0x1c050, 0x17e70 bytes
    //
    _p2(sdk::unknown_ptr) get_desc1;
    
    // [GetDisplayModeList@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53dc0, 0x17e70 bytes
    // dxgi.dll .text:0x53eb0, 0x17e70 bytes
    // dxgi.dll .text:0x5ecc0, 0x18b10 bytes
    // dxgi.dll .text:0x55340, 0x17e70 bytes
    //
    _p3(sdk::unknown_ptr) get_display_mode_list;
    
    // [GetDisplayModeList1@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53d60, 0x17e70 bytes
    // dxgi.dll .text:0x53e50, 0x17e70 bytes
    // dxgi.dll .text:0x5ec60, 0x18b10 bytes
    // dxgi.dll .text:0x552e0, 0x17e70 bytes
    //
    _p4(sdk::unknown_ptr) get_display_mode_list1;
    
    // [GetDisplaySurfaceData@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53e80, 0x17e70 bytes
    // dxgi.dll .text:0x53f70, 0x17e70 bytes
    // dxgi.dll .text:0x5ed80, 0x18b10 bytes
    // dxgi.dll .text:0x55400, 0x17e70 bytes
    //
    _p5(sdk::unknown_ptr) get_display_surface_data;
    
    // [GetDisplaySurfaceData1@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53e60, 0x17e70 bytes
    // dxgi.dll .text:0x53f50, 0x17e70 bytes
    // dxgi.dll .text:0x5ed60, 0x18b10 bytes
    // dxgi.dll .text:0x553e0, 0x17e70 bytes
    //
    _p6(sdk::unknown_ptr) get_display_surface_data1;
    
    // [GetDisplaySurfaceDataCore@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53f70, 0x17e70 bytes
    // dxgi.dll .text:0x54060, 0x17e70 bytes
    // dxgi.dll .text:0x5ee6c, 0x18b10 bytes
    // dxgi.dll .text:0x554f0, 0x17e70 bytes
    //
    _p7(sdk::unknown_ptr) get_display_surface_data_core;
    
    // [GetDisplaySurfaceDataForDIB@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5491c, 0x17e70 bytes
    // dxgi.dll .text:0x54a0c, 0x17e70 bytes
    // dxgi.dll .text:0x5f828, 0x18b10 bytes
    // dxgi.dll .text:0x55e9c, 0x17e70 bytes
    //
    _p8(sdk::unknown_ptr) get_display_surface_data_for_dib;
    
    // [GetDwmDescImpl@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x168d0, 0x17e70 bytes
    // dxgi.dll .text:0x16b30, 0x17e70 bytes
    // dxgi.dll .text:0x1fca8, 0x18b10 bytes
    // dxgi.dll .text:0x12040, 0x17e70 bytes
    //
    _p9(sdk::unknown_ptr) get_dwm_desc_impl;
    
    // [_GetEntries@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1eb90, 0x17e70 bytes
    // dxgi.dll .text:0x1eea0, 0x17e70 bytes
    // dxgi.dll .text:0x26650, 0x18b10 bytes
    // dxgi.dll .text:0x1fc90, 0x17e70 bytes
    //
    _q0(sdk::unknown_ptr) get_entries;
    
    // [GetFrameStatistics@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x54c70, 0x17e70 bytes
    // dxgi.dll .text:0x54d60, 0x17e70 bytes
    // dxgi.dll .text:0x5fbc0, 0x18b10 bytes
    // dxgi.dll .text:0x561f0, 0x17e70 bytes
    //
    _q1(sdk::unknown_ptr) get_frame_statistics;
    
    // [GetFrameStatisticsDWM@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x54d70, 0x17e70 bytes
    // dxgi.dll .text:0x54e60, 0x17e70 bytes
    // dxgi.dll .text:0x5fcd0, 0x18b10 bytes
    // dxgi.dll .text:0x562f0, 0x17e70 bytes
    //
    _q2(sdk::unknown_ptr) get_frame_statistics_dwm;
    
    // [GetFrameStatisticsDWMImpl@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x54e68, 0x17e70 bytes
    // dxgi.dll .text:0x54f58, 0x17e70 bytes
    // dxgi.dll .text:0x5fddc, 0x18b10 bytes
    // dxgi.dll .text:0x563e8, 0x17e70 bytes
    //
    _q3(sdk::unknown_ptr) get_frame_statistics_dwm_impl;
    
    // [GetFrameStatisticsImpl@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x54f3c, 0x17e70 bytes
    // dxgi.dll .text:0x5502c, 0x17e70 bytes
    // dxgi.dll .text:0x5ff64, 0x18b10 bytes
    // dxgi.dll .text:0x564bc, 0x17e70 bytes
    //
    _q4(sdk::unknown_ptr) get_frame_statistics_impl;
    
    // [GetGammaControl@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x55050, 0x17e70 bytes
    // dxgi.dll .text:0x55140, 0x17e70 bytes
    // dxgi.dll .text:0x60080, 0x18b10 bytes
    // dxgi.dll .text:0x565d0, 0x17e70 bytes
    //
    _q5(sdk::unknown_ptr) get_gamma_control;
    
    // [GetGammaControlCapabilities@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x55170, 0x17e70 bytes
    // dxgi.dll .text:0x55260, 0x17e70 bytes
    // dxgi.dll .text:0x601b0, 0x18b10 bytes
    // dxgi.dll .text:0x566f0, 0x17e70 bytes
    //
    _q6(sdk::unknown_ptr) get_gamma_control_capabilities;
    
    // [GetHMonitor@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23f40, 0x17e70 bytes
    // dxgi.dll .text:0x24240, 0x17e70 bytes
    // dxgi.dll .text:0x2b3c0, 0x18b10 bytes
    // dxgi.dll .text:0x25040, 0x17e70 bytes
    //
    _q7(sdk::unknown_ptr) get_h_monitor;
    
    // [GetModeList@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x553e4, 0x17e70 bytes
    // dxgi.dll .text:0x554d4, 0x17e70 bytes
    // dxgi.dll .text:0x60440, 0x18b10 bytes
    // dxgi.dll .text:0x56964, 0x17e70 bytes
    //
    _q8(sdk::unknown_ptr) get_mode_list;
    
    // [GetMonitorRect@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5594c, 0x17e70 bytes
    // dxgi.dll .text:0x55a3c, 0x17e70 bytes
    // dxgi.dll .text:0x609c4, 0x18b10 bytes
    // dxgi.dll .text:0x56ecc, 0x17e70 bytes
    //
    _q9(sdk::unknown_ptr) get_monitor_rect;
    
    // [GetMultiplaneOverlayCaps@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1b180, 0x17e70 bytes
    // dxgi.dll .text:0x1b490, 0x17e70 bytes
    // dxgi.dll .text:0x1ad40, 0x18b10 bytes
    // dxgi.dll .text:0x16a10, 0x17e70 bytes
    //
    _r0(sdk::unknown_ptr) get_multiplane_overlay_caps;
    
    // [GetMultiplaneOverlayCapsInternal@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17eb0, 0x17e70 bytes
    // dxgi.dll .text:0x18110, 0x17e70 bytes
    // dxgi.dll .text:0x11e28, 0x18b10 bytes
    // dxgi.dll .text:0x13620, 0x17e70 bytes
    //
    _r1(sdk::unknown_ptr) get_multiplane_overlay_caps_internal;
    
    // [GetOwnerDevice@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x55a2c, 0x17e70 bytes
    // dxgi.dll .text:0x55b1c, 0x17e70 bytes
    // dxgi.dll .text:0x60aa4, 0x18b10 bytes
    // dxgi.dll .text:0x56fac, 0x17e70 bytes
    //
    _r2(sdk::unknown_ptr) get_owner_device;
    
    // [GetParent@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb1e0, 0x17e70 bytes
    // dxgi.dll .text:0xb210, 0x17e70 bytes
    // dxgi.dll .text:0x25ae0, 0x18b10 bytes
    // dxgi.dll .text:0x1fa20, 0x17e70 bytes
    //
    _r3(sdk::unknown_ptr) get_parent;
    
    // [GetStereoCaps@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4160, 0x17e70 bytes
    // dxgi.dll .text:0x4160, 0x17e70 bytes
    // dxgi.dll .text:0x89e0, 0x18b10 bytes
    // dxgi.dll .text:0x5fe0, 0x17e70 bytes
    //
    _r4(sdk::unknown_ptr) get_stereo_caps;
    
    // [GetVBlankEvent@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23e30, 0x17e70 bytes
    // dxgi.dll .text:0x24130, 0x17e70 bytes
    // dxgi.dll .text:0x2b290, 0x18b10 bytes
    // dxgi.dll .text:0x24f30, 0x17e70 bytes
    //
    _r5(sdk::unknown_ptr) get_v_blank_event;
    
    // [HasDDAClient@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x55c00, 0x17e70 bytes
    // dxgi.dll .text:0x55cf0, 0x17e70 bytes
    // dxgi.dll .text:0x60cb0, 0x18b10 bytes
    // dxgi.dll .text:0x57180, 0x17e70 bytes
    //
    _r6(sdk::unknown_ptr) has_dda_client;
    
    // [IsGetDescCacheDirty@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x275fc, 0x17e70 bytes
    // dxgi.dll .text:0x2790c, 0x17e70 bytes
    // dxgi.dll .text:0x2ea40, 0x18b10 bytes
    // dxgi.dll .text:0x28d8c, 0x17e70 bytes
    //
    _r7(sdk::unknown_ptr) is_get_desc_cache_dirty;
    
    // [IsIndependentFlipSupported@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23d20, 0x17e70 bytes
    // dxgi.dll .text:0x24020, 0x17e70 bytes
    // dxgi.dll .text:0x2b070, 0x18b10 bytes
    // dxgi.dll .text:0x24e20, 0x17e70 bytes
    //
    _r8(sdk::unknown_ptr) is_independent_flip_supported;
    
    // [IsMPOAllowed@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1aa24, 0x17e70 bytes
    // dxgi.dll .text:0x1ad34, 0x17e70 bytes
    // dxgi.dll .text:0x1b6c8, 0x18b10 bytes
    // dxgi.dll .text:0x162b4, 0x17e70 bytes
    //
    _r9(sdk::unknown_ptr) is_mpo_allowed;
    
    // [IsRemoteXddmOutput@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1b380, 0x17e70 bytes
    // dxgi.dll .text:0x1b690, 0x17e70 bytes
    // dxgi.dll .text:0x1b1c8, 0x18b10 bytes
    // dxgi.dll .text:0x16c10, 0x17e70 bytes
    //
    _s0(sdk::unknown_ptr) is_remote_xddm_output;
    
    // [ModifyGammaControl@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x55da0, 0x17e70 bytes
    // dxgi.dll .text:0x55e90, 0x17e70 bytes
    // dxgi.dll .text:0x60e60, 0x18b10 bytes
    // dxgi.dll .text:0x57320, 0x17e70 bytes
    //
    _s1(sdk::unknown_ptr) modify_gamma_control;
    
    // [MonitorEnumProc@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa2f0, 0x17e70 bytes
    // dxgi.dll .text:0xa2f0, 0x17e70 bytes
    // dxgi.dll .text:0x23d10, 0x18b10 bytes
    // dxgi.dll .text:0x1eb00, 0x17e70 bytes
    //
    _s2(sdk::unknown_ptr) monitor_enum_proc;
    
    // [OverwriteRef@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x55f00, 0x17e70 bytes
    // dxgi.dll .text:0x55ff0, 0x17e70 bytes
    // dxgi.dll .text:0x60fc4, 0x18b10 bytes
    // dxgi.dll .text:0x57480, 0x17e70 bytes
    //
    _s3(sdk::unknown_ptr) overwrite_ref;
    
    // [ReleaseOwnership@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x560b0, 0x17e70 bytes
    // dxgi.dll .text:0x561a0, 0x17e70 bytes
    // dxgi.dll .text:0x61260, 0x18b10 bytes
    // dxgi.dll .text:0x57630, 0x17e70 bytes
    //
    _s4(sdk::unknown_ptr) release_ownership;
    
    // [ReleaseOwnershipImpl@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1fcf4, 0x17e70 bytes
    // dxgi.dll .text:0x1ffd4, 0x17e70 bytes
    // dxgi.dll .text:0x27148, 0x18b10 bytes
    // dxgi.dll .text:0x208d0, 0x17e70 bytes
    //
    _s5(sdk::unknown_ptr) release_ownership_impl;
    
    // [SetDisplaySurface@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x562b0, 0x17e70 bytes
    // dxgi.dll .text:0x563a0, 0x17e70 bytes
    // dxgi.dll .text:0x61490, 0x18b10 bytes
    // dxgi.dll .text:0x57830, 0x17e70 bytes
    //
    _s6(sdk::unknown_ptr) set_display_surface;
    
    // [SetDisplaySurfaceInternal@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x228b0, 0x17e70 bytes
    // dxgi.dll .text:0x22b90, 0x17e70 bytes
    // dxgi.dll .text:0x28354, 0x18b10 bytes
    // dxgi.dll .text:0x23830, 0x17e70 bytes
    //
    _s7(sdk::unknown_ptr) set_display_surface_internal;
    
    // [SetGamma@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x56398, 0x17e70 bytes
    // dxgi.dll .text:0x56488, 0x17e70 bytes
    // dxgi.dll .text:0x61574, 0x18b10 bytes
    // dxgi.dll .text:0x57918, 0x17e70 bytes
    //
    _s8(sdk::unknown_ptr) set_gamma;
    
    // [SetGammaControl@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x56430, 0x17e70 bytes
    // dxgi.dll .text:0x56520, 0x17e70 bytes
    // dxgi.dll .text:0x61620, 0x18b10 bytes
    // dxgi.dll .text:0x579b0, 0x17e70 bytes
    //
    _s9(sdk::unknown_ptr) set_gamma_control;
    
    // [SetHudSupported@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1b2ec, 0x17e70 bytes
    // dxgi.dll .text:0x1b5fc, 0x17e70 bytes
    // dxgi.dll .text:0x1af70, 0x18b10 bytes
    // dxgi.dll .text:0x16b7c, 0x17e70 bytes
    //
    _t0(sdk::unknown_ptr) set_hud_supported;
    
    // [SetStretchSupported@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x568b0, 0x17e70 bytes
    // dxgi.dll .text:0x569a0, 0x17e70 bytes
    // dxgi.dll .text:0x61aa0, 0x18b10 bytes
    // dxgi.dll .text:0x57e30, 0x17e70 bytes
    //
    _t1(sdk::unknown_ptr) set_stretch_supported;
    
    // [SetSyncRefreshCountWaitTarget@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x58e0, 0x17e70 bytes
    // dxgi.dll .text:0x58e0, 0x17e70 bytes
    // dxgi.dll .text:0x20920, 0x18b10 bytes
    // dxgi.dll .text:0x1a490, 0x17e70 bytes
    //
    _t2(sdk::unknown_ptr) set_sync_refresh_count_wait_target;
    
    // [SupportsOverlays@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x38d0, 0x17e70 bytes
    // dxgi.dll .text:0x38d0, 0x17e70 bytes
    // dxgi.dll .text:0x8550, 0x18b10 bytes
    // dxgi.dll .text:0x5750, 0x17e70 bytes
    //
    _t3(sdk::unknown_ptr) supports_overlays;
    
    // [TakeOwnership@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x56940, 0x17e70 bytes
    // dxgi.dll .text:0x56a30, 0x17e70 bytes
    // dxgi.dll .text:0x61b40, 0x18b10 bytes
    // dxgi.dll .text:0x57ec0, 0x17e70 bytes
    //
    _t4(sdk::unknown_ptr) take_ownership;
    
    // [TakeOwnershipImpl@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x22564, 0x17e70 bytes
    // dxgi.dll .text:0x22844, 0x17e70 bytes
    // dxgi.dll .text:0x2a0bc, 0x18b10 bytes
    // dxgi.dll .text:0x234e4, 0x17e70 bytes
    //
    _t5(sdk::unknown_ptr) take_ownership_impl;
    
    // [TakeRef@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x16c10, 0x17e70 bytes
    // dxgi.dll .text:0x16e70, 0x17e70 bytes
    // dxgi.dll .text:0x25fe0, 0x18b10 bytes
    // dxgi.dll .text:0x12380, 0x17e70 bytes
    //
    _t6(sdk::unknown_ptr) take_ref;
    
    // [WaitForVBlank@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5d50, 0x17e70 bytes
    // dxgi.dll .text:0x5d50, 0x17e70 bytes
    // dxgi.dll .text:0x20b30, 0x18b10 bytes
    // dxgi.dll .text:0x1a900, 0x17e70 bytes
    //
    _t7(sdk::unknown_ptr) wait_for_v_blank;
    
    // [WaitForVBlankOrObjects@CDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1f130, 0x17e70 bytes
    // dxgi.dll .text:0x1f440, 0x17e70 bytes
    // dxgi.dll .text:0x26fb0, 0x18b10 bytes
    // dxgi.dll .text:0x20dc0, 0x17e70 bytes
    //
    _t8(sdk::unknown_ptr) wait_for_v_blank_or_objects;
};
#include "magic/api.end.hpp"
