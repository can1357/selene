#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_cpu_host_aperture
{
    // [BlockRange@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x28f04, 0x1c52 bytes
    // dxgmms2.sys .text:0x32df4, 0x20ba bytes
    // dxgmms2.sys .text:0x28e84, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) block_range;
    
    // [ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x295bc, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a44c, 0x20ba bytes
    // dxgmms2.sys .text:0x2953c, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) release_range_internal;
    
    // [UnblockRange@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x29628, 0x1c52 bytes
    // dxgmms2.sys .text:0x32f8c, 0x20ba bytes
    // dxgmms2.sys .text:0x295a8, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) unblock_range;
    
    // [AcquireRange@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x123fc, 0x158b bytes
    // dxgmms2.sys .text:0x28c64, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a2ec, 0x20ba bytes
    // dxgmms2.sys .text:0x28be4, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) acquire_range;
    
    // [BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12734, 0x158b bytes
    // dxgmms2.sys .text:0x28f54, 0x1c52 bytes
    // dxgmms2.sys .text:0x190b0, 0x20ba bytes
    // dxgmms2.sys .text:0x28ed4, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) build_mdl_from_range;
    
    // [??0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12fe0, 0x158b bytes
    // dxgmms2.sys .text:0x28c0c, 0x1c52 bytes
    // dxgmms2.sys .text:0x32d9c, 0x20ba bytes
    // dxgmms2.sys .text:0x28b8c, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [CopyRangeToArray@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12924, 0x158b bytes
    // dxgmms2.sys .text:0x290c8, 0x1c52 bytes
    // dxgmms2.sys .text:0x19c7c, 0x20ba bytes
    // dxgmms2.sys .text:0x29048, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) copy_range_to_array;
    
    // [??1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x20118, 0x158b bytes
    // dxgmms2.sys .text:0x28c3c, 0x1c52 bytes
    // dxgmms2.sys .text:0x32dcc, 0x20ba bytes
    // dxgmms2.sys .text:0x28bbc, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) destroy_instance;
    
    // [Init@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12f48, 0x158b bytes
    // dxgmms2.sys .text:0x29168, 0x1c52 bytes
    // dxgmms2.sys .text:0x32e40, 0x20ba bytes
    // dxgmms2.sys .text:0x290e8, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) init;
    
    // [MapRange@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x124fc, 0x158b bytes
    // dxgmms2.sys .text:0x29224, 0x1c52 bytes
    // dxgmms2.sys .text:0x19a9c, 0x20ba bytes
    // dxgmms2.sys .text:0x291a4, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) map_range;
    
    // [OfferRange@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12334, 0x158b bytes
    // dxgmms2.sys .text:0x29500, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a3e4, 0x20ba bytes
    // dxgmms2.sys .text:0x29480, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) offer_range;
    
    // [ReclaimRange@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12fd0, 0x158b bytes
    // dxgmms2.sys .text:0x2954c, 0x1c52 bytes
    // dxgmms2.sys .text:0x32f38, 0x20ba bytes
    // dxgmms2.sys .text:0x294cc, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) reclaim_range;
    
    // [ReleaseRange@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12398, 0x158b bytes
    // dxgmms2.sys .text:0x295a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a430, 0x20ba bytes
    // dxgmms2.sys .text:0x29520, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) release_range;
    
    // [UnmapRange@VIDMM_CPU_HOST_APERTURE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12834, 0x158b bytes
    // dxgmms2.sys .text:0x29648, 0x1c52 bytes
    // dxgmms2.sys .text:0x19fc0, 0x20ba bytes
    // dxgmms2.sys .text:0x295c8, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) unmap_range;
};
#include "magic/api.end.hpp"
