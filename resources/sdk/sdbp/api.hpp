#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace sdbp
{
    // [SdbpCheckRuntimePlatformV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6c5bec, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) check_runtime_platform_v2;
    
    // [SdbpCheckSdbCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa41d70, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) check_sdb_capability;
    
    // [SdbpFindFirstNamedTagHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa42e30, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) find_first_named_tag_helper;
    
    // [SdbpFindFirstTagWithoutIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa41e10, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) find_first_tag_without_index;
    
    // [SdbpFindFirstWildcardTagWithoutIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa41eb8, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) find_first_wildcard_tag_without_index;
    
    // [SdbpFindNextNamedTagHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa42f10, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) find_next_named_tag_helper;
    
    // [SdbpFindNextTagWithoutIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa41f64, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) find_next_tag_without_index;
    
    // [SdbpFindNextWildcardTagWithoutIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa41fe0, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) find_next_wildcard_tag_without_index;
    
    // [__SdbpFindTagFromAncestors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa43038, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) find_tag_from_ancestors;
    
    // [SdbpGetFileTimestamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa3fad0, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) get_file_timestamp;
    
    // [SdbpGetManifestedMergeStubAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa3fca4, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) get_manifested_merge_stub_alloc;
    
    // [SdbpGetMergeSdbsDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x423a10, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) get_merge_sdbs_disabled;
    
    // [SdbpGetStandardDatabasePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6c736c, 0x32828 bytes
    //
    _n2(sdk::unknown_ptr) get_standard_database_path;
    
    // [SdbpIsEntryIdAvailableInOtherDb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa434fc, 0x1fd000 bytes
    //
    _n3(sdk::unknown_ptr) is_entry_id_available_in_other_db;
    
    // [SdbpIsSdbCapabilityPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa427f0, 0x1fd000 bytes
    //
    _n4(sdk::unknown_ptr) is_sdb_capability_present;
    
    // [SdbpMergeAreTagValuesEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa44b40, 0x1fd000 bytes
    //
    _n5(sdk::unknown_ptr) merge_are_tag_values_equal;
    
    // [SdbpScanIndexes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4473dc, 0x32828 bytes
    //
    _n6(sdk::unknown_ptr) scan_indexes;
    
    // [SdbpFindNextNamedTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c6910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x962d7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96165c, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) find_next_named_tag;
    
    // [SdbpBinarySearchFirst]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5000d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73acb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7837dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7428f0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) binary_search_first;
    
    // [SdbpBinarySearchUnique]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff56c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7620b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x769358, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) binary_search_unique;
    
    // [SdbpCheckAllAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c7508, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79413c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758194, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7998bc, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) check_all_attributes;
    
    // [SdbpCheckAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c77d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79437c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759de8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x799afc, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) check_attribute;
    
    // [SdbpCheckDll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITKDBG:0x2534d0, 0x32828 bytes
    // ntoskrnl.exe INITKDBG:0xa0f080, 0x1fe000 bytes
    // ntoskrnl.exe INITKDBG:0xaff4f0, 0x1fd000 bytes
    // ntoskrnl.exe INITKDBG:0xa0e080, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) check_dll;
    
    // [SdbpCheckExe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c4a14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b3dac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86dad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb93c, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) check_exe;
    
    // [SdbpCheckForMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563c40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x734e28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757474, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73ca68, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) check_for_match;
    
    // [SdbpCheckFromVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c79a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x964360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa446d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x962c40, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) check_from_version;
    
    // [SdbpCheckKObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5639d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7352b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7578d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73cef8, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) check_k_object;
    
    // [SdbpCheckMatchingDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c4bc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x960f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa406d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95f820, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) check_matching_device;
    
    // [SdbpCheckMatchingFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c4c84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x734c10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73c850, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) check_matching_files;
    
    // [SdbpCheckMatchingRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c4f20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9611c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa40960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95faa0, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) check_matching_registry;
    
    // [SdbpCheckMatchingRegistryEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c5044, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9612ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa40a8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95fbcc, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) check_matching_registry_entry;
    
    // [SdbpCheckMatchingText]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c54a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9617f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa40fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9600d0, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) check_matching_text;
    
    // [SdbpCheckMatchingTextEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c55c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x961914, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa410c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9601f4, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) check_matching_text_entry;
    
    // [SdbpCheckPackageAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c599c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x962260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa41a10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x960b40, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) check_package_attributes;
    
    // [SdbpCheckRuntimePlatform]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c5ba8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9624c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa41c50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x960da0, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) check_runtime_platform;
    
    // [SdbpCheckUptoVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c79e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x795330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f314, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79aab0, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) check_upto_version;
    
    // [SdbpCheckVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c7a1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9643a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4471c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x962c84, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) check_version;
    
    // [SdbpCloseLocalDatabaseEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c6c68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x963424, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa43724, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x961d04, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) close_local_database_ex;
    
    // [SdbpCreateSearchDBContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50037c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73b3c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x717e78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x743000, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) create_search_db_context;
    
    // [SdbpCreateSearchPathPartsFromPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c42dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x734044, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa3f998, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73bc8c, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) create_search_path_parts_from_path;
    
    // [SdbpFindFirstIndexedWildCardTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff918, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739d68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759b28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7419a8, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) find_first_indexed_wild_card_tag;
    
    // [SdbpFindLocalDatabaseByPDB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56e42c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af0b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82a6ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6cd8, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) find_local_database_by_pdb;
    
    // [SdbpFindMatcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5642a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x735024, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7580b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73cc64, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) find_matcher;
    
    // [SdbpFindMatchingName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x564694, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a2a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856904, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aaca0, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) find_matching_name;
    
    // [SdbpFindNextIndexedWildCardTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c7a88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x733ddc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757b58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73ba24, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) find_next_indexed_wild_card_tag;
    
    // [SdbpFreePackageAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c5ce0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9625d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4205c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x960eb8, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) free_package_attributes;
    
    // [SdbpGetDeviceDWORD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c5d80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9626ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa42108, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x960f8c, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) get_device_dword;
    
    // [SdbpGetExeEntryFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563d38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3988, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x859fec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7abaa0, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) get_exe_entry_flags;
    
    // [SdbpGetFirstIndexedRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ffce4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a28c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7836f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x741ecc, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) get_first_indexed_record;
    
    // [SdbpGetIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ffaa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a174, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757c88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x741db4, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) get_index;
    
    // [SdbpGetMappedStringFromTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5647a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757e58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e820, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) get_mapped_string_from_table;
    
    // [SdbpGetMappedTagData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ffdb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a3e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757f28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742024, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) get_mapped_tag_data;
    
    // [SdbpGetMatchingTextAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c5dc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9626fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa42158, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x960fdc, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) get_matching_text_attributes;
    
    // [SdbpGetNextIndexedRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x564870, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a2b2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8569b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aad4c, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) get_next_indexed_record;
    
    // [SdbpGetNextTagId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x445878, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a898, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7424d8, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) get_next_tag_id;
    
    // [SdbpGetProcessHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c6ae8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x962f68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa43118, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x961848, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) get_process_history;
    
    // [SdbpGetRegistryMatchingAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c5fe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x962928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa42384, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x961208, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) get_registry_matching_attributes;
    
    // [SdbpGetTagHeadSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x445b18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a848, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758144, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742488, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) get_tag_head_size;
    
    // [SdbpInitializeMatchers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5185b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736788, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x784220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e3c8, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) initialize_matchers;
    
    // [SdbpInitializeSearchDBContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c62fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x733f58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa426b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73bba0, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) initialize_search_db_context;
    
    // [SdbpKeyToAnsiString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x529b5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739fb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759cc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x741bf8, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) key_to_ansi_string;
    
    // [SdbpMatchAcpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563bf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4ac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc708, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) match_acpi;
    
    // [SdbpMatchBios]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d8ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc7b0, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) match_bios;
    
    // [SdbpMatchCpu]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563b00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4bc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d898, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc804, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) match_cpu;
    
    // [SdbpMatchDeviceDWORD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c6438, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x962c4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa428b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96152c, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) match_device_dword;
    
    // [SdbpMatchDeviceString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c64bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x962cd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa42940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9615b8, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) match_device_string;
    
    // [SdbpMatchList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x564200, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x734f28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757f6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73cb68, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) match_list;
    
    // [SdbpMatchOem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563ba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4b1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d844, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc75c, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) match_oem;
    
    // [SdbpMatchOne]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c6528, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x962d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa429b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x961630, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) match_one;
    
    // [SdbpMatchOsVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x564304, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7350a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757cf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73cce8, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) match_os_version;
    
    // [SdbpOpenDatabaseInMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5186ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783fdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e470, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) open_database_in_memory;
    
    // [SdbpOpenLocalDatabaseEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c6cf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9634b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa437bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x961d90, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) open_local_database_ex;
    
    // [SdbpQueryAppCompatFlagsByExeID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563eac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3b24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a16c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7abc3c, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) query_app_compat_flags_by_exe_id;
    
    // [SdbpReadMappedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4424d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73aa0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74264c, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) read_mapped_data;
    
    // [SdbpReadStringRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x564814, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736d08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e948, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) read_string_ref;
    
    // [SdbpReadTagData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448384, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a520, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757ea8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742160, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) read_tag_data;
    
    // [SdbpReleaseSearchDBContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500284, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73518c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757a98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73cdcc, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) release_search_db_context;
    
    // [SdbpResolveMatchingFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c6544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73412c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa42a50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73bd74, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) resolve_matching_file;
    
    // [SdbpSearchDB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fff0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x761ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783344, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768f80, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) search_db;
    
    // [SdbpAddMatch]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8b750, 0x17e70 bytes
    // dxgi.dll .text:0x8b8d0, 0x17e70 bytes
    // dxgi.dll .text:0x8c270, 0x17e70 bytes
    //
    _t9(sdk::unknown_ptr) add_match;
    
    // [SdbpCaptureCustomSDBInformation]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8baf0, 0x17e70 bytes
    // dxgi.dll .text:0x8bc70, 0x17e70 bytes
    // dxgi.dll .text:0x8c610, 0x17e70 bytes
    //
    _u0(sdk::unknown_ptr) capture_custom_sdb_information;
    
    // [SdbpCleanupForExclusiveMatch]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8bbb0, 0x17e70 bytes
    // dxgi.dll .text:0x8bd30, 0x17e70 bytes
    // dxgi.dll .text:0x8c6d0, 0x17e70 bytes
    //
    _u1(sdk::unknown_ptr) cleanup_for_exclusive_match;
    
    // [SdbpCleanupUserSDBCache]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x94450, 0x17e70 bytes
    // dxgi.dll .text:0x945d0, 0x17e70 bytes
    // dxgi.dll .text:0x94f70, 0x17e70 bytes
    //
    _u2(sdk::unknown_ptr) cleanup_user_sdb_cache;
    
    // [SdbpCreateSDBLookupEntry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x9448c, 0x17e70 bytes
    // dxgi.dll .text:0x9460c, 0x17e70 bytes
    // dxgi.dll .text:0x94fac, 0x17e70 bytes
    //
    _u3(sdk::unknown_ptr) create_sdb_lookup_entry;
    
    // [SdbpEnumUserSdb]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x94604, 0x17e70 bytes
    // dxgi.dll .text:0x94784, 0x17e70 bytes
    // dxgi.dll .text:0x95124, 0x17e70 bytes
    //
    _u4(sdk::unknown_ptr) enum_user_sdb;
    
    // [SdbpFindFreeLocalEntry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8ce14, 0x17e70 bytes
    // dxgi.dll .text:0x8cf94, 0x17e70 bytes
    // dxgi.dll .text:0x8d934, 0x17e70 bytes
    //
    _u5(sdk::unknown_ptr) find_free_local_entry;
    
    // [SdbpFindLocalDatabaseByGUID]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8ce44, 0x17e70 bytes
    // dxgi.dll .text:0x8cfc4, 0x17e70 bytes
    // dxgi.dll .text:0x8d964, 0x17e70 bytes
    //
    _u6(sdk::unknown_ptr) find_local_database_by_guid;
    
    // [SdbpFindSDBLookupEntry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x94ae8, 0x17e70 bytes
    // dxgi.dll .text:0x94c68, 0x17e70 bytes
    // dxgi.dll .text:0x95608, 0x17e70 bytes
    //
    _u7(sdk::unknown_ptr) find_sdb_lookup_entry;
    
    // [SdbpGetBinaryRuntimePlatform]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8cf54, 0x17e70 bytes
    // dxgi.dll .text:0x8d0d4, 0x17e70 bytes
    // dxgi.dll .text:0x8da74, 0x17e70 bytes
    //
    _u8(sdk::unknown_ptr) get_binary_runtime_platform;
    
    // [SdbpGetLayerFlags]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8bc38, 0x17e70 bytes
    // dxgi.dll .text:0x8bdb8, 0x17e70 bytes
    // dxgi.dll .text:0x8c758, 0x17e70 bytes
    //
    _u9(sdk::unknown_ptr) get_layer_flags;
    
    // [SdbpGetMatchingPackage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8bcf8, 0x17e70 bytes
    // dxgi.dll .text:0x8be78, 0x17e70 bytes
    // dxgi.dll .text:0x8c818, 0x17e70 bytes
    //
    _v0(sdk::unknown_ptr) get_matching_package;
    
    // [SdbpGetNamedLayerFromExe]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8be18, 0x17e70 bytes
    // dxgi.dll .text:0x8bf98, 0x17e70 bytes
    // dxgi.dll .text:0x8c938, 0x17e70 bytes
    //
    _v1(sdk::unknown_ptr) get_named_layer_from_exe;
    
    // [SdbpGetPermLayerKeysWithSignature]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8bfd4, 0x17e70 bytes
    // dxgi.dll .text:0x8c154, 0x17e70 bytes
    // dxgi.dll .text:0x8caf4, 0x17e70 bytes
    //
    _v2(sdk::unknown_ptr) get_perm_layer_keys_with_signature;
    
    // [SdbpGetPermLayersInternal]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8c0c0, 0x17e70 bytes
    // dxgi.dll .text:0x8c240, 0x17e70 bytes
    // dxgi.dll .text:0x8cbe0, 0x17e70 bytes
    //
    _v3(sdk::unknown_ptr) get_perm_layers_internal;
    
    // [SdbpGetSdbFileFromInitSdbFlags]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8d060, 0x17e70 bytes
    // dxgi.dll .text:0x8d1e0, 0x17e70 bytes
    // dxgi.dll .text:0x8db80, 0x17e70 bytes
    //
    _v4(sdk::unknown_ptr) get_sdb_file_from_init_sdb_flags;
    
    // [SdbpInsertSDBLookupEntry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x95504, 0x17e70 bytes
    // dxgi.dll .text:0x95684, 0x17e70 bytes
    // dxgi.dll .text:0x96024, 0x17e70 bytes
    //
    _v5(sdk::unknown_ptr) insert_sdb_lookup_entry;
    
    // [SdbpOpenNthLocalDatabase]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8c53c, 0x17e70 bytes
    // dxgi.dll .text:0x8c6bc, 0x17e70 bytes
    // dxgi.dll .text:0x8d05c, 0x17e70 bytes
    //
    _v6(sdk::unknown_ptr) open_nth_local_database;
    
    // [SdbpRemoveSDBLookupEntry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x95560, 0x17e70 bytes
    // dxgi.dll .text:0x956e0, 0x17e70 bytes
    // dxgi.dll .text:0x96080, 0x17e70 bytes
    //
    _v7(sdk::unknown_ptr) remove_sdb_lookup_entry;
    
    // [SdbpResolveInitSdbPath]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8d268, 0x17e70 bytes
    // dxgi.dll .text:0x8d3e8, 0x17e70 bytes
    // dxgi.dll .text:0x8dd88, 0x17e70 bytes
    //
    _v8(sdk::unknown_ptr) resolve_init_sdb_path;
    
    // [SdbpRetainLocalDBEntry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8d3f8, 0x17e70 bytes
    // dxgi.dll .text:0x8d578, 0x17e70 bytes
    // dxgi.dll .text:0x8df18, 0x17e70 bytes
    //
    _v9(sdk::unknown_ptr) retain_local_db_entry;
    
    // [SdbpRetrievePackageAttributes]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x917cc, 0x17e70 bytes
    // dxgi.dll .text:0x9194c, 0x17e70 bytes
    // dxgi.dll .text:0x922ec, 0x17e70 bytes
    //
    _w0(sdk::unknown_ptr) retrieve_package_attributes;
    
    // [SdbpSearchDbForPackage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x926e0, 0x17e70 bytes
    // dxgi.dll .text:0x92860, 0x17e70 bytes
    // dxgi.dll .text:0x93200, 0x17e70 bytes
    //
    _w1(sdk::unknown_ptr) search_db_for_package;
    
    // [SdbpUserSDBLookupCompareEntries]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x955c0, 0x17e70 bytes
    // dxgi.dll .text:0x95740, 0x17e70 bytes
    // dxgi.dll .text:0x960e0, 0x17e70 bytes
    //
    _w2(sdk::unknown_ptr) user_sdb_lookup_compare_entries;
    
    // [SdbpGetCurrentOSKind]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x8cfe4, 0x17e70 bytes
    // dxgi.dll .text:0x8d164, 0x17e70 bytes
    // dxgi.dll .text:0x7014, 0x18b10 bytes
    // dxgi.dll .text:0x8db04, 0x17e70 bytes
    //
    _w3(sdk::unknown_ptr) get_current_os_kind;
};
#include "magic/api.end.hpp"
