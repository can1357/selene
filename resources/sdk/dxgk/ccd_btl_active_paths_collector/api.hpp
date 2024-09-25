#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_btl_active_paths_collector
{
    // [CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1203d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b438, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe9f48, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) collect_active_paths;
    
    // [CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1adf88, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e7f5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ab658, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e7ccc, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) collect_paths_from_legacy_vid_pn;
    
    // [_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x86b14, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1204ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b54c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xea05c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) fill_active_dwm_clone_group_info;
    
    // [_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x86cf8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11f868, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17ad18, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe93b0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) process_vid_pn;
    
    // [_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x86da8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1207cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b834, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xea33c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) process_vid_pn_path;
    
    // [_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x86aa0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x120754, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b798, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xea2c4, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) sort_paths_modality_by_priority_order;
    
    // [_SortPathsModalityByPriorityOrderQSortCallback@CCD_BTL_ACTIVE_PATHS_COLLECTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xca3b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x148ed0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d9120, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14c510, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) sort_paths_modality_by_priority_order_q_sort_callback;
};
#include "magic/api.end.hpp"
