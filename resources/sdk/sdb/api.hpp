#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace sdb
{
    // [SdbFindParentTagFromAncestors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa42dd0, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) find_parent_tag_from_ancestors;
    
    // [SdbGetAppPatchDirEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6c6ee4, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) get_app_patch_dir_ex;
    
    // [SdbGetKShimTagRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x82a5f8, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) get_k_shim_tag_ref;
    
    // [SdbGetMergeRedirectPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa3f29c, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) get_merge_redirect_path;
    
    // [SdbMergeIsEntryUpdated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa44758, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) merge_is_entry_updated;
    
    // [SdbResolveDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6c6f84, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) resolve_database;
    
    // [SdbGetDatabaseEdition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x736a8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783e88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e6cc, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) get_database_edition;
    
    // [SdbCloseDatabaseRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f760, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7367e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e428, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) close_database_read;
    
    // [SdbFindFirstStringIndexedTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ffc44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a1e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x741e20, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) find_first_string_indexed_tag;
    
    // [SdbFindFirstTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44641c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a764, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7423a4, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) find_first_tag;
    
    // [SdbFindNextStringIndexedTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c7a50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a2a3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8568c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aac5c, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) find_next_string_indexed_tag;
    
    // [SdbFindNextTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448d18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a428, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x756aec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742068, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) find_next_tag;
    
    // [SdbGetBinaryTagData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c6a18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x962e88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa430a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x961768, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) get_binary_tag_data;
    
    // [SdbGetDatabaseID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x518750, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738a40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7840ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740680, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) get_database_id;
    
    // [SdbGetDatabaseMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff0d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x761b78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7831f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768e18, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) get_database_match;
    
    // [SdbGetDatabaseMatchEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ffb08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739fe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x741c28, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) get_database_match_ex;
    
    // [SdbGetEntryFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563e08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a0bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7abb88, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) get_entry_flags;
    
    // [SdbGetFirstChild]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44726c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73aa50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7583e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742690, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) get_first_child;
    
    // [SdbGetIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500028, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73abf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b1dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742834, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) get_index;
    
    // [SdbGetNextChild]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44605c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a7d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7584bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742418, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) get_next_child;
    
    // [SdbGetStringTagPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x564728, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757dd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e7a0, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) get_string_tag_ptr;
    
    // [SdbGetTagDataSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4457cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7586a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742560, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) get_tag_data_size;
    
    // [SdbGetTagFromTagID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442cac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a9d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75852c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742614, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) get_tag_from_tag_id;
    
    // [SdbInitDatabaseInMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x518534, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783f54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e340, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) init_database_in_memory;
    
    // [SdbMakeIndexKeyFromStringEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ffdec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73aab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7835bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7426f0, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) make_index_key_from_string_ex;
    
    // [SdbOpenDatabaseEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c40fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x960d2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa3f6ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95f60c, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) open_database_ex;
    
    // [SdbQueryDataExTagID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c44b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa40144, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ab6a8, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) query_data_ex_tag_id;
    
    // [SdbReadBinaryTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5187f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7369a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7841ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e5e4, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) read_binary_tag;
    
    // [SdbReadDWORDTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4497ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a374, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783ee4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x741fb4, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) read_dword_tag;
    
    // [SdbReadEntryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c4890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3864, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa40530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ab97c, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) read_entry_information;
    
    // [SdbReadGUIDTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c6a88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x962efc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82a5ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9617dc, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) read_guid_tag;
    
    // [SdbReadQWORDTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x564628, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7955fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82bb64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79ad7c, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) read_qword_tag;
    
    // [SdbReadWORDTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448318, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73a4ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x756b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7420ec, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) read_word_tag;
    
    // [SdbReleaseDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7365b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e1f8, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) release_database;
    
    // [SdbTagIDToTagRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56e3dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af060, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82a698, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6c80, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) tag_id_to_tag_ref;
    
    // [SdbTagRefToTagID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56f5d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3eb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82bc98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7abfd0, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) tag_ref_to_tag_id;
    
    // [SdbCheckForChildRuntimePlatform]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8df84, 0x17e70 bytes
    // dxgi.dll .text:0x8e104, 0x17e70 bytes
    // dxgi.dll .text:0x8eaa4, 0x17e70 bytes
    //
    _p6(sdk::unknown_ptr) check_for_child_runtime_platform;
    
    // [SdbExeGetExtraFlags]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8a884, 0x17e70 bytes
    // dxgi.dll .text:0x8aa04, 0x17e70 bytes
    // dxgi.dll .text:0x8b3a4, 0x17e70 bytes
    //
    _p7(sdk::unknown_ptr) exe_get_extra_flags;
    
    // [SdbFindFirstTagRef]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x92c20, 0x17e70 bytes
    // dxgi.dll .text:0x92da0, 0x17e70 bytes
    // dxgi.dll .text:0x93740, 0x17e70 bytes
    //
    _p8(sdk::unknown_ptr) find_first_tag_ref;
    
    // [SdbFindNextLayer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8ab40, 0x17e70 bytes
    // dxgi.dll .text:0x8acc0, 0x17e70 bytes
    // dxgi.dll .text:0x8b660, 0x17e70 bytes
    //
    _p9(sdk::unknown_ptr) find_next_layer;
    
    // [SdbGetDatabaseGUID]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8acc0, 0x17e70 bytes
    // dxgi.dll .text:0x8ae40, 0x17e70 bytes
    // dxgi.dll .text:0x8b7e0, 0x17e70 bytes
    //
    _q0(sdk::unknown_ptr) get_database_guid;
    
    // [SdbGetItemFromItemRef]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8c644, 0x17e70 bytes
    // dxgi.dll .text:0x8c7c4, 0x17e70 bytes
    // dxgi.dll .text:0x8d164, 0x17e70 bytes
    //
    _q1(sdk::unknown_ptr) get_item_from_item_ref;
    
    // [SdbGetMatchingExe]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8de98, 0x17e70 bytes
    // dxgi.dll .text:0x8e018, 0x17e70 bytes
    // dxgi.dll .text:0x8e9b8, 0x17e70 bytes
    //
    _q2(sdk::unknown_ptr) get_matching_exe;
    
    // [SdbGetMatchingExeEx]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8ad64, 0x17e70 bytes
    // dxgi.dll .text:0x8aee4, 0x17e70 bytes
    // dxgi.dll .text:0x8b884, 0x17e70 bytes
    //
    _q3(sdk::unknown_ptr) get_matching_exe_ex;
    
    // [SdbGetMatchingPackage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8b240, 0x17e70 bytes
    // dxgi.dll .text:0x8b3c0, 0x17e70 bytes
    // dxgi.dll .text:0x8bd60, 0x17e70 bytes
    //
    _q4(sdk::unknown_ptr) get_matching_package;
    
    // [SdbInitDatabase]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8cac8, 0x17e70 bytes
    // dxgi.dll .text:0x8cc48, 0x17e70 bytes
    // dxgi.dll .text:0x8d5e8, 0x17e70 bytes
    //
    _q5(sdk::unknown_ptr) init_database;
    
    // [SdbLayerGetExtraFlags]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8b2e0, 0x17e70 bytes
    // dxgi.dll .text:0x8b460, 0x17e70 bytes
    // dxgi.dll .text:0x8be00, 0x17e70 bytes
    //
    _q6(sdk::unknown_ptr) layer_get_extra_flags;
    
    // [SdbParseLayerString]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8b37c, 0x17e70 bytes
    // dxgi.dll .text:0x8b4fc, 0x17e70 bytes
    // dxgi.dll .text:0x8be9c, 0x17e70 bytes
    //
    _q7(sdk::unknown_ptr) parse_layer_string;
    
    // [SdbQueryGetExtraFlags]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8b514, 0x17e70 bytes
    // dxgi.dll .text:0x8b694, 0x17e70 bytes
    // dxgi.dll .text:0x8c034, 0x17e70 bytes
    //
    _q8(sdk::unknown_ptr) query_get_extra_flags;
    
    // [SdbGetPathSystemSdb]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x94048, 0x17e70 bytes
    // dxgi.dll .text:0x941c8, 0x17e70 bytes
    // dxgi.dll .text:0x7250, 0x18b10 bytes
    // dxgi.dll .text:0x94b68, 0x17e70 bytes
    //
    _q9(sdk::unknown_ptr) get_path_system_sdb;
    
    // [SdbInitDatabaseEx]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x8cb18, 0x17e70 bytes
    // dxgi.dll .text:0x8cc98, 0x17e70 bytes
    // dxgi.dll .text:0x6ebc, 0x18b10 bytes
    // dxgi.dll .text:0x8d638, 0x17e70 bytes
    //
    _r0(sdk::unknown_ptr) init_database_ex;
};
#include "magic/api.end.hpp"
