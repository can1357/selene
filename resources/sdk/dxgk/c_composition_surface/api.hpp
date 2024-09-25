#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_composition_surface
{
    // [GetSwapChainRealizationInfo@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x10b10, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_swap_chain_realization_info;
    
    // [NotifyTokenCompleted@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0xeb98, 0x762b0 bytes
    // dxgkrnl.sys .text:0xf028, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) notify_token_completed;
    
    // [PreNotifyPendingFlipPresent@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x638fc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x63a8c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) pre_notify_pending_flip_present;
    
    // [GetHDRMetaDataType@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11f44, 0x762b0 bytes
    // dxgkrnl.sys .text:0xfd48, 0x84380 bytes
    // dxgkrnl.sys .text:0x123d4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_hdr_meta_data_type;
    
    // [InsertCompletedToken@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x63618, 0x762b0 bytes
    // dxgkrnl.sys .text:0x77e98, 0x84380 bytes
    // dxgkrnl.sys .text:0x637a8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) insert_completed_token;
    
    // [OpenLifetimeDirtyRegion@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x101b8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x110e4, 0x84380 bytes
    // dxgkrnl.sys .text:0x10648, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) open_lifetime_dirty_region;
    
    // [Pair@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x63728, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7803c, 0x84380 bytes
    // dxgkrnl.sys .text:0x638b8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) pair;
    
    // [PairBind@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6383c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x78168, 0x84380 bytes
    // dxgkrnl.sys .text:0x639cc, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) pair_bind;
    
    // [PairedUnBind@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x63460, 0x762b0 bytes
    // dxgkrnl.sys .text:0x77d70, 0x84380 bytes
    // dxgkrnl.sys .text:0x635f0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) paired_un_bind;
    
    // [SetIndependentFlip@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1cdbc, 0x762b0 bytes
    // dxgkrnl.sys .text:0xf83c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1d43c, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) set_independent_flip;
    
    // [UnPair@CCompositionSurface]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x639c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x783c4, 0x84380 bytes
    // dxgkrnl.sys .text:0x63b54, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) un_pair;
};
#include "magic/api.end.hpp"
