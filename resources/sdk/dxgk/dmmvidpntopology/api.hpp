#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpntopology
{
    // [RemoveAllPaths@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xebb38, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) remove_all_paths;
    
    // [RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xebba8, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) restore_present_paths_from_lkg_topology;
    
    // [SaveAsLkg@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x7a4c8, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) save_as_lkg;
    
    // [UpdatePathSupportInfo@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x7a1b8, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) update_path_support_info;
    
    // [GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x13936c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e1ff4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13c4fc, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_display_mode_from_vid_pn_source;
    
    // [GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12e718, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17dfbc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12b400, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_most_important_path_from_source;
    
    // [GetPathFromTarget@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xafe4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3bdc, 0x84380 bytes
    // dxgkrnl.sys .text:0xaecc, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_path_from_target;
    
    // [AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a8fe8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e19b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a60ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e1720, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) acquire_raw_ddi_enumerator_cached_path_info;
    
    // [AddPath@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7a944, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11e674, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x179d68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x125db4, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) add_path;
    
    // [??0DMMVIDPNTOPOLOGY@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4db0, 0x60098 bytes
    // dxgkrnl.sys .text:0x8da0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x64f4, 0x84380 bytes
    // dxgkrnl.sys .text:0x9cb0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) construct_instance;
    
    // [CreateNewPath@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7acb4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1390a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a616c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13c238, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) create_new_path;
    
    // [??1DMMVIDPNTOPOLOGY@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4e8c, 0x60098 bytes
    // dxgkrnl.sys .text:0x8cbc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6410, 0x84380 bytes
    // dxgkrnl.sys .text:0x9bcc, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) destroy_instance;
    
    // [EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x79e8c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11ea4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a130, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12618c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) enum_path_targets_from_source;
    
    // [FindByValue@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4f50, 0x60098 bytes
    // dxgkrnl.sys .text:0x17490, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x17c20, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) find_by_value;
    
    // [FindFirstAvailableTarget@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a90a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e1a88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a6424, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e17f8, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) find_first_available_target;
    
    // [FindPath@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4f58, 0x60098 bytes
    // dxgkrnl.sys .text:0x65b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6828, 0x84380 bytes
    // dxgkrnl.sys .text:0x7960, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) find_path;
    
    // [GetFirstPath@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4fd0, 0x60098 bytes
    // dxgkrnl.sys .text:0x16d00, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1b050, 0x84380 bytes
    // dxgkrnl.sys .text:0x17490, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) get_first_path;
    
    // [GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7ac18, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11ec34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a224, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12628c, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) get_lowest_avail_importance_ordinal;
    
    // [GetMostImportantPath@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7ac70, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x153718, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dd398, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1530f0, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) get_most_important_path;
    
    // [GetNextPath@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4fb0, 0x60098 bytes
    // dxgkrnl.sys .text:0x17460, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20cb0, 0x84380 bytes
    // dxgkrnl.sys .text:0x17bf0, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) get_next_path;
    
    // [GetNumPathsFromSource@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7aeac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x130320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16c594, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x127da8, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) get_num_paths_from_source;
    
    // [GetPathSourceFromTarget@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7a8dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10e00c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a8334, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11a03c, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) get_path_source_from_target;
    
    // [Invalidate@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x32ed0, 0x60098 bytes
    // dxgkrnl.sys .text:0x59a94, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69420, 0x84380 bytes
    // dxgkrnl.sys .text:0x59c24, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) invalidate;
    
    // [IsConstructed@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4d80, 0x60098 bytes
    // dxgkrnl.sys .text:0x180f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1cf60, 0x84380 bytes
    // dxgkrnl.sys .text:0x18880, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) is_constructed;
    
    // [IsSourceInTopology@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4fe4, 0x60098 bytes
    // dxgkrnl.sys .text:0xb6d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5664, 0x84380 bytes
    // dxgkrnl.sys .text:0xa8d8, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) is_source_in_topology;
    
    // [IsTargetInTopology@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5018, 0x60098 bytes
    // dxgkrnl.sys .text:0x9080, 0x762b0 bytes
    // dxgkrnl.sys .text:0xae4c, 0x84380 bytes
    // dxgkrnl.sys .text:0x9f90, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) is_target_in_topology;
    
    // [LogPermissionChange@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7a130, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1448e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d41d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1477f0, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) log_permission_change;
    
    // [ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7a458, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1013a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d25f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10d378, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) release_ddi_enumerator;
    
    // [RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7a818, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13d17c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a65e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13be38, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) remove_all_paths_from_source;
    
    // [RemovePath@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7aaec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12f9d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x178c58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x126628, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) remove_path;
    
    // [SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a9234, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e1c94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a6718, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e1a04, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) serialize_cofunc_paths_modality_from_pinned_source;
    
    // [_SetContainingVidPn@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4efc, 0x60098 bytes
    // dxgkrnl.sys .text:0x8fe8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x67a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x9ef8, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) set_containing_vid_pn;
    
    // [UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a9780, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e2298, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a6c68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e2008, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) unpin_path_modality_from_source;
};
#include "magic/api.end.hpp"
