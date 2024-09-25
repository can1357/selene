#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_config
{
    // [??1CInputConfig@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x89334, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [IsConfigured@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1fc140, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) is_configured;
    
    // [BindMouse@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bca44, 0x243e0 bytes
    // win32kbase.sys .text:0x1fbb50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ba824, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) bind_mouse;
    
    // [CleanupInputSpaces@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bcac0, 0x243e0 bytes
    // win32kbase.sys .text:0x1fbbd4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ba8a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) cleanup_input_spaces;
    
    // [_ConfigureInputSpace@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d3bc, 0x243e0 bytes
    // win32kbase.sys .text:0x6425c, 0x27ef0 bytes
    // win32kbase.sys .text:0x567c8, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) configure_input_space;
    
    // [ConfigureInputSpace@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bcbd0, 0x243e0 bytes
    // win32kbase.sys .text:0x1fbcfc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ba9b0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) configure_input_space_;
    
    // [??0CInputConfig@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26794, 0x243e0 bytes
    // win32kbase.sys .text:0x85ac4, 0x27ef0 bytes
    // win32kbase.sys .text:0x793b4, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) construct_instance;
    
    // [_CreateLegacyInputSpace@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d018, 0x243e0 bytes
    // win32kbase.sys .text:0x63ef0, 0x27ef0 bytes
    // win32kbase.sys .text:0x56424, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) create_legacy_input_space;
    
    // [_EnsureInputSpace@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cff8, 0x243e0 bytes
    // win32kbase.sys .text:0x64db0, 0x27ef0 bytes
    // win32kbase.sys .text:0x56404, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) ensure_input_space;
    
    // [_FindDefaultInputSpace@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dd30, 0x243e0 bytes
    // win32kbase.sys .text:0x64808, 0x27ef0 bytes
    // win32kbase.sys .text:0x56f3c, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) find_default_input_space;
    
    // [_FindRegionForDisplay@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc0e24, 0x243e0 bytes
    // win32kbase.sys .text:0xd5afc, 0x27ef0 bytes
    // win32kbase.sys .text:0xba554, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) find_region_for_display;
    
    // [_FreeInputSpace@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x27194, 0x243e0 bytes
    // win32kbase.sys .text:0x67df0, 0x27ef0 bytes
    // win32kbase.sys .text:0x539b8, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) free_input_space;
    
    // [Initialize@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x265e4, 0x243e0 bytes
    // win32kbase.sys .text:0x85728, 0x27ef0 bytes
    // win32kbase.sys .text:0x79208, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) initialize;
    
    // [_NotifyExternalComponents@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cc94, 0x243e0 bytes
    // win32kbase.sys .text:0x64e80, 0x27ef0 bytes
    // win32kbase.sys .text:0x55a90, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) notify_external_components;
    
    // [OnDisplayStateChange@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cc24, 0x243e0 bytes
    // win32kbase.sys .text:0x65414, 0x27ef0 bytes
    // win32kbase.sys .text:0x55884, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) on_display_state_change;
    
    // [_ProcessInputSpace@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d840, 0x243e0 bytes
    // win32kbase.sys .text:0x64558, 0x27ef0 bytes
    // win32kbase.sys .text:0x56a4c, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) process_input_space;
    
    // [slock@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25e3c0, 0x243e0 bytes
    // win32kbase.sys .data:0x2b3180, 0x27ef0 bytes
    // win32kbase.sys .data:0x25b3f0, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) slock;
    
    // [Validate@CInputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bd018, 0x243e0 bytes
    // win32kbase.sys .text:0x1fc200, 0x27ef0 bytes
    // win32kbase.sys .text:0x1badf8, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) validate;
};
#include "magic/api.end.hpp"
