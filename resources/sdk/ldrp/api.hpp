#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ldrp
{
    // [LdrpCompareResourceNamesWithValidation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37147c, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) compare_resource_names_with_validation;
    
    // [LdrpInitMuiCritsRtlInitOnce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4233b4, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) init_mui_crits_rtl_init_once;
    
    // [LdrpInitOnceMuiLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xcf7ce8, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) init_once_mui_lock;
    
    // [LdrpVerifyAlternateResourceModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x149844, 0x32828 bytes
    //
    _m03(sdk::unknown_ptr) verify_alternate_resource_module;
    
    // [LdrpCompareResourceNames_U]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46d4c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f0198, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f9008, 0x1fe000 bytes
    //
    _m04(sdk::unknown_ptr) compare_resource_names_u;
    
    // [LdrpAccessResourceData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46c74c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f3238, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a9a7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fbf48, 0x1fe000 bytes
    //
    _m05(sdk::unknown_ptr) access_resource_data;
    
    // [LdrpAccessResourceDataNoMultipleLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46c820, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f021c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a9b4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f908c, 0x1fe000 bytes
    //
    _m06(sdk::unknown_ptr) access_resource_data_no_multiple_language;
    
    // [LdrpArmProcessRelocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21564c, 0x32828 bytes
    // ntoskrnl.exe .text:0x588300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588130, 0x1fe000 bytes
    //
    _m07(sdk::unknown_ptr) arm_process_relocation;
    
    // [LdrpFetchAddressOfSecurityCookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x420aa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73d33c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x785e64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x744f7c, 0x1fe000 bytes
    //
    _m08(sdk::unknown_ptr) fetch_address_of_security_cookie;
    
    // [LdrpFindMessageInAlternateModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8950, 0x32828 bytes
    // ntoskrnl.exe .text:0x3561b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592c1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b434, 0x1fe000 bytes
    //
    _m09(sdk::unknown_ptr) find_message_in_alternate_module;
    
    // [LdrpGenericProcessRelocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1388a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5883d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c0e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x588204, 0x1fe000 bytes
    //
    _m10(sdk::unknown_ptr) generic_process_relocation;
    
    // [LdrpGetAlternateResourceModuleHandleEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8c84, 0x32828 bytes
    // ntoskrnl.exe .text:0x356240, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592cb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b4c0, 0x1fe000 bytes
    //
    _m11(sdk::unknown_ptr) get_alternate_resource_module_handle_ex;
    
    // [LdrpGetFromMUIMemCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa93a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3551b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3578c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33a430, 0x1fe000 bytes
    //
    _m12(sdk::unknown_ptr) get_from_mui_mem_cache;
    
    // [LdrpGetImageSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8a1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x355490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35733c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33a710, 0x1fe000 bytes
    //
    _m13(sdk::unknown_ptr) get_image_size;
    
    // [LdrpGetMappingFromCacheEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2114c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3563d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592e88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b654, 0x1fe000 bytes
    //
    _m14(sdk::unknown_ptr) get_mapping_from_cache_entry;
    
    // [LdrpGetParentLangId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213aa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x360e54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x357db8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362294, 0x1fe000 bytes
    //
    _m15(sdk::unknown_ptr) get_parent_lang_id;
    
    // [LdrpGetRcConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa9270, 0x32828 bytes
    // ntoskrnl.exe .text:0x356eec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x357448, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33c16c, 0x1fe000 bytes
    //
    _m16(sdk::unknown_ptr) get_rc_config;
    
    // [LdrpGetResourceFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149274, 0x32828 bytes
    // ntoskrnl.exe .text:0x37c778, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x357f58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37daf8, 0x1fe000 bytes
    //
    _m17(sdk::unknown_ptr) get_resource_file_name;
    
    // [LdrpInitMuiCrits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa9544, 0x32828 bytes
    // ntoskrnl.exe .text:0x355350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x357a9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33a5d0, 0x1fe000 bytes
    //
    _m18(sdk::unknown_ptr) init_mui_crits;
    
    // [LdrpKrnGetDataTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8aa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x356080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x357d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33b300, 0x1fe000 bytes
    //
    _m19(sdk::unknown_ptr) krn_get_data_table_entry;
    
    // [LdrpLoadResourceFromAlternativeModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa889c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3553b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35758c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33a634, 0x1fe000 bytes
    //
    _m20(sdk::unknown_ptr) load_resource_from_alternative_module;
    
    // [LdrpMapResourceFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x147fac, 0x32828 bytes
    // ntoskrnl.exe .text:0x37c1fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3580dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37d57c, 0x1fe000 bytes
    //
    _m21(sdk::unknown_ptr) map_resource_file;
    
    // [LdrpOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x553c5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78a238, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x821efc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x793fd8, 0x1fe000 bytes
    //
    _m22(sdk::unknown_ptr) open_key;
    
    // [LdrpQueryValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5538e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789d9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x822ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x793b3c, 0x1fe000 bytes
    //
    _m23(sdk::unknown_ptr) query_value_key;
    
    // [LdrpResCompareResourceNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42877c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f2b6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b44f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fb87c, 0x1fe000 bytes
    //
    _m24(sdk::unknown_ptr) res_compare_resource_names;
    
    // [LdrpResGetMappingSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46b9a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f1e7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75a994, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fab8c, 0x1fe000 bytes
    //
    _m25(sdk::unknown_ptr) res_get_mapping_size;
    
    // [LdrpResGetResourceDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46b610, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f2c54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75ab04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fb964, 0x1fe000 bytes
    //
    _m26(sdk::unknown_ptr) res_get_resource_directory;
    
    // [LdrpResSearchResourceInsideDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x428860, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f1fe4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b3b1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6facf4, 0x1fe000 bytes
    //
    _m27(sdk::unknown_ptr) res_search_resource_inside_directory;
    
    // [LdrpResSearchResourceMappedFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa6118, 0x32828 bytes
    // ntoskrnl.exe .text:0x3559f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3045a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33ac74, 0x1fe000 bytes
    //
    _m28(sdk::unknown_ptr) res_search_resource_mapped_file;
    
    // [LdrpSearchResourceSection_U]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46ca70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ef680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a9d88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f84f0, 0x1fe000 bytes
    //
    _m29(sdk::unknown_ptr) search_resource_section_u;
    
    // [LdrpSectionTableFromVirtualAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49649c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f4b18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d601c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fd828, 0x1fe000 bytes
    //
    _m30(sdk::unknown_ptr) section_table_from_virtual_address;
    
    // [LdrpSetAlternateResourceModuleHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x147368, 0x32828 bytes
    // ntoskrnl.exe .text:0x37addc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356f48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37c15c, 0x1fe000 bytes
    //
    _m31(sdk::unknown_ptr) set_alternate_resource_module_handle;
    
    // [LdrpThumbProcessRelocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21571c, 0x32828 bytes
    // ntoskrnl.exe .text:0x58847c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59c188, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5882ac, 0x1fe000 bytes
    //
    _m32(sdk::unknown_ptr) thumb_process_relocation;
    
    // [LdrpAcquireModuleDatatableLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd1a88, 0x67960 bytes
    //
    _m33(sdk::unknown_ptr) acquire_module_datatable_lock;
    
    // [LdrpAddLoadConfigFptrToBatch]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2bf18, 0x74648 bytes
    //
    _m34(sdk::unknown_ptr) add_load_config_fptr_to_batch;
    
    // [LdrpApplyPatchImage]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdfc04, 0x74648 bytes
    //
    _m35(sdk::unknown_ptr) apply_patch_image;
    
    // [LdrpCfgCheckRoutineCallback]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2d9a0, 0x74648 bytes
    //
    _m36(sdk::unknown_ptr) cfg_check_routine_callback;
    
    // [LdrpCfgDispatchRoutineCallback]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2d970, 0x74648 bytes
    //
    _m37(sdk::unknown_ptr) cfg_dispatch_routine_callback;
    
    // [LdrpCgLogFailure]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdae30, 0x74648 bytes
    //
    _m38(sdk::unknown_ptr) cg_log_failure;
    
    // [LdrpCgRoutineCallback]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xd9680, 0x74648 bytes
    //
    _m39(sdk::unknown_ptr) cg_routine_callback;
    
    // [LdrpCMFAddToStanbyQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xdd3f8, 0x67960 bytes
    //
    _m40(sdk::unknown_ptr) cmf_add_to_stanby_queue;
    
    // [LdrpCMFRemoveFromStandbyQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x89ce8, 0x67960 bytes
    //
    _m41(sdk::unknown_ptr) cmf_remove_from_standby_queue;
    
    // [LdrpCodeAuthzCheckDllAllowed]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x10df8, 0x74648 bytes
    //
    _m42(sdk::unknown_ptr) code_authz_check_dll_allowed;
    
    // [LdrpCodeAuthzCheckDllAllowedSrpV2]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x73390, 0x74648 bytes
    //
    _m43(sdk::unknown_ptr) code_authz_check_dll_allowed_srp_v2;
    
    // [LdrpCompareModuleBaseAddressRange]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1dbe8, 0x67960 bytes
    //
    _m44(sdk::unknown_ptr) compare_module_base_address_range;
    
    // [LdrpCompareModuleBaseAddresses]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x46e18, 0x67960 bytes
    //
    _m45(sdk::unknown_ptr) compare_module_base_addresses;
    
    // [LdrpCompareModuleMappingInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x46354, 0x67960 bytes
    //
    _m46(sdk::unknown_ptr) compare_module_mapping_info;
    
    // [LdrpComputeTlsSizeAndAlignment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1bacc, 0x67960 bytes
    //
    _m47(sdk::unknown_ptr) compute_tls_size_and_alignment;
    
    // [LdrpCritialLoaderFunctions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .rdata:0x10a0e0, 0x67960 bytes
    //
    _m48(sdk::unknown_ptr) critial_loader_functions;
    
    // [LdrpDispatchUserCallTargetXFG]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x8ecb0, 0x74648 bytes
    //
    _m49(sdk::unknown_ptr) dispatch_user_call_target_xfg;
    
    // [LdrpEtwLogLoaderSnaps]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdb288, 0x74648 bytes
    //
    _m50(sdk::unknown_ptr) etw_log_loader_snaps;
    
    // [LdrpFusionManifestCodePages]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xad7e8, 0x74648 bytes
    //
    _m51(sdk::unknown_ptr) fusion_manifest_code_pages;
    
    // [LdrpGetBaseNameFromFullName]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2a0d8, 0x74648 bytes
    //
    _m52(sdk::unknown_ptr) get_base_name_from_full_name;
    
    // [LdrpGetMUIFromCMFSegment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x60508, 0x67960 bytes
    //
    _m53(sdk::unknown_ptr) get_mui_from_cmf_segment;
    
    // [LdrpHeapPartitionName]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x185248, 0x74648 bytes
    //
    _m54(sdk::unknown_ptr) heap_partition_name;
    
    // [LdrpHotPatchInitCompleteEvent]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x1842f8, 0x74648 bytes
    //
    _m55(sdk::unknown_ptr) hot_patch_init_complete_event;
    
    // [LdrpHotPatchInitialized]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x18432c, 0x74648 bytes
    //
    _m56(sdk::unknown_ptr) hot_patch_initialized;
    
    // [LdrpHpatAllocationOptOut]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2cbe0, 0x74648 bytes
    //
    _m57(sdk::unknown_ptr) hpat_allocation_opt_out;
    
    // [LdrpIncludeAlternateForwarders]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdd448, 0x74648 bytes
    //
    _m58(sdk::unknown_ptr) include_alternate_forwarders;
    
    // [LdrpInitOnceLoadAsDataCrits]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x1850a0, 0x74648 bytes
    //
    _m59(sdk::unknown_ptr) init_once_load_as_data_crits;
    
    // [LdrpInitializationComplete]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x74020, 0x74648 bytes
    //
    _m60(sdk::unknown_ptr) initialization_complete;
    
    // [LdrpInitializeHotPatching]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xad8ec, 0x74648 bytes
    //
    _m61(sdk::unknown_ptr) initialize_hot_patching;
    
    // [LdrpInitializeInternal]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x73e88, 0x74648 bytes
    //
    _m62(sdk::unknown_ptr) initialize_internal;
    
    // [LdrpInitializeNtdllDataTableEntry]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x7e780, 0x74648 bytes
    //
    _m63(sdk::unknown_ptr) initialize_ntdll_data_table_entry;
    
    // [LdrpInitializePatchData]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x83474, 0x74648 bytes
    //
    _m64(sdk::unknown_ptr) initialize_patch_data;
    
    // [LdrpInitializeSmtDelayedSleep]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x7f0f4, 0x74648 bytes
    //
    _m65(sdk::unknown_ptr) initialize_smt_delayed_sleep;
    
    // [LdrpInitializeSmtDelayedSleepQueryRegistry]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x7f1ac, 0x74648 bytes
    //
    _m66(sdk::unknown_ptr) initialize_smt_delayed_sleep_query_registry;
    
    // [LdrpInvertedFunctionTables]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .mrdata:0x199510, 0x74648 bytes
    //
    _m67(sdk::unknown_ptr) inverted_function_tables;
    
    // [LdrpIsHotPatchingEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x185258, 0x74648 bytes
    //
    _m68(sdk::unknown_ptr) is_hot_patching_enabled;
    
    // [LdrpIsILOnlyImage]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdcc24, 0x74648 bytes
    //
    _m69(sdk::unknown_ptr) is_il_only_image;
    
    // [LdrpKnownDllDirectoryHandle32]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x152f30, 0x67960 bytes
    //
    _m70(sdk::unknown_ptr) known_dll_directory_handle32;
    
    // [LdrpLoadCustomNtdll]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdecec, 0x74648 bytes
    //
    _m71(sdk::unknown_ptr) load_custom_ntdll;
    
    // [LdrpLoadDependentModuleA]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x24e40, 0x74648 bytes
    //
    _m72(sdk::unknown_ptr) load_dependent_module_a;
    
    // [LdrpLoadDependentModuleW]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe0000, 0x74648 bytes
    //
    _m73(sdk::unknown_ptr) load_dependent_module_w;
    
    // [LdrpLoadPatchImage]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xda390, 0x74648 bytes
    //
    _m74(sdk::unknown_ptr) load_patch_image;
    
    // [LdrpLoadPatchedNtdll]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdeeb4, 0x74648 bytes
    //
    _m75(sdk::unknown_ptr) load_patched_ntdll;
    
    // [LdrpLocalProcess]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .rdata:0x131030, 0x74648 bytes
    //
    _m76(sdk::unknown_ptr) local_process;
    
    // [LdrpLogEtwHotPatchStatus]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdbb24, 0x74648 bytes
    //
    _m77(sdk::unknown_ptr) log_etw_hot_patch_status;
    
    // [LdrpLogInternal]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x26d40, 0x74648 bytes
    //
    _m78(sdk::unknown_ptr) log_internal;
    
    // [LdrpMainThreadToken]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x1842c8, 0x74648 bytes
    //
    _m79(sdk::unknown_ptr) main_thread_token;
    
    // [LdrpMapImage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd9e0, 0x67960 bytes
    //
    _m80(sdk::unknown_ptr) map_image;
    
    // [LdrpNtdllHotPatchContext]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x1842f0, 0x74648 bytes
    //
    _m81(sdk::unknown_ptr) ntdll_hot_patch_context;
    
    // [LdrpQueryCurrentPatch]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xda550, 0x74648 bytes
    //
    _m82(sdk::unknown_ptr) query_current_patch;
    
    // [LdrpReleaseDllPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xa33c, 0x67960 bytes
    //
    _m83(sdk::unknown_ptr) release_dll_path;
    
    // [LdrpReleaseModuleDatatableLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd1b94, 0x67960 bytes
    //
    _m84(sdk::unknown_ptr) release_module_datatable_lock;
    
    // [LdrpRemoveDataTableEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x10100, 0x67960 bytes
    //
    _m85(sdk::unknown_ptr) remove_data_table_entry;
    
    // [LdrpSortLoadConfigFptrs]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x72940, 0x74648 bytes
    //
    _m86(sdk::unknown_ptr) sort_load_config_fptrs;
    
    // [LdrpTableDispatchUserCallTargetXFG]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x8edc0, 0x74648 bytes
    //
    _m87(sdk::unknown_ptr) table_dispatch_user_call_target_xfg;
    
    // [LdrpThreadTokenSetImpersonationToken]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x77598, 0x74648 bytes
    //
    _m88(sdk::unknown_ptr) thread_token_set_impersonation_token;
    
    // [LdrpThreadTokenSetMainThreadToken]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x77658, 0x74648 bytes
    //
    _m89(sdk::unknown_ptr) thread_token_set_main_thread_token;
    
    // [LdrpThreadTokenUnsetMainThreadToken]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x775fc, 0x74648 bytes
    //
    _m90(sdk::unknown_ptr) thread_token_unset_main_thread_token;
    
    // [LdrpTlsHeap]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x1841e8, 0x74648 bytes
    //
    _m91(sdk::unknown_ptr) tls_heap;
    
    // [LdrpUndoPatchImage]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xe01d0, 0x74648 bytes
    //
    _m92(sdk::unknown_ptr) undo_patch_image;
    
    // [LdrpUnmapCMFSegment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xddcac, 0x67960 bytes
    //
    _m93(sdk::unknown_ptr) unmap_cmf_segment;
    
    // [LdrpUnmapCMFSegmentIfUnreferenced]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xddcdc, 0x67960 bytes
    //
    _m94(sdk::unknown_ptr) unmap_cmf_segment_if_unreferenced;
    
    // [LdrpValidateUserCallTargetXFG]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x8eb50, 0x74648 bytes
    //
    _m95(sdk::unknown_ptr) validate_user_call_target_xfg;
    
    // [LdrpWaitForInitializationComplete]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2cac, 0x74648 bytes
    //
    _m96(sdk::unknown_ptr) wait_for_initialization_complete;
    
    // [LdrpXfgCheckRoutineCallback]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2d930, 0x74648 bytes
    //
    _m97(sdk::unknown_ptr) xfg_check_routine_callback;
    
    // [LdrpXfgDispatchRoutineCallback]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2d8f0, 0x74648 bytes
    //
    _m98(sdk::unknown_ptr) xfg_dispatch_routine_callback;
    
    // [LdrpXfgTableDispatchRoutineCallback]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2d8b0, 0x74648 bytes
    //
    _m99(sdk::unknown_ptr) xfg_table_dispatch_routine_callback;
    
    // [LdrpCheckPagesForTampering]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x888bc, 0x6fc38 bytes
    // ntdll.dll .text:0x88a5c, 0x6fc38 bytes
    //
    _n00(sdk::unknown_ptr) check_pages_for_tampering;
    
    // [LdrpGetImportDescriptorForSnap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x32a2c, 0x6fc38 bytes
    // ntdll.dll .text:0x32a2c, 0x6fc38 bytes
    //
    _n01(sdk::unknown_ptr) get_import_descriptor_for_snap;
    
    // [LdrpInitializeExceptionTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 11
    // ntdll.dll .text:0xd3ac4, 0x67960 bytes
    // ntdll.dll .text:0xdd8f0, 0x74648 bytes
    //
    _n02(sdk::unknown_ptr) initialize_exception_table;
    
    // [LdrpIsNlsUtf8Process]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xd4990, 0x6fc38 bytes
    // ntdll.dll .text:0xd4900, 0x6fc38 bytes
    //
    _n03(sdk::unknown_ptr) is_nls_utf8_process;
    
    // [LdrpLogCFGModuleInfoTelemetry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x83d58, 0x6fc38 bytes
    // ntdll.dll .text:0x83ef8, 0x6fc38 bytes
    //
    _n04(sdk::unknown_ptr) log_cfg_module_info_telemetry;
    
    // [LdrpMapCleanModuleView]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0xd503c, 0x6fc38 bytes
    // ntdll.dll .text:0xd4fac, 0x6fc38 bytes
    //
    _n05(sdk::unknown_ptr) map_clean_module_view;
    
    // [LdrpMapViewOfSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 11
    // ntdll.dll .text:0xdd10, 0x67960 bytes
    // ntdll.dll .text:0x2cb60, 0x74648 bytes
    //
    _n06(sdk::unknown_ptr) map_view_of_section;
    
    // [LdrpResolveForwarder]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x24558, 0x6fc38 bytes
    // ntdll.dll .text:0x24558, 0x6fc38 bytes
    //
    _n07(sdk::unknown_ptr) resolve_forwarder;
    
    // [LdrpTargetCompare]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x7d3b0, 0x6fc38 bytes
    // ntdll.dll .text:0x7d550, 0x6fc38 bytes
    //
    _n08(sdk::unknown_ptr) target_compare;
    
    // [LdrpThunkTemplate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .data:0x167720, 0x6fc38 bytes
    // ntdll.dll .data:0x168720, 0x6fc38 bytes
    //
    _n09(sdk::unknown_ptr) thunk_template;
    
    // [LdrpThunkVariableBytes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .rdata:0x12c2b4, 0x6fc38 bytes
    // ntdll.dll .rdata:0x12c5b4, 0x6fc38 bytes
    //
    _n10(sdk::unknown_ptr) thunk_variable_bytes;
    
    // [LdrpAddRedirectedFunction]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4a14, 0x6fc38 bytes
    // ntdll.dll .text:0xdf614, 0x74648 bytes
    // ntdll.dll .text:0xd4984, 0x6fc38 bytes
    //
    _n11(sdk::unknown_ptr) add_redirected_function;
    
    // [LdrpAppPackagesPathVersion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b6c0, 0x6fc38 bytes
    // ntdll.dll .data:0x184c60, 0x74648 bytes
    // ntdll.dll .data:0x16c6c0, 0x6fc38 bytes
    //
    _n12(sdk::unknown_ptr) app_packages_path_version;
    
    // [LdrpAuditIntegrityContinuity]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16a458, 0x6fc38 bytes
    // ntdll.dll .data:0x184328, 0x74648 bytes
    // ntdll.dll .data:0x16b458, 0x6fc38 bytes
    //
    _n13(sdk::unknown_ptr) audit_integrity_continuity;
    
    // [LdrpBuildImportRedirection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4d44, 0x6fc38 bytes
    // ntdll.dll .text:0xdf910, 0x74648 bytes
    // ntdll.dll .text:0xd4cb4, 0x6fc38 bytes
    //
    _n14(sdk::unknown_ptr) build_import_redirection;
    
    // [LdrpCalcAllocSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x52f34, 0x6fc38 bytes
    // ntdll.dll .text:0x44a8, 0x74648 bytes
    // ntdll.dll .text:0x52f34, 0x6fc38 bytes
    //
    _n15(sdk::unknown_ptr) calc_alloc_size;
    
    // [LdrpCheckForRetryLoading]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x623f4, 0x6fc38 bytes
    // ntdll.dll .text:0x10e50, 0x74648 bytes
    // ntdll.dll .text:0x62514, 0x6fc38 bytes
    //
    _n16(sdk::unknown_ptr) check_for_retry_loading;
    
    // [LdrpCheckRedirection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4e00, 0x6fc38 bytes
    // ntdll.dll .text:0xdf9cc, 0x74648 bytes
    // ntdll.dll .text:0xd4d70, 0x6fc38 bytes
    //
    _n17(sdk::unknown_ptr) check_redirection;
    
    // [LdrpCleanupEnclaveLoadState]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcce68, 0x6fc38 bytes
    // ntdll.dll .text:0xd89c8, 0x74648 bytes
    // ntdll.dll .text:0xccde8, 0x6fc38 bytes
    //
    _n18(sdk::unknown_ptr) cleanup_enclave_load_state;
    
    // [LdrpCompareModuleName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83c44, 0x6fc38 bytes
    // ntdll.dll .text:0x86f5c, 0x74648 bytes
    // ntdll.dll .text:0x83de4, 0x6fc38 bytes
    //
    _n19(sdk::unknown_ptr) compare_module_name;
    
    // [LdrpCompareRedirectedFunction]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4fdc, 0x6fc38 bytes
    // ntdll.dll .text:0xdfba4, 0x74648 bytes
    // ntdll.dll .text:0xd4f4c, 0x6fc38 bytes
    //
    _n20(sdk::unknown_ptr) compare_redirected_function;
    
    // [LdrpCompleteMapModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3cfec, 0x6fc38 bytes
    // ntdll.dll .text:0x2cec0, 0x74648 bytes
    // ntdll.dll .text:0x3cfec, 0x6fc38 bytes
    //
    _n21(sdk::unknown_ptr) complete_map_module;
    
    // [LdrpCreatePendingEnclaveModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xccf34, 0x6fc38 bytes
    // ntdll.dll .text:0xd8a94, 0x74648 bytes
    // ntdll.dll .text:0xcceb4, 0x6fc38 bytes
    //
    _n22(sdk::unknown_ptr) create_pending_enclave_module;
    
    // [LdrpCreateSoftwareEnclave]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcd01c, 0x6fc38 bytes
    // ntdll.dll .text:0xd8b7c, 0x74648 bytes
    // ntdll.dll .text:0xccf9c, 0x6fc38 bytes
    //
    _n23(sdk::unknown_ptr) create_software_enclave;
    
    // [LdrpCriticalLoaderFunctions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11cf00, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1321d8, 0x74648 bytes
    // ntdll.dll .rdata:0x11cf00, 0x6fc38 bytes
    //
    _n24(sdk::unknown_ptr) critical_loader_functions;
    
    // [LdrpDeleteEnclave]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcd10c, 0x6fc38 bytes
    // ntdll.dll .text:0xd8c6c, 0x74648 bytes
    // ntdll.dll .text:0xcd08c, 0x6fc38 bytes
    //
    _n25(sdk::unknown_ptr) delete_enclave;
    
    // [LdrpDereferenceEnclave]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcd190, 0x6fc38 bytes
    // ntdll.dll .text:0xd8cf0, 0x74648 bytes
    // ntdll.dll .text:0xcd110, 0x6fc38 bytes
    //
    _n26(sdk::unknown_ptr) dereference_enclave;
    
    // [LdrpDispatchUserCallTargetES]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8b670, 0x6fc38 bytes
    // ntdll.dll .text:0x8ec50, 0x74648 bytes
    // ntdll.dll .text:0x8b810, 0x6fc38 bytes
    //
    _n27(sdk::unknown_ptr) dispatch_user_call_target_es;
    
    // [LdrpDoPostSnapWork]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x1b470, 0x67960 bytes
    // ntdll.dll .text:0x536e0, 0x6fc38 bytes
    // ntdll.dll .text:0x536e0, 0x6fc38 bytes
    //
    _n28(sdk::unknown_ptr) do_post_snap_work;
    
    // [LdrpEnclaveAddDelayloadModules]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcd1dc, 0x6fc38 bytes
    // ntdll.dll .text:0xd8d3c, 0x74648 bytes
    // ntdll.dll .text:0xcd15c, 0x6fc38 bytes
    //
    _n29(sdk::unknown_ptr) enclave_add_delayload_modules;
    
    // [LdrpEnclaveAddDependentModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcd29c, 0x6fc38 bytes
    // ntdll.dll .text:0xd8dfc, 0x74648 bytes
    // ntdll.dll .text:0xcd21c, 0x6fc38 bytes
    //
    _n30(sdk::unknown_ptr) enclave_add_dependent_module;
    
    // [LdrpEnclaveAddForwarderModules]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcd3d4, 0x6fc38 bytes
    // ntdll.dll .text:0xd8f34, 0x74648 bytes
    // ntdll.dll .text:0xcd354, 0x6fc38 bytes
    //
    _n31(sdk::unknown_ptr) enclave_add_forwarder_modules;
    
    // [LdrpEnclaveList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16abd0, 0x6fc38 bytes
    // ntdll.dll .data:0x184ac0, 0x74648 bytes
    // ntdll.dll .data:0x16bbd0, 0x6fc38 bytes
    //
    _n32(sdk::unknown_ptr) enclave_list;
    
    // [LdrpEnclaveListLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16abe0, 0x6fc38 bytes
    // ntdll.dll .data:0x184ae0, 0x74648 bytes
    // ntdll.dll .data:0x16bbe0, 0x6fc38 bytes
    //
    _n33(sdk::unknown_ptr) enclave_list_lock;
    
    // [LdrpEnforceIntegrityContinuity]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16a410, 0x6fc38 bytes
    // ntdll.dll .data:0x1842d8, 0x74648 bytes
    // ntdll.dll .data:0x16b410, 0x6fc38 bytes
    //
    _n34(sdk::unknown_ptr) enforce_integrity_continuity;
    
    // [LdrpFindDelayloadedMethod]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xce7f8, 0x6fc38 bytes
    // ntdll.dll .text:0xda9e8, 0x74648 bytes
    // ntdll.dll .text:0xce778, 0x6fc38 bytes
    //
    _n35(sdk::unknown_ptr) find_delayloaded_method;
    
    // [LdrpFindDelayloadedMethodInDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xce8a4, 0x6fc38 bytes
    // ntdll.dll .text:0xdaa94, 0x74648 bytes
    // ntdll.dll .text:0xce824, 0x6fc38 bytes
    //
    _n36(sdk::unknown_ptr) find_delayloaded_method_in_descriptor;
    
    // [LdrpFindDllActivationContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x780c8, 0x67960 bytes
    // ntdll.dll .text:0x32b9c, 0x6fc38 bytes
    // ntdll.dll .text:0x32b9c, 0x6fc38 bytes
    //
    _n37(sdk::unknown_ptr) find_dll_activation_context;
    
    // [LdrpFindExistingModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x31ea8, 0x6fc38 bytes
    // ntdll.dll .text:0x2dbcc, 0x74648 bytes
    // ntdll.dll .text:0x31ea8, 0x6fc38 bytes
    //
    _n38(sdk::unknown_ptr) find_existing_module;
    
    // [LdrpFindOrPrepareEnclaveModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcd4b0, 0x6fc38 bytes
    // ntdll.dll .text:0xd9010, 0x74648 bytes
    // ntdll.dll .text:0xcd430, 0x6fc38 bytes
    //
    _n39(sdk::unknown_ptr) find_or_prepare_enclave_module;
    
    // [LdrpGetFileDriverStoreRoot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x786c0, 0x6fc38 bytes
    // ntdll.dll .text:0x7700c, 0x74648 bytes
    // ntdll.dll .text:0x78860, 0x6fc38 bytes
    //
    _n40(sdk::unknown_ptr) get_file_driver_store_root;
    
    // [LdrpGetNtPathFromDosPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x61afc, 0x6fc38 bytes
    // ntdll.dll .text:0x2b2b4, 0x74648 bytes
    // ntdll.dll .text:0x61c1c, 0x6fc38 bytes
    //
    _n41(sdk::unknown_ptr) get_nt_path_from_dos_path;
    
    // [LdrpHandlePendingModuleReplaced]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x6caf8, 0x67960 bytes
    // ntdll.dll .text:0x325d8, 0x6fc38 bytes
    // ntdll.dll .text:0x325d8, 0x6fc38 bytes
    //
    _n42(sdk::unknown_ptr) handle_pending_module_replaced;
    
    // [LdrpHashAsciizString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd544c, 0x6fc38 bytes
    // ntdll.dll .text:0xe0728, 0x74648 bytes
    // ntdll.dll .text:0xd53bc, 0x6fc38 bytes
    //
    _n43(sdk::unknown_ptr) hash_asciiz_string;
    
    // [LdrpInitCompleteEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16a478, 0x6fc38 bytes
    // ntdll.dll .data:0x184348, 0x74648 bytes
    // ntdll.dll .data:0x16b478, 0x6fc38 bytes
    //
    _n44(sdk::unknown_ptr) init_complete_event;
    
    // [LdrpInitParallelLoadingSupport]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8ca4, 0x6fc38 bytes
    // ntdll.dll .text:0x5f778, 0x74648 bytes
    // ntdll.dll .text:0x8ca4, 0x6fc38 bytes
    //
    _n45(sdk::unknown_ptr) init_parallel_loading_support;
    
    // [LdrpInitializeCriticalSectionExceptionGlobalMitigation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0cec, 0x6fc38 bytes
    // ntdll.dll .text:0xdd830, 0x74648 bytes
    // ntdll.dll .text:0xd0c6c, 0x6fc38 bytes
    //
    _n46(sdk::unknown_ptr) initialize_critical_section_exception_global_mitigation;
    
    // [LdrpInitializeImportRedirection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x812d4, 0x6fc38 bytes
    // ntdll.dll .text:0x847a4, 0x74648 bytes
    // ntdll.dll .text:0x81474, 0x6fc38 bytes
    //
    _n47(sdk::unknown_ptr) initialize_import_redirection;
    
    // [LdrpInitializeProcessHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd3d88, 0x6fc38 bytes
    // ntdll.dll .text:0xde79c, 0x74648 bytes
    // ntdll.dll .text:0xd3cfc, 0x6fc38 bytes
    //
    _n48(sdk::unknown_ptr) initialize_process_heap;
    
    // [LdrpInvertedFunctionTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164400, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f4e0, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1804e0, 0x6fc38 bytes
    //
    _n49(sdk::unknown_ptr) inverted_function_table;
    
    // [LdrpIsExecutableRelocatedImage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcd928, 0x6fc38 bytes
    // ntdll.dll .text:0x88d78, 0x74648 bytes
    // ntdll.dll .text:0xcd8a8, 0x6fc38 bytes
    //
    _n50(sdk::unknown_ptr) is_executable_relocated_image;
    
    // [LdrpIssueEnclaveCall]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcd5d0, 0x6fc38 bytes
    // ntdll.dll .text:0xad190, 0x74648 bytes
    // ntdll.dll .text:0xcd550, 0x6fc38 bytes
    //
    _n51(sdk::unknown_ptr) issue_enclave_call;
    
    // [LdrpLoadDependentModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x280f0, 0x67960 bytes
    // ntdll.dll .text:0x35d00, 0x6fc38 bytes
    // ntdll.dll .text:0x35d00, 0x6fc38 bytes
    //
    _n52(sdk::unknown_ptr) load_dependent_module;
    
    // [LdrpLoadEnclaveModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcd678, 0x6fc38 bytes
    // ntdll.dll .text:0xd9130, 0x74648 bytes
    // ntdll.dll .text:0xcd5f8, 0x6fc38 bytes
    //
    _n53(sdk::unknown_ptr) load_enclave_module;
    
    // [LdrpLockTlsDelayedReclaimTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd510c, 0x6fc38 bytes
    // ntdll.dll .text:0xe03ec, 0x74648 bytes
    // ntdll.dll .text:0xd507c, 0x6fc38 bytes
    //
    _n54(sdk::unknown_ptr) lock_tls_delayed_reclaim_table;
    
    // [LdrpLogImportRedirectionTelemetry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcf3e4, 0x6fc38 bytes
    // ntdll.dll .text:0xdbf14, 0x74648 bytes
    // ntdll.dll .text:0xcf364, 0x6fc38 bytes
    //
    _n55(sdk::unknown_ptr) log_import_redirection_telemetry;
    
    // [LdrpLogIntegrityContinuityTelemetry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcf4f0, 0x6fc38 bytes
    // ntdll.dll .text:0xdc020, 0x74648 bytes
    // ntdll.dll .text:0xcf470, 0x6fc38 bytes
    //
    _n56(sdk::unknown_ptr) log_integrity_continuity_telemetry;
    
    // [LdrpLogMapAndVerifyResourceFileFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcf7f4, 0x6fc38 bytes
    // ntdll.dll .text:0xdc31c, 0x74648 bytes
    // ntdll.dll .text:0xcf774, 0x6fc38 bytes
    //
    _n57(sdk::unknown_ptr) log_map_and_verify_resource_file_failure;
    
    // [LdrpLogNewDllLoad]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3cf70, 0x6fc38 bytes
    // ntdll.dll .text:0x2d01c, 0x74648 bytes
    // ntdll.dll .text:0x3cf70, 0x6fc38 bytes
    //
    _n58(sdk::unknown_ptr) log_new_dll_load;
    
    // [LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcfa84, 0x6fc38 bytes
    // ntdll.dll .text:0xdc498, 0x74648 bytes
    // ntdll.dll .text:0xcfa04, 0x6fc38 bytes
    //
    _n59(sdk::unknown_ptr) log_verify_alternate_resource_module_with_service_checksum_failure;
    
    // [LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcfbd0, 0x6fc38 bytes
    // ntdll.dll .text:0xdc5e4, 0x74648 bytes
    // ntdll.dll .text:0xcfb50, 0x6fc38 bytes
    //
    _n60(sdk::unknown_ptr) log_vsm_enclave_ldr_create_enclave_telemetry;
    
    // [LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcfcd4, 0x6fc38 bytes
    // ntdll.dll .text:0xdc6e8, 0x74648 bytes
    // ntdll.dll .text:0xcfc54, 0x6fc38 bytes
    //
    _n61(sdk::unknown_ptr) log_vsm_enclave_ldr_delete_enclave_telemetry;
    
    // [LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcfdb4, 0x6fc38 bytes
    // ntdll.dll .text:0xdc7c8, 0x74648 bytes
    // ntdll.dll .text:0xcfd34, 0x6fc38 bytes
    //
    _n62(sdk::unknown_ptr) log_vsm_enclave_ldr_initialize_enclave_telemetry;
    
    // [LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcfe94, 0x6fc38 bytes
    // ntdll.dll .text:0xdc8a8, 0x74648 bytes
    // ntdll.dll .text:0xcfe14, 0x6fc38 bytes
    //
    _n63(sdk::unknown_ptr) log_vsm_enclave_ldr_load_enclave_module_telemetry;
    
    // [LdrpMapDllRetry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x62f44, 0x6fc38 bytes
    // ntdll.dll .text:0x72c5c, 0x74648 bytes
    // ntdll.dll .text:0x63064, 0x6fc38 bytes
    //
    _n64(sdk::unknown_ptr) map_dll_retry;
    
    // [LdrpMaximumUserModeAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16a120, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199280, 0x74648 bytes
    // ntdll.dll .data:0x16b120, 0x6fc38 bytes
    //
    _n65(sdk::unknown_ptr) maximum_user_mode_address;
    
    // [LdrpMinimalMapModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3cb80, 0x6fc38 bytes
    // ntdll.dll .text:0x2c6b4, 0x74648 bytes
    // ntdll.dll .text:0x3cb80, 0x6fc38 bytes
    //
    _n66(sdk::unknown_ptr) minimal_map_module;
    
    // [LdrpObtainLockedEnclave]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x21314, 0x6fc38 bytes
    // ntdll.dll .text:0x220fc, 0x74648 bytes
    // ntdll.dll .text:0x21314, 0x6fc38 bytes
    //
    _n67(sdk::unknown_ptr) obtain_locked_enclave;
    
    // [LdrpOriginalAppPackagesPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x169480, 0x6fc38 bytes
    // ntdll.dll .data:0x183340, 0x74648 bytes
    // ntdll.dll .data:0x16a480, 0x6fc38 bytes
    //
    _n68(sdk::unknown_ptr) original_app_packages_path;
    
    // [LdrpPageSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .data:0x152fd8, 0x67960 bytes
    // ntdll.dll .data:0x16a118, 0x6fc38 bytes
    // ntdll.dll .data:0x16b118, 0x6fc38 bytes
    //
    _n69(sdk::unknown_ptr) page_size;
    
    // [LdrpPayloadRestrictionMitigationsEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd42e8, 0x6fc38 bytes
    // ntdll.dll .text:0xad62e, 0x74648 bytes
    // ntdll.dll .text:0xd425c, 0x6fc38 bytes
    //
    _n70(sdk::unknown_ptr) payload_restriction_mitigations_enabled;
    
    // [LdrpProcessDetachNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x13c58, 0x67960 bytes
    // ntdll.dll .text:0x44ad4, 0x6fc38 bytes
    // ntdll.dll .text:0x44ad4, 0x6fc38 bytes
    //
    _n71(sdk::unknown_ptr) process_detach_node;
    
    // [LdrpProcessMachineMismatch]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85f88, 0x6fc38 bytes
    // ntdll.dll .text:0xdf44c, 0x74648 bytes
    // ntdll.dll .text:0x86128, 0x6fc38 bytes
    //
    _n72(sdk::unknown_ptr) process_machine_mismatch;
    
    // [LdrpRedirectionByFunctionCalloutFunc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16a370, 0x6fc38 bytes
    // ntdll.dll .data:0x184220, 0x74648 bytes
    // ntdll.dll .data:0x16b370, 0x6fc38 bytes
    //
    _n73(sdk::unknown_ptr) redirection_by_function_callout_func;
    
    // [LdrpRedirectionCalloutFunc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16a378, 0x6fc38 bytes
    // ntdll.dll .data:0x184228, 0x74648 bytes
    // ntdll.dll .data:0x16b378, 0x6fc38 bytes
    //
    _n74(sdk::unknown_ptr) redirection_callout_func;
    
    // [LdrpRedirectionModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16a368, 0x6fc38 bytes
    // ntdll.dll .data:0x184218, 0x74648 bytes
    // ntdll.dll .data:0x16b368, 0x6fc38 bytes
    //
    _n75(sdk::unknown_ptr) redirection_module;
    
    // [LdrpRedirectionTree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b338, 0x6fc38 bytes
    // ntdll.dll .data:0x185318, 0x74648 bytes
    // ntdll.dll .data:0x16c338, 0x6fc38 bytes
    //
    _n76(sdk::unknown_ptr) redirection_tree;
    
    // [LdrpResReportResourceAccessInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x1490c, 0x67960 bytes
    // ntdll.dll .text:0x9fe4, 0x6fc38 bytes
    // ntdll.dll .text:0x9fe4, 0x6fc38 bytes
    //
    _n77(sdk::unknown_ptr) res_report_resource_access_internal;
    
    // [LdrpRetryQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16a3a0, 0x6fc38 bytes
    // ntdll.dll .data:0x184250, 0x74648 bytes
    // ntdll.dll .data:0x16b3a0, 0x6fc38 bytes
    //
    _n78(sdk::unknown_ptr) retry_queue;
    
    // [LdrpRetryingModuleIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b320, 0x6fc38 bytes
    // ntdll.dll .data:0x184ee0, 0x74648 bytes
    // ntdll.dll .data:0x16c320, 0x6fc38 bytes
    //
    _n79(sdk::unknown_ptr) retrying_module_index;
    
    // [LdrpSetModuleSigningLevel]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88448, 0x6fc38 bytes
    // ntdll.dll .text:0xdf518, 0x74648 bytes
    // ntdll.dll .text:0x885e8, 0x6fc38 bytes
    //
    _n80(sdk::unknown_ptr) set_module_signing_level;
    
    // [LdrpShouldModuleImportBeRedirected]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x329cc, 0x6fc38 bytes
    // ntdll.dll .text:0x21ce0, 0x74648 bytes
    // ntdll.dll .text:0x329cc, 0x6fc38 bytes
    //
    _n81(sdk::unknown_ptr) should_module_import_be_redirected;
    
    // [LdrpSuppressedExportOverrideList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d1d0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x132430, 0x74648 bytes
    // ntdll.dll .rdata:0x11d1f0, 0x6fc38 bytes
    //
    _n82(sdk::unknown_ptr) suppressed_export_override_list;
    
    // [LdrpSuppressedExportOverrideListPtr]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16a460, 0x6fc38 bytes
    // ntdll.dll .data:0x184330, 0x74648 bytes
    // ntdll.dll .data:0x16b460, 0x6fc38 bytes
    //
    _n83(sdk::unknown_ptr) suppressed_export_override_list_ptr;
    
    // [LdrpUnmapModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6fb50, 0x6fc38 bytes
    // ntdll.dll .text:0x7362c, 0x74648 bytes
    // ntdll.dll .text:0x6fcf0, 0x6fc38 bytes
    //
    _n84(sdk::unknown_ptr) unmap_module;
    
    // [LdrpUnsuppressAddressTakenIat]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53450, 0x6fc38 bytes
    // ntdll.dll .text:0xe0234, 0x74648 bytes
    // ntdll.dll .text:0x53450, 0x6fc38 bytes
    //
    _n85(sdk::unknown_ptr) unsuppress_address_taken_iat;
    
    // [LdrpValidateIntegrityContinuity]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x63034, 0x6fc38 bytes
    // ntdll.dll .text:0x884e0, 0x74648 bytes
    // ntdll.dll .text:0x63154, 0x6fc38 bytes
    //
    _n86(sdk::unknown_ptr) validate_integrity_continuity;
    
    // [LdrpValidateUserCallTargetES]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8b5d0, 0x6fc38 bytes
    // ntdll.dll .text:0x8eb00, 0x74648 bytes
    // ntdll.dll .text:0x8b770, 0x6fc38 bytes
    //
    _n87(sdk::unknown_ptr) validate_user_call_target_es;
    
    // [LdrpVchLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b6b0, 0x6fc38 bytes
    // ntdll.dll .data:0x185230, 0x74648 bytes
    // ntdll.dll .data:0x16c6a0, 0x6fc38 bytes
    //
    _n88(sdk::unknown_ptr) vch_lock;
    
    // [LdrpVehLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b6b8, 0x6fc38 bytes
    // ntdll.dll .data:0x185238, 0x74648 bytes
    // ntdll.dll .data:0x16c6a8, 0x6fc38 bytes
    //
    _n89(sdk::unknown_ptr) veh_lock;
    
    // [LdrpAcquireLoaderLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfd60, 0x67960 bytes
    // ntdll.dll .text:0x41a94, 0x6fc38 bytes
    // ntdll.dll .text:0x51348, 0x74648 bytes
    // ntdll.dll .text:0x41a94, 0x6fc38 bytes
    //
    _n90(sdk::unknown_ptr) acquire_loader_lock;
    
    // [LdrpAcquireTlsIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1bcc8, 0x67960 bytes
    // ntdll.dll .text:0x54068, 0x6fc38 bytes
    // ntdll.dll .text:0x4bd8, 0x74648 bytes
    // ntdll.dll .text:0x54068, 0x6fc38 bytes
    //
    _n91(sdk::unknown_ptr) acquire_tls_index;
    
    // [LdrpActiveThreadCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153200, 0x67960 bytes
    // ntdll.dll .data:0x16a340, 0x6fc38 bytes
    // ntdll.dll .data:0x1841e0, 0x74648 bytes
    // ntdll.dll .data:0x16b340, 0x6fc38 bytes
    //
    _n92(sdk::unknown_ptr) active_thread_count;
    
    // [LdrpActualBitmapSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153220, 0x67960 bytes
    // ntdll.dll .data:0x16a360, 0x6fc38 bytes
    // ntdll.dll .data:0x184210, 0x74648 bytes
    // ntdll.dll .data:0x16b360, 0x6fc38 bytes
    //
    _n93(sdk::unknown_ptr) actual_bitmap_size;
    
    // [LdrpAddNodeServiceTag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8057c, 0x67960 bytes
    // ntdll.dll .text:0x77d90, 0x6fc38 bytes
    // ntdll.dll .text:0x7a550, 0x74648 bytes
    // ntdll.dll .text:0x77f30, 0x6fc38 bytes
    //
    _n94(sdk::unknown_ptr) add_node_service_tag;
    
    // [LdrpAdvapi32DllHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544a0, 0x67960 bytes
    // ntdll.dll .data:0x16b6a8, 0x6fc38 bytes
    // ntdll.dll .data:0x184c38, 0x74648 bytes
    // ntdll.dll .data:0x16c698, 0x6fc38 bytes
    //
    _n95(sdk::unknown_ptr) advapi32_dll_handle;
    
    // [LdrpAllocateFileNameBufferIfNeeded]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9de4, 0x67960 bytes
    // ntdll.dll .text:0x38a50, 0x6fc38 bytes
    // ntdll.dll .text:0x18cd4, 0x74648 bytes
    // ntdll.dll .text:0x38a50, 0x6fc38 bytes
    //
    _n96(sdk::unknown_ptr) allocate_file_name_buffer_if_needed;
    
    // [LdrpAllocateModuleEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xec10, 0x67960 bytes
    // ntdll.dll .text:0x3216c, 0x6fc38 bytes
    // ntdll.dll .text:0x2e620, 0x74648 bytes
    // ntdll.dll .text:0x3216c, 0x6fc38 bytes
    //
    _n97(sdk::unknown_ptr) allocate_module_entry;
    
    // [LdrpAllocatePlaceHolder]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeaf4, 0x67960 bytes
    // ntdll.dll .text:0x32048, 0x6fc38 bytes
    // ntdll.dll .text:0x2e4f0, 0x74648 bytes
    // ntdll.dll .text:0x32048, 0x6fc38 bytes
    //
    _n98(sdk::unknown_ptr) allocate_place_holder;
    
    // [LdrpAllocateTls]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1b928, 0x67960 bytes
    // ntdll.dll .text:0x53cd0, 0x6fc38 bytes
    // ntdll.dll .text:0x2973c, 0x74648 bytes
    // ntdll.dll .text:0x53cd0, 0x6fc38 bytes
    //
    _n99(sdk::unknown_ptr) allocate_tls;
    
    // [LdrpAllocateTlsEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1bb7c, 0x67960 bytes
    // ntdll.dll .text:0x53f1c, 0x6fc38 bytes
    // ntdll.dll .text:0x4a90, 0x74648 bytes
    // ntdll.dll .text:0x53f1c, 0x6fc38 bytes
    //
    _o00(sdk::unknown_ptr) allocate_tls_entry;
    
    // [LdrpAllocateUnicodeString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2e3ec, 0x67960 bytes
    // ntdll.dll .text:0x61c1c, 0x6fc38 bytes
    // ntdll.dll .text:0x2b390, 0x74648 bytes
    // ntdll.dll .text:0x61d3c, 0x6fc38 bytes
    //
    _o01(sdk::unknown_ptr) allocate_unicode_string;
    
    // [LdrpAllocationGranularity]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152fc8, 0x67960 bytes
    // ntdll.dll .data:0x16a108, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992a8, 0x74648 bytes
    // ntdll.dll .data:0x16b108, 0x6fc38 bytes
    //
    _o02(sdk::unknown_ptr) allocation_granularity;
    
    // [LdrpAppCompatRedirect]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa3b8, 0x67960 bytes
    // ntdll.dll .text:0x61ff4, 0x6fc38 bytes
    // ntdll.dll .text:0x117d8, 0x74648 bytes
    // ntdll.dll .text:0x62114, 0x6fc38 bytes
    //
    _o03(sdk::unknown_ptr) app_compat_redirect;
    
    // [LdrpAppHeaders]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1532c8, 0x67960 bytes
    // ntdll.dll .data:0x16a408, 0x6fc38 bytes
    // ntdll.dll .data:0x1842d0, 0x74648 bytes
    // ntdll.dll .data:0x16b408, 0x6fc38 bytes
    //
    _o04(sdk::unknown_ptr) app_headers;
    
    // [LdrpAppPackagesPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1521a0, 0x67960 bytes
    // ntdll.dll .data:0x169490, 0x6fc38 bytes
    // ntdll.dll .data:0x183350, 0x74648 bytes
    // ntdll.dll .data:0x16a490, 0x6fc38 bytes
    //
    _o05(sdk::unknown_ptr) app_packages_path;
    
    // [LdrpAppendAnsiStringToFilenameBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9d40, 0x67960 bytes
    // ntdll.dll .text:0x3468c, 0x6fc38 bytes
    // ntdll.dll .text:0x191e4, 0x74648 bytes
    // ntdll.dll .text:0x3468c, 0x6fc38 bytes
    //
    _o06(sdk::unknown_ptr) append_ansi_string_to_filename_buffer;
    
    // [LdrpAppendUnicodeStringToFilenameBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x26e9c, 0x67960 bytes
    // ntdll.dll .text:0x389cc, 0x6fc38 bytes
    // ntdll.dll .text:0x19d38, 0x74648 bytes
    // ntdll.dll .text:0x389cc, 0x6fc38 bytes
    //
    _o07(sdk::unknown_ptr) append_unicode_string_to_filename_buffer;
    
    // [LdrpApplyFileNameRedirection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x274a4, 0x67960 bytes
    // ntdll.dll .text:0x38634, 0x6fc38 bytes
    // ntdll.dll .text:0x19ae4, 0x74648 bytes
    // ntdll.dll .text:0x38634, 0x6fc38 bytes
    //
    _o08(sdk::unknown_ptr) apply_file_name_redirection;
    
    // [LdrpAppxEtwGenericIntegrityFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0530, 0x67960 bytes
    // ntdll.dll .text:0xcb5c0, 0x6fc38 bytes
    // ntdll.dll .text:0xd67f4, 0x74648 bytes
    // ntdll.dll .text:0xcb540, 0x6fc38 bytes
    //
    _o09(sdk::unknown_ptr) appx_etw_generic_integrity_failure;
    
    // [LdrpAppxEtwIntegrityFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd05b8, 0x67960 bytes
    // ntdll.dll .text:0xcb648, 0x6fc38 bytes
    // ntdll.dll .text:0xd687c, 0x74648 bytes
    // ntdll.dll .text:0xcb5c8, 0x6fc38 bytes
    //
    _o10(sdk::unknown_ptr) appx_etw_integrity_failure;
    
    // [LdrpAppxGetBinaryNameKeyInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd06b0, 0x67960 bytes
    // ntdll.dll .text:0xcb740, 0x6fc38 bytes
    // ntdll.dll .text:0xd6974, 0x74648 bytes
    // ntdll.dll .text:0xcb6c0, 0x6fc38 bytes
    //
    _o11(sdk::unknown_ptr) appx_get_binary_name_key_information;
    
    // [LdrpAppxGetRemediationRegistryKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0810, 0x67960 bytes
    // ntdll.dll .text:0xcb894, 0x6fc38 bytes
    // ntdll.dll .text:0xd6abc, 0x74648 bytes
    // ntdll.dll .text:0xcb814, 0x6fc38 bytes
    //
    _o12(sdk::unknown_ptr) appx_get_remediation_registry_key;
    
    // [LdrpBuildForwarderLink]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x232ac, 0x67960 bytes
    // ntdll.dll .text:0x3536c, 0x6fc38 bytes
    // ntdll.dll .text:0x2a588, 0x74648 bytes
    // ntdll.dll .text:0x3536c, 0x6fc38 bytes
    //
    _o13(sdk::unknown_ptr) build_forwarder_link;
    
    // [LdrpBuildSystem32FileName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x26e2c, 0x67960 bytes
    // ntdll.dll .text:0x38958, 0x6fc38 bytes
    // ntdll.dll .text:0x79384, 0x74648 bytes
    // ntdll.dll .text:0x38958, 0x6fc38 bytes
    //
    _o14(sdk::unknown_ptr) build_system32_file_name;
    
    // [LdrpCallInitRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2a334, 0x67960 bytes
    // ntdll.dll .text:0x37adc, 0x6fc38 bytes
    // ntdll.dll .text:0x28d34, 0x74648 bytes
    // ntdll.dll .text:0x37adc, 0x6fc38 bytes
    //
    _o15(sdk::unknown_ptr) call_init_routine;
    
    // [LdrpCallTlsInitializers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7838, 0x67960 bytes
    // ntdll.dll .text:0x37b98, 0x6fc38 bytes
    // ntdll.dll .text:0x29964, 0x74648 bytes
    // ntdll.dll .text:0x37b98, 0x6fc38 bytes
    //
    _o16(sdk::unknown_ptr) call_tls_initializers;
    
    // [LdrpCaptureCriticalThunks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89ad8, 0x67960 bytes
    // ntdll.dll .text:0xd4814, 0x6fc38 bytes
    // ntdll.dll .text:0xad714, 0x74648 bytes
    // ntdll.dll .text:0xd4784, 0x6fc38 bytes
    //
    _o17(sdk::unknown_ptr) capture_critical_thunks;
    
    // [LdrpCfgProcessLoadConfig]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe110, 0x67960 bytes
    // ntdll.dll .text:0x33b04, 0x6fc38 bytes
    // ntdll.dll .text:0x2ba74, 0x74648 bytes
    // ntdll.dll .text:0x33b04, 0x6fc38 bytes
    //
    _o18(sdk::unknown_ptr) cfg_process_load_config;
    
    // [LdrpChangeMrdataProtection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30464, 0x67960 bytes
    // ntdll.dll .text:0x60bb4, 0x6fc38 bytes
    // ntdll.dll .text:0x32ef4, 0x74648 bytes
    // ntdll.dll .text:0x60cd4, 0x6fc38 bytes
    //
    _o19(sdk::unknown_ptr) change_mrdata_protection;
    
    // [LdrpCheckAppDirType]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd3394, 0x67960 bytes
    // ntdll.dll .text:0xd03dc, 0x6fc38 bytes
    // ntdll.dll .text:0xdcff0, 0x74648 bytes
    // ntdll.dll .text:0xd035c, 0x6fc38 bytes
    //
    _o20(sdk::unknown_ptr) check_app_dir_type;
    
    // [LdrpCheckComponentOnDemandEtwEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd24b4, 0x67960 bytes
    // ntdll.dll .text:0xce9f0, 0x6fc38 bytes
    // ntdll.dll .text:0xdb0f0, 0x74648 bytes
    // ntdll.dll .text:0xce970, 0x6fc38 bytes
    //
    _o21(sdk::unknown_ptr) check_component_on_demand_etw_event;
    
    // [LdrpCheckKnownDllFullPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xed9c, 0x67960 bytes
    // ntdll.dll .text:0x31dbc, 0x6fc38 bytes
    // ntdll.dll .text:0x2e3a4, 0x74648 bytes
    // ntdll.dll .text:0x31dbc, 0x6fc38 bytes
    //
    _o22(sdk::unknown_ptr) check_known_dll_full_path;
    
    // [LdrpCleanupThreadTlsData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7af48, 0x67960 bytes
    // ntdll.dll .text:0x6f3f4, 0x6fc38 bytes
    // ntdll.dll .text:0x70938, 0x74648 bytes
    // ntdll.dll .text:0x6f594, 0x6fc38 bytes
    //
    _o23(sdk::unknown_ptr) cleanup_thread_tls_data;
    
    // [LdrpCnvrtShortToLongFileName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdd4ac, 0x67960 bytes
    // ntdll.dll .text:0xe0d5c, 0x6fc38 bytes
    // ntdll.dll .text:0xeb8cc, 0x74648 bytes
    // ntdll.dll .text:0xe0ccc, 0x6fc38 bytes
    //
    _o24(sdk::unknown_ptr) cnvrt_short_to_long_file_name;
    
    // [LdrpCODScenarioLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544f8, 0x67960 bytes
    // ntdll.dll .data:0x16b770, 0x6fc38 bytes
    // ntdll.dll .data:0x185300, 0x74648 bytes
    // ntdll.dll .data:0x16c770, 0x6fc38 bytes
    //
    _o25(sdk::unknown_ptr) cod_scenario_lock;
    
    // [LdrpCODScenarioTriggered]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544f6, 0x67960 bytes
    // ntdll.dll .data:0x16b764, 0x6fc38 bytes
    // ntdll.dll .data:0x1852d8, 0x74648 bytes
    // ntdll.dll .data:0x16c764, 0x6fc38 bytes
    //
    _o26(sdk::unknown_ptr) cod_scenario_triggered;
    
    // [LdrpCodeAuthzInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8060c, 0x67960 bytes
    // ntdll.dll .text:0x7ab60, 0x6fc38 bytes
    // ntdll.dll .text:0x9dac, 0x74648 bytes
    // ntdll.dll .text:0x7ad00, 0x6fc38 bytes
    //
    _o27(sdk::unknown_ptr) code_authz_initialize;
    
    // [LdrpComPlusInstallRootName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10d168, 0x67960 bytes
    // ntdll.dll .rdata:0x122148, 0x6fc38 bytes
    // ntdll.dll .rdata:0x138580, 0x74648 bytes
    // ntdll.dll .rdata:0x122448, 0x6fc38 bytes
    //
    _o28(sdk::unknown_ptr) com_plus_install_root_name;
    
    // [LdrpComPlusVersionName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d930, 0x67960 bytes
    // ntdll.dll .rdata:0x130918, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14bf88, 0x74648 bytes
    // ntdll.dll .rdata:0x130c18, 0x6fc38 bytes
    //
    _o29(sdk::unknown_ptr) com_plus_version_name;
    
    // [LdrpCompareServiceChecksum]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1d9d8, 0x67960 bytes
    // ntdll.dll .text:0x7ca9c, 0x6fc38 bytes
    // ntdll.dll .text:0x775c, 0x74648 bytes
    // ntdll.dll .text:0x7cc3c, 0x6fc38 bytes
    //
    _o30(sdk::unknown_ptr) compare_service_checksum;
    
    // [LdrpCompleteProcessCloning]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4044, 0x67960 bytes
    // ntdll.dll .text:0xd48e8, 0x6fc38 bytes
    // ntdll.dll .text:0xdf3a4, 0x74648 bytes
    // ntdll.dll .text:0xd4858, 0x6fc38 bytes
    //
    _o31(sdk::unknown_ptr) complete_process_cloning;
    
    // [LdrpComputeLazyDllPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x998c, 0x67960 bytes
    // ntdll.dll .text:0x625bc, 0x6fc38 bytes
    // ntdll.dll .text:0x7a8d4, 0x74648 bytes
    // ntdll.dll .text:0x626dc, 0x6fc38 bytes
    //
    _o32(sdk::unknown_ptr) compute_lazy_dll_path;
    
    // [LdrpCondenseGraph]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x75dd0, 0x67960 bytes
    // ntdll.dll .text:0x32438, 0x6fc38 bytes
    // ntdll.dll .text:0x6f354, 0x74648 bytes
    // ntdll.dll .text:0x32438, 0x6fc38 bytes
    //
    _o33(sdk::unknown_ptr) condense_graph;
    
    // [LdrpCondenseGraphRecurse]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x75e04, 0x67960 bytes
    // ntdll.dll .text:0x322ec, 0x6fc38 bytes
    // ntdll.dll .text:0x6f388, 0x74648 bytes
    // ntdll.dll .text:0x322ec, 0x6fc38 bytes
    //
    _o34(sdk::unknown_ptr) condense_graph_recurse;
    
    // [LdrpConstructModernAppKeyName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd34e0, 0x67960 bytes
    // ntdll.dll .text:0xd051c, 0x6fc38 bytes
    // ntdll.dll .text:0xdd130, 0x74648 bytes
    // ntdll.dll .text:0xd049c, 0x6fc38 bytes
    //
    _o35(sdk::unknown_ptr) construct_modern_app_key_name;
    
    // [LdrpConvertLangFallbackListToMultiSz]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2431c, 0x67960 bytes
    // ntdll.dll .text:0x2893c, 0x6fc38 bytes
    // ntdll.dll .text:0x1252c, 0x74648 bytes
    // ntdll.dll .text:0x2893c, 0x6fc38 bytes
    //
    _o36(sdk::unknown_ptr) convert_lang_fallback_list_to_multi_sz;
    
    // [LdrpCorExeMainRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153400, 0x67960 bytes
    // ntdll.dll .data:0x16a538, 0x6fc38 bytes
    // ntdll.dll .data:0x1843f8, 0x74648 bytes
    // ntdll.dll .data:0x16b538, 0x6fc38 bytes
    //
    _o37(sdk::unknown_ptr) cor_exe_main_routine;
    
    // [LdrpCorFixupImage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x903f0, 0x67960 bytes
    // ntdll.dll .text:0xce558, 0x6fc38 bytes
    // ntdll.dll .text:0xda748, 0x74648 bytes
    // ntdll.dll .text:0xce4d8, 0x6fc38 bytes
    //
    _o38(sdk::unknown_ptr) cor_fixup_image;
    
    // [LdrpCorInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x67ec, 0x67960 bytes
    // ntdll.dll .text:0x81f04, 0x6fc38 bytes
    // ntdll.dll .text:0x8da14, 0x74648 bytes
    // ntdll.dll .text:0x820a4, 0x6fc38 bytes
    //
    _o39(sdk::unknown_ptr) cor_initialize;
    
    // [LdrpCorProcessImports]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86e88, 0x67960 bytes
    // ntdll.dll .text:0x83a04, 0x6fc38 bytes
    // ntdll.dll .text:0x8e104, 0x74648 bytes
    // ntdll.dll .text:0x83ba4, 0x6fc38 bytes
    //
    _o40(sdk::unknown_ptr) cor_process_imports;
    
    // [LdrpCorValidateImage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87c3c, 0x67960 bytes
    // ntdll.dll .text:0x83f94, 0x6fc38 bytes
    // ntdll.dll .text:0x8e398, 0x74648 bytes
    // ntdll.dll .text:0x84134, 0x6fc38 bytes
    //
    _o41(sdk::unknown_ptr) cor_validate_image;
    
    // [LdrpCreateActCtxLanguageW]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fa8, 0x67960 bytes
    // ntdll.dll .data:0x16b178, 0x6fc38 bytes
    // ntdll.dll .data:0x184c18, 0x74648 bytes
    // ntdll.dll .data:0x16c178, 0x6fc38 bytes
    //
    _o42(sdk::unknown_ptr) create_act_ctx_language_w;
    
    // [LdrpCreateLangFallbackList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x24138, 0x67960 bytes
    // ntdll.dll .text:0x2aa94, 0x6fc38 bytes
    // ntdll.dll .text:0x123dc, 0x74648 bytes
    // ntdll.dll .text:0x2aa94, 0x6fc38 bytes
    //
    _o43(sdk::unknown_ptr) create_lang_fallback_list;
    
    // [LdrpCreateLoaderEvents]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14a5c, 0x67960 bytes
    // ntdll.dll .text:0x8c50, 0x6fc38 bytes
    // ntdll.dll .text:0x5f7c8, 0x74648 bytes
    // ntdll.dll .text:0x8c50, 0x6fc38 bytes
    //
    _o44(sdk::unknown_ptr) create_loader_events;
    
    // [LdrpCurrentDllInitializer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153aa8, 0x67960 bytes
    // ntdll.dll .data:0x16abc8, 0x6fc38 bytes
    // ntdll.dll .data:0x184a88, 0x74648 bytes
    // ntdll.dll .data:0x16bbc8, 0x6fc38 bytes
    //
    _o45(sdk::unknown_ptr) current_dll_initializer;
    
    // [LdrpDebugFlags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14da00, 0x67960 bytes
    // ntdll.dll .data:0x164ab0, 0x6fc38 bytes
    // ntdll.dll .data:0x17ea00, 0x74648 bytes
    // ntdll.dll .data:0x165ab0, 0x6fc38 bytes
    //
    _o46(sdk::unknown_ptr) debug_flags;
    
    // [LdrpDecrementModuleLoadCountEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4ee58, 0x67960 bytes
    // ntdll.dll .text:0x339e8, 0x6fc38 bytes
    // ntdll.dll .text:0x2d61c, 0x74648 bytes
    // ntdll.dll .text:0x339e8, 0x6fc38 bytes
    //
    _o47(sdk::unknown_ptr) decrement_module_load_count_ex;
    
    // [LdrpDecrementNodeLoadCountLockHeld]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd2230, 0x67960 bytes
    // ntdll.dll .text:0x33a78, 0x6fc38 bytes
    // ntdll.dll .text:0x2d6ac, 0x74648 bytes
    // ntdll.dll .text:0x33a78, 0x6fc38 bytes
    //
    _o48(sdk::unknown_ptr) decrement_node_load_count_lock_held;
    
    // [LdrpDefaultDllDirectories]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fc8, 0x67960 bytes
    // ntdll.dll .data:0x16b19c, 0x6fc38 bytes
    // ntdll.dll .data:0x184c44, 0x74648 bytes
    // ntdll.dll .data:0x16c19c, 0x6fc38 bytes
    //
    _o49(sdk::unknown_ptr) default_dll_directories;
    
    // [LdrpDefaultExtension]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1093e0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c1b0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1311e0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c1b0, 0x6fc38 bytes
    //
    _o50(sdk::unknown_ptr) default_extension;
    
    // [LdrpDelayedTlsReclaimTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1541e0, 0x67960 bytes
    // ntdll.dll .data:0x16b350, 0x6fc38 bytes
    // ntdll.dll .data:0x184f00, 0x74648 bytes
    // ntdll.dll .data:0x16c350, 0x6fc38 bytes
    //
    _o51(sdk::unknown_ptr) delayed_tls_reclaim_table;
    
    // [LdrpDependencyExist]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x22b38, 0x67960 bytes
    // ntdll.dll .text:0x345dc, 0x6fc38 bytes
    // ntdll.dll .text:0x2ad04, 0x74648 bytes
    // ntdll.dll .text:0x345dc, 0x6fc38 bytes
    //
    _o52(sdk::unknown_ptr) dependency_exist;
    
    // [LdrpDereferenceModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x46e38, 0x67960 bytes
    // ntdll.dll .text:0x216b8, 0x6fc38 bytes
    // ntdll.dll .text:0x226fc, 0x74648 bytes
    // ntdll.dll .text:0x216b8, 0x6fc38 bytes
    //
    _o53(sdk::unknown_ptr) dereference_module;
    
    // [LdrpDestroyNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x75f4c, 0x67960 bytes
    // ntdll.dll .text:0x7b548, 0x6fc38 bytes
    // ntdll.dll .text:0x6f4e4, 0x74648 bytes
    // ntdll.dll .text:0x7b6e8, 0x6fc38 bytes
    //
    _o54(sdk::unknown_ptr) destroy_node;
    
    // [LdrpDetectDetour]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53a48, 0x67960 bytes
    // ntdll.dll .text:0x32614, 0x6fc38 bytes
    // ntdll.dll .text:0x7141c, 0x74648 bytes
    // ntdll.dll .text:0x32614, 0x6fc38 bytes
    //
    _o55(sdk::unknown_ptr) detect_detour;
    
    // [LdrpDetourExist]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x15328c, 0x67960 bytes
    // ntdll.dll .data:0x16a400, 0x6fc38 bytes
    // ntdll.dll .data:0x1842c0, 0x74648 bytes
    // ntdll.dll .data:0x16b400, 0x6fc38 bytes
    //
    _o56(sdk::unknown_ptr) detour_exist;
    
    // [LdrpDispatchUserCallTarget]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x964b0, 0x67960 bytes
    // ntdll.dll .text:0x8b620, 0x6fc38 bytes
    // ntdll.dll .text:0x8ebf0, 0x74648 bytes
    // ntdll.dll .text:0x8b7c0, 0x6fc38 bytes
    //
    _o57(sdk::unknown_ptr) dispatch_user_call_target;
    
    // [LdrpDllDirectory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fd0, 0x67960 bytes
    // ntdll.dll .data:0x16b1a8, 0x6fc38 bytes
    // ntdll.dll .data:0x184c50, 0x74648 bytes
    // ntdll.dll .data:0x16c1a8, 0x6fc38 bytes
    //
    _o58(sdk::unknown_ptr) dll_directory;
    
    // [LdrpDllDirectoryLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154430, 0x67960 bytes
    // ntdll.dll .data:0x16b668, 0x6fc38 bytes
    // ntdll.dll .data:0x185080, 0x74648 bytes
    // ntdll.dll .data:0x16c658, 0x6fc38 bytes
    //
    _o59(sdk::unknown_ptr) dll_directory_lock;
    
    // [LdrpDllNotificationList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d5d0, 0x67960 bytes
    // ntdll.dll .data:0x164560, 0x6fc38 bytes
    // ntdll.dll .data:0x17e2f0, 0x74648 bytes
    // ntdll.dll .data:0x165560, 0x6fc38 bytes
    //
    _o60(sdk::unknown_ptr) dll_notification_list;
    
    // [LdrpDllNotificationLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d540, 0x67960 bytes
    // ntdll.dll .data:0x1643f0, 0x6fc38 bytes
    // ntdll.dll .data:0x17e228, 0x74648 bytes
    // ntdll.dll .data:0x1653f0, 0x6fc38 bytes
    //
    _o61(sdk::unknown_ptr) dll_notification_lock;
    
    // [LdrpDllNotificationLock_DEBUG]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d968, 0x67960 bytes
    // ntdll.dll .data:0x164948, 0x6fc38 bytes
    // ntdll.dll .data:0x17e7b8, 0x74648 bytes
    // ntdll.dll .data:0x165948, 0x6fc38 bytes
    //
    _o62(sdk::unknown_ptr) dll_notification_lock_debug;
    
    // [LdrpDoDebuggerBreak]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd35c0, 0x67960 bytes
    // ntdll.dll .text:0xd0600, 0x6fc38 bytes
    // ntdll.dll .text:0xdd214, 0x74648 bytes
    // ntdll.dll .text:0xd0580, 0x6fc38 bytes
    //
    _o63(sdk::unknown_ptr) do_debugger_break;
    
    // [LdrpDrainWorkQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2fb3c, 0x67960 bytes
    // ntdll.dll .text:0x33594, 0x6fc38 bytes
    // ntdll.dll .text:0x2a61c, 0x74648 bytes
    // ntdll.dll .text:0x33594, 0x6fc38 bytes
    //
    _o64(sdk::unknown_ptr) drain_work_queue;
    
    // [LdrpDropLastInProgressCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7ba3c, 0x67960 bytes
    // ntdll.dll .text:0x31e58, 0x6fc38 bytes
    // ntdll.dll .text:0x52294, 0x74648 bytes
    // ntdll.dll .text:0x31e58, 0x6fc38 bytes
    //
    _o65(sdk::unknown_ptr) drop_last_in_progress_count;
    
    // [LdrpDynamicShimModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xee4c, 0x67960 bytes
    // ntdll.dll .text:0x40d70, 0x6fc38 bytes
    // ntdll.dll .text:0x2e7b4, 0x74648 bytes
    // ntdll.dll .text:0x40d70, 0x6fc38 bytes
    //
    _o66(sdk::unknown_ptr) dynamic_shim_module;
    
    // [LdrpEnableParallelLoading]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x53900, 0x67960 bytes
    // ntdll.dll .text:0x464bc, 0x6fc38 bytes
    // ntdll.dll .text:0x4b764, 0x74648 bytes
    // ntdll.dll .text:0x464bc, 0x6fc38 bytes
    //
    _o67(sdk::unknown_ptr) enable_parallel_loading;
    
    // [LdrpEventAddAnsiString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd264c, 0x67960 bytes
    // ntdll.dll .text:0xceb88, 0x6fc38 bytes
    // ntdll.dll .text:0xad24a, 0x74648 bytes
    // ntdll.dll .text:0xceb08, 0x6fc38 bytes
    //
    _o68(sdk::unknown_ptr) event_add_ansi_string;
    
    // [LdrpEventAddUnicodeString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd26b0, 0x67960 bytes
    // ntdll.dll .text:0xcebec, 0x6fc38 bytes
    // ntdll.dll .text:0xad2ae, 0x74648 bytes
    // ntdll.dll .text:0xceb6c, 0x6fc38 bytes
    //
    _o69(sdk::unknown_ptr) event_add_unicode_string;
    
    // [LdrpFailureData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152f40, 0x67960 bytes
    // ntdll.dll .data:0x16a040, 0x6fc38 bytes
    // ntdll.dll .data:0x183f00, 0x74648 bytes
    // ntdll.dll .data:0x16b040, 0x6fc38 bytes
    //
    _o70(sdk::unknown_ptr) failure_data;
    
    // [LdrpFastpthReloadedDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x27194, 0x67960 bytes
    // ntdll.dll .text:0x34d78, 0x6fc38 bytes
    // ntdll.dll .text:0x29b18, 0x74648 bytes
    // ntdll.dll .text:0x34d78, 0x6fc38 bytes
    //
    _o71(sdk::unknown_ptr) fastpth_reloaded_dll;
    
    // [LdrpFatalExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd41bc, 0x67960 bytes
    // ntdll.dll .text:0xd5230, 0x6fc38 bytes
    // ntdll.dll .text:0xe0510, 0x74648 bytes
    // ntdll.dll .text:0xd51a0, 0x6fc38 bytes
    //
    _o72(sdk::unknown_ptr) fatal_exception_filter;
    
    // [LdrpFatalHardErrorCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152f28, 0x67960 bytes
    // ntdll.dll .data:0x16a028, 0x6fc38 bytes
    // ntdll.dll .data:0x183ee8, 0x74648 bytes
    // ntdll.dll .data:0x16b028, 0x6fc38 bytes
    //
    _o73(sdk::unknown_ptr) fatal_hard_error_count;
    
    // [LdrpFindKnownDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4c4, 0x67960 bytes
    // ntdll.dll .text:0x3c95c, 0x6fc38 bytes
    // ntdll.dll .text:0x2c554, 0x74648 bytes
    // ntdll.dll .text:0x3c95c, 0x6fc38 bytes
    //
    _o74(sdk::unknown_ptr) find_known_dll;
    
    // [LdrpFindLoadedDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa0c0, 0x67960 bytes
    // ntdll.dll .text:0x348c8, 0x6fc38 bytes
    // ntdll.dll .text:0x16374, 0x74648 bytes
    // ntdll.dll .text:0x348c8, 0x6fc38 bytes
    //
    _o75(sdk::unknown_ptr) find_loaded_dll;
    
    // [LdrpFindLoadedDllByAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1db20, 0x67960 bytes
    // ntdll.dll .text:0x6cd10, 0x6fc38 bytes
    // ntdll.dll .text:0x8d00, 0x74648 bytes
    // ntdll.dll .text:0x6ce30, 0x6fc38 bytes
    //
    _o76(sdk::unknown_ptr) find_loaded_dll_by_address;
    
    // [LdrpFindLoadedDllByHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x46850, 0x67960 bytes
    // ntdll.dll .text:0x34250, 0x6fc38 bytes
    // ntdll.dll .text:0x2c18c, 0x74648 bytes
    // ntdll.dll .text:0x34250, 0x6fc38 bytes
    //
    _o77(sdk::unknown_ptr) find_loaded_dll_by_handle;
    
    // [LdrpFindLoadedDllByMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8db0, 0x67960 bytes
    // ntdll.dll .text:0x74174, 0x6fc38 bytes
    // ntdll.dll .text:0x2dd8c, 0x74648 bytes
    // ntdll.dll .text:0x74314, 0x6fc38 bytes
    //
    _o78(sdk::unknown_ptr) find_loaded_dll_by_mapping;
    
    // [LdrpFindLoadedDllByMappingFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8b8c, 0x67960 bytes
    // ntdll.dll .text:0x73f50, 0x6fc38 bytes
    // ntdll.dll .text:0x7d43c, 0x74648 bytes
    // ntdll.dll .text:0x740f0, 0x6fc38 bytes
    //
    _o79(sdk::unknown_ptr) find_loaded_dll_by_mapping_file;
    
    // [LdrpFindLoadedDllByMappingLockHeld]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x46138, 0x67960 bytes
    // ntdll.dll .text:0x3d3dc, 0x6fc38 bytes
    // ntdll.dll .text:0x2cd14, 0x74648 bytes
    // ntdll.dll .text:0x3d3dc, 0x6fc38 bytes
    //
    _o80(sdk::unknown_ptr) find_loaded_dll_by_mapping_lock_held;
    
    // [LdrpFindLoadedDllByName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2ac00, 0x67960 bytes
    // ntdll.dll .text:0x34fe8, 0x6fc38 bytes
    // ntdll.dll .text:0x29bd0, 0x74648 bytes
    // ntdll.dll .text:0x34fe8, 0x6fc38 bytes
    //
    _o81(sdk::unknown_ptr) find_loaded_dll_by_name;
    
    // [LdrpFindLoadedDllByNameLockHeld]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7e8, 0x67960 bytes
    // ntdll.dll .text:0x3519c, 0x6fc38 bytes
    // ntdll.dll .text:0x2cc14, 0x74648 bytes
    // ntdll.dll .text:0x3519c, 0x6fc38 bytes
    //
    _o82(sdk::unknown_ptr) find_loaded_dll_by_name_lock_held;
    
    // [LdrpFindLoadedDllInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa188, 0x67960 bytes
    // ntdll.dll .text:0x34994, 0x6fc38 bytes
    // ntdll.dll .text:0x2b05c, 0x74648 bytes
    // ntdll.dll .text:0x34994, 0x6fc38 bytes
    //
    _o83(sdk::unknown_ptr) find_loaded_dll_internal;
    
    // [LdrpFindOrPrepareLoadingModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd190, 0x67960 bytes
    // ntdll.dll .text:0x3277c, 0x6fc38 bytes
    // ntdll.dll .text:0x2e3fc, 0x74648 bytes
    // ntdll.dll .text:0x3277c, 0x6fc38 bytes
    //
    _o84(sdk::unknown_ptr) find_or_prepare_loading_module;
    
    // [LdrpFindTlsEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7928, 0x67960 bytes
    // ntdll.dll .text:0x37c80, 0x6fc38 bytes
    // ntdll.dll .text:0x29a4c, 0x74648 bytes
    // ntdll.dll .text:0x37c80, 0x6fc38 bytes
    //
    _o85(sdk::unknown_ptr) find_tls_entry;
    
    // [LdrpForkActiveLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1542e8, 0x67960 bytes
    // ntdll.dll .data:0x16b478, 0x6fc38 bytes
    // ntdll.dll .data:0x185028, 0x74648 bytes
    // ntdll.dll .data:0x16c478, 0x6fc38 bytes
    //
    _o86(sdk::unknown_ptr) fork_active_lock;
    
    // [LdrpForkConditionVariable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1542f0, 0x67960 bytes
    // ntdll.dll .data:0x16b480, 0x6fc38 bytes
    // ntdll.dll .data:0x185030, 0x74648 bytes
    // ntdll.dll .data:0x16c480, 0x6fc38 bytes
    //
    _o87(sdk::unknown_ptr) fork_condition_variable;
    
    // [LdrpForkInProgress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152ef9, 0x67960 bytes
    // ntdll.dll .data:0x169ff9, 0x6fc38 bytes
    // ntdll.dll .data:0x183eb9, 0x74648 bytes
    // ntdll.dll .data:0x16aff9, 0x6fc38 bytes
    //
    _o88(sdk::unknown_ptr) fork_in_progress;
    
    // [LdrpFreeLoadContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6ca58, 0x67960 bytes
    // ntdll.dll .text:0x32538, 0x6fc38 bytes
    // ntdll.dll .text:0x67bd0, 0x74648 bytes
    // ntdll.dll .text:0x32538, 0x6fc38 bytes
    //
    _o89(sdk::unknown_ptr) free_load_context;
    
    // [LdrpFreeLoadContextOfNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6c9c4, 0x67960 bytes
    // ntdll.dll .text:0x324a4, 0x6fc38 bytes
    // ntdll.dll .text:0x67b3c, 0x74648 bytes
    // ntdll.dll .text:0x324a4, 0x6fc38 bytes
    //
    _o90(sdk::unknown_ptr) free_load_context_of_node;
    
    // [LdrpFreeReplacedModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6c98c, 0x67960 bytes
    // ntdll.dll .text:0x82670, 0x6fc38 bytes
    // ntdll.dll .text:0x67b04, 0x74648 bytes
    // ntdll.dll .text:0x82810, 0x6fc38 bytes
    //
    _o91(sdk::unknown_ptr) free_replaced_module;
    
    // [LdrpFreeTls]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7ae8c, 0x67960 bytes
    // ntdll.dll .text:0x6f338, 0x6fc38 bytes
    // ntdll.dll .text:0x7088c, 0x74648 bytes
    // ntdll.dll .text:0x6f4d8, 0x6fc38 bytes
    //
    _o92(sdk::unknown_ptr) free_tls;
    
    // [LdrpFreeUnicodeString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcbc0, 0x67960 bytes
    // ntdll.dll .text:0x61fbc, 0x6fc38 bytes
    // ntdll.dll .text:0x11348, 0x74648 bytes
    // ntdll.dll .text:0x620dc, 0x6fc38 bytes
    //
    _o93(sdk::unknown_ptr) free_unicode_string;
    
    // [LdrpGenRandom]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe5c0, 0x67960 bytes
    // ntdll.dll .text:0x3300c, 0x6fc38 bytes
    // ntdll.dll .text:0x2b7a4, 0x74648 bytes
    // ntdll.dll .text:0x3300c, 0x6fc38 bytes
    //
    _o94(sdk::unknown_ptr) gen_random;
    
    // [LdrpGenSecurityCookie]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe784, 0x67960 bytes
    // ntdll.dll .text:0x32ae8, 0x6fc38 bytes
    // ntdll.dll .text:0x2d30c, 0x74648 bytes
    // ntdll.dll .text:0x32ae8, 0x6fc38 bytes
    //
    _o95(sdk::unknown_ptr) gen_security_cookie;
    
    // [LdrpGenericExceptionFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4244, 0x67960 bytes
    // ntdll.dll .text:0xd530c, 0x6fc38 bytes
    // ntdll.dll .text:0xe05f8, 0x74648 bytes
    // ntdll.dll .text:0xd527c, 0x6fc38 bytes
    //
    _o96(sdk::unknown_ptr) generic_exception_filter;
    
    // [LdrpGetDataModulePath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1e410, 0x67960 bytes
    // ntdll.dll .text:0x6ca88, 0x6fc38 bytes
    // ntdll.dll .text:0x83e0, 0x74648 bytes
    // ntdll.dll .text:0x6cba8, 0x6fc38 bytes
    //
    _o97(sdk::unknown_ptr) get_data_module_path;
    
    // [LdrpGetDelayloadAPIInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6b74, 0x67960 bytes
    // ntdll.dll .text:0x7fc78, 0x6fc38 bytes
    // ntdll.dll .text:0x86458, 0x74648 bytes
    // ntdll.dll .text:0x7fe18, 0x6fc38 bytes
    //
    _o98(sdk::unknown_ptr) get_delayload_api_info;
    
    // [LdrpGetDelayloadDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd2414, 0x67960 bytes
    // ntdll.dll .text:0xce93c, 0x6fc38 bytes
    // ntdll.dll .text:0xdab2c, 0x74648 bytes
    // ntdll.dll .text:0xce8bc, 0x6fc38 bytes
    //
    _o99(sdk::unknown_ptr) get_delayload_descriptor;
    
    // [LdrpGetDelayloadExportDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9a74, 0x67960 bytes
    // ntdll.dll .text:0x3c570, 0x6fc38 bytes
    // ntdll.dll .text:0x1626c, 0x74648 bytes
    // ntdll.dll .text:0x3c570, 0x6fc38 bytes
    //
    _p00(sdk::unknown_ptr) get_delayload_export_dll;
    
    // [LdrpGetDllPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2ffd8, 0x67960 bytes
    // ntdll.dll .text:0x626ac, 0x6fc38 bytes
    // ntdll.dll .text:0x31c8c, 0x74648 bytes
    // ntdll.dll .text:0x627cc, 0x6fc38 bytes
    //
    _p01(sdk::unknown_ptr) get_dll_path;
    
    // [LdrpGetFileSizeFromLoadAsDataTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f47c, 0x67960 bytes
    // ntdll.dll .text:0x24b94, 0x6fc38 bytes
    // ntdll.dll .text:0x27060, 0x74648 bytes
    // ntdll.dll .text:0x24b94, 0x6fc38 bytes
    //
    _p02(sdk::unknown_ptr) get_file_size_from_load_as_data_table;
    
    // [LdrpGetFullPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xc618, 0x67960 bytes
    // ntdll.dll .text:0x3ca7c, 0x6fc38 bytes
    // ntdll.dll .text:0x2df30, 0x74648 bytes
    // ntdll.dll .text:0x3ca7c, 0x6fc38 bytes
    //
    _p03(sdk::unknown_ptr) get_full_path;
    
    // [LdrpGetLoadAsEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1e234, 0x67960 bytes
    // ntdll.dll .text:0x6cbfc, 0x6fc38 bytes
    // ntdll.dll .text:0x8ae0, 0x74648 bytes
    // ntdll.dll .text:0x6cd1c, 0x6fc38 bytes
    //
    _p04(sdk::unknown_ptr) get_load_as_entry;
    
    // [LdrpGetModuleInfoFromVirtualMemory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88ed8, 0x67960 bytes
    // ntdll.dll .text:0x833b4, 0x6fc38 bytes
    // ntdll.dll .text:0x87ddc, 0x74648 bytes
    // ntdll.dll .text:0x83554, 0x6fc38 bytes
    //
    _p05(sdk::unknown_ptr) get_module_info_from_virtual_memory;
    
    // [LdrpGetModuleName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70444, 0x67960 bytes
    // ntdll.dll .text:0x10e8, 0x6fc38 bytes
    // ntdll.dll .text:0x1008, 0x74648 bytes
    // ntdll.dll .text:0x10e8, 0x6fc38 bytes
    //
    _p06(sdk::unknown_ptr) get_module_name;
    
    // [LdrpGetMUILangConfigNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88b18, 0x67960 bytes
    // ntdll.dll .text:0xee498, 0x6fc38 bytes
    // ntdll.dll .text:0xae146, 0x74648 bytes
    // ntdll.dll .text:0xee448, 0x6fc38 bytes
    //
    _p07(sdk::unknown_ptr) get_mui_lang_config_node;
    
    // [LdrpGetNewTlsVector]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1bb0c, 0x67960 bytes
    // ntdll.dll .text:0x53eac, 0x6fc38 bytes
    // ntdll.dll .text:0x50b4, 0x74648 bytes
    // ntdll.dll .text:0x53eac, 0x6fc38 bytes
    //
    _p08(sdk::unknown_ptr) get_new_tls_vector;
    
    // [LdrpGetProcApphelpCheckModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd3600, 0x67960 bytes
    // ntdll.dll .text:0xd0640, 0x6fc38 bytes
    // ntdll.dll .text:0xdd254, 0x74648 bytes
    // ntdll.dll .text:0xd05c0, 0x6fc38 bytes
    //
    _p09(sdk::unknown_ptr) get_proc_apphelp_check_module;
    
    // [LdrpGetProcedureAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x46f70, 0x67960 bytes
    // ntdll.dll .text:0x23430, 0x6fc38 bytes
    // ntdll.dll .text:0x22de0, 0x74648 bytes
    // ntdll.dll .text:0x23430, 0x6fc38 bytes
    //
    _p10(sdk::unknown_ptr) get_procedure_address;
    
    // [LdrpGetShimEngineInterface]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7024, 0x67960 bytes
    // ntdll.dll .text:0x606c0, 0x6fc38 bytes
    // ntdll.dll .text:0x793f8, 0x74648 bytes
    // ntdll.dll .text:0x607e0, 0x6fc38 bytes
    //
    _p11(sdk::unknown_ptr) get_shim_engine_interface;
    
    // [LdrpHandleInvalidUserCallTarget]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x963c0, 0x67960 bytes
    // ntdll.dll .text:0x8b4c0, 0x6fc38 bytes
    // ntdll.dll .text:0x8e9e0, 0x74648 bytes
    // ntdll.dll .text:0x8b660, 0x6fc38 bytes
    //
    _p12(sdk::unknown_ptr) handle_invalid_user_call_target;
    
    // [LdrpHandleProtectedDelayload]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x48440, 0x67960 bytes
    // ntdll.dll .text:0x22b10, 0x6fc38 bytes
    // ntdll.dll .text:0x23220, 0x74648 bytes
    // ntdll.dll .text:0x22b10, 0x6fc38 bytes
    //
    _p13(sdk::unknown_ptr) handle_protected_delayload;
    
    // [LdrpHandleReplacedModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6cb34, 0x67960 bytes
    // ntdll.dll .text:0x3246c, 0x6fc38 bytes
    // ntdll.dll .text:0x67cac, 0x74648 bytes
    // ntdll.dll .text:0x3246c, 0x6fc38 bytes
    //
    _p14(sdk::unknown_ptr) handle_replaced_module;
    
    // [LdrpHandleTlsData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1b4f8, 0x67960 bytes
    // ntdll.dll .text:0x53794, 0x6fc38 bytes
    // ntdll.dll .text:0x4574, 0x74648 bytes
    // ntdll.dll .text:0x53794, 0x6fc38 bytes
    //
    _p15(sdk::unknown_ptr) handle_tls_data;
    
    // [LdrpHandleUnprotectedDelayLoad]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x69b0, 0x67960 bytes
    // ntdll.dll .text:0x869ec, 0x6fc38 bytes
    // ntdll.dll .text:0xdabe0, 0x74648 bytes
    // ntdll.dll .text:0x86b8c, 0x6fc38 bytes
    //
    _p16(sdk::unknown_ptr) handle_unprotected_delay_load;
    
    // [LdrpHashTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153000, 0x67960 bytes
    // ntdll.dll .data:0x16a140, 0x6fc38 bytes
    // ntdll.dll .data:0x183fe0, 0x74648 bytes
    // ntdll.dll .data:0x16b140, 0x6fc38 bytes
    //
    _p17(sdk::unknown_ptr) hash_table;
    
    // [LdrpHashUnicodeString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2d3f0, 0x67960 bytes
    // ntdll.dll .text:0x3c818, 0x6fc38 bytes
    // ntdll.dll .text:0x14c14, 0x74648 bytes
    // ntdll.dll .text:0x3c818, 0x6fc38 bytes
    //
    _p18(sdk::unknown_ptr) hash_unicode_string;
    
    // [LdrpHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153380, 0x67960 bytes
    // ntdll.dll .data:0x16a520, 0x6fc38 bytes
    // ntdll.dll .data:0x1843e0, 0x74648 bytes
    // ntdll.dll .data:0x16b520, 0x6fc38 bytes
    //
    _p19(sdk::unknown_ptr) heap;
    
    // [LdrpICallHandler]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96440, 0x67960 bytes
    // ntdll.dll .text:0x8b560, 0x6fc38 bytes
    // ntdll.dll .text:0x8ea90, 0x74648 bytes
    // ntdll.dll .text:0x8b700, 0x6fc38 bytes
    //
    _p20(sdk::unknown_ptr) i_call_handler;
    
    // [LdrpIllegalCWDDevices]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544d0, 0x67960 bytes
    // ntdll.dll .data:0x16b694, 0x6fc38 bytes
    // ntdll.dll .data:0x18521c, 0x74648 bytes
    // ntdll.dll .data:0x16c684, 0x6fc38 bytes
    //
    _p21(sdk::unknown_ptr) illegal_cwd_devices;
    
    // [LdrpImageEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152ea8, 0x67960 bytes
    // ntdll.dll .data:0x16a0c8, 0x6fc38 bytes
    // ntdll.dll .data:0x183f88, 0x74648 bytes
    // ntdll.dll .data:0x16b0c8, 0x6fc38 bytes
    //
    _p22(sdk::unknown_ptr) image_entry;
    
    // [LdrpIncrementModuleLoadCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x23254, 0x67960 bytes
    // ntdll.dll .text:0x35400, 0x6fc38 bytes
    // ntdll.dll .text:0x2a510, 0x74648 bytes
    // ntdll.dll .text:0x35400, 0x6fc38 bytes
    //
    _p23(sdk::unknown_ptr) increment_module_load_count;
    
    // [LdrpInitShimEngine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6074, 0x67960 bytes
    // ntdll.dll .text:0x5fff0, 0x6fc38 bytes
    // ntdll.dll .text:0x79118, 0x74648 bytes
    // ntdll.dll .text:0x60110, 0x6fc38 bytes
    //
    _p24(sdk::unknown_ptr) init_shim_engine;
    
    // [LdrpInitializationFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd3810, 0x67960 bytes
    // ntdll.dll .text:0xd0858, 0x6fc38 bytes
    // ntdll.dll .text:0x8a4b0, 0x74648 bytes
    // ntdll.dll .text:0xd07d8, 0x6fc38 bytes
    //
    _p25(sdk::unknown_ptr) initialization_failure;
    
    // [LdrpInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x79f88, 0x67960 bytes
    // ntdll.dll .text:0x745e8, 0x6fc38 bytes
    // ntdll.dll .text:0x73e38, 0x74648 bytes
    // ntdll.dll .text:0x74788, 0x6fc38 bytes
    //
    _p26(sdk::unknown_ptr) initialize;
    
    // [_LdrpInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x79fc4, 0x67960 bytes
    // ntdll.dll .text:0x7463c, 0x6fc38 bytes
    // ntdll.dll .text:0x73f2c, 0x74648 bytes
    // ntdll.dll .text:0x747dc, 0x6fc38 bytes
    //
    _p27(sdk::unknown_ptr) initialize_;
    
    // [LdrpInitializeApplicationVerifierPackage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd38b8, 0x67960 bytes
    // ntdll.dll .text:0xd0900, 0x6fc38 bytes
    // ntdll.dll .text:0xdd478, 0x74648 bytes
    // ntdll.dll .text:0xd0880, 0x6fc38 bytes
    //
    _p28(sdk::unknown_ptr) initialize_application_verifier_package;
    
    // [LdrpInitializeDllPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa2d8, 0x67960 bytes
    // ntdll.dll .text:0x34758, 0x6fc38 bytes
    // ntdll.dll .text:0x2b1f4, 0x74648 bytes
    // ntdll.dll .text:0x34758, 0x6fc38 bytes
    //
    _p29(sdk::unknown_ptr) initialize_dll_path;
    
    // [LdrpInitializeExecutionOptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90d84, 0x67960 bytes
    // ntdll.dll .text:0xd0dac, 0x6fc38 bytes
    // ntdll.dll .text:0xdd97c, 0x74648 bytes
    // ntdll.dll .text:0xd0d2c, 0x6fc38 bytes
    //
    _p30(sdk::unknown_ptr) initialize_execution_options;
    
    // [LdrpInitializeGraphRecurse]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x74f4, 0x67960 bytes
    // ntdll.dll .text:0x63154, 0x6fc38 bytes
    // ntdll.dll .text:0x6d3ec, 0x74648 bytes
    // ntdll.dll .text:0x63274, 0x6fc38 bytes
    //
    _p31(sdk::unknown_ptr) initialize_graph_recurse;
    
    // [LdrpInitializeNlsInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x933b4, 0x67960 bytes
    // ntdll.dll .text:0xd1ba0, 0x6fc38 bytes
    // ntdll.dll .text:0xde704, 0x74648 bytes
    // ntdll.dll .text:0xd1b20, 0x6fc38 bytes
    //
    _p32(sdk::unknown_ptr) initialize_nls_info;
    
    // [LdrpInitializeNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x75c0, 0x67960 bytes
    // ntdll.dll .text:0x63230, 0x6fc38 bytes
    // ntdll.dll .text:0x6d4b4, 0x74648 bytes
    // ntdll.dll .text:0x63350, 0x6fc38 bytes
    //
    _p33(sdk::unknown_ptr) initialize_node;
    
    // [LdrpInitializePerUserWindowsDirectory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e5c, 0x67960 bytes
    // ntdll.dll .text:0x81afc, 0x6fc38 bytes
    // ntdll.dll .text:0x85204, 0x74648 bytes
    // ntdll.dll .text:0x81c9c, 0x6fc38 bytes
    //
    _p34(sdk::unknown_ptr) initialize_per_user_windows_directory;
    
    // [LdrpInitializePolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7477c, 0x67960 bytes
    // ntdll.dll .text:0x7e6e8, 0x6fc38 bytes
    // ntdll.dll .text:0x786d0, 0x74648 bytes
    // ntdll.dll .text:0x7e888, 0x6fc38 bytes
    //
    _p35(sdk::unknown_ptr) initialize_policy;
    
    // [LdrpInitializeProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x91480, 0x67960 bytes
    // ntdll.dll .text:0xd1be0, 0x6fc38 bytes
    // ntdll.dll .text:0xd45d8, 0x74648 bytes
    // ntdll.dll .text:0xd1b60, 0x6fc38 bytes
    //
    _p36(sdk::unknown_ptr) initialize_process;
    
    // [LdrpInitializeProcessWrapperFilter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd3bb0, 0x67960 bytes
    // ntdll.dll .text:0xd3f98, 0x6fc38 bytes
    // ntdll.dll .text:0xde9e0, 0x74648 bytes
    // ntdll.dll .text:0xd3f0c, 0x6fc38 bytes
    //
    _p37(sdk::unknown_ptr) initialize_process_wrapper_filter;
    
    // [LdrpInitializeShimDllDependencies]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6458, 0x67960 bytes
    // ntdll.dll .text:0x60438, 0x6fc38 bytes
    // ntdll.dll .text:0x799c0, 0x74648 bytes
    // ntdll.dll .text:0x60558, 0x6fc38 bytes
    //
    _p38(sdk::unknown_ptr) initialize_shim_dll_dependencies;
    
    // [LdrpInitializeThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x27b80, 0x67960 bytes
    // ntdll.dll .text:0x35858, 0x6fc38 bytes
    // ntdll.dll .text:0x28a18, 0x74648 bytes
    // ntdll.dll .text:0x35858, 0x6fc38 bytes
    //
    _p39(sdk::unknown_ptr) initialize_thread;
    
    // [LdrpInitializeTls]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1b344, 0x67960 bytes
    // ntdll.dll .text:0x52f58, 0x6fc38 bytes
    // ntdll.dll .text:0x4220, 0x74648 bytes
    // ntdll.dll .text:0x52f58, 0x6fc38 bytes
    //
    _p40(sdk::unknown_ptr) initialize_tls;
    
    // [LdrpInsertDataTableEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xde08, 0x67960 bytes
    // ntdll.dll .text:0x3d2b8, 0x6fc38 bytes
    // ntdll.dll .text:0x2d098, 0x74648 bytes
    // ntdll.dll .text:0x3d2b8, 0x6fc38 bytes
    //
    _p41(sdk::unknown_ptr) insert_data_table_entry;
    
    // [LdrpInsertModuleToIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82258, 0x67960 bytes
    // ntdll.dll .text:0x7ea00, 0x6fc38 bytes
    // ntdll.dll .text:0x7e8ec, 0x74648 bytes
    // ntdll.dll .text:0x7eba0, 0x6fc38 bytes
    //
    _p42(sdk::unknown_ptr) insert_module_to_index;
    
    // [LdrpInsertModuleToIndexLockHeld]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x46410, 0x67960 bytes
    // ntdll.dll .text:0x3d174, 0x6fc38 bytes
    // ntdll.dll .text:0x2d1c0, 0x74648 bytes
    // ntdll.dll .text:0x3d174, 0x6fc38 bytes
    //
    _p43(sdk::unknown_ptr) insert_module_to_index_lock_held;
    
    // [LdrpInvertedFunctionTableSRWLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154348, 0x67960 bytes
    // ntdll.dll .data:0x16b500, 0x6fc38 bytes
    // ntdll.dll .data:0x185090, 0x74648 bytes
    // ntdll.dll .data:0x16c4e0, 0x6fc38 bytes
    //
    _p44(sdk::unknown_ptr) inverted_function_table_srw_lock;
    
    // [LdrpIsCODServiceEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd2724, 0x67960 bytes
    // ntdll.dll .text:0xcec5c, 0x6fc38 bytes
    // ntdll.dll .text:0xdb504, 0x74648 bytes
    // ntdll.dll .text:0xcebdc, 0x6fc38 bytes
    //
    _p45(sdk::unknown_ptr) is_cod_service_enabled;
    
    // [LdrpIsModuleUnderSystem32]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xffc0, 0x67960 bytes
    // ntdll.dll .text:0x7ae80, 0x6fc38 bytes
    // ntdll.dll .text:0x7e1b4, 0x74648 bytes
    // ntdll.dll .text:0x7b020, 0x6fc38 bytes
    //
    _p46(sdk::unknown_ptr) is_module_under_system32;
    
    // [LdrpIsReparsePoint]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x857c0, 0x67960 bytes
    // ntdll.dll .text:0x6c954, 0x6fc38 bytes
    // ntdll.dll .text:0x8270, 0x74648 bytes
    // ntdll.dll .text:0x6ca74, 0x6fc38 bytes
    //
    _p47(sdk::unknown_ptr) is_reparse_point;
    
    // [LdrpIsSecureProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1532b4, 0x67960 bytes
    // ntdll.dll .data:0x16a52c, 0x6fc38 bytes
    // ntdll.dll .data:0x1843ec, 0x74648 bytes
    // ntdll.dll .data:0x16b52c, 0x6fc38 bytes
    //
    _p48(sdk::unknown_ptr) is_secure_process;
    
    // [LdrpIsSecurityEtwLoggingEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9a58, 0x67960 bytes
    // ntdll.dll .text:0x61c8c, 0x6fc38 bytes
    // ntdll.dll .text:0x11018, 0x74648 bytes
    // ntdll.dll .text:0x61dac, 0x6fc38 bytes
    //
    _p49(sdk::unknown_ptr) is_security_etw_logging_enabled;
    
    // [LdrpIsSubstringFound]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd3c58, 0x67960 bytes
    // ntdll.dll .text:0xd4040, 0x6fc38 bytes
    // ntdll.dll .text:0xdea74, 0x74648 bytes
    // ntdll.dll .text:0xd3fb4, 0x6fc38 bytes
    //
    _p50(sdk::unknown_ptr) is_substring_found;
    
    // [LdrpIsVerifierActivationFilterMatched]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd3d28, 0x67960 bytes
    // ntdll.dll .text:0xd410c, 0x6fc38 bytes
    // ntdll.dll .text:0xdeb38, 0x74648 bytes
    // ntdll.dll .text:0xd4080, 0x6fc38 bytes
    //
    _p51(sdk::unknown_ptr) is_verifier_activation_filter_matched;
    
    // [LdrpKernel32DllName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1090f0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c1f0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1311c0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c1f0, 0x6fc38 bytes
    //
    _p52(sdk::unknown_ptr) kernel32_dll_name;
    
    // [LdrpKernelbaseDllName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1098e0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c070, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1310a8, 0x74648 bytes
    // ntdll.dll .rdata:0x11c070, 0x6fc38 bytes
    //
    _p53(sdk::unknown_ptr) kernelbase_dll_name;
    
    // [LdrpKnownDllDirectoryHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152f38, 0x67960 bytes
    // ntdll.dll .data:0x16a030, 0x6fc38 bytes
    // ntdll.dll .data:0x183ef0, 0x74648 bytes
    // ntdll.dll .data:0x16b030, 0x6fc38 bytes
    //
    _p54(sdk::unknown_ptr) known_dll_directory_handle;
    
    // [LdrpKnownDllPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152f10, 0x67960 bytes
    // ntdll.dll .data:0x16a010, 0x6fc38 bytes
    // ntdll.dll .data:0x183ed0, 0x74648 bytes
    // ntdll.dll .data:0x16b010, 0x6fc38 bytes
    //
    _p55(sdk::unknown_ptr) known_dll_path;
    
    // [LdrpLangFallbackListAppendNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x254e4, 0x67960 bytes
    // ntdll.dll .text:0x2d678, 0x6fc38 bytes
    // ntdll.dll .text:0x16458, 0x74648 bytes
    // ntdll.dll .text:0x2d678, 0x6fc38 bytes
    //
    _p56(sdk::unknown_ptr) lang_fallback_list_append_node;
    
    // [LdrpLangFallbackListFindNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x255e4, 0x67960 bytes
    // ntdll.dll .text:0x2d778, 0x6fc38 bytes
    // ntdll.dll .text:0x16558, 0x74648 bytes
    // ntdll.dll .text:0x2d778, 0x6fc38 bytes
    //
    _p57(sdk::unknown_ptr) lang_fallback_list_find_node;
    
    // [LdrpLargePageDllKeyHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152f20, 0x67960 bytes
    // ntdll.dll .data:0x16a020, 0x6fc38 bytes
    // ntdll.dll .data:0x183ee0, 0x74648 bytes
    // ntdll.dll .data:0x16b020, 0x6fc38 bytes
    //
    _p58(sdk::unknown_ptr) large_page_dll_key_handle;
    
    // [LdrpLoadCompleteEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153228, 0x67960 bytes
    // ntdll.dll .data:0x16a380, 0x6fc38 bytes
    // ntdll.dll .data:0x184230, 0x74648 bytes
    // ntdll.dll .data:0x16b380, 0x6fc38 bytes
    //
    _p59(sdk::unknown_ptr) load_complete_event;
    
    // [LdrpLoadContextReplaceModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6ec4, 0x67960 bytes
    // ntdll.dll .text:0x62d68, 0x6fc38 bytes
    // ntdll.dll .text:0x72d54, 0x74648 bytes
    // ntdll.dll .text:0x62e88, 0x6fc38 bytes
    //
    _p60(sdk::unknown_ptr) load_context_replace_module;
    
    // [LdrpLoadDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x26a0c, 0x67960 bytes
    // ntdll.dll .text:0x35458, 0x6fc38 bytes
    // ntdll.dll .text:0x1927c, 0x74648 bytes
    // ntdll.dll .text:0x35458, 0x6fc38 bytes
    //
    _p61(sdk::unknown_ptr) load_dll;
    
    // [LdrpLoadDllInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x26f2c, 0x67960 bytes
    // ntdll.dll .text:0x34b0c, 0x6fc38 bytes
    // ntdll.dll .text:0x28e34, 0x74648 bytes
    // ntdll.dll .text:0x34b0c, 0x6fc38 bytes
    //
    _p62(sdk::unknown_ptr) load_dll_internal;
    
    // [LdrpLoadForwardedDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9b84, 0x67960 bytes
    // ntdll.dll .text:0x3c2dc, 0x6fc38 bytes
    // ntdll.dll .text:0x19000, 0x74648 bytes
    // ntdll.dll .text:0x3c2dc, 0x6fc38 bytes
    //
    _p63(sdk::unknown_ptr) load_forwarded_dll;
    
    // [LdrpLoadKnownDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd398, 0x67960 bytes
    // ntdll.dll .text:0x3d53c, 0x6fc38 bytes
    // ntdll.dll .text:0x2d440, 0x74648 bytes
    // ntdll.dll .text:0x3d53c, 0x6fc38 bytes
    //
    _p64(sdk::unknown_ptr) load_known_dll;
    
    // [LdrpLoadShimEngine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x61c0, 0x67960 bytes
    // ntdll.dll .text:0x60198, 0x6fc38 bytes
    // ntdll.dll .text:0x797a8, 0x74648 bytes
    // ntdll.dll .text:0x602b8, 0x6fc38 bytes
    //
    _p65(sdk::unknown_ptr) load_shim_engine;
    
    // [LdrpLoadWow64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6dc0, 0x67960 bytes
    // ntdll.dll .text:0x6057c, 0x6fc38 bytes
    // ntdll.dll .text:0x85ce0, 0x74648 bytes
    // ntdll.dll .text:0x6069c, 0x6fc38 bytes
    //
    _p66(sdk::unknown_ptr) load_wow64;
    
    // [LdrpLoaderLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d568, 0x67960 bytes
    // ntdll.dll .data:0x1644f8, 0x6fc38 bytes
    // ntdll.dll .data:0x17e288, 0x74648 bytes
    // ntdll.dll .data:0x1654f8, 0x6fc38 bytes
    //
    _p67(sdk::unknown_ptr) loader_lock;
    
    // [LdrpLoaderLockAcquisitionCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153aa0, 0x67960 bytes
    // ntdll.dll .data:0x16abc0, 0x6fc38 bytes
    // ntdll.dll .data:0x184a80, 0x74648 bytes
    // ntdll.dll .data:0x16bbc0, 0x6fc38 bytes
    //
    _p68(sdk::unknown_ptr) loader_lock_acquisition_count;
    
    // [LdrpLoaderLock_DEBUG]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d998, 0x67960 bytes
    // ntdll.dll .data:0x164978, 0x6fc38 bytes
    // ntdll.dll .data:0x17e7e8, 0x74648 bytes
    // ntdll.dll .data:0x165978, 0x6fc38 bytes
    //
    _p69(sdk::unknown_ptr) loader_lock_debug;
    
    // [LdrpLocateMrdata]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd43d0, 0x67960 bytes
    // ntdll.dll .text:0xd58b4, 0x6fc38 bytes
    // ntdll.dll .text:0xe0be4, 0x74648 bytes
    // ntdll.dll .text:0xd5824, 0x6fc38 bytes
    //
    _p70(sdk::unknown_ptr) locate_mrdata;
    
    // [LdrpLockMemoryPrivilege]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11e78c, 0x67960 bytes
    // ntdll.dll .rdata:0x1327a8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14dae0, 0x74648 bytes
    // ntdll.dll .rdata:0x132aa8, 0x6fc38 bytes
    //
    _p71(sdk::unknown_ptr) lock_memory_privilege;
    
    // [LdrpLogDbgPrint]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1a9c, 0x67960 bytes
    // ntdll.dll .text:0xcd9a8, 0x6fc38 bytes
    // ntdll.dll .text:0xd96a0, 0x74648 bytes
    // ntdll.dll .text:0xcd928, 0x6fc38 bytes
    //
    _p72(sdk::unknown_ptr) log_dbg_print;
    
    // [LdrpLogDelayLoadTrigger]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa354, 0x67960 bytes
    // ntdll.dll .text:0x3c6bc, 0x6fc38 bytes
    // ntdll.dll .text:0x161b8, 0x74648 bytes
    // ntdll.dll .text:0x3c6bc, 0x6fc38 bytes
    //
    _p73(sdk::unknown_ptr) log_delay_load_trigger;
    
    // [LdrpLogDeprecatedDllEtwEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8e58, 0x67960 bytes
    // ntdll.dll .text:0x62bdc, 0x6fc38 bytes
    // ntdll.dll .text:0x80dc4, 0x74648 bytes
    // ntdll.dll .text:0x62cfc, 0x6fc38 bytes
    //
    _p74(sdk::unknown_ptr) log_deprecated_dll_etw_event;
    
    // [LdrpLogDllRelocationEtwEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x841f8, 0x67960 bytes
    // ntdll.dll .text:0x823f4, 0x6fc38 bytes
    // ntdll.dll .text:0xdb59c, 0x74648 bytes
    // ntdll.dll .text:0x82594, 0x6fc38 bytes
    //
    _p75(sdk::unknown_ptr) log_dll_relocation_etw_event;
    
    // [LdrpLogDllState]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x27890, 0x67960 bytes
    // ntdll.dll .text:0x387ec, 0x6fc38 bytes
    // ntdll.dll .text:0x19cc4, 0x74648 bytes
    // ntdll.dll .text:0x387ec, 0x6fc38 bytes
    //
    _p76(sdk::unknown_ptr) log_dll_state;
    
    // [LdrpLogDllStateEx2]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x30248, 0x67960 bytes
    // ntdll.dll .text:0x628dc, 0x6fc38 bytes
    // ntdll.dll .text:0x3203c, 0x74648 bytes
    // ntdll.dll .text:0x629fc, 0x6fc38 bytes
    //
    _p77(sdk::unknown_ptr) log_dll_state_ex2;
    
    // [LdrpLogError]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8e34, 0x67960 bytes
    // ntdll.dll .text:0x62c6c, 0x6fc38 bytes
    // ntdll.dll .text:0x824ac, 0x74648 bytes
    // ntdll.dll .text:0x62d8c, 0x6fc38 bytes
    //
    _p78(sdk::unknown_ptr) log_error;
    
    // [LdrpLogEtwDllSearchResults]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd27bc, 0x67960 bytes
    // ntdll.dll .text:0xcecf4, 0x6fc38 bytes
    // ntdll.dll .text:0xdb6d0, 0x74648 bytes
    // ntdll.dll .text:0xcec74, 0x6fc38 bytes
    //
    _p79(sdk::unknown_ptr) log_etw_dll_search_results;
    
    // [LdrpLogEtwEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd2a58, 0x67960 bytes
    // ntdll.dll .text:0xcefa0, 0x6fc38 bytes
    // ntdll.dll .text:0xdb97c, 0x74648 bytes
    // ntdll.dll .text:0xcef20, 0x6fc38 bytes
    //
    _p80(sdk::unknown_ptr) log_etw_event;
    
    // [LdrpLogFatalLdrEtwEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd2bc8, 0x67960 bytes
    // ntdll.dll .text:0xcf148, 0x6fc38 bytes
    // ntdll.dll .text:0x8a51c, 0x74648 bytes
    // ntdll.dll .text:0xcf0c8, 0x6fc38 bytes
    //
    _p81(sdk::unknown_ptr) log_fatal_ldr_etw_event;
    
    // [LdrpLogFatalUserCallbackException]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd2cc0, 0x67960 bytes
    // ntdll.dll .text:0xcf250, 0x6fc38 bytes
    // ntdll.dll .text:0xdbd70, 0x74648 bytes
    // ntdll.dll .text:0xcf1d0, 0x6fc38 bytes
    //
    _p82(sdk::unknown_ptr) log_fatal_user_callback_exception;
    
    // [LdrpLogLevelStateTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109760, 0x67960 bytes
    // ntdll.dll .rdata:0x11c6a0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131270, 0x74648 bytes
    // ntdll.dll .rdata:0x11c6a0, 0x6fc38 bytes
    //
    _p83(sdk::unknown_ptr) log_level_state_table;
    
    // [LdrpLogLoadFailureEtwEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8ed8, 0x67960 bytes
    // ntdll.dll .text:0x62af0, 0x6fc38 bytes
    // ntdll.dll .text:0x8192c, 0x74648 bytes
    // ntdll.dll .text:0x62c10, 0x6fc38 bytes
    //
    _p84(sdk::unknown_ptr) log_load_failure_etw_event;
    
    // [LdrpLogNewDllLoadInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd2e10, 0x67960 bytes
    // ntdll.dll .text:0xcf970, 0x6fc38 bytes
    // ntdll.dll .text:0xad31e, 0x74648 bytes
    // ntdll.dll .text:0xcf8f0, 0x6fc38 bytes
    //
    _p85(sdk::unknown_ptr) log_new_dll_load_internal;
    
    // [LdrpLogRelativePathWithAlteredSearchError]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85eac, 0x67960 bytes
    // ntdll.dll .text:0x62cc8, 0x6fc38 bytes
    // ntdll.dll .text:0x7e6c4, 0x74648 bytes
    // ntdll.dll .text:0x62de8, 0x6fc38 bytes
    //
    _p86(sdk::unknown_ptr) log_relative_path_with_altered_search_error;
    
    // [LdrpMakePermanentImageCommit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe838, 0x67960 bytes
    // ntdll.dll .text:0x3290c, 0x6fc38 bytes
    // ntdll.dll .text:0x2db8c, 0x74648 bytes
    // ntdll.dll .text:0x3290c, 0x6fc38 bytes
    //
    _p87(sdk::unknown_ptr) make_permanent_image_commit;
    
    // [LdrpMakeUnicodeStringFromPathElement]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd2efc, 0x67960 bytes
    // ntdll.dll .text:0xcff74, 0x6fc38 bytes
    // ntdll.dll .text:0xdc988, 0x74648 bytes
    // ntdll.dll .text:0xcfef4, 0x6fc38 bytes
    //
    _p88(sdk::unknown_ptr) make_unicode_string_from_path_element;
    
    // [LdrpManifestProberRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fb0, 0x67960 bytes
    // ntdll.dll .data:0x16b180, 0x6fc38 bytes
    // ntdll.dll .data:0x184c20, 0x74648 bytes
    // ntdll.dll .data:0x16c180, 0x6fc38 bytes
    //
    _p89(sdk::unknown_ptr) manifest_prober_routine;
    
    // [LdrpMapAndSnapDependency]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x27ea4, 0x67960 bytes
    // ntdll.dll .text:0x35ab0, 0x6fc38 bytes
    // ntdll.dll .text:0x24b68, 0x74648 bytes
    // ntdll.dll .text:0x35ab0, 0x6fc38 bytes
    //
    _p90(sdk::unknown_ptr) map_and_snap_dependency;
    
    // [LdrpMapAndSnapWork]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153230, 0x67960 bytes
    // ntdll.dll .data:0x16a388, 0x6fc38 bytes
    // ntdll.dll .data:0x184238, 0x74648 bytes
    // ntdll.dll .data:0x16b388, 0x6fc38 bytes
    //
    _p91(sdk::unknown_ptr) map_and_snap_work;
    
    // [LdrpMapDllFullPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa700, 0x67960 bytes
    // ntdll.dll .text:0x620ac, 0x6fc38 bytes
    // ntdll.dll .text:0x11690, 0x74648 bytes
    // ntdll.dll .text:0x621cc, 0x6fc38 bytes
    //
    _p92(sdk::unknown_ptr) map_dll_full_path;
    
    // [LdrpMapDllNtFileName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xc71c, 0x67960 bytes
    // ntdll.dll .text:0x621f0, 0x6fc38 bytes
    // ntdll.dll .text:0x10bf4, 0x74648 bytes
    // ntdll.dll .text:0x62310, 0x6fc38 bytes
    //
    _p93(sdk::unknown_ptr) map_dll_nt_file_name;
    
    // [LdrpMapDllSearchPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xc88c, 0x67960 bytes
    // ntdll.dll .text:0x61cec, 0x6fc38 bytes
    // ntdll.dll .text:0x11078, 0x74648 bytes
    // ntdll.dll .text:0x61e0c, 0x6fc38 bytes
    //
    _p94(sdk::unknown_ptr) map_dll_search_path;
    
    // [LdrpMapDllWithSectionHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd8f8, 0x67960 bytes
    // ntdll.dll .text:0x3cdc8, 0x6fc38 bytes
    // ntdll.dll .text:0x2c93c, 0x74648 bytes
    // ntdll.dll .text:0x3cdc8, 0x6fc38 bytes
    //
    _p95(sdk::unknown_ptr) map_dll_with_section_handle;
    
    // [LdrpMappingInfoIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154318, 0x67960 bytes
    // ntdll.dll .data:0x16b468, 0x6fc38 bytes
    // ntdll.dll .data:0x185018, 0x74648 bytes
    // ntdll.dll .data:0x16c468, 0x6fc38 bytes
    //
    _p96(sdk::unknown_ptr) mapping_info_index;
    
    // [LdrpMergeLangFallbackLists]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x248f0, 0x67960 bytes
    // ntdll.dll .text:0x2c67c, 0x6fc38 bytes
    // ntdll.dll .text:0x13fb0, 0x74648 bytes
    // ntdll.dll .text:0x2c67c, 0x6fc38 bytes
    //
    _p97(sdk::unknown_ptr) merge_lang_fallback_lists;
    
    // [LdrpMergeNodes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x75fa0, 0x67960 bytes
    // ntdll.dll .text:0x75d70, 0x6fc38 bytes
    // ntdll.dll .text:0x6f538, 0x74648 bytes
    // ntdll.dll .text:0x75f10, 0x6fc38 bytes
    //
    _p98(sdk::unknown_ptr) merge_nodes;
    
    // [LdrpMergeParentBaseLanguagesToList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x890d0, 0x67960 bytes
    // ntdll.dll .text:0xee570, 0x6fc38 bytes
    // ntdll.dll .text:0xae20c, 0x74648 bytes
    // ntdll.dll .text:0xee520, 0x6fc38 bytes
    //
    _p99(sdk::unknown_ptr) merge_parent_base_languages_to_list;
    
    // [LdrpModuleBaseAddressIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154308, 0x67960 bytes
    // ntdll.dll .data:0x16b458, 0x6fc38 bytes
    // ntdll.dll .data:0x185008, 0x74648 bytes
    // ntdll.dll .data:0x16c458, 0x6fc38 bytes
    //
    _q00(sdk::unknown_ptr) module_base_address_index;
    
    // [LdrpModuleDatatableLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154120, 0x67960 bytes
    // ntdll.dll .data:0x16b230, 0x6fc38 bytes
    // ntdll.dll .data:0x184d40, 0x74648 bytes
    // ntdll.dll .data:0x16c230, 0x6fc38 bytes
    //
    _q01(sdk::unknown_ptr) module_datatable_lock;
    
    // [LdrpMrdataBase]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164250, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f290, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992a0, 0x74648 bytes
    // ntdll.dll .mrdata:0x180290, 0x6fc38 bytes
    //
    _q02(sdk::unknown_ptr) mrdata_base;
    
    // [LdrpMrdataHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164238, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f278, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199288, 0x74648 bytes
    // ntdll.dll .mrdata:0x180278, 0x6fc38 bytes
    //
    _q03(sdk::unknown_ptr) mrdata_heap;
    
    // [LdrpMrdataHeapUnprotected]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164248, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f288, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199298, 0x74648 bytes
    // ntdll.dll .mrdata:0x180288, 0x6fc38 bytes
    //
    _q04(sdk::unknown_ptr) mrdata_heap_unprotected;
    
    // [LdrpMrdataLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152fd0, 0x67960 bytes
    // ntdll.dll .data:0x16a110, 0x6fc38 bytes
    // ntdll.dll .data:0x183fc8, 0x74648 bytes
    // ntdll.dll .data:0x16b110, 0x6fc38 bytes
    //
    _q05(sdk::unknown_ptr) mrdata_lock;
    
    // [LdrpMrdataSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164240, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f280, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199290, 0x74648 bytes
    // ntdll.dll .mrdata:0x180280, 0x6fc38 bytes
    //
    _q06(sdk::unknown_ptr) mrdata_size;
    
    // [LdrpMrdataUnprotected]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164298, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f3c8, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1993f8, 0x74648 bytes
    // ntdll.dll .mrdata:0x1803c8, 0x6fc38 bytes
    //
    _q07(sdk::unknown_ptr) mrdata_unprotected;
    
    // [LdrpMscoreeDllName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1090d0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c860, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1319d0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c860, 0x6fc38 bytes
    //
    _q08(sdk::unknown_ptr) mscoree_dll_name;
    
    // [LdrpMUIEtwOutput]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdd930, 0x67960 bytes
    // ntdll.dll .text:0xe11f4, 0x6fc38 bytes
    // ntdll.dll .text:0xebe7c, 0x74648 bytes
    // ntdll.dll .text:0xe1164, 0x6fc38 bytes
    //
    _q09(sdk::unknown_ptr) mui_etw_output;
    
    // [LdrpMultiSZCchLength]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1fecc, 0x67960 bytes
    // ntdll.dll .text:0x6a59c, 0x6fc38 bytes
    // ntdll.dll .text:0x70254, 0x74648 bytes
    // ntdll.dll .text:0x6a6bc, 0x6fc38 bytes
    //
    _q10(sdk::unknown_ptr) multi_sz_cch_length;
    
    // [LdrpNotifyLoadOfGraph]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf01c, 0x67960 bytes
    // ntdll.dll .text:0x40f50, 0x6fc38 bytes
    // ntdll.dll .text:0x2eea0, 0x74648 bytes
    // ntdll.dll .text:0x40f50, 0x6fc38 bytes
    //
    _q11(sdk::unknown_ptr) notify_load_of_graph;
    
    // [LdrpNtDllDataTableEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153370, 0x67960 bytes
    // ntdll.dll .data:0x16a4a0, 0x6fc38 bytes
    // ntdll.dll .data:0x184370, 0x74648 bytes
    // ntdll.dll .data:0x16b4a0, 0x6fc38 bytes
    //
    _q12(sdk::unknown_ptr) nt_dll_data_table_entry;
    
    // [LdrpParseForwarderDescription]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5f34, 0x67960 bytes
    // ntdll.dll .text:0x74dd4, 0x6fc38 bytes
    // ntdll.dll .text:0x72960, 0x74648 bytes
    // ntdll.dll .text:0x74f74, 0x6fc38 bytes
    //
    _q13(sdk::unknown_ptr) parse_forwarder_description;
    
    // [LdrpPathLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1542e0, 0x67960 bytes
    // ntdll.dll .data:0x16b450, 0x6fc38 bytes
    // ntdll.dll .data:0x185000, 0x74648 bytes
    // ntdll.dll .data:0x16c450, 0x6fc38 bytes
    //
    _q14(sdk::unknown_ptr) path_lock;
    
    // [LdrpPinModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1dd84, 0x67960 bytes
    // ntdll.dll .text:0x32968, 0x6fc38 bytes
    // ntdll.dll .text:0x792c8, 0x74648 bytes
    // ntdll.dll .text:0x32968, 0x6fc38 bytes
    //
    _q15(sdk::unknown_ptr) pin_module;
    
    // [LdrpPinNodeRecurse]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1dd2c, 0x67960 bytes
    // ntdll.dll .text:0x7a36c, 0x6fc38 bytes
    // ntdll.dll .text:0x7932c, 0x74648 bytes
    // ntdll.dll .text:0x7a50c, 0x6fc38 bytes
    //
    _q16(sdk::unknown_ptr) pin_node_recurse;
    
    // [LdrpPolicyBits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x150664, 0x67960 bytes
    // ntdll.dll .data:0x167714, 0x6fc38 bytes
    // ntdll.dll .data:0x181694, 0x74648 bytes
    // ntdll.dll .data:0x168714, 0x6fc38 bytes
    //
    _q17(sdk::unknown_ptr) policy_bits;
    
    // [LdrpPotentialTlsLeaks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153204, 0x67960 bytes
    // ntdll.dll .data:0x16a344, 0x6fc38 bytes
    // ntdll.dll .data:0x1841f0, 0x74648 bytes
    // ntdll.dll .data:0x16b344, 0x6fc38 bytes
    //
    _q18(sdk::unknown_ptr) potential_tls_leaks;
    
    // [LdrpPrepareImportAddressTableForSnap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x75c8c, 0x67960 bytes
    // ntdll.dll .text:0x32ca0, 0x6fc38 bytes
    // ntdll.dll .text:0x2b400, 0x74648 bytes
    // ntdll.dll .text:0x32ca0, 0x6fc38 bytes
    //
    _q19(sdk::unknown_ptr) prepare_import_address_table_for_snap;
    
    // [LdrpPrepareModuleForExecution]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd278, 0x67960 bytes
    // ntdll.dll .text:0x40c54, 0x6fc38 bytes
    // ntdll.dll .text:0x2dc68, 0x74648 bytes
    // ntdll.dll .text:0x40c54, 0x6fc38 bytes
    //
    _q20(sdk::unknown_ptr) prepare_module_for_execution;
    
    // [LdrpPreprocessDllName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x27300, 0x67960 bytes
    // ntdll.dll .text:0x38480, 0x6fc38 bytes
    // ntdll.dll .text:0x198c0, 0x74648 bytes
    // ntdll.dll .text:0x38480, 0x6fc38 bytes
    //
    _q21(sdk::unknown_ptr) preprocess_dll_name;
    
    // [LdrpProcessInitContextRecord]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153330, 0x67960 bytes
    // ntdll.dll .data:0x16a488, 0x6fc38 bytes
    // ntdll.dll .data:0x184358, 0x74648 bytes
    // ntdll.dll .data:0x16b488, 0x6fc38 bytes
    //
    _q22(sdk::unknown_ptr) process_init_context_record;
    
    // [LdrpProcessInitializationComplete]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87270, 0x67960 bytes
    // ntdll.dll .text:0x7f5b0, 0x6fc38 bytes
    // ntdll.dll .text:0x73de0, 0x74648 bytes
    // ntdll.dll .text:0x7f750, 0x6fc38 bytes
    //
    _q23(sdk::unknown_ptr) process_initialization_complete;
    
    // [LdrpProcessInitialized]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1533f8, 0x67960 bytes
    // ntdll.dll .data:0x16a518, 0x6fc38 bytes
    // ntdll.dll .data:0x1843d8, 0x74648 bytes
    // ntdll.dll .data:0x16b518, 0x6fc38 bytes
    //
    _q24(sdk::unknown_ptr) process_initialized;
    
    // [LdrpProcessMappedModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdf1c, 0x67960 bytes
    // ntdll.dll .text:0x33270, 0x6fc38 bytes
    // ntdll.dll .text:0x2b554, 0x74648 bytes
    // ntdll.dll .text:0x33270, 0x6fc38 bytes
    //
    _q25(sdk::unknown_ptr) process_mapped_module;
    
    // [LdrpProcessWork]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa4fc, 0x67960 bytes
    // ntdll.dll .text:0x6140c, 0x6fc38 bytes
    // ntdll.dll .text:0x114c8, 0x74648 bytes
    // ntdll.dll .text:0x6152c, 0x6fc38 bytes
    //
    _q26(sdk::unknown_ptr) process_work;
    
    // [LdrpProtectAndRelocateImage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83df0, 0x67960 bytes
    // ntdll.dll .text:0x8221c, 0x6fc38 bytes
    // ntdll.dll .text:0xdcc74, 0x74648 bytes
    // ntdll.dll .text:0x823bc, 0x6fc38 bytes
    //
    _q27(sdk::unknown_ptr) protect_and_relocate_image;
    
    // [LdrpQueryAndUpdateVerifierLaunchCounter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd3f00, 0x67960 bytes
    // ntdll.dll .text:0xd43d0, 0x6fc38 bytes
    // ntdll.dll .text:0xdefa0, 0x74648 bytes
    // ntdll.dll .text:0xd4344, 0x6fc38 bytes
    //
    _q28(sdk::unknown_ptr) query_and_update_verifier_launch_counter;
    
    // [LdrpQueryIllegalCWDDevices]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7fdd8, 0x67960 bytes
    // ntdll.dll .text:0xd44fc, 0x6fc38 bytes
    // ntdll.dll .text:0xdf0cc, 0x74648 bytes
    // ntdll.dll .text:0xd4470, 0x6fc38 bytes
    //
    _q29(sdk::unknown_ptr) query_illegal_cwd_devices;
    
    // [LdrpQuerySxSMUIFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1e588, 0x67960 bytes
    // ntdll.dll .text:0x7544c, 0x6fc38 bytes
    // ntdll.dll .text:0x75cd4, 0x74648 bytes
    // ntdll.dll .text:0x755ec, 0x6fc38 bytes
    //
    _q30(sdk::unknown_ptr) query_sx_smui_file;
    
    // [LdrpQueueDeferredTlsData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1c7e4, 0x67960 bytes
    // ntdll.dll .text:0x545b4, 0x6fc38 bytes
    // ntdll.dll .text:0x5120, 0x74648 bytes
    // ntdll.dll .text:0x545b4, 0x6fc38 bytes
    //
    _q31(sdk::unknown_ptr) queue_deferred_tls_data;
    
    // [LdrpQueueWork]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x50550, 0x67960 bytes
    // ntdll.dll .text:0x3e730, 0x6fc38 bytes
    // ntdll.dll .text:0x72eb0, 0x74648 bytes
    // ntdll.dll .text:0x3e730, 0x6fc38 bytes
    //
    _q32(sdk::unknown_ptr) queue_work;
    
    // [LdrpRecordModuleDependency]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x22a48, 0x67960 bytes
    // ntdll.dll .text:0x344f0, 0x6fc38 bytes
    // ntdll.dll .text:0x2ac18, 0x74648 bytes
    // ntdll.dll .text:0x344f0, 0x6fc38 bytes
    //
    _q33(sdk::unknown_ptr) record_module_dependency;
    
    // [LdrpRecordUnloadEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x13d94, 0x67960 bytes
    // ntdll.dll .text:0x44c24, 0x6fc38 bytes
    // ntdll.dll .text:0x6bb30, 0x74648 bytes
    // ntdll.dll .text:0x44c24, 0x6fc38 bytes
    //
    _q34(sdk::unknown_ptr) record_unload_event;
    
    // [LdrpRedirectDelayloadFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6aa0, 0x67960 bytes
    // ntdll.dll .text:0x7fba4, 0x6fc38 bytes
    // ntdll.dll .text:0x86340, 0x74648 bytes
    // ntdll.dll .text:0x7fd44, 0x6fc38 bytes
    //
    _q35(sdk::unknown_ptr) redirect_delayload_failure;
    
    // [LdrpReleaseActCtxW]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fb8, 0x67960 bytes
    // ntdll.dll .data:0x16b188, 0x6fc38 bytes
    // ntdll.dll .data:0x184c28, 0x74648 bytes
    // ntdll.dll .data:0x16c188, 0x6fc38 bytes
    //
    _q36(sdk::unknown_ptr) release_act_ctx_w;
    
    // [LdrpReleaseLoaderLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfd10, 0x67960 bytes
    // ntdll.dll .text:0x41a34, 0x6fc38 bytes
    // ntdll.dll .text:0x510e4, 0x74648 bytes
    // ntdll.dll .text:0x41a34, 0x6fc38 bytes
    //
    _q37(sdk::unknown_ptr) release_loader_lock;
    
    // [LdrpReleaseTlsEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73d8, 0x67960 bytes
    // ntdll.dll .text:0x7d300, 0x6fc38 bytes
    // ntdll.dll .text:0x7fa1c, 0x74648 bytes
    // ntdll.dll .text:0x7d4a0, 0x6fc38 bytes
    //
    _q38(sdk::unknown_ptr) release_tls_entry;
    
    // [LdrpRelocateImage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83d28, 0x67960 bytes
    // ntdll.dll .text:0x8213c, 0x6fc38 bytes
    // ntdll.dll .text:0x85a28, 0x74648 bytes
    // ntdll.dll .text:0x822dc, 0x6fc38 bytes
    //
    _q39(sdk::unknown_ptr) relocate_image;
    
    // [LdrpRemoveAlternateModuleCacheItem]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86f98, 0x67960 bytes
    // ntdll.dll .text:0x46ad4, 0x6fc38 bytes
    // ntdll.dll .text:0x6c124, 0x74648 bytes
    // ntdll.dll .text:0x46ad4, 0x6fc38 bytes
    //
    _q40(sdk::unknown_ptr) remove_alternate_module_cache_item;
    
    // [LdrpReportError]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x77f3c, 0x67960 bytes
    // ntdll.dll .text:0x76098, 0x6fc38 bytes
    // ntdll.dll .text:0xc29c, 0x74648 bytes
    // ntdll.dll .text:0x76238, 0x6fc38 bytes
    //
    _q41(sdk::unknown_ptr) report_error;
    
    // [LdrpResFileSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xde3a0, 0x67960 bytes
    // ntdll.dll .text:0xe3b00, 0x6fc38 bytes
    // ntdll.dll .text:0xeeef8, 0x74648 bytes
    // ntdll.dll .text:0xe3a70, 0x6fc38 bytes
    //
    _q42(sdk::unknown_ptr) res_file_size;
    
    // [LdrpResMapFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xde48c, 0x67960 bytes
    // ntdll.dll .text:0xe3c74, 0x6fc38 bytes
    // ntdll.dll .text:0xef06c, 0x74648 bytes
    // ntdll.dll .text:0xe3be4, 0x6fc38 bytes
    //
    _q43(sdk::unknown_ptr) res_map_file;
    
    // [LdrpResReadFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xde764, 0x67960 bytes
    // ntdll.dll .text:0xe3fe8, 0x6fc38 bytes
    // ntdll.dll .text:0xef3e0, 0x74648 bytes
    // ntdll.dll .text:0xe3f58, 0x6fc38 bytes
    //
    _q44(sdk::unknown_ptr) res_read_file;
    
    // [LdrpResReportResourceAccessInternalInitOnce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x15b80, 0x67960 bytes
    // ntdll.dll .text:0x82d40, 0x6fc38 bytes
    // ntdll.dll .text:0xdcaa0, 0x74648 bytes
    // ntdll.dll .text:0x82ee0, 0x6fc38 bytes
    //
    _q45(sdk::unknown_ptr) res_report_resource_access_internal_init_once;
    
    // [LdrpResSearchResourceHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xde820, 0x67960 bytes
    // ntdll.dll .text:0xe409c, 0x6fc38 bytes
    // ntdll.dll .text:0xef494, 0x74648 bytes
    // ntdll.dll .text:0xe400c, 0x6fc38 bytes
    //
    _q46(sdk::unknown_ptr) res_search_resource_handle;
    
    // [LdrpResSetFilePointer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdee50, 0x67960 bytes
    // ntdll.dll .text:0xe4788, 0x6fc38 bytes
    // ntdll.dll .text:0xefb98, 0x74648 bytes
    // ntdll.dll .text:0xe46f8, 0x6fc38 bytes
    //
    _q47(sdk::unknown_ptr) res_set_file_pointer;
    
    // [LdrpResValidateFileHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdee94, 0x67960 bytes
    // ntdll.dll .text:0xe47cc, 0x6fc38 bytes
    // ntdll.dll .text:0xefbdc, 0x74648 bytes
    // ntdll.dll .text:0xe473c, 0x6fc38 bytes
    //
    _q48(sdk::unknown_ptr) res_validate_file_handle;
    
    // [LdrpResValidateFilePath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdeef0, 0x67960 bytes
    // ntdll.dll .text:0xe4828, 0x6fc38 bytes
    // ntdll.dll .text:0xefc38, 0x74648 bytes
    // ntdll.dll .text:0xe4798, 0x6fc38 bytes
    //
    _q49(sdk::unknown_ptr) res_validate_file_path;
    
    // [LdrpResolveDelayLoadDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x46388, 0x67960 bytes
    // ntdll.dll .text:0x33f00, 0x6fc38 bytes
    // ntdll.dll .text:0x2bf94, 0x74648 bytes
    // ntdll.dll .text:0x33f00, 0x6fc38 bytes
    //
    _q50(sdk::unknown_ptr) resolve_delay_load_descriptor;
    
    // [LdrpResolveDelayloadAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6bbc, 0x67960 bytes
    // ntdll.dll .text:0x86adc, 0x6fc38 bytes
    // ntdll.dll .text:0xdad08, 0x74648 bytes
    // ntdll.dll .text:0x86c7c, 0x6fc38 bytes
    //
    _q51(sdk::unknown_ptr) resolve_delayload_address;
    
    // [LdrpResolveDllName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xc384, 0x67960 bytes
    // ntdll.dll .text:0x61954, 0x6fc38 bytes
    // ntdll.dll .text:0x2aa04, 0x74648 bytes
    // ntdll.dll .text:0x61a74, 0x6fc38 bytes
    //
    _q52(sdk::unknown_ptr) resolve_dll_name;
    
    // [LdrpResolveProcedureAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6c84, 0x67960 bytes
    // ntdll.dll .text:0x217c8, 0x6fc38 bytes
    // ntdll.dll .text:0x22a3c, 0x74648 bytes
    // ntdll.dll .text:0x217c8, 0x6fc38 bytes
    //
    _q53(sdk::unknown_ptr) resolve_procedure_address;
    
    // [LdrpSaferIsDllAllowedRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152fe0, 0x67960 bytes
    // ntdll.dll .data:0x16a128, 0x6fc38 bytes
    // ntdll.dll .data:0x183fd0, 0x74648 bytes
    // ntdll.dll .data:0x16b128, 0x6fc38 bytes
    //
    _q54(sdk::unknown_ptr) safer_is_dll_allowed_routine;
    
    // [LdrpSearchPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xc070, 0x67960 bytes
    // ntdll.dll .text:0x6164c, 0x6fc38 bytes
    // ntdll.dll .text:0x2e034, 0x74648 bytes
    // ntdll.dll .text:0x6176c, 0x6fc38 bytes
    //
    _q55(sdk::unknown_ptr) search_path;
    
    // [LdrpSendDllNotifications]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf20c, 0x67960 bytes
    // ntdll.dll .text:0x4113c, 0x6fc38 bytes
    // ntdll.dll .text:0x2fa88, 0x74648 bytes
    // ntdll.dll .text:0x4113c, 0x6fc38 bytes
    //
    _q56(sdk::unknown_ptr) send_dll_notifications;
    
    // [LdrpSendPostSnapNotifications]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf0a0, 0x67960 bytes
    // ntdll.dll .text:0x40fd8, 0x6fc38 bytes
    // ntdll.dll .text:0x2ef20, 0x74648 bytes
    // ntdll.dll .text:0x40fd8, 0x6fc38 bytes
    //
    _q57(sdk::unknown_ptr) send_post_snap_notifications;
    
    // [LdrpSendShimEngineInitialNotifications]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x63c8, 0x67960 bytes
    // ntdll.dll .text:0x603a8, 0x6fc38 bytes
    // ntdll.dll .text:0x79928, 0x74648 bytes
    // ntdll.dll .text:0x604c8, 0x6fc38 bytes
    //
    _q58(sdk::unknown_ptr) send_shim_engine_initial_notifications;
    
    // [LdrpSetProtection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83ed8, 0x67960 bytes
    // ntdll.dll .text:0x822f8, 0x6fc38 bytes
    // ntdll.dll .text:0xdcdfc, 0x74648 bytes
    // ntdll.dll .text:0x82498, 0x6fc38 bytes
    //
    _q59(sdk::unknown_ptr) set_protection;
    
    // [LdrpSetThreadPreferredLangList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x22b78, 0x67960 bytes
    // ntdll.dll .text:0x28438, 0x6fc38 bytes
    // ntdll.dll .text:0x1f1f4, 0x74648 bytes
    // ntdll.dll .text:0x28438, 0x6fc38 bytes
    //
    _q60(sdk::unknown_ptr) set_thread_preferred_lang_list;
    
    // [LdrpShouldCreateStackTraceDb]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544e0, 0x67960 bytes
    // ntdll.dll .data:0x16b778, 0x6fc38 bytes
    // ntdll.dll .data:0x185308, 0x74648 bytes
    // ntdll.dll .data:0x16c778, 0x6fc38 bytes
    //
    _q61(sdk::unknown_ptr) should_create_stack_trace_db;
    
    // [LdrpSignalModuleMapped]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe618, 0x67960 bytes
    // ntdll.dll .text:0x32fa8, 0x6fc38 bytes
    // ntdll.dll .text:0x2c3a4, 0x74648 bytes
    // ntdll.dll .text:0x32fa8, 0x6fc38 bytes
    //
    _q62(sdk::unknown_ptr) signal_module_mapped;
    
    // [LdrpSnapKernelBaseExtensions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x26c0c, 0x67960 bytes
    // ntdll.dll .text:0x3c0b8, 0x6fc38 bytes
    // ntdll.dll .text:0x18aa0, 0x74648 bytes
    // ntdll.dll .text:0x3c0b8, 0x6fc38 bytes
    //
    _q63(sdk::unknown_ptr) snap_kernel_base_extensions;
    
    // [LdrpSnapModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x48ba0, 0x67960 bytes
    // ntdll.dll .text:0x23660, 0x6fc38 bytes
    // ntdll.dll .text:0x23fb0, 0x74648 bytes
    // ntdll.dll .text:0x23660, 0x6fc38 bytes
    //
    _q64(sdk::unknown_ptr) snap_module;
    
    // [LdrpSpecialCacheTypeHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xddad4, 0x67960 bytes
    // ntdll.dll .text:0xe13e0, 0x6fc38 bytes
    // ntdll.dll .text:0x8e1bc, 0x74648 bytes
    // ntdll.dll .text:0xe1350, 0x6fc38 bytes
    //
    _q65(sdk::unknown_ptr) special_cache_type_handle;
    
    // [LdrpStaticTlsBitmapVector]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153208, 0x67960 bytes
    // ntdll.dll .data:0x16a348, 0x6fc38 bytes
    // ntdll.dll .data:0x1841f4, 0x74648 bytes
    // ntdll.dll .data:0x16b348, 0x6fc38 bytes
    //
    _q66(sdk::unknown_ptr) static_tls_bitmap_vector;
    
    // [LdrpStatistics]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153240, 0x67960 bytes
    // ntdll.dll .data:0x16a390, 0x6fc38 bytes
    // ntdll.dll .data:0x184240, 0x74648 bytes
    // ntdll.dll .data:0x16b390, 0x6fc38 bytes
    //
    _q67(sdk::unknown_ptr) statistics;
    
    // [LdrpSystem32]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1532e0, 0x67960 bytes
    // ntdll.dll .data:0x16a430, 0x6fc38 bytes
    // ntdll.dll .data:0x184300, 0x74648 bytes
    // ntdll.dll .data:0x16b430, 0x6fc38 bytes
    //
    _q68(sdk::unknown_ptr) system32;
    
    // [LdrpSystemDllBase]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153378, 0x67960 bytes
    // ntdll.dll .data:0x16a4a8, 0x6fc38 bytes
    // ntdll.dll .data:0x184378, 0x74648 bytes
    // ntdll.dll .data:0x16b4a8, 0x6fc38 bytes
    //
    _q69(sdk::unknown_ptr) system_dll_base;
    
    // [LdrpThreadPool]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153258, 0x67960 bytes
    // ntdll.dll .data:0x16b330, 0x6fc38 bytes
    // ntdll.dll .data:0x184ef0, 0x74648 bytes
    // ntdll.dll .data:0x16c330, 0x6fc38 bytes
    //
    _q70(sdk::unknown_ptr) thread_pool;
    
    // [LdrpThunkSignature]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154140, 0x67960 bytes
    // ntdll.dll .data:0x16b250, 0x6fc38 bytes
    // ntdll.dll .data:0x184d80, 0x74648 bytes
    // ntdll.dll .data:0x16c250, 0x6fc38 bytes
    //
    _q71(sdk::unknown_ptr) thunk_signature;
    
    // [LdrpTlsBitmap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153210, 0x67960 bytes
    // ntdll.dll .data:0x16a350, 0x6fc38 bytes
    // ntdll.dll .data:0x184200, 0x74648 bytes
    // ntdll.dll .data:0x16b350, 0x6fc38 bytes
    //
    _q72(sdk::unknown_ptr) tls_bitmap;
    
    // [LdrpTlsList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d590, 0x67960 bytes
    // ntdll.dll .data:0x164520, 0x6fc38 bytes
    // ntdll.dll .data:0x17e2b0, 0x74648 bytes
    // ntdll.dll .data:0x165520, 0x6fc38 bytes
    //
    _q73(sdk::unknown_ptr) tls_list;
    
    // [LdrpTlsLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1541d8, 0x67960 bytes
    // ntdll.dll .data:0x16b348, 0x6fc38 bytes
    // ntdll.dll .data:0x184ef8, 0x74648 bytes
    // ntdll.dll .data:0x16c348, 0x6fc38 bytes
    //
    _q74(sdk::unknown_ptr) tls_lock;
    
    // [LdrpTouchThreadStack]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87298, 0x67960 bytes
    // ntdll.dll .text:0x8273c, 0x6fc38 bytes
    // ntdll.dll .text:0x842fc, 0x74648 bytes
    // ntdll.dll .text:0x828dc, 0x6fc38 bytes
    //
    _q75(sdk::unknown_ptr) touch_thread_stack;
    
    // [LdrpTraceLoadMUIDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xddbd8, 0x67960 bytes
    // ntdll.dll .text:0xe14dc, 0x6fc38 bytes
    // ntdll.dll .text:0xec068, 0x74648 bytes
    // ntdll.dll .text:0xe144c, 0x6fc38 bytes
    //
    _q76(sdk::unknown_ptr) trace_load_mui_dll;
    
    // [LdrpTryAcquireLoaderLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x16794, 0x67960 bytes
    // ntdll.dll .text:0xcdaa0, 0x6fc38 bytes
    // ntdll.dll .text:0xd97ac, 0x74648 bytes
    // ntdll.dll .text:0xcda20, 0x6fc38 bytes
    //
    _q77(sdk::unknown_ptr) try_acquire_loader_lock;
    
    // [LdrpUnalignedUserCallTargetBitMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164290, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f3c0, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1993f0, 0x74648 bytes
    // ntdll.dll .mrdata:0x1803c0, 0x6fc38 bytes
    //
    _q78(sdk::unknown_ptr) unaligned_user_call_target_bit_map;
    
    // [LdrpUnloadIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fa0, 0x67960 bytes
    // ntdll.dll .data:0x16b170, 0x6fc38 bytes
    // ntdll.dll .data:0x184c10, 0x74648 bytes
    // ntdll.dll .data:0x16c170, 0x6fc38 bytes
    //
    _q79(sdk::unknown_ptr) unload_index;
    
    // [LdrpUnloadIndexEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fa4, 0x67960 bytes
    // ntdll.dll .data:0x16b174, 0x6fc38 bytes
    // ntdll.dll .data:0x184c14, 0x74648 bytes
    // ntdll.dll .data:0x16c174, 0x6fc38 bytes
    //
    _q80(sdk::unknown_ptr) unload_index_ex;
    
    // [LdrpUnloadNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x115d8, 0x67960 bytes
    // ntdll.dll .text:0x445ec, 0x6fc38 bytes
    // ntdll.dll .text:0x6b500, 0x74648 bytes
    // ntdll.dll .text:0x445ec, 0x6fc38 bytes
    //
    _q81(sdk::unknown_ptr) unload_node;
    
    // [LdrpUnlockTlsDelayedReclaimTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd40ec, 0x67960 bytes
    // ntdll.dll .text:0xd5154, 0x6fc38 bytes
    // ntdll.dll .text:0xe0434, 0x74648 bytes
    // ntdll.dll .text:0xd50c4, 0x6fc38 bytes
    //
    _q82(sdk::unknown_ptr) unlock_tls_delayed_reclaim_table;
    
    // [LdrpUpdateStatistics]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6bc, 0x67960 bytes
    // ntdll.dll .text:0x61604, 0x6fc38 bytes
    // ntdll.dll .text:0x11480, 0x74648 bytes
    // ntdll.dll .text:0x61724, 0x6fc38 bytes
    //
    _q83(sdk::unknown_ptr) update_statistics;
    
    // [LdrpUseImpersonatedDeviceMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153368, 0x67960 bytes
    // ntdll.dll .data:0x16a480, 0x6fc38 bytes
    // ntdll.dll .data:0x184350, 0x74648 bytes
    // ntdll.dll .data:0x16b480, 0x6fc38 bytes
    //
    _q84(sdk::unknown_ptr) use_impersonated_device_map;
    
    // [LdrpUserDllDirectories]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d3d8, 0x67960 bytes
    // ntdll.dll .data:0x1643d8, 0x6fc38 bytes
    // ntdll.dll .data:0x17e208, 0x74648 bytes
    // ntdll.dll .data:0x1653d8, 0x6fc38 bytes
    //
    _q85(sdk::unknown_ptr) user_dll_directories;
    
    // [LdrpValidateEntrySection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe0c8, 0x67960 bytes
    // ntdll.dll .text:0x33460, 0x6fc38 bytes
    // ntdll.dll .text:0x2b758, 0x74648 bytes
    // ntdll.dll .text:0x33460, 0x6fc38 bytes
    //
    _q86(sdk::unknown_ptr) validate_entry_section;
    
    // [LdrpValidateUserCallTarget]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96460, 0x67960 bytes
    // ntdll.dll .text:0x8b580, 0x6fc38 bytes
    // ntdll.dll .text:0x8eab0, 0x74648 bytes
    // ntdll.dll .text:0x8b720, 0x6fc38 bytes
    //
    _q87(sdk::unknown_ptr) validate_user_call_target;
    
    // [LdrpVectorHandlerList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d5e0, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f3d0, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199400, 0x74648 bytes
    // ntdll.dll .mrdata:0x1803d0, 0x6fc38 bytes
    //
    _q88(sdk::unknown_ptr) vector_handler_list;
    
    // [LdrpWorkCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa470, 0x67960 bytes
    // ntdll.dll .text:0x61380, 0x6fc38 bytes
    // ntdll.dll .text:0x11390, 0x74648 bytes
    // ntdll.dll .text:0x614a0, 0x6fc38 bytes
    //
    _q89(sdk::unknown_ptr) work_callback;
    
    // [LdrpWorkCompleteEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153250, 0x67960 bytes
    // ntdll.dll .data:0x16a3b0, 0x6fc38 bytes
    // ntdll.dll .data:0x184260, 0x74648 bytes
    // ntdll.dll .data:0x16b3b0, 0x6fc38 bytes
    //
    _q90(sdk::unknown_ptr) work_complete_event;
    
    // [LdrpWorkInProgress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153288, 0x67960 bytes
    // ntdll.dll .data:0x16a3e8, 0x6fc38 bytes
    // ntdll.dll .data:0x1842a8, 0x74648 bytes
    // ntdll.dll .data:0x16b3e8, 0x6fc38 bytes
    //
    _q91(sdk::unknown_ptr) work_in_progress;
    
    // [LdrpWorkQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153290, 0x67960 bytes
    // ntdll.dll .data:0x16a3f0, 0x6fc38 bytes
    // ntdll.dll .data:0x1842b0, 0x74648 bytes
    // ntdll.dll .data:0x16b3f0, 0x6fc38 bytes
    //
    _q92(sdk::unknown_ptr) work_queue;
    
    // [LdrpWorkQueueLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153260, 0x67960 bytes
    // ntdll.dll .data:0x16a3c0, 0x6fc38 bytes
    // ntdll.dll .data:0x184280, 0x74648 bytes
    // ntdll.dll .data:0x16b3c0, 0x6fc38 bytes
    //
    _q93(sdk::unknown_ptr) work_queue_lock;
    
    // [LdrpWriteBackProtectedDelayLoad]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x71338, 0x67960 bytes
    // ntdll.dll .text:0x53320, 0x6fc38 bytes
    // ntdll.dll .text:0x6ac44, 0x74648 bytes
    // ntdll.dll .text:0x53320, 0x6fc38 bytes
    //
    _q94(sdk::unknown_ptr) write_back_protected_delay_load;
};
#include "magic/api.end.hpp"
