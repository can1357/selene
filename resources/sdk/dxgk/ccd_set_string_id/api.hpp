#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_set_string_id
{
    // [_CcdFreeUnicodeString@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xb9cb4, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) ccd_free_unicode_string;
    
    // [_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb9cd8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x122ab8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17e7e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe5fe8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) ccd_create_key_from_set_id_str;
    
    // [_Cleanup@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb56cc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x132b80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bf3f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1360e4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) cleanup;
    
    // [_CompareDescriptors@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1accf4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ebb20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ab4d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2eb890, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) compare_descriptors;
    
    // [??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb53dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x121e90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17cd90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe7c90, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb5b00, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x122f68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bf500, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe5c08, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance_;
    
    // [_CopyString@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb5b5c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1221bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17d0d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe7fbc, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) copy_string;
    
    // [??1CCD_SET_STRING_ID@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb5538, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x132b68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bf3dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1360cc, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) destroy_instance;
    
    // [FindPathByMonitorId@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac2d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2eb94c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ab338, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2eb6bc, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) find_path_by_monitor_id;
    
    // [GetConnectedSetStr@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb5490, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x121d4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17cc4c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe7b4c, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_connected_set_str;
    
    // [_GetDescriptorLength@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb5540, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x121e68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17cd68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe7c68, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) get_descriptor_length;
    
    // [IsEnabledSetEqual@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb5858, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x123f64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c04b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe4bac, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) is_enabled_set_equal;
    
    // [IsSimilarTopology@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ac5b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2eba24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ab400, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2eb794, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) is_similar_topology;
    
    // [IsSubsetOf@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb5920, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x121b3c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a6c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe7948, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) is_subset_of;
    
    // [_ParseMonitorDescriptors@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb556c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x121f48, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17ce48, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe7d48, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) parse_monitor_descriptors;
    
    // [QueryCloneInfo@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb5734, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x124960, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1783bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe416c, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) query_clone_info;
    
    // [QueryMonitorId@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb5374, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x121dfc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17ccfc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe7bfc, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) query_monitor_id;
    
    // [_QueryStringHash@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb9ea8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x120ef4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17bf38, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe6d00, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) query_string_hash;
    
    // [QueryUnicodeMonitorId@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb57d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12459c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17888c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe45b8, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) query_unicode_monitor_id;
    
    // [_ReallocString@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb5b9c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x122204, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17d11c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe8004, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) realloc_string;
    
    // [_StringCompare@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xcf7c4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x124564, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c0574, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe4630, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) string_compare;
    
    // [_TryToMapCloneGroups@CCD_SET_STRING_ID]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1acd60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ebb8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ab53c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2eb8fc, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) try_to_map_clone_groups;
};
#include "magic/api.end.hpp"
