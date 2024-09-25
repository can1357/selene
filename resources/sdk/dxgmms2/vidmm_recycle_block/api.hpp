#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_recycle_block
{
    // [NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x12fb8, 0x1c52 bytes
    // dxgmms2.sys .text:0x12fb8, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) notify_multirange_event;
    
    // [CleanupFreeBlock@VIDMM_RECYCLE_BLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x7845c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8092c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x78a4c, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) cleanup_free_block;
    
    // [CombineFreedRanges@VIDMM_RECYCLE_BLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc1eb8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe69bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc2488, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) combine_freed_ranges;
    
    // [CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x75e90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x810c8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x76480, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) combine_freed_scan_from_range;
    
    // [CreateHistoryProxy@VIDMM_RECYCLE_BLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27da8, 0x1c52 bytes
    // dxgmms2.sys .text:0x31ed8, 0x20ba bytes
    // dxgmms2.sys .text:0x27d28, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) create_history_proxy;
    
    // [NotifyRangeEvent@VIDMM_RECYCLE_BLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x34f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x1584, 0x20ba bytes
    // dxgmms2.sys .text:0x34f4, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) notify_range_event;
    
    // [Allocate@VIDMM_RECYCLE_BLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40630, 0x158b bytes
    // dxgmms2.sys PAGE:0x83b30, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c0e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84120, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) allocate;
    
    // [??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40a7c, 0x158b bytes
    // dxgmms2.sys PAGE:0x83d68, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c338, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84358, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) construct_instance;
    
    // [??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x40960, 0x158b bytes
    // dxgmms2.sys PAGE:0x5e1b8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7bd74, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5e7a8, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) destroy_instance;
    
    // [ReportStates@VIDMM_RECYCLE_BLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94ce4, 0x158b bytes
    // dxgmms2.sys PAGE:0xc2b68, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe73f8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc3138, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) report_states;
    
    // [ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x407e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7839c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80874, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7898c, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) shrink_on_tail_range_free;
};
#include "magic/api.end.hpp"
