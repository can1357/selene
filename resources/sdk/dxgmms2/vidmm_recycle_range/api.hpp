#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_recycle_range
{
    // [AccessZeroTransition@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x78f88, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80840, 0x20ba bytes
    // dxgmms2.sys PAGE:0x79578, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) access_zero_transition;
    
    // [AccumulateZeroingState@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x79c34, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7df50, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7a224, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) accumulate_zeroing_state;
    
    // [Commit@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44c7c, 0x158b bytes
    // dxgmms2.sys PAGE:0x777b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7ebc4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x77da0, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) commit;
    
    // [DebouncedDecommit@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44a40, 0x158b bytes
    // dxgmms2.sys PAGE:0x75cf8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c71c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x762e8, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) debounced_decommit;
    
    // [DebouncedUnlock@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4494c, 0x158b bytes
    // dxgmms2.sys PAGE:0x76030, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7cd48, 0x20ba bytes
    // dxgmms2.sys PAGE:0x76620, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) debounced_unlock;
    
    // [Decommit@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44bf8, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2080, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7e714, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2650, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) decommit;
    
    // [FinalizedUnlock@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44884, 0x158b bytes
    // dxgmms2.sys PAGE:0x5e008, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7bf44, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5e5f4, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) finalized_unlock;
    
    // [GetNextRange@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44da0, 0x158b bytes
    // dxgmms2.sys PAGE:0x78740, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x811dc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78d30, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) get_next_range;
    
    // [GetPreviousRange@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44dbc, 0x158b bytes
    // dxgmms2.sys PAGE:0x75e6c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x81200, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7645c, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) get_previous_range;
    
    // [Init@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x444dc, 0x158b bytes
    // dxgmms2.sys PAGE:0x83824, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80540, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83e14, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) init;
    
    // [Lock@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44b30, 0x158b bytes
    // dxgmms2.sys PAGE:0x78b24, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7d978, 0x20ba bytes
    // dxgmms2.sys PAGE:0x79114, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) lock;
    
    // [SplitAt@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x445c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x77e60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80260, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78450, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) split_at;
    
    // [SplitMiddle@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94df8, 0x158b bytes
    // dxgmms2.sys PAGE:0xc3684, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7714, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc3c54, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) split_middle;
    
    // [Transition@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44570, 0x158b bytes
    // dxgmms2.sys PAGE:0x7ab4c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7ed80, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7b13c, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) transition;
    
    // [Unlock@VIDMM_RECYCLE_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x44ae4, 0x158b bytes
    // dxgmms2.sys PAGE:0x787f8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7d670, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78de8, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) unlock;
};
#include "magic/api.end.hpp"
