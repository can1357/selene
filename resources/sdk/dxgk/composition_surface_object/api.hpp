#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::composition_surface_object
{
    // [??0CompositionSurfaceObject@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1c8b8, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [GetEarlyTokenSync@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x119f0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) get_early_token_sync;
    
    // [PairedQueryStats@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x77d10, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) paired_query_stats;
    
    // [Create@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x631e4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x77a94, 0x84380 bytes
    // dxgkrnl.sys .text:0x63374, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) create;
    
    // [GetPairedSurfaceInfo@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x63230, 0x762b0 bytes
    // dxgkrnl.sys .text:0x77ae0, 0x84380 bytes
    // dxgkrnl.sys .text:0x633c0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_paired_surface_info;
    
    // [InsertCompletedToken@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x632c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x77b70, 0x84380 bytes
    // dxgkrnl.sys .text:0x63450, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) insert_completed_token;
    
    // [Pair@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4abc0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5b920, 0x84380 bytes
    // dxgkrnl.sys .text:0x4ae10, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) pair;
    
    // [PairedBind@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x633e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x77c90, 0x84380 bytes
    // dxgkrnl.sys .text:0x63570, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) paired_bind;
    
    // [PairedUnBind@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x63480, 0x762b0 bytes
    // dxgkrnl.sys .text:0x77d90, 0x84380 bytes
    // dxgkrnl.sys .text:0x63610, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) paired_un_bind;
    
    // [SetPaired@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a740, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb60, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adc0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) set_paired;
    
    // [SignalGpuFence@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1b8c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x10b88, 0x84380 bytes
    // dxgkrnl.sys .text:0x1bf40, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) signal_gpu_fence;
    
    // [UnPairAndRelease@CompositionSurfaceObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x63530, 0x762b0 bytes
    // dxgkrnl.sys .text:0x77e40, 0x84380 bytes
    // dxgkrnl.sys .text:0x636c0, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) un_pair_and_release;
};
#include "magic/api.end.hpp"
