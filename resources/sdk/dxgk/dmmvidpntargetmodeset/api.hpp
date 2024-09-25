#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpntargetmodeset
{
    // [AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x77b4c, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) acquire_raw_ddi_enumerator_cached_mode_info;
    
    // [AcquireCachedModeInfoFromTargetMode@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ab340, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e4b84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a9488, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e48f4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_cached_mode_info_from_target_mode;
    
    // [AddMode@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x77be4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10bd04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1af6c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x117d34, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) add_mode;
    
    // [??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3ab8, 0x60098 bytes
    // dxgkrnl.sys .text:0x34cc, 0x762b0 bytes
    // dxgkrnl.sys .text:0xcab8, 0x84380 bytes
    // dxgkrnl.sys .text:0x486c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [FindBestMatch@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3d00, 0x60098 bytes
    // dxgkrnl.sys .text:0x13194, 0x762b0 bytes
    // dxgkrnl.sys .text:0x68ee4, 0x84380 bytes
    // dxgkrnl.sys .text:0x13270, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) find_best_match;
    
    // [FindClosestTargetMode@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x33160, 0x60098 bytes
    // dxgkrnl.sys .text:0x59db8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69a84, 0x84380 bytes
    // dxgkrnl.sys .text:0x59f48, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) find_closest_target_mode;
    
    // [GetFirstMode@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2a10, 0x60098 bytes
    // dxgkrnl.sys .text:0x190f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1e020, 0x84380 bytes
    // dxgkrnl.sys .text:0x19560, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_first_mode;
    
    // [GetNextMode@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x25c0, 0x60098 bytes
    // dxgkrnl.sys .text:0x9a80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5070, 0x84380 bytes
    // dxgkrnl.sys .text:0x23e0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_next_mode;
    
    // [GetPinnedMode@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12920, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a850, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20300, 0x84380 bytes
    // dxgkrnl.sys .text:0x1aed0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_pinned_mode;
    
    // [PinMode@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x77f10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10decc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a81d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x119efc, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) pin_mode;
    
    // [ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x77e88, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x100114, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1af66c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10c0e4, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) release_ddi_enumerator;
    
    // [Serialize@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ab444, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e4cc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a9594, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e4a30, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) serialize;
    
    // [UnpinMode@DMMVIDPNTARGETMODESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3ccc, 0x60098 bytes
    // dxgkrnl.sys .text:0x17ed8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1cca4, 0x84380 bytes
    // dxgkrnl.sys .text:0x18668, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) unpin_mode;
};
#include "magic/api.end.hpp"
