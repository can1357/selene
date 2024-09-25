#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_vis_rgn_tracker_prop
{
    // [FreeTrackedRegion@CVisRgnTrackerProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xbc300, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) free_tracked_region;
    
    // [RemoveTracker@CVisRgnTrackerProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xbb100, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) remove_tracker;
    
    // [Delete@CVisRgnTrackerProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbdfa0, 0x1596d bytes
    // win32kfull.sys .text:0xbc270, 0x1659e bytes
    // win32kfull.sys .text:0xbeb10, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) _delete;
    
    // [FreeTrackedRegions@CVisRgnTrackerProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbdff8, 0x1596d bytes
    // win32kfull.sys .text:0xbc2cc, 0x1659e bytes
    // win32kfull.sys .text:0xbeb68, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) free_tracked_regions;
    
    // [GetAtom@CVisRgnTrackerProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x129350, 0x1596d bytes
    // win32kfull.sys .text:0x119910, 0x1659e bytes
    // win32kfull.sys .text:0x12a290, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) get_atom;
    
    // [MarkDirty@CVisRgnTrackerProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbdf54, 0x1596d bytes
    // win32kfull.sys .text:0x8acf0, 0x1659e bytes
    // win32kfull.sys .text:0xbeac4, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) mark_dirty;
    
    // [s_atom@CVisRgnTrackerProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x339de8, 0x1596d bytes
    // win32kfull.sys .data:0x338020, 0x1659e bytes
    // win32kfull.sys .data:0x339de8, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) s_atom;
    
    // [s_DirtyList@CVisRgnTrackerProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32b278, 0x1596d bytes
    // win32kfull.sys .data:0x329240, 0x1659e bytes
    // win32kfull.sys .data:0x32b278, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) s_dirty_list;
    
    // [Update@CVisRgnTrackerProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4e7fc, 0x1596d bytes
    // win32kfull.sys .text:0xbbb0c, 0x1659e bytes
    // win32kfull.sys .text:0x4ec1c, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) update;
    
    // [UpdateTrackerRegion@CVisRgnTrackerProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4e8e8, 0x1596d bytes
    // win32kfull.sys .text:0xbbbf4, 0x1659e bytes
    // win32kfull.sys .text:0x4ed08, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) update_tracker_region;
};
#include "magic/api.end.hpp"
