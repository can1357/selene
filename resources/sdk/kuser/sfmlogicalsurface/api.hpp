#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::sfmlogicalsurface
{
    // [vDirtyRegionAccum@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x62c50, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) v_dirty_region_accum;
    
    // [vsoShapeSize@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x62c68, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) vso_shape_size;
    
    // [AdapterLuid@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62cb0, 0x13864 bytes
    // win32kfull.sys .text:0x14dfd8, 0x1596d bytes
    // win32kfull.sys .text:0x1426c4, 0x1659e bytes
    // win32kfull.sys .text:0x14ef18, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) adapter_luid;
    
    // [bDeviceBitmap@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62d10, 0x13864 bytes
    // win32kfull.sys .text:0x45e94, 0x1596d bytes
    // win32kfull.sys .text:0xb91e4, 0x1659e bytes
    // win32kfull.sys .text:0x462a4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_device_bitmap;
    
    // [CleanupRegions@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62d3c, 0x13864 bytes
    // win32kfull.sys .text:0xce384, 0x1596d bytes
    // win32kfull.sys .text:0xb44e0, 0x1659e bytes
    // win32kfull.sys .text:0xcf044, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) cleanup_regions;
    
    // [CleanupShape@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62d90, 0x13864 bytes
    // win32kfull.sys .text:0xd07b8, 0x1596d bytes
    // win32kfull.sys .text:0x107344, 0x1659e bytes
    // win32kfull.sys .text:0xd1478, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) cleanup_shape;
    
    // [CreateHLSURFClone@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x48c2c, 0x13864 bytes
    // win32kfull.sys .text:0xcdb50, 0x1596d bytes
    // win32kfull.sys .text:0xb7858, 0x1659e bytes
    // win32kfull.sys .text:0xce810, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) create_hlsurf_clone;
    
    // [DeInitialize@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x632d4, 0x13864 bytes
    // win32kfull.sys .text:0xce2f0, 0x1596d bytes
    // win32kfull.sys .text:0xb444c, 0x1659e bytes
    // win32kfull.sys .text:0xcefb0, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) de_initialize;
    
    // [GetRedirectionInfo@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x63060, 0x13864 bytes
    // win32kfull.sys .text:0xc88b8, 0x1596d bytes
    // win32kfull.sys .text:0xebeb4, 0x1659e bytes
    // win32kfull.sys .text:0xc9578, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) get_redirection_info;
    
    // [GetSoSurfaceData@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x631b0, 0x13864 bytes
    // win32kfull.sys .text:0x47124, 0x1596d bytes
    // win32kfull.sys .text:0xb8c34, 0x1659e bytes
    // win32kfull.sys .text:0x47534, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) get_so_surface_data;
    
    // [Initialize@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x63358, 0x13864 bytes
    // win32kfull.sys .text:0xd0130, 0x1596d bytes
    // win32kfull.sys .text:0xb3ce8, 0x1659e bytes
    // win32kfull.sys .text:0xd0df0, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) initialize;
    
    // [OwnsSurfaceCleanup@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62dc8, 0x13864 bytes
    // win32kfull.sys .text:0xce468, 0x1596d bytes
    // win32kfull.sys .text:0xb45c4, 0x1659e bytes
    // win32kfull.sys .text:0xcf128, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) owns_surface_cleanup;
    
    // [SetShape@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62e18, 0x13864 bytes
    // win32kfull.sys .text:0xce4b0, 0x1596d bytes
    // win32kfull.sys .text:0xb7000, 0x1659e bytes
    // win32kfull.sys .text:0xcf170, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) set_shape;
    
    // [SignalOnDirty@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x63124, 0x13864 bytes
    // win32kfull.sys .text:0xcc7a4, 0x1596d bytes
    // win32kfull.sys .text:0x104d44, 0x1659e bytes
    // win32kfull.sys .text:0xcd464, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) signal_on_dirty;
    
    // [StartSfmStateTracking@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62fe8, 0x13864 bytes
    // win32kfull.sys .text:0xc8828, 0x1596d bytes
    // win32kfull.sys .text:0xebf4c, 0x1659e bytes
    // win32kfull.sys .text:0xc94e8, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) start_sfm_state_tracking;
    
    // [StopSfmStateTracking@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62f7c, 0x13864 bytes
    // win32kfull.sys .text:0xd0678, 0x1596d bytes
    // win32kfull.sys .text:0xb8248, 0x1659e bytes
    // win32kfull.sys .text:0xd1338, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) stop_sfm_state_tracking;
    
    // [uiDxPresentFlags@SFMLOGICALSURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62c88, 0x13864 bytes
    // win32kfull.sys .text:0xbb944, 0x1596d bytes
    // win32kfull.sys .text:0x8000, 0x1659e bytes
    // win32kfull.sys .text:0xbc4b4, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) ui_dx_present_flags;
};
#include "magic/api.end.hpp"
