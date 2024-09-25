#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/srwlock_t.hpp"
#include "../win/app_model_policy_type_t.hpp"
#include "../win/app_model_policy_policy_value_t.hpp"

#include "magic/api.start.hpp"
namespace ntdll
{
    // [AppModelPolicy_GetPolicy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x74894, 0x67960 bytes
    //
    _m00(sdk::function<sdk::hresult(void*, enum win::app_model_policy_type_t, enum win::app_model_policy_policy_value_t*)>*) app_model_policy_get_policy;
    
    // [_AppendCumulativeOverlayFilePath]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x12d8ec, 0x74648 bytes
    //
    _m01(sdk::unknown_ptr) append_cumulative_overlay_file_path;
    
    // [_AppendStandardOverlayFilePath]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x12d9bc, 0x74648 bytes
    //
    _m02(sdk::unknown_ptr) append_standard_overlay_file_path;
    
    // [BaseDllTag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x154548, 0x67960 bytes
    //
    _m03(sdk::unknown_ptr) base_dll_tag;
    
    // [BaseFormatObjectAttributes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x103bec, 0x67960 bytes
    //
    _m04(sdk::unknown_ptr) base_format_object_attributes;
    
    // [BaseGetNamedObjectDirectory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x103c84, 0x67960 bytes
    //
    _m05(sdk::unknown_ptr) base_get_named_object_directory;
    
    // [BaseIsThisAConsoleName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x103e9c, 0x67960 bytes
    //
    _m06(sdk::unknown_ptr) base_is_this_a_console_name;
    
    // [BasepInitializeFindFileHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x103ffc, 0x67960 bytes
    //
    _m07(sdk::unknown_ptr) basep_initialize_find_file_handle;
    
    // [_BuildCumulativeOverlayFilePath]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x12da2c, 0x74648 bytes
    //
    _m08(sdk::unknown_ptr) build_cumulative_overlay_file_path;
    
    // [_BuildStandardOverlayFilePath]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x12db70, 0x74648 bytes
    //
    _m09(sdk::unknown_ptr) build_standard_overlay_file_path;
    
    // [_ByteArrayToHexString]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xafff6, 0x74648 bytes
    //
    _m10(sdk::unknown_ptr) byte_array_to_hex_string;
    
    // [CastGuardProvidersRegistered]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x185218, 0x74648 bytes
    //
    _m11(sdk::unknown_ptr) cast_guard_providers_registered;
    
    // [CastGuardTelemetryInitOnce]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdae00, 0x74648 bytes
    //
    _m12(sdk::unknown_ptr) cast_guard_telemetry_init_once;
    
    // [CastGuardTelemetryInitRunOnce]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x1852f0, 0x74648 bytes
    //
    _m13(sdk::unknown_ptr) cast_guard_telemetry_init_run_once;
    
    // [CentennialIssueTracker_EnsureRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x85f2c, 0x67960 bytes
    //
    _m14(sdk::unknown_ptr) centennial_issue_tracker_ensure_registration;
    
    // [CMFQueueRear]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x153ff4, 0x67960 bytes
    //
    _m15(sdk::unknown_ptr) cmf_queue_rear;
    
    // [CMFStandbyQueue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x153fe0, 0x67960 bytes
    //
    _m16(sdk::unknown_ptr) cmf_standby_queue;
    
    // [ConditionVariableSpinCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x151a74, 0x67960 bytes
    //
    _m17(sdk::unknown_ptr) condition_variable_spin_count;
    
    // [_CopyLowerCaseAndSubstitute]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106320, 0x67960 bytes
    //
    _m18(sdk::unknown_ptr) copy_lower_case_and_substitute;
    
    // [_CreateSecureFileMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1041f4, 0x67960 bytes
    //
    _m19(sdk::unknown_ptr) create_secure_file_mapping;
    
    // [Feature_20H2_Enablement_logged_traits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004
    // ntdll.dll .rdata:0x1248e8, 0x6fc38 bytes
    //
    _m20(sdk::unknown_ptr) feature_20h2_enablement_logged_traits;
    
    // [Feature_20H2_Enablement__private_reporting]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004
    // ntdll.dll .data:0x16b4d8, 0x6fc38 bytes
    //
    _m21(sdk::unknown_ptr) feature_20h2_enablement_private_reporting;
    
    // [Feature_20H2_Rollback_logged_traits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004
    // ntdll.dll .rdata:0x1248e0, 0x6fc38 bytes
    //
    _m22(sdk::unknown_ptr) feature_20h2_rollback_logged_traits;
    
    // [Feature_20H2_Rollback__private_reporting]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004
    // ntdll.dll .data:0x16b4e8, 0x6fc38 bytes
    //
    _m23(sdk::unknown_ptr) feature_20h2_rollback_private_reporting;
    
    // [Feature_SearchPackagePaths__private_areDependenciesEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004
    // ntdll.dll .text:0x9a720, 0x6fc38 bytes
    //
    _m24(sdk::unknown_ptr) feature_search_package_paths_private_are_dependencies_enabled;
    
    // [Feature_SearchPackagePaths__private_descriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v20H2
    // ntdll.dll .rdata:0x151228, 0x6fc38 bytes
    //
    _m25(sdk::unknown_ptr) feature_search_package_paths_private_descriptor;
    
    // [Feature_SearchPackagePaths__private_requiresFeatures]
    // Ldr = [ntdll.dll]
    // => Windows 10 v20H2
    // ntdll.dll .rdata:0x11d1d0, 0x6fc38 bytes
    //
    _m26(sdk::unknown_ptr) feature_search_package_paths_private_requires_features;
    
    // [Feature_TreatDosDevicePathsAsNormalFiles_logged_traits]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .rdata:0x14bd24, 0x74648 bytes
    //
    _m27(sdk::unknown_ptr) feature_treat_dos_device_paths_as_normal_files_logged_traits;
    
    // [Feature_TreatDosDevicePathsAsNormalFiles__private_reporting]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x185210, 0x74648 bytes
    //
    _m28(sdk::unknown_ptr) feature_treat_dos_device_paths_as_normal_files_private_reporting;
    
    // [FlsBitMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x153350, 0x67960 bytes
    //
    _m29(sdk::unknown_ptr) fls_bit_map;
    
    // [gDefaultCasingTableSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x154038, 0x67960 bytes
    //
    _m30(sdk::unknown_ptr) g_default_casing_table_size;
    
    // [gLocaleTables]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x184ca0, 0x74648 bytes
    //
    _m31(sdk::unknown_ptr) g_locale_tables;
    
    // [g_MicrosoftTelemetryAssertLock]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x185200, 0x74648 bytes
    //
    _m32(struct rtl::srwlock_t*) g_microsoft_telemetry_assert_lock;
    
    // [g_pfnApphelpQueryModSettingsAllocProc]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .mrdata:0x1991f8, 0x74648 bytes
    //
    _m33(sdk::unknown_ptr) g_pfn_apphelp_query_mod_settings_alloc_proc;
    
    // [GetModuleFullPathName]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x7c778, 0x74648 bytes
    //
    _m34(sdk::unknown_ptr) get_module_full_path_name;
    
    // [GetModuleFullPathNameUnicode]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x7c84c, 0x74648 bytes
    //
    _m35(sdk::unknown_ptr) get_module_full_path_name_unicode;
    
    // [GetOverlayFilePathUsingChecksum]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xb228, 0x74648 bytes
    //
    _m36(sdk::unknown_ptr) get_overlay_file_path_using_checksum;
    
    // [_GetOverlayPackageKeyForLanguage]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xb474, 0x74648 bytes
    //
    _m37(sdk::unknown_ptr) get_overlay_package_key_for_language;
    
    // [_GetOverlayPackagePathFromKey]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xb0094, 0x74648 bytes
    //
    _m38(sdk::unknown_ptr) get_overlay_package_path_from_key;
    
    // [_GetOverlayPackageTypeFromKey]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xb0132, 0x74648 bytes
    //
    _m39(sdk::unknown_ptr) get_overlay_package_type_from_key;
    
    // [GlobalRtlNlsState]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x181710, 0x74648 bytes
    //
    _m40(sdk::unknown_ptr) global_rtl_nls_state;
    
    // [InitSpecialMachineFrames]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xad5b8, 0x74648 bytes
    //
    _m41(sdk::unknown_ptr) init_special_machine_frames;
    
    // [_IsOverlaySupportedPath]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xb3d4, 0x74648 bytes
    //
    _m42(sdk::unknown_ptr) is_overlay_supported_path;
    
    // [_IsProgramFilesPath]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x57c68, 0x74648 bytes
    //
    _m43(sdk::unknown_ptr) is_program_files_path;
    
    // [LongPathRegKeyValue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .rdata:0x109830, 0x67960 bytes
    //
    _m44(sdk::unknown_ptr) long_path_reg_key_value;
    
    // [MayBeLocaleName]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdf5c4, 0x74648 bytes
    //
    _m45(sdk::unknown_ptr) may_be_locale_name;
    
    // [__memset_spec_alt]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xa6500, 0x74648 bytes
    //
    _m46(sdk::unknown_ptr) memset_spec_alt;
    
    // [__memset_spec_alt_repmovs]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xa6700, 0x74648 bytes
    //
    _m47(sdk::unknown_ptr) memset_spec_alt_repmovs;
    
    // [__memset_spec_avx]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xa6080, 0x74648 bytes
    //
    _m48(sdk::unknown_ptr) memset_spec_avx;
    
    // [__memset_spec_avx_ermsb]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xa5e80, 0x74648 bytes
    //
    _m49(sdk::unknown_ptr) memset_spec_avx_ermsb;
    
    // [__memset_spec_avx_ermsb_repmovsb]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xa6000, 0x74648 bytes
    //
    _m50(sdk::unknown_ptr) memset_spec_avx_ermsb_repmovsb;
    
    // [__memset_spec_ermsb]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xa6200, 0x74648 bytes
    //
    _m51(sdk::unknown_ptr) memset_spec_ermsb;
    
    // [__memset_spec_ermsb_repmovsb]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xa6340, 0x74648 bytes
    //
    _m52(sdk::unknown_ptr) memset_spec_ermsb_repmovsb;
    
    // [__memset_spec_plain]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xa63c0, 0x74648 bytes
    //
    _m53(sdk::unknown_ptr) memset_spec_plain;
    
    // [MicrosoftTelemetryAssertTriggeredUM]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x7bf50, 0x74648 bytes
    //
    _m54(sdk::unknown_ptr) microsoft_telemetry_assert_triggered_um;
    
    // [MuiCriticalSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x152140, 0x67960 bytes
    //
    _m55(sdk::unknown_ptr) mui_critical_section;
    
    // [NpClose]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x9e8f0, 0x74648 bytes
    //
    _m56(sdk::unknown_ptr) np_close;
    
    // [NpCreateSection]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x9e970, 0x74648 bytes
    //
    _m57(sdk::unknown_ptr) np_create_section;
    
    // [NpMapViewOfSection]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x9e910, 0x74648 bytes
    //
    _m58(sdk::unknown_ptr) np_map_view_of_section;
    
    // [NpOpenFile]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x9e950, 0x74648 bytes
    //
    _m59(sdk::unknown_ptr) np_open_file;
    
    // [NpUnmapViewOfSection]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x9e930, 0x74648 bytes
    //
    _m60(sdk::unknown_ptr) np_unmap_view_of_section;
    
    // [ProviderHandleInsert]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x32b00, 0x74648 bytes
    //
    _m61(sdk::unknown_ptr) provider_handle_insert;
    
    // [ProviderHandleLookup]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x306e0, 0x74648 bytes
    //
    _m62(sdk::unknown_ptr) provider_handle_lookup;
    
    // [ProviderHandleRemove]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x30740, 0x74648 bytes
    //
    _m63(sdk::unknown_ptr) provider_handle_remove;
    
    // [ResCCloseRuntimeView]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xffe38, 0x67960 bytes
    //
    _m64(sdk::unknown_ptr) res_c_close_runtime_view;
    
    // [ResCCompareCacheIDs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x89ba4, 0x67960 bytes
    //
    _m65(sdk::unknown_ptr) res_c_compare_cache_i_ds;
    
    // [ResCCreateCultureMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1063b4, 0x67960 bytes
    //
    _m66(sdk::unknown_ptr) res_c_create_culture_map;
    
    // [_ResCCreateMappingExclusive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1042e8, 0x67960 bytes
    //
    _m67(sdk::unknown_ptr) res_c_create_mapping_exclusive;
    
    // [ResCCultureMapCreateAndPopulate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106530, 0x67960 bytes
    //
    _m68(sdk::unknown_ptr) res_c_culture_map_create_and_populate;
    
    // [ResCCultureMapPopulate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1065d0, 0x67960 bytes
    //
    _m69(sdk::unknown_ptr) res_c_culture_map_populate;
    
    // [ResCDirectoryCreateAndPopulate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106ae4, 0x67960 bytes
    //
    _m70(sdk::unknown_ptr) res_c_directory_create_and_populate;
    
    // [ResCDirectoryFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100b8c, 0x67960 bytes
    //
    _m71(sdk::unknown_ptr) res_c_directory_free;
    
    // [ResCDirectoryGetEntryCopyAndIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x89c64, 0x67960 bytes
    //
    _m72(sdk::unknown_ptr) res_c_directory_get_entry_copy_and_index;
    
    // [ResCDirectoryGetEntryIndexEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x89bec, 0x67960 bytes
    //
    _m73(sdk::unknown_ptr) res_c_directory_get_entry_index_ex;
    
    // [ResCDirectoryGetSegmentName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100cb4, 0x67960 bytes
    //
    _m74(sdk::unknown_ptr) res_c_directory_get_segment_name;
    
    // [ResCDirectoryGetSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106b88, 0x67960 bytes
    //
    _m75(sdk::unknown_ptr) res_c_directory_get_size;
    
    // [ResCDirectoryPopulate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106bd4, 0x67960 bytes
    //
    _m76(sdk::unknown_ptr) res_c_directory_populate;
    
    // [ResCDirectoryValidate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100d10, 0x67960 bytes
    //
    _m77(sdk::unknown_ptr) res_c_directory_validate;
    
    // [ResCDirectoryValidateEntries]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106c30, 0x67960 bytes
    //
    _m78(sdk::unknown_ptr) res_c_directory_validate_entries;
    
    // [ResCDirectoryValidateHeader]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x5f3b4, 0x67960 bytes
    //
    _m79(sdk::unknown_ptr) res_c_directory_validate_header;
    
    // [_ResCDupString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x104584, 0x67960 bytes
    //
    _m80(sdk::unknown_ptr) res_c_dup_string;
    
    // [_ResCFlushMappedView]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x10462c, 0x67960 bytes
    //
    _m81(sdk::unknown_ptr) res_c_flush_mapped_view;
    
    // [ResCFreeCultureMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106658, 0x67960 bytes
    //
    _m82(sdk::unknown_ptr) res_c_free_culture_map;
    
    // [ResCGetCultureID]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106734, 0x67960 bytes
    //
    _m83(sdk::unknown_ptr) res_c_get_culture_id;
    
    // [ResCGetHighestCacheIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x105c0c, 0x67960 bytes
    //
    _m84(sdk::unknown_ptr) res_c_get_highest_cache_index;
    
    // [ResCGetHighestConsecutiveCacheIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x105da4, 0x67960 bytes
    //
    _m85(sdk::unknown_ptr) res_c_get_highest_consecutive_cache_index;
    
    // [ResCGetIndexedName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x95400, 0x67960 bytes
    //
    _m86(sdk::unknown_ptr) res_c_get_indexed_name;
    
    // [ResCGetName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x105e88, 0x67960 bytes
    //
    _m87(sdk::unknown_ptr) res_c_get_name;
    
    // [_ResCGetRegistryFlags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x60130, 0x67960 bytes
    //
    _m88(sdk::unknown_ptr) res_c_get_registry_flags;
    
    // [ResCGetRegistryLatestIndex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x89a14, 0x67960 bytes
    //
    _m89(sdk::unknown_ptr) res_c_get_registry_latest_index;
    
    // [ResCGetSubIndexedName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x10626c, 0x67960 bytes
    //
    _m90(sdk::unknown_ptr) res_c_get_sub_indexed_name;
    
    // [ResCHitsCreateAndPopulate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106de4, 0x67960 bytes
    //
    _m91(sdk::unknown_ptr) res_c_hits_create_and_populate;
    
    // [ResCHitsEntryHit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100dc8, 0x67960 bytes
    //
    _m92(sdk::unknown_ptr) res_c_hits_entry_hit;
    
    // [ResCHitsFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100e30, 0x67960 bytes
    //
    _m93(sdk::unknown_ptr) res_c_hits_free;
    
    // [ResCIncrementCMFMissCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x89e50, 0x67960 bytes
    //
    _m94(sdk::unknown_ptr) res_c_increment_cmf_miss_count;
    
    // [ResCKeCreateRuntimeView]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xfff58, 0x67960 bytes
    //
    _m95(sdk::unknown_ptr) res_c_ke_create_runtime_view;
    
    // [ResCKeDirectoryOpenMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x60420, 0x67960 bytes
    //
    _m96(sdk::unknown_ptr) res_c_ke_directory_open_mapping;
    
    // [ResCKeGetBaseFolder]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x60968, 0x67960 bytes
    //
    _m97(sdk::unknown_ptr) res_c_ke_get_base_folder;
    
    // [ResCKeGetCacheIndices]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x10011c, 0x67960 bytes
    //
    _m98(sdk::unknown_ptr) res_c_ke_get_cache_indices;
    
    // [ResCKeHitsOpenMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100f24, 0x67960 bytes
    //
    _m99(sdk::unknown_ptr) res_c_ke_hits_open_mapping;
    
    // [ResCKeOpenRuntimeView]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x60324, 0x67960 bytes
    //
    _n00(sdk::unknown_ptr) res_c_ke_open_runtime_view;
    
    // [ResCKeSegmentOpenMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100f90, 0x67960 bytes
    //
    _n01(sdk::unknown_ptr) res_c_ke_segment_open_mapping;
    
    // [ResCLoadCultureMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1067ec, 0x67960 bytes
    //
    _n02(sdk::unknown_ptr) res_c_load_culture_map;
    
    // [_ResCLoadFixedSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x104678, 0x67960 bytes
    //
    _n03(sdk::unknown_ptr) res_c_load_fixed_size;
    
    // [_ResCMapCMFModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x604c0, 0x67960 bytes
    //
    _n04(sdk::unknown_ptr) res_c_map_cmf_module;
    
    // [_ResCOpenMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1047a8, 0x67960 bytes
    //
    _n05(sdk::unknown_ptr) res_c_open_mapping;
    
    // [ResCOpenRegistryKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x601fc, 0x67960 bytes
    //
    _n06(sdk::unknown_ptr) res_c_open_registry_key;
    
    // [ResCReleaseInitMutex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x10408c, 0x67960 bytes
    //
    _n07(sdk::unknown_ptr) res_c_release_init_mutex;
    
    // [ResCReloadCultureMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106890, 0x67960 bytes
    //
    _n08(sdk::unknown_ptr) res_c_reload_culture_map;
    
    // [ResCRequestInitMutex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1040e4, 0x67960 bytes
    //
    _n09(sdk::unknown_ptr) res_c_request_init_mutex;
    
    // [ResCRuntimeGetCultureID]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100264, 0x67960 bytes
    //
    _n10(sdk::unknown_ptr) res_c_runtime_get_culture_id;
    
    // [ResCRuntimeGetResourceDataEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x95b7c, 0x67960 bytes
    //
    _n11(sdk::unknown_ptr) res_c_runtime_get_resource_data_ex;
    
    // [ResCRuntimeGetSegmentDataEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100318, 0x67960 bytes
    //
    _n12(sdk::unknown_ptr) res_c_runtime_get_segment_data_ex;
    
    // [ResCRuntimeUnmapSegment]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1005d0, 0x67960 bytes
    //
    _n13(sdk::unknown_ptr) res_c_runtime_unmap_segment;
    
    // [ResCRuntimeViewLoadCultureMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100658, 0x67960 bytes
    //
    _n14(sdk::unknown_ptr) res_c_runtime_view_load_culture_map;
    
    // [ResCSegmentCreateAndPopulate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106ed0, 0x67960 bytes
    //
    _n15(sdk::unknown_ptr) res_c_segment_create_and_populate;
    
    // [ResCSegmentCreateMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x100ff8, 0x67960 bytes
    //
    _n16(sdk::unknown_ptr) res_c_segment_create_mapping;
    
    // [ResCSegmentFree]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x10108c, 0x67960 bytes
    //
    _n17(sdk::unknown_ptr) res_c_segment_free;
    
    // [ResCSegmentPopulate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x106f70, 0x67960 bytes
    //
    _n18(sdk::unknown_ptr) res_c_segment_populate;
    
    // [_ResCloseHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x104850, 0x67960 bytes
    //
    _n19(sdk::unknown_ptr) res_close_handle;
    
    // [_ResCompareString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x10489c, 0x67960 bytes
    //
    _n20(sdk::unknown_ptr) res_compare_string;
    
    // [_ResCreateFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1048f0, 0x67960 bytes
    //
    _n21(sdk::unknown_ptr) res_create_file;
    
    // [_ResCreateFileMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x104b00, 0x67960 bytes
    //
    _n22(sdk::unknown_ptr) res_create_file_mapping;
    
    // [_ResCreateMutex]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x104c2c, 0x67960 bytes
    //
    _n23(sdk::unknown_ptr) res_create_mutex;
    
    // [_ResCreateSecurityDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x104cbc, 0x67960 bytes
    //
    _n24(sdk::unknown_ptr) res_create_security_descriptor;
    
    // [ResCultureNameToLCID]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x104190, 0x67960 bytes
    //
    _n25(sdk::unknown_ptr) res_culture_name_to_lcid;
    
    // [_ResFindClose]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x104fdc, 0x67960 bytes
    //
    _n26(sdk::unknown_ptr) res_find_close;
    
    // [_ResFindFirstFileExW]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x105084, 0x67960 bytes
    //
    _n27(sdk::unknown_ptr) res_find_first_file_ex_w;
    
    // [_ResFindNextFileW]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x105494, 0x67960 bytes
    //
    _n28(sdk::unknown_ptr) res_find_next_file_w;
    
    // [_ResGetFileAttributesEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1056b8, 0x67960 bytes
    //
    _n29(sdk::unknown_ptr) res_get_file_attributes_ex;
    
    // [_ResGetFileAttributesW]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1057e4, 0x67960 bytes
    //
    _n30(sdk::unknown_ptr) res_get_file_attributes_w;
    
    // [_ResGetFileSizeEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1058b0, 0x67960 bytes
    //
    _n31(sdk::unknown_ptr) res_get_file_size_ex;
    
    // [_ResGetSystemWindowsDirectory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x609cc, 0x67960 bytes
    //
    _n32(sdk::unknown_ptr) res_get_system_windows_directory;
    
    // [_ResMapViewOfFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x105924, 0x67960 bytes
    //
    _n33(sdk::unknown_ptr) res_map_view_of_file;
    
    // [_ResOpenFileMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x1059e4, 0x67960 bytes
    //
    _n34(sdk::unknown_ptr) res_open_file_mapping;
    
    // [_ResQueryValueKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x60db8, 0x67960 bytes
    //
    _n35(sdk::unknown_ptr) res_query_value_key;
    
    // [_ResReadFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x105a90, 0x67960 bytes
    //
    _n36(sdk::unknown_ptr) res_read_file;
    
    // [ResRuntimeView]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x152118, 0x67960 bytes
    //
    _n37(sdk::unknown_ptr) res_runtime_view;
    
    // [_ResUnmapViewOfFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x105b4c, 0x67960 bytes
    //
    _n38(sdk::unknown_ptr) res_unmap_view_of_file;
    
    // [_ResWaitForSingleObject]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x105bbc, 0x67960 bytes
    //
    _n39(sdk::unknown_ptr) res_wait_for_single_object;
    
    // [SmtDelayedConfiguration]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x182f80, 0x74648 bytes
    //
    _n40(sdk::unknown_ptr) smt_delayed_configuration;
    
    // [SpecialMachineFramesInitCount]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x185310, 0x74648 bytes
    //
    _n41(sdk::unknown_ptr) special_machine_frames_init_count;
    
    // [SpecialMachineFramesInitialized]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .data:0x185225, 0x74648 bytes
    //
    _n42(sdk::unknown_ptr) special_machine_frames_initialized;
    
    // [SRWLockSpinCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x151c28, 0x67960 bytes
    //
    _n43(sdk::unknown_ptr) srw_lock_spin_count;
    
    // [_StartPathWithLongPathPrefixIfNeeded]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x12dbe0, 0x74648 bytes
    //
    _n44(sdk::unknown_ptr) start_path_with_long_path_prefix_if_needed;
    
    // [UserThreadStartXfgThunk]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x9e990, 0x74648 bytes
    //
    _n45(sdk::unknown_ptr) user_thread_start_xfg_thunk;
    
    // [_ValidateAndStandardizeOverlayPaths]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xb338, 0x74648 bytes
    //
    _n46(sdk::unknown_ptr) validate_and_standardize_overlay_paths;
    
    // [WerpGetProcessSnapshot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x49d8, 0x67960 bytes
    //
    _n47(sdk::unknown_ptr) werp_get_process_snapshot;
    
    // [Wow64Handle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x1532b8, 0x67960 bytes
    //
    _n48(sdk::unknown_ptr) wow64_handle;
    
    // [Wow64LdrpInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x153340, 0x67960 bytes
    //
    _n49(sdk::unknown_ptr) wow64_ldrp_initialize;
    
    // [Wow64PrepareForDebuggerAttach]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x1532a8, 0x67960 bytes
    //
    _n50(sdk::unknown_ptr) wow64_prepare_for_debugger_attach;
    
    // [Wow64SuspendLocalThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .data:0x1532c0, 0x67960 bytes
    //
    _n51(sdk::unknown_ptr) wow64_suspend_local_thread;
    
    // [BuildOverlayFilePath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x50504, 0x6fc38 bytes
    // ntdll.dll .text:0x50504, 0x6fc38 bytes
    //
    _n52(sdk::unknown_ptr) build_overlay_file_path;
    
    // [Feature_SearchPackagePaths_logged_traits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .rdata:0x1248e0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x124be0, 0x6fc38 bytes
    //
    _n53(sdk::unknown_ptr) feature_search_package_paths_logged_traits;
    
    // [Feature_SearchPackagePaths__private_featureState]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .data:0x16b4b8, 0x6fc38 bytes
    // ntdll.dll .data:0x16c4b8, 0x6fc38 bytes
    //
    _n54(sdk::unknown_ptr) feature_search_package_paths_private_feature_state;
    
    // [Feature_SearchPackagePaths__private_IsEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x9a69c, 0x6fc38 bytes
    // ntdll.dll .text:0x9a720, 0x6fc38 bytes
    //
    _n55(sdk::unknown_ptr) feature_search_package_paths_private_is_enabled;
    
    // [Feature_SearchPackagePaths__private_reporting]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .data:0x16b4f8, 0x6fc38 bytes
    // ntdll.dll .data:0x16c4d8, 0x6fc38 bytes
    //
    _n56(sdk::unknown_ptr) feature_search_package_paths_private_reporting;
    
    // [GetOverlayFilePath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x50388, 0x6fc38 bytes
    // ntdll.dll .text:0x50388, 0x6fc38 bytes
    //
    _n57(sdk::unknown_ptr) get_overlay_file_path;
    
    // [GetOverlayRootFolder]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x2a464, 0x6fc38 bytes
    // ntdll.dll .text:0x2a464, 0x6fc38 bytes
    //
    _n58(sdk::unknown_ptr) get_overlay_root_folder;
    
    // [HashStringToDwordCaseInsensitiveLen]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 11
    // ntdll.dll .text:0xda54c, 0x67960 bytes
    // ntdll.dll .text:0xe82fc, 0x74648 bytes
    //
    _n59(sdk::unknown_ptr) hash_string_to_dword_case_insensitive_len;
    
    // [IsOverlaySupportedPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x50464, 0x6fc38 bytes
    // ntdll.dll .text:0x50464, 0x6fc38 bytes
    //
    _n60(sdk::unknown_ptr) is_overlay_supported_path_;
    
    // [IsProgramFilesPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x474f4, 0x6fc38 bytes
    // ntdll.dll .text:0x474f4, 0x6fc38 bytes
    //
    _n61(sdk::unknown_ptr) is_program_files_path_;
    
    // [ApiSetQueryApiSetPresenceEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3be70, 0x6fc38 bytes
    // ntdll.dll .text:0x884a0, 0x74648 bytes
    // ntdll.dll .text:0x3be70, 0x6fc38 bytes
    //
    _n62(sdk::unknown_ptr) api_set_query_api_set_presence_ex;
    
    // [AvrfAppVerifierMode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x17f29c, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992b4, 0x74648 bytes
    // ntdll.dll .mrdata:0x18029c, 0x6fc38 bytes
    //
    _n63(sdk::unknown_ptr) avrf_app_verifier_mode;
    
    // [ConditionVariableSpinCycleCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x168c34, 0x6fc38 bytes
    // ntdll.dll .data:0x182ed8, 0x74648 bytes
    // ntdll.dll .data:0x169c34, 0x6fc38 bytes
    //
    _n64(sdk::unknown_ptr) condition_variable_spin_cycle_count;
    
    // [gDefaultLocaleId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .data:0x154030, 0x67960 bytes
    // ntdll.dll .data:0x16b1f4, 0x6fc38 bytes
    // ntdll.dll .data:0x16c1f4, 0x6fc38 bytes
    //
    _n65(sdk::unknown_ptr) g_default_locale_id;
    
    // [g_hPrivLoggerNotificationProvider]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x168508, 0x6fc38 bytes
    // ntdll.dll .data:0x1825e8, 0x74648 bytes
    // ntdll.dll .data:0x169510, 0x6fc38 bytes
    //
    _n66(sdk::unknown_ptr) g_h_priv_logger_notification_provider;
    
    // [g_LdrpWow64LdrpInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x17f220, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199228, 0x74648 bytes
    // ntdll.dll .mrdata:0x180220, 0x6fc38 bytes
    //
    _n67(sdk::unknown_ptr) g_ldrp_wow64_ldrp_initialize;
    
    // [g_LdrpWow64PrepareForDebuggerAttach]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x17f260, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199268, 0x74648 bytes
    // ntdll.dll .mrdata:0x180260, 0x6fc38 bytes
    //
    _n68(sdk::unknown_ptr) g_ldrp_wow64_prepare_for_debugger_attach;
    
    // [g_LdrpWow64SuspendLocalProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x17f238, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199240, 0x74648 bytes
    // ntdll.dll .mrdata:0x180238, 0x6fc38 bytes
    //
    _n69(sdk::unknown_ptr) g_ldrp_wow64_suspend_local_process;
    
    // [g_LdrpWow64SuspendLocalThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x17f270, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199278, 0x74648 bytes
    // ntdll.dll .mrdata:0x180270, 0x6fc38 bytes
    //
    _n70(sdk::unknown_ptr) g_ldrp_wow64_suspend_local_thread;
    
    // [GetProcessIptTrace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1174f4, 0x6fc38 bytes
    // ntdll.dll .text:0x12b65c, 0x74648 bytes
    // ntdll.dll .text:0x117694, 0x6fc38 bytes
    //
    _n71(sdk::unknown_ptr) get_process_ipt_trace;
    
    // [GetProcessIptTraceSize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x117650, 0x6fc38 bytes
    // ntdll.dll .text:0x12b7b8, 0x74648 bytes
    // ntdll.dll .text:0x1177f0, 0x6fc38 bytes
    //
    _n72(sdk::unknown_ptr) get_process_ipt_trace_size;
    
    // [ImportTablepFreeModuleSorted]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xe0284, 0x6fc38 bytes
    // ntdll.dll .text:0xeaad8, 0x74648 bytes
    // ntdll.dll .text:0xe01f4, 0x6fc38 bytes
    //
    _n73(sdk::unknown_ptr) import_tablep_free_module_sorted;
    
    // [LibLoaderTelemetryInitOnce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84860, 0x6fc38 bytes
    // ntdll.dll .text:0xdcad0, 0x74648 bytes
    // ntdll.dll .text:0x84a00, 0x6fc38 bytes
    //
    _n74(sdk::unknown_ptr) lib_loader_telemetry_init_once;
    
    // [LibLoaderTelemetryInitRunOnce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b238, 0x6fc38 bytes
    // ntdll.dll .data:0x1852e8, 0x74648 bytes
    // ntdll.dll .data:0x16c238, 0x6fc38 bytes
    //
    _n75(sdk::unknown_ptr) lib_loader_telemetry_init_run_once;
    
    // [NtdllFilteredProcessRedirectingWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9bce0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ec90, 0x74648 bytes
    // ntdll.dll .text:0x9bcc0, 0x6fc38 bytes
    //
    _n76(sdk::unknown_ptr) ntdll_filtered_process_redirecting_wnd_proc_a;
    
    // [NtdllFilteredProcessRedirectingWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9bcf0, 0x6fc38 bytes
    // ntdll.dll .text:0x9eca0, 0x74648 bytes
    // ntdll.dll .text:0x9bcd0, 0x6fc38 bytes
    //
    _n77(sdk::unknown_ptr) ntdll_filtered_process_redirecting_wnd_proc_w;
    
    // [PossibleDeadlockReportCounter]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16bb1c, 0x6fc38 bytes
    // ntdll.dll .data:0x1858a4, 0x74648 bytes
    // ntdll.dll .data:0x16cb1c, 0x6fc38 bytes
    //
    _n78(sdk::unknown_ptr) possible_deadlock_report_counter;
    
    // [PossibleDeadlockReportThreshold]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1677d4, 0x6fc38 bytes
    // ntdll.dll .data:0x181830, 0x74648 bytes
    // ntdll.dll .data:0x1687d4, 0x6fc38 bytes
    //
    _n79(sdk::unknown_ptr) possible_deadlock_report_threshold;
    
    // [PrivateLoggerNotificationEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x168510, 0x6fc38 bytes
    // ntdll.dll .data:0x1825f0, 0x74648 bytes
    // ntdll.dll .data:0x169508, 0x6fc38 bytes
    //
    _n80(sdk::unknown_ptr) private_logger_notification_entry;
    
    // [PsspCaptureIptTrace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x114380, 0x6fc38 bytes
    // ntdll.dll .text:0x12839c, 0x74648 bytes
    // ntdll.dll .text:0x114520, 0x6fc38 bytes
    //
    _n81(sdk::unknown_ptr) pssp_capture_ipt_trace;
    
    // [PsspWalkInfoClass_PSS_WALK_VA_SPACE]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1166f8, 0x6fc38 bytes
    // ntdll.dll .text:0x12a81c, 0x74648 bytes
    // ntdll.dll .text:0x116898, 0x6fc38 bytes
    //
    _n82(sdk::unknown_ptr) pssp_walk_info_class_pss_walk_va_space;
    
    // [QueryRegistryValue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x119794, 0x6fc38 bytes
    // ntdll.dll .text:0xb01b0, 0x74648 bytes
    // ntdll.dll .text:0x119934, 0x6fc38 bytes
    //
    _n83(sdk::unknown_ptr) query_registry_value;
    
    // [ResourceEntryBinarySearch]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .text:0x20ae8, 0x67960 bytes
    // ntdll.dll .text:0x26480, 0x6fc38 bytes
    // ntdll.dll .text:0x26480, 0x6fc38 bytes
    //
    _n84(sdk::unknown_ptr) resource_entry_binary_search;
    
    // [SRWLockSpinCycleCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x168fc4, 0x6fc38 bytes
    // ntdll.dll .data:0x1832a4, 0x74648 bytes
    // ntdll.dll .data:0x169fc4, 0x6fc38 bytes
    //
    _n85(sdk::unknown_ptr) srw_lock_spin_cycle_count;
    
    // [_vscprintf]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8c8a0, 0x6fc38 bytes
    // ntdll.dll .text:0x90230, 0x74648 bytes
    // ntdll.dll .text:0x8ca40, 0x6fc38 bytes
    //
    _n86(sdk::function<int32_t(const char const*, char*)>*) vscprintf;
    
    // [_vscprintf_helper]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8c8bc, 0x6fc38 bytes
    // ntdll.dll .text:0x9024c, 0x74648 bytes
    // ntdll.dll .text:0x8ca5c, 0x6fc38 bytes
    //
    _n87(sdk::unknown_ptr) vscprintf_helper;
    
    // [VSMEnclaveProvidersRegistered]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b690, 0x6fc38 bytes
    // ntdll.dll .data:0x185219, 0x74648 bytes
    // ntdll.dll .data:0x16c680, 0x6fc38 bytes
    //
    _n88(sdk::unknown_ptr) vsm_enclave_providers_registered;
    
    // [VsmEnclaveTelemetryInitOnce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd01e0, 0x6fc38 bytes
    // ntdll.dll .text:0xdcbb0, 0x74648 bytes
    // ntdll.dll .text:0xd0160, 0x6fc38 bytes
    //
    _n89(sdk::unknown_ptr) vsm_enclave_telemetry_init_once;
    
    // [VsmEnclaveTelemetryInitRunOnce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b768, 0x6fc38 bytes
    // ntdll.dll .data:0x1852e0, 0x74648 bytes
    // ntdll.dll .data:0x16c768, 0x6fc38 bytes
    //
    _n90(sdk::unknown_ptr) vsm_enclave_telemetry_init_run_once;
    
    // [WerReportExceptionWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdd5b0, 0x6fc38 bytes
    // ntdll.dll .text:0xe7a50, 0x74648 bytes
    // ntdll.dll .text:0xdd520, 0x6fc38 bytes
    //
    _n91(sdk::unknown_ptr) wer_report_exception_worker;
    
    // [WindowsHeapSnapshotProvider]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x120be8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x138248, 0x74648 bytes
    // ntdll.dll .rdata:0x120ee8, 0x6fc38 bytes
    //
    _n92(sdk::unknown_ptr) windows_heap_snapshot_provider;
    
    // [A_SHAFinal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5b190, 0x67960 bytes
    // ntdll.dll .text:0x5bf10, 0x6fc38 bytes
    // ntdll.dll .text:0xed70, 0x74648 bytes
    // ntdll.dll .text:0x5bf10, 0x6fc38 bytes
    //
    _n93(sdk::unknown_ptr) a_sha_final;
    
    // [A_SHAInit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5b2d0, 0x67960 bytes
    // ntdll.dll .text:0x5cd40, 0x6fc38 bytes
    // ntdll.dll .text:0xeea0, 0x74648 bytes
    // ntdll.dll .text:0x5cd40, 0x6fc38 bytes
    //
    _n94(sdk::unknown_ptr) a_sha_init;
    
    // [A_SHAUpdate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5b310, 0x67960 bytes
    // ntdll.dll .text:0x5cd80, 0x6fc38 bytes
    // ntdll.dll .text:0xeee0, 0x74648 bytes
    // ntdll.dll .text:0x5cd80, 0x6fc38 bytes
    //
    _n95(sdk::unknown_ptr) a_sha_update;
    
    // [AVrfCallAPILookupCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd72a0, 0x67960 bytes
    // ntdll.dll .text:0xd9520, 0x6fc38 bytes
    // ntdll.dll .text:0xe3ba0, 0x74648 bytes
    // ntdll.dll .text:0xd9490, 0x6fc38 bytes
    //
    _n96(sdk::unknown_ptr) a_vrf_call_api_lookup_callback;
    
    // [AVrfDllLoadNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86ef0, 0x67960 bytes
    // ntdll.dll .text:0x83a6c, 0x6fc38 bytes
    // ntdll.dll .text:0x8e16c, 0x74648 bytes
    // ntdll.dll .text:0x83c0c, 0x6fc38 bytes
    //
    _n97(sdk::unknown_ptr) a_vrf_dll_load_notification;
    
    // [AVrfDllUnloadNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7384, 0x67960 bytes
    // ntdll.dll .text:0xd9604, 0x6fc38 bytes
    // ntdll.dll .text:0xe3c90, 0x74648 bytes
    // ntdll.dll .text:0xd9574, 0x6fc38 bytes
    //
    _n98(sdk::unknown_ptr) a_vrf_dll_unload_notification;
    
    // [AVrfInitializeVerifier]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7448, 0x67960 bytes
    // ntdll.dll .text:0xd96c8, 0x6fc38 bytes
    // ntdll.dll .text:0xe3d64, 0x74648 bytes
    // ntdll.dll .text:0xd9638, 0x6fc38 bytes
    //
    _n99(sdk::unknown_ptr) a_vrf_initialize_verifier;
    
    // [AVrfInternalHeapFreeNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7810, 0x67960 bytes
    // ntdll.dll .text:0xda130, 0x6fc38 bytes
    // ntdll.dll .text:0xe4720, 0x74648 bytes
    // ntdll.dll .text:0xda0a0, 0x6fc38 bytes
    //
    _o00(sdk::unknown_ptr) a_vrf_internal_heap_free_notification;
    
    // [AVrfOpenCurrentUserImageFileOptionsKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd78a8, 0x67960 bytes
    // ntdll.dll .text:0xda1cc, 0x6fc38 bytes
    // ntdll.dll .text:0xe47c4, 0x74648 bytes
    // ntdll.dll .text:0xda13c, 0x6fc38 bytes
    //
    _o01(sdk::unknown_ptr) a_vrf_open_current_user_image_file_options_key;
    
    // [AVrfpAppendCurrentUserSid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd79b0, 0x67960 bytes
    // ntdll.dll .text:0xda2d4, 0x6fc38 bytes
    // ntdll.dll .text:0xe48cc, 0x74648 bytes
    // ntdll.dll .text:0xda244, 0x6fc38 bytes
    //
    _o02(sdk::unknown_ptr) a_vrfp_append_current_user_sid;
    
    // [AVrfpChainDuplicateVerificationLayers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7ab0, 0x67960 bytes
    // ntdll.dll .text:0xda3d8, 0x6fc38 bytes
    // ntdll.dll .text:0xe49cc, 0x74648 bytes
    // ntdll.dll .text:0xda348, 0x6fc38 bytes
    //
    _o03(sdk::unknown_ptr) a_vrfp_chain_duplicate_verification_layers;
    
    // [AVrfpCurrentUserKeyPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1527e0, 0x67960 bytes
    // ntdll.dll .data:0x169ac0, 0x6fc38 bytes
    // ntdll.dll .data:0x183980, 0x74648 bytes
    // ntdll.dll .data:0x16aac0, 0x6fc38 bytes
    //
    _o04(sdk::unknown_ptr) a_vrfp_current_user_key_path;
    
    // [AVrfpDebug]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154508, 0x67960 bytes
    // ntdll.dll .data:0x16b784, 0x6fc38 bytes
    // ntdll.dll .data:0x18532c, 0x74648 bytes
    // ntdll.dll .data:0x16c784, 0x6fc38 bytes
    //
    _o05(sdk::unknown_ptr) a_vrfp_debug;
    
    // [AVrfpDetectVerifiedExports]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7bc4, 0x67960 bytes
    // ntdll.dll .text:0xda4f8, 0x6fc38 bytes
    // ntdll.dll .text:0xe4aec, 0x74648 bytes
    // ntdll.dll .text:0xda468, 0x6fc38 bytes
    //
    _o06(sdk::unknown_ptr) a_vrfp_detect_verified_exports;
    
    // [AVrfpDllLoadNotificationInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7ca4, 0x67960 bytes
    // ntdll.dll .text:0xda5e0, 0x6fc38 bytes
    // ntdll.dll .text:0xe4bd4, 0x74648 bytes
    // ntdll.dll .text:0xda550, 0x6fc38 bytes
    //
    _o07(sdk::unknown_ptr) a_vrfp_dll_load_notification_internal;
    
    // [AVrfpDllUnloadNotificationInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7d80, 0x67960 bytes
    // ntdll.dll .text:0xda6bc, 0x6fc38 bytes
    // ntdll.dll .text:0xe4cb0, 0x74648 bytes
    // ntdll.dll .text:0xda62c, 0x6fc38 bytes
    //
    _o08(sdk::unknown_ptr) a_vrfp_dll_unload_notification_internal;
    
    // [AVrfpEnableHandleVerifier]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7e9c, 0x67960 bytes
    // ntdll.dll .text:0xda7f0, 0x6fc38 bytes
    // ntdll.dll .text:0xe4dd4, 0x74648 bytes
    // ntdll.dll .text:0xda760, 0x6fc38 bytes
    //
    _o09(sdk::unknown_ptr) a_vrfp_enable_handle_verifier;
    
    // [AVrfpEnableHeapVerifier]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7f10, 0x67960 bytes
    // ntdll.dll .text:0xda868, 0x6fc38 bytes
    // ntdll.dll .text:0xe4e4c, 0x74648 bytes
    // ntdll.dll .text:0xda7d8, 0x6fc38 bytes
    //
    _o10(sdk::unknown_ptr) a_vrfp_enable_heap_verifier;
    
    // [AVrfpEnableVerifierOptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd7f7c, 0x67960 bytes
    // ntdll.dll .text:0xda8d4, 0x6fc38 bytes
    // ntdll.dll .text:0xe4eb8, 0x74648 bytes
    // ntdll.dll .text:0xda844, 0x6fc38 bytes
    //
    _o11(sdk::unknown_ptr) a_vrfp_enable_verifier_options;
    
    // [AVrfpEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164259, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f299, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992b1, 0x74648 bytes
    // ntdll.dll .mrdata:0x180299, 0x6fc38 bytes
    //
    _o12(sdk::unknown_ptr) a_vrfp_enabled;
    
    // [AVrfpEnabledSystemWide]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152428, 0x67960 bytes
    // ntdll.dll .data:0x169708, 0x6fc38 bytes
    // ntdll.dll .data:0x1835c8, 0x74648 bytes
    // ntdll.dll .data:0x16a708, 0x6fc38 bytes
    //
    _o13(sdk::unknown_ptr) a_vrfp_enabled_system_wide;
    
    // [AVrfpFindClosestThunkDuplicate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd8028, 0x67960 bytes
    // ntdll.dll .text:0xda984, 0x6fc38 bytes
    // ntdll.dll .text:0xe4f68, 0x74648 bytes
    // ntdll.dll .text:0xda8f4, 0x6fc38 bytes
    //
    _o14(sdk::unknown_ptr) a_vrfp_find_closest_thunk_duplicate;
    
    // [AVrfpHandleTraces]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154504, 0x67960 bytes
    // ntdll.dll .data:0x16b780, 0x6fc38 bytes
    // ntdll.dll .data:0x185328, 0x74648 bytes
    // ntdll.dll .data:0x16c780, 0x6fc38 bytes
    //
    _o15(sdk::unknown_ptr) a_vrfp_handle_traces;
    
    // [AVrfpIsVerifierProviderDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd81a0, 0x67960 bytes
    // ntdll.dll .text:0xdaaf0, 0x6fc38 bytes
    // ntdll.dll .text:0xe50c8, 0x74648 bytes
    // ntdll.dll .text:0xdaa60, 0x6fc38 bytes
    //
    _o16(sdk::unknown_ptr) a_vrfp_is_verifier_provider_dll;
    
    // [AVrfpLoadAndInitializeProvider]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd81d8, 0x67960 bytes
    // ntdll.dll .text:0xdab28, 0x6fc38 bytes
    // ntdll.dll .text:0xe5100, 0x74648 bytes
    // ntdll.dll .text:0xdaa98, 0x6fc38 bytes
    //
    _o17(sdk::unknown_ptr) a_vrfp_load_and_initialize_provider;
    
    // [AVrfpPageHeapPreviousStopData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1523c0, 0x67960 bytes
    // ntdll.dll .data:0x1696a0, 0x6fc38 bytes
    // ntdll.dll .data:0x183560, 0x74648 bytes
    // ntdll.dll .data:0x16a6a0, 0x6fc38 bytes
    //
    _o18(sdk::unknown_ptr) a_vrfp_page_heap_previous_stop_data;
    
    // [AVrfpPageHeapStopData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152ce0, 0x67960 bytes
    // ntdll.dll .data:0x169fc0, 0x6fc38 bytes
    // ntdll.dll .data:0x183e80, 0x74648 bytes
    // ntdll.dll .data:0x16afc0, 0x6fc38 bytes
    //
    _o19(sdk::unknown_ptr) a_vrfp_page_heap_stop_data;
    
    // [AVrfpParseVerifierDllsString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd8504, 0x67960 bytes
    // ntdll.dll .text:0xdae50, 0x6fc38 bytes
    // ntdll.dll .text:0xe5420, 0x74648 bytes
    // ntdll.dll .text:0xdadc0, 0x6fc38 bytes
    //
    _o20(sdk::unknown_ptr) a_vrfp_parse_verifier_dlls_string;
    
    // [AVrfpQueryProcessVerifierOptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd869c, 0x67960 bytes
    // ntdll.dll .text:0xdafe4, 0x6fc38 bytes
    // ntdll.dll .text:0xe55b4, 0x74648 bytes
    // ntdll.dll .text:0xdaf54, 0x6fc38 bytes
    //
    _o21(sdk::unknown_ptr) a_vrfp_query_process_verifier_options;
    
    // [AVrfpSetProcessVerifierOptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd8768, 0x67960 bytes
    // ntdll.dll .text:0xdb0ac, 0x6fc38 bytes
    // ntdll.dll .text:0xe5690, 0x74648 bytes
    // ntdll.dll .text:0xdb01c, 0x6fc38 bytes
    //
    _o22(sdk::unknown_ptr) a_vrfp_set_process_verifier_options;
    
    // [AVrfpSnapAlreadyLoadedDlls]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd87c0, 0x67960 bytes
    // ntdll.dll .text:0xdb104, 0x6fc38 bytes
    // ntdll.dll .text:0xe56f4, 0x74648 bytes
    // ntdll.dll .text:0xdb074, 0x6fc38 bytes
    //
    _o23(sdk::unknown_ptr) a_vrfp_snap_already_loaded_dlls;
    
    // [AVrfpSnapDllImports]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd884c, 0x67960 bytes
    // ntdll.dll .text:0xdb190, 0x6fc38 bytes
    // ntdll.dll .text:0xe5780, 0x74648 bytes
    // ntdll.dll .text:0xdb100, 0x6fc38 bytes
    //
    _o24(sdk::unknown_ptr) a_vrfp_snap_dll_imports;
    
    // [AVrfpVerifierDllsString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1521c0, 0x67960 bytes
    // ntdll.dll .data:0x1694a0, 0x6fc38 bytes
    // ntdll.dll .data:0x183360, 0x74648 bytes
    // ntdll.dll .data:0x16a4a0, 0x6fc38 bytes
    //
    _o25(sdk::unknown_ptr) a_vrfp_verifier_dlls_string;
    
    // [AVrfpVerifierFlags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152d08, 0x67960 bytes
    // ntdll.dll .data:0x169fe8, 0x6fc38 bytes
    // ntdll.dll .data:0x183ea8, 0x74648 bytes
    // ntdll.dll .data:0x16afe8, 0x6fc38 bytes
    //
    _o26(sdk::unknown_ptr) a_vrfp_verifier_flags;
    
    // [AVrfpVerifierLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152400, 0x67960 bytes
    // ntdll.dll .data:0x1696e0, 0x6fc38 bytes
    // ntdll.dll .data:0x1835a0, 0x74648 bytes
    // ntdll.dll .data:0x16a6e0, 0x6fc38 bytes
    //
    _o27(sdk::unknown_ptr) a_vrfp_verifier_lock;
    
    // [AVrfpVerifierProvidersList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152430, 0x67960 bytes
    // ntdll.dll .data:0x169710, 0x6fc38 bytes
    // ntdll.dll .data:0x1835d0, 0x74648 bytes
    // ntdll.dll .data:0x16a710, 0x6fc38 bytes
    //
    _o28(sdk::unknown_ptr) a_vrfp_verifier_providers_list;
    
    // [AVrfpVerifierStopInitialize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd8a40, 0x67960 bytes
    // ntdll.dll .text:0xdb390, 0x6fc38 bytes
    // ntdll.dll .text:0xe5978, 0x74648 bytes
    // ntdll.dll .text:0xdb300, 0x6fc38 bytes
    //
    _o29(sdk::unknown_ptr) a_vrfp_verifier_stop_initialize;
    
    // [AVrfpVerifierStopMessageFunction]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152cc8, 0x67960 bytes
    // ntdll.dll .data:0x169fa8, 0x6fc38 bytes
    // ntdll.dll .data:0x183e68, 0x74648 bytes
    // ntdll.dll .data:0x16afa8, 0x6fc38 bytes
    //
    _o30(sdk::unknown_ptr) a_vrfp_verifier_stop_message_function;
    
    // [abs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x98570, 0x67960 bytes
    // ntdll.dll .text:0x8d300, 0x6fc38 bytes
    // ntdll.dll .text:0x90d20, 0x74648 bytes
    // ntdll.dll .text:0x8d4a0, 0x6fc38 bytes
    //
    _o31(sdk::unknown_ptr) abs;
    
    // [AppModelGenericLibraryLoadFailureNoTermination]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d3e0, 0x67960 bytes
    // ntdll.dll .rdata:0x1304a8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14ba28, 0x74648 bytes
    // ntdll.dll .rdata:0x1307a8, 0x6fc38 bytes
    //
    _o32(sdk::unknown_ptr) app_model_generic_library_load_failure_no_termination;
    
    // [AppModelLibraryLoadFailureApplicationBinary]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d420, 0x67960 bytes
    // ntdll.dll .rdata:0x1304e8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14ba68, 0x74648 bytes
    // ntdll.dll .rdata:0x1307e8, 0x6fc38 bytes
    //
    _o33(sdk::unknown_ptr) app_model_library_load_failure_application_binary;
    
    // [AppModelLibraryLoadFailureNgenBinary]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d390, 0x67960 bytes
    // ntdll.dll .rdata:0x130458, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14b9e8, 0x74648 bytes
    // ntdll.dll .rdata:0x130758, 0x6fc38 bytes
    //
    _o34(sdk::unknown_ptr) app_model_library_load_failure_ngen_binary;
    
    // [AppModelLibraryLoadFailureSystemBinary]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d3b0, 0x67960 bytes
    // ntdll.dll .rdata:0x130478, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14ba08, 0x74648 bytes
    // ntdll.dll .rdata:0x130778, 0x6fc38 bytes
    //
    _o35(sdk::unknown_ptr) app_model_library_load_failure_system_binary;
    
    // [AppModelRuntimeProviderId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d450, 0x67960 bytes
    // ntdll.dll .rdata:0x130518, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14ba98, 0x74648 bytes
    // ntdll.dll .rdata:0x130818, 0x6fc38 bytes
    //
    _o36(sdk::unknown_ptr) app_model_runtime_provider_id;
    
    // [ARRAY_FITS]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdc070, 0x67960 bytes
    // ntdll.dll .text:0xdf930, 0x6fc38 bytes
    // ntdll.dll .text:0xea180, 0x74648 bytes
    // ntdll.dll .text:0xdf8a0, 0x6fc38 bytes
    //
    _o37(sdk::unknown_ptr) array_fits;
    
    // [atan]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x98580, 0x67960 bytes
    // ntdll.dll .text:0x8d310, 0x6fc38 bytes
    // ntdll.dll .text:0x90d30, 0x74648 bytes
    // ntdll.dll .text:0x8d4b0, 0x6fc38 bytes
    //
    _o38(sdk::unknown_ptr) atan;
    
    // [atan2]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x987f0, 0x67960 bytes
    // ntdll.dll .text:0x8d570, 0x6fc38 bytes
    // ntdll.dll .text:0x90f90, 0x74648 bytes
    // ntdll.dll .text:0x8d710, 0x6fc38 bytes
    //
    _o39(sdk::unknown_ptr) atan2;
    
    // [AvrfMiniLoadDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd8af4, 0x67960 bytes
    // ntdll.dll .text:0xdb450, 0x6fc38 bytes
    // ntdll.dll .text:0xe5a38, 0x74648 bytes
    // ntdll.dll .text:0xdb3c0, 0x6fc38 bytes
    //
    _o40(sdk::unknown_ptr) avrf_mini_load_dll;
    
    // [AvrfpAPILookupCallbackName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10a3d0, 0x67960 bytes
    // ntdll.dll .rdata:0x11d4a8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x132748, 0x74648 bytes
    // ntdll.dll .rdata:0x11d4c8, 0x6fc38 bytes
    //
    _o41(sdk::unknown_ptr) avrfp_api_lookup_callback_name;
    
    // [AvrfpAPILookupCallbackRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164260, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f2a0, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992b8, 0x74648 bytes
    // ntdll.dll .mrdata:0x1802a0, 0x6fc38 bytes
    //
    _o42(sdk::unknown_ptr) avrfp_api_lookup_callback_routine;
    
    // [AvrfpAPILookupCallbacksEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164258, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f298, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1992b0, 0x74648 bytes
    // ntdll.dll .mrdata:0x180298, 0x6fc38 bytes
    //
    _o43(sdk::unknown_ptr) avrfp_api_lookup_callbacks_enabled;
    
    // [AvrfpLoaderEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152440, 0x67960 bytes
    // ntdll.dll .data:0x169720, 0x6fc38 bytes
    // ntdll.dll .data:0x1835e0, 0x74648 bytes
    // ntdll.dll .data:0x16a720, 0x6fc38 bytes
    //
    _o44(sdk::unknown_ptr) avrfp_loader_entry;
    
    // [CentennialIssueTracker_InitializedState]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154130, 0x67960 bytes
    // ntdll.dll .data:0x16b248, 0x6fc38 bytes
    // ntdll.dll .data:0x184d58, 0x74648 bytes
    // ntdll.dll .data:0x16c248, 0x6fc38 bytes
    //
    _o45(sdk::unknown_ptr) centennial_issue_tracker_initialized_state;
    
    // [ChkSum]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xec2d8, 0x67960 bytes
    // ntdll.dll .text:0xf5318, 0x6fc38 bytes
    // ntdll.dll .text:0x10143c, 0x74648 bytes
    // ntdll.dll .text:0xf52c8, 0x6fc38 bytes
    //
    _o46(sdk::unknown_ptr) chk_sum;
    
    // [CompatCachepLookupCdb]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x78510, 0x67960 bytes
    // ntdll.dll .text:0x3c758, 0x6fc38 bytes
    // ntdll.dll .text:0x73bcc, 0x74648 bytes
    // ntdll.dll .text:0x3c758, 0x6fc38 bytes
    //
    _o47(sdk::function<int32_t(const wchar_t*, uint32_t)>*) compat_cachep_lookup_cdb;
    
    // [ComponentOnDemand]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d3c0, 0x67960 bytes
    // ntdll.dll .rdata:0x130488, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14ba18, 0x74648 bytes
    // ntdll.dll .rdata:0x130788, 0x6fc38 bytes
    //
    _o48(sdk::unknown_ptr) component_on_demand;
    
    // [_control87]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9e290, 0x67960 bytes
    // ntdll.dll .text:0x92d20, 0x6fc38 bytes
    // ntdll.dll .text:0x9698c, 0x74648 bytes
    // ntdll.dll .text:0x92ec0, 0x6fc38 bytes
    //
    _o49(sdk::unknown_ptr) control87;
    
    // [_controlfp]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9e528, 0x67960 bytes
    // ntdll.dll .text:0x92fe4, 0x6fc38 bytes
    // ntdll.dll .text:0x96c2c, 0x74648 bytes
    // ntdll.dll .text:0x93184, 0x6fc38 bytes
    //
    _o50(sdk::unknown_ptr) controlfp;
    
    // [cos]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x991f0, 0x67960 bytes
    // ntdll.dll .text:0x8dfe0, 0x6fc38 bytes
    // ntdll.dll .text:0x91a20, 0x74648 bytes
    // ntdll.dll .text:0x8e180, 0x6fc38 bytes
    //
    _o51(sdk::unknown_ptr) cos;
    
    // [CurDirDllLoadFailureError]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d430, 0x67960 bytes
    // ntdll.dll .rdata:0x1304f8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14ba78, 0x74648 bytes
    // ntdll.dll .rdata:0x1307f8, 0x6fc38 bytes
    //
    _o52(sdk::unknown_ptr) cur_dir_dll_load_failure_error;
    
    // [CurDirDllLoadFailureWarning]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d480, 0x67960 bytes
    // ntdll.dll .rdata:0x130548, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14bac8, 0x74648 bytes
    // ntdll.dll .rdata:0x130848, 0x6fc38 bytes
    //
    _o53(sdk::unknown_ptr) cur_dir_dll_load_failure_warning;
    
    // [_d_inf]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x111fd0, 0x67960 bytes
    // ntdll.dll .rdata:0x1244d0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x13a6d0, 0x74648 bytes
    // ntdll.dll .rdata:0x1247d0, 0x6fc38 bytes
    //
    _o54(sdk::unknown_ptr) d_inf;
    
    // [_d_max]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x111fd8, 0x67960 bytes
    // ntdll.dll .rdata:0x1244d8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x13a6d8, 0x74648 bytes
    // ntdll.dll .rdata:0x1247d8, 0x6fc38 bytes
    //
    _o55(sdk::unknown_ptr) d_max;
    
    // [DataLoadLockCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152130, 0x67960 bytes
    // ntdll.dll .data:0x169448, 0x6fc38 bytes
    // ntdll.dll .data:0x183308, 0x74648 bytes
    // ntdll.dll .data:0x16a448, 0x6fc38 bytes
    //
    _o56(sdk::unknown_ptr) data_load_lock_count;
    
    // [_decomp]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9f544, 0x67960 bytes
    // ntdll.dll .text:0x93f90, 0x6fc38 bytes
    // ntdll.dll .text:0x97c2c, 0x74648 bytes
    // ntdll.dll .text:0x94130, 0x6fc38 bytes
    //
    _o57(sdk::unknown_ptr) decomp;
    
    // [DeprecatedDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d410, 0x67960 bytes
    // ntdll.dll .rdata:0x1304d8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14ba58, 0x74648 bytes
    // ntdll.dll .rdata:0x1307d8, 0x6fc38 bytes
    //
    _o58(sdk::unknown_ptr) deprecated_dll;
    
    // [DWORDToBigEndian]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5b2a0, 0x67960 bytes
    // ntdll.dll .text:0x5c144, 0x6fc38 bytes
    // ntdll.dll .text:0xee7c, 0x74648 bytes
    // ntdll.dll .text:0x5c144, 0x6fc38 bytes
    //
    _o59(sdk::unknown_ptr) dword_to_big_endian;
    
    // [_errcode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9ed74, 0x67960 bytes
    // ntdll.dll .text:0x937b4, 0x6fc38 bytes
    // ntdll.dll .text:0x97464, 0x74648 bytes
    // ntdll.dll .text:0x93954, 0x6fc38 bytes
    //
    _o60(sdk::unknown_ptr) errcode;
    
    // [_errno]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87a60, 0x67960 bytes
    // ntdll.dll .text:0x84290, 0x6fc38 bytes
    // ntdll.dll .text:0x885b0, 0x74648 bytes
    // ntdll.dll .text:0x84430, 0x6fc38 bytes
    //
    _o61(sdk::function<int32_t*()>*) errno;
    
    // [EvtIntReportAuthzEventAndSourceAsync]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfee30, 0x67960 bytes
    // ntdll.dll .text:0x111010, 0x6fc38 bytes
    // ntdll.dll .text:0x124eb0, 0x74648 bytes
    // ntdll.dll .text:0x1111b0, 0x6fc38 bytes
    //
    _o62(sdk::unknown_ptr) evt_int_report_authz_event_and_source_async;
    
    // [EvtIntReportEventAndSourceAsync]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5fb80, 0x67960 bytes
    // ntdll.dll .text:0x48d90, 0x6fc38 bytes
    // ntdll.dll .text:0x53280, 0x74648 bytes
    // ntdll.dll .text:0x48d90, 0x6fc38 bytes
    //
    _o63(sdk::unknown_ptr) evt_int_report_event_and_source_async;
    
    // [EvtIntReportEventWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5fbec, 0x67960 bytes
    // ntdll.dll .text:0x48e00, 0x6fc38 bytes
    // ntdll.dll .text:0x532f0, 0x74648 bytes
    // ntdll.dll .text:0x48e00, 0x6fc38 bytes
    //
    _o64(sdk::unknown_ptr) evt_int_report_event_worker;
    
    // [_except1]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9edc0, 0x67960 bytes
    // ntdll.dll .text:0x93800, 0x6fc38 bytes
    // ntdll.dll .text:0x974b0, 0x74648 bytes
    // ntdll.dll .text:0x939a0, 0x6fc38 bytes
    //
    _o65(sdk::unknown_ptr) except1;
    
    // [__except_validate_context_record]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9ca48, 0x67960 bytes
    // ntdll.dll .text:0x91498, 0x6fc38 bytes
    // ntdll.dll .text:0x950c8, 0x74648 bytes
    // ntdll.dll .text:0x91638, 0x6fc38 bytes
    //
    _o66(sdk::unknown_ptr) except_validate_context_record;
    
    // [__except_validate_jump_buffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9ca88, 0x67960 bytes
    // ntdll.dll .text:0x914d8, 0x6fc38 bytes
    // ntdll.dll .text:0x95108, 0x74648 bytes
    // ntdll.dll .text:0x91678, 0x6fc38 bytes
    //
    _o67(sdk::unknown_ptr) except_validate_jump_buffer;
    
    // [fabs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x99b00, 0x67960 bytes
    // ntdll.dll .text:0x8e8c0, 0x6fc38 bytes
    // ntdll.dll .text:0x92310, 0x74648 bytes
    // ntdll.dll .text:0x8ea60, 0x6fc38 bytes
    //
    _o68(sdk::unknown_ptr) fabs;
    
    // [FastPebLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152ec0, 0x67960 bytes
    // ntdll.dll .data:0x16a0e0, 0x6fc38 bytes
    // ntdll.dll .data:0x183fa0, 0x74648 bytes
    // ntdll.dll .data:0x16b0e0, 0x6fc38 bytes
    //
    _o69(sdk::unknown_ptr) fast_peb_lock;
    
    // [FatalUserCallbackException]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d440, 0x67960 bytes
    // ntdll.dll .rdata:0x130508, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14ba88, 0x74648 bytes
    // ntdll.dll .rdata:0x130808, 0x6fc38 bytes
    //
    _o70(sdk::unknown_ptr) fatal_user_callback_exception;
    
    // [_filbuf]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa0744, 0x67960 bytes
    // ntdll.dll .text:0x95170, 0x6fc38 bytes
    // ntdll.dll .text:0x98e28, 0x74648 bytes
    // ntdll.dll .text:0x95310, 0x6fc38 bytes
    //
    _o71(sdk::unknown_ptr) filbuf;
    
    // [FindDirectoryEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14334, 0x67960 bytes
    // ntdll.dll .text:0x45184, 0x6fc38 bytes
    // ntdll.dll .text:0x6c0b8, 0x74648 bytes
    // ntdll.dll .text:0x45184, 0x6fc38 bytes
    //
    _o72(sdk::unknown_ptr) find_directory_entry;
    
    // [_fltused]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14da10, 0x67960 bytes
    // ntdll.dll .data:0x164ac0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x138788, 0x74648 bytes
    // ntdll.dll .data:0x165ac0, 0x6fc38 bytes
    //
    _o73(sdk::unknown_ptr) fltused;
    
    // [gBaseAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154380, 0x67960 bytes
    // ntdll.dll .data:0x16b538, 0x6fc38 bytes
    // ntdll.dll .data:0x1850d0, 0x74648 bytes
    // ntdll.dll .data:0x16c518, 0x6fc38 bytes
    //
    _o74(sdk::unknown_ptr) g_base_address;
    
    // [gCustomCultureRegKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x155408, 0x67960 bytes
    // ntdll.dll .data:0x16b680, 0x6fc38 bytes
    // ntdll.dll .data:0x185920, 0x74648 bytes
    // ntdll.dll .data:0x16c670, 0x6fc38 bytes
    //
    _o75(sdk::unknown_ptr) g_custom_culture_reg_key;
    
    // [g_disableEscalation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x15450c, 0x67960 bytes
    // ntdll.dll .data:0x16b788, 0x6fc38 bytes
    // ntdll.dll .data:0x185330, 0x74648 bytes
    // ntdll.dll .data:0x16c788, 0x6fc38 bytes
    //
    _o76(sdk::unknown_ptr) g_disable_escalation;
    
    // [g_dwLastErrorToBreakOn]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x155400, 0x67960 bytes
    // ntdll.dll .data:0x16bb84, 0x6fc38 bytes
    // ntdll.dll .data:0x18591c, 0x74648 bytes
    // ntdll.dll .data:0x16cb84, 0x6fc38 bytes
    //
    _o77(sdk::unknown_ptr) g_dw_last_error_to_break_on;
    
    // [g_hUserDiagnosticProvider]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151a80, 0x67960 bytes
    // ntdll.dll .data:0x168c40, 0x6fc38 bytes
    // ntdll.dll .data:0x182ee0, 0x74648 bytes
    // ntdll.dll .data:0x169c40, 0x6fc38 bytes
    //
    _o78(sdk::unknown_ptr) g_h_user_diagnostic_provider;
    
    // [g_isErrorOriginProviderEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544aa, 0x67960 bytes
    // ntdll.dll .data:0x16b71c, 0x6fc38 bytes
    // ntdll.dll .data:0x185264, 0x74648 bytes
    // ntdll.dll .data:0x16c71c, 0x6fc38 bytes
    //
    _o79(sdk::unknown_ptr) g_is_error_origin_provider_enabled;
    
    // [g_LdrBreakOnLdrpInitializeProcessFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153338, 0x67960 bytes
    // ntdll.dll .data:0x16a490, 0x6fc38 bytes
    // ntdll.dll .data:0x184360, 0x74648 bytes
    // ntdll.dll .data:0x16b490, 0x6fc38 bytes
    //
    _o80(sdk::unknown_ptr) g_ldr_break_on_ldrp_initialize_process_failure;
    
    // [gLocaleDataRegKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x155410, 0x67960 bytes
    // ntdll.dll .data:0x16bb88, 0x6fc38 bytes
    // ntdll.dll .data:0x185928, 0x74648 bytes
    // ntdll.dll .data:0x16cb88, 0x6fc38 bytes
    //
    _o81(sdk::unknown_ptr) g_locale_data_reg_key;
    
    // [gMUICacheType]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152168, 0x67960 bytes
    // ntdll.dll .data:0x16944c, 0x6fc38 bytes
    // ntdll.dll .data:0x18330c, 0x74648 bytes
    // ntdll.dll .data:0x16a44c, 0x6fc38 bytes
    //
    _o82(sdk::unknown_ptr) g_mui_cache_type;
    
    // [g_pShimEngineModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153360, 0x67960 bytes
    // ntdll.dll .data:0x16a498, 0x6fc38 bytes
    // ntdll.dll .data:0x184368, 0x74648 bytes
    // ntdll.dll .data:0x16b498, 0x6fc38 bytes
    //
    _o83(sdk::unknown_ptr) g_p_shim_engine_module;
    
    // [g_pShimmedModuleList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154498, 0x67960 bytes
    // ntdll.dll .data:0x16b6a0, 0x6fc38 bytes
    // ntdll.dll .data:0x185228, 0x74648 bytes
    // ntdll.dll .data:0x16c690, 0x6fc38 bytes
    //
    _o84(sdk::unknown_ptr) g_p_shimmed_module_list;
    
    // [g_pShimmedModuleListLength]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153320, 0x67960 bytes
    // ntdll.dll .data:0x16a470, 0x6fc38 bytes
    // ntdll.dll .data:0x184340, 0x74648 bytes
    // ntdll.dll .data:0x16b470, 0x6fc38 bytes
    //
    _o85(sdk::unknown_ptr) g_p_shimmed_module_list_length;
    
    // [g_pfnApphelpCheckModuleProc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x1641f8, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f208, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199210, 0x74648 bytes
    // ntdll.dll .mrdata:0x180208, 0x6fc38 bytes
    //
    _o86(sdk::unknown_ptr) g_pfn_apphelp_check_module_proc;
    
    // [g_pfnSE_DllLoaded]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164230, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f268, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199270, 0x74648 bytes
    // ntdll.dll .mrdata:0x180268, 0x6fc38 bytes
    //
    _o87(sdk::unknown_ptr) g_pfn_se_dll_loaded;
    
    // [g_pfnSE_DllUnloaded]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x1641e8, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f1f8, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199200, 0x74648 bytes
    // ntdll.dll .mrdata:0x1801f8, 0x6fc38 bytes
    //
    _o88(sdk::unknown_ptr) g_pfn_se_dll_unloaded;
    
    // [g_pfnSE_GetProcAddressForCaller]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x1641e0, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f1f0, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x1991f0, 0x74648 bytes
    // ntdll.dll .mrdata:0x1801f0, 0x6fc38 bytes
    //
    _o89(sdk::unknown_ptr) g_pfn_se_get_proc_address_for_caller;
    
    // [g_pfnSE_InitializeEngine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164210, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f240, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199248, 0x74648 bytes
    // ntdll.dll .mrdata:0x180240, 0x6fc38 bytes
    //
    _o90(sdk::unknown_ptr) g_pfn_se_initialize_engine;
    
    // [g_pfnSE_InstallAfterInit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164208, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f218, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199220, 0x74648 bytes
    // ntdll.dll .mrdata:0x180218, 0x6fc38 bytes
    //
    _o91(sdk::unknown_ptr) g_pfn_se_install_after_init;
    
    // [g_pfnSE_InstallBeforeInit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164220, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f250, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199258, 0x74648 bytes
    // ntdll.dll .mrdata:0x180250, 0x6fc38 bytes
    //
    _o92(sdk::unknown_ptr) g_pfn_se_install_before_init;
    
    // [g_pfnSE_LdrEntryRemoved]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164228, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f258, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199260, 0x74648 bytes
    // ntdll.dll .mrdata:0x180258, 0x6fc38 bytes
    //
    _o93(sdk::unknown_ptr) g_pfn_se_ldr_entry_removed;
    
    // [g_pfnSE_LdrResolveDllName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164218, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f248, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199250, 0x74648 bytes
    // ntdll.dll .mrdata:0x180248, 0x6fc38 bytes
    //
    _o94(sdk::unknown_ptr) g_pfn_se_ldr_resolve_dll_name;
    
    // [g_pfnSE_ProcessDying]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x1641f0, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f200, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199208, 0x74648 bytes
    // ntdll.dll .mrdata:0x180200, 0x6fc38 bytes
    //
    _o95(sdk::unknown_ptr) g_pfn_se_process_dying;
    
    // [g_pfnSE_ShimDllLoaded]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x164200, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f210, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199218, 0x74648 bytes
    // ntdll.dll .mrdata:0x180210, 0x6fc38 bytes
    //
    _o96(sdk::unknown_ptr) g_pfn_se_shim_dll_loaded;
    
    // [g_RegInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154000, 0x67960 bytes
    // ntdll.dll .data:0x16b1c8, 0x6fc38 bytes
    // ntdll.dll .data:0x184d20, 0x74648 bytes
    // ntdll.dll .data:0x16c1c8, 0x6fc38 bytes
    //
    _o97(sdk::unknown_ptr) g_reg_info;
    
    // [g_SbCachedModuleTable_RTL]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x150dc0, 0x67960 bytes
    // ntdll.dll .data:0x167770, 0x6fc38 bytes
    // ntdll.dll .data:0x1817d0, 0x74648 bytes
    // ntdll.dll .data:0x168770, 0x6fc38 bytes
    //
    _o98(sdk::unknown_ptr) g_sb_cached_module_table_rtl;
    
    // [g_SbModuleTable_RTL]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x1096b0, 0x67960 bytes
    // ntdll.dll .rdata:0x11c080, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1310b8, 0x74648 bytes
    // ntdll.dll .rdata:0x11c080, 0x6fc38 bytes
    //
    _o99(sdk::unknown_ptr) g_sb_module_table_rtl;
    
    // [g_SbTableEntry_HeapPaddingAndLFHSubsegmentCommitSwitch_RTL]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d650, 0x67960 bytes
    // ntdll.dll .data:0x164630, 0x6fc38 bytes
    // ntdll.dll .data:0x17e4a0, 0x74648 bytes
    // ntdll.dll .data:0x165630, 0x6fc38 bytes
    //
    _p00(sdk::unknown_ptr) g_sb_table_entry_heap_padding_and_lfh_subsegment_commit_switch_rtl;
    
    // [g_SbTableEntry_VerifyVersionInfoSwitch_RTL]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14d7a0, 0x67960 bytes
    // ntdll.dll .data:0x164780, 0x6fc38 bytes
    // ntdll.dll .data:0x17e5f0, 0x74648 bytes
    // ntdll.dll .data:0x165780, 0x6fc38 bytes
    //
    _p01(sdk::unknown_ptr) g_sb_table_entry_verify_version_info_switch_rtl;
    
    // [g_ShimsEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fc4, 0x67960 bytes
    // ntdll.dll .data:0x16b194, 0x6fc38 bytes
    // ntdll.dll .data:0x184c30, 0x74648 bytes
    // ntdll.dll .data:0x16c194, 0x6fc38 bytes
    //
    _p02(sdk::unknown_ptr) g_shims_enabled;
    
    // [g_ShimsLoading]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fc6, 0x67960 bytes
    // ntdll.dll .data:0x16b195, 0x6fc38 bytes
    // ntdll.dll .data:0x184c31, 0x74648 bytes
    // ntdll.dll .data:0x16c195, 0x6fc38 bytes
    //
    _p03(sdk::unknown_ptr) g_shims_loading;
    
    // [g_sqmSessionHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x150df8, 0x67960 bytes
    // ntdll.dll .data:0x1677b8, 0x6fc38 bytes
    // ntdll.dll .data:0x181818, 0x74648 bytes
    // ntdll.dll .data:0x1687b8, 0x6fc38 bytes
    //
    _p04(sdk::unknown_ptr) g_sqm_session_handle;
    
    // [g_SxsCurrentDeadActivationContexts]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154520, 0x67960 bytes
    // ntdll.dll .data:0x16b7c0, 0x6fc38 bytes
    // ntdll.dll .data:0x185350, 0x74648 bytes
    // ntdll.dll .data:0x16c7c0, 0x6fc38 bytes
    //
    _p05(sdk::unknown_ptr) g_sxs_current_dead_activation_contexts;
    
    // [g_SxsFreeActivationContexts]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154528, 0x67960 bytes
    // ntdll.dll .data:0x16b7c8, 0x6fc38 bytes
    // ntdll.dll .data:0x185358, 0x74648 bytes
    // ntdll.dll .data:0x16c7c8, 0x6fc38 bytes
    //
    _p06(sdk::unknown_ptr) g_sxs_free_activation_contexts;
    
    // [g_SxsKeepActivationContextsAlive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544d5, 0x67960 bytes
    // ntdll.dll .data:0x16b6c9, 0x6fc38 bytes
    // ntdll.dll .data:0x185241, 0x74648 bytes
    // ntdll.dll .data:0x16c6c9, 0x6fc38 bytes
    //
    _p07(sdk::unknown_ptr) g_sxs_keep_activation_contexts_alive;
    
    // [g_SxsLiveActivationContexts]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154538, 0x67960 bytes
    // ntdll.dll .data:0x16b7d8, 0x6fc38 bytes
    // ntdll.dll .data:0x185368, 0x74648 bytes
    // ntdll.dll .data:0x16c7d8, 0x6fc38 bytes
    //
    _p08(sdk::unknown_ptr) g_sxs_live_activation_contexts;
    
    // [g_SxsMaxDeadActivationContexts]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x150694, 0x67960 bytes
    // ntdll.dll .data:0x1677c8, 0x6fc38 bytes
    // ntdll.dll .data:0x181828, 0x74648 bytes
    // ntdll.dll .data:0x1687c8, 0x6fc38 bytes
    //
    _p09(sdk::unknown_ptr) g_sxs_max_dead_activation_contexts;
    
    // [g_SxsTrackReleaseStacks]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1544d4, 0x67960 bytes
    // ntdll.dll .data:0x16b6c8, 0x6fc38 bytes
    // ntdll.dll .data:0x185240, 0x74648 bytes
    // ntdll.dll .data:0x16c6c8, 0x6fc38 bytes
    //
    _p10(sdk::unknown_ptr) g_sxs_track_release_stacks;
    
    // [gSystemLocale]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151a78, 0x67960 bytes
    // ntdll.dll .data:0x168c38, 0x6fc38 bytes
    // ntdll.dll .data:0x182edc, 0x74648 bytes
    // ntdll.dll .data:0x169c38, 0x6fc38 bytes
    //
    _p11(sdk::unknown_ptr) g_system_locale;
    
    // [g_werEscalationData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154510, 0x67960 bytes
    // ntdll.dll .data:0x16b790, 0x6fc38 bytes
    // ntdll.dll .data:0x185338, 0x74648 bytes
    // ntdll.dll .data:0x16c790, 0x6fc38 bytes
    //
    _p12(sdk::unknown_ptr) g_wer_escalation_data;
    
    // [GetLCIDFromLangListNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1df74, 0x67960 bytes
    // ntdll.dll .text:0x6b88c, 0x6fc38 bytes
    // ntdll.dll .text:0x70804, 0x74648 bytes
    // ntdll.dll .text:0x6b9ac, 0x6fc38 bytes
    //
    _p13(sdk::unknown_ptr) get_lcid_from_lang_list_node;
    
    // [GetLCIDFromLangListNodeWithLICCheck]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1fce4, 0x67960 bytes
    // ntdll.dll .text:0x2a018, 0x6fc38 bytes
    // ntdll.dll .text:0x1ec3c, 0x74648 bytes
    // ntdll.dll .text:0x2a018, 0x6fc38 bytes
    //
    _p14(sdk::unknown_ptr) get_lcid_from_lang_list_node_with_lic_check;
    
    // [GetNameFromLangListNode]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x24e24, 0x67960 bytes
    // ntdll.dll .text:0x2cd64, 0x6fc38 bytes
    // ntdll.dll .text:0x13744, 0x74648 bytes
    // ntdll.dll .text:0x2cd64, 0x6fc38 bytes
    //
    _p15(sdk::unknown_ptr) get_name_from_lang_list_node;
    
    // [GetResourceDirectoryEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14024, 0x67960 bytes
    // ntdll.dll .text:0x44ebc, 0x6fc38 bytes
    // ntdll.dll .text:0x6c074, 0x74648 bytes
    // ntdll.dll .text:0x44ebc, 0x6fc38 bytes
    //
    _p16(sdk::unknown_ptr) get_resource_directory_entry;
    
    // [GetShipAssertBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xda270, 0x67960 bytes
    // ntdll.dll .text:0xddb54, 0x6fc38 bytes
    // ntdll.dll .text:0xe7ff4, 0x74648 bytes
    // ntdll.dll .text:0xddac4, 0x6fc38 bytes
    //
    _p17(sdk::unknown_ptr) get_ship_assert_buffer;
    
    // [_getbuf]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa0800, 0x67960 bytes
    // ntdll.dll .text:0x95234, 0x6fc38 bytes
    // ntdll.dll .text:0x98ee0, 0x74648 bytes
    // ntdll.dll .text:0x953d4, 0x6fc38 bytes
    //
    _p18(sdk::unknown_ptr) getbuf;
    
    // [_handle_exc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9eeb8, 0x67960 bytes
    // ntdll.dll .text:0x938f8, 0x6fc38 bytes
    // ntdll.dll .text:0x975a8, 0x74648 bytes
    // ntdll.dll .text:0x93a98, 0x6fc38 bytes
    //
    _p19(sdk::unknown_ptr) handle_exc;
    
    // [_handle_qnan1]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9f120, 0x67960 bytes
    // ntdll.dll .text:0x93b68, 0x6fc38 bytes
    // ntdll.dll .text:0x9780c, 0x74648 bytes
    // ntdll.dll .text:0x93d08, 0x6fc38 bytes
    //
    _p20(sdk::unknown_ptr) handle_qnan1;
    
    // [_i64toa]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x97000, 0x67960 bytes
    // ntdll.dll .text:0x8bbd0, 0x6fc38 bytes
    // ntdll.dll .text:0x8f4b0, 0x74648 bytes
    // ntdll.dll .text:0x8bd70, 0x6fc38 bytes
    //
    _p21(sdk::unknown_ptr) i64toa;
    
    // [_i64tow]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x971e0, 0x67960 bytes
    // ntdll.dll .text:0x8bd70, 0x6fc38 bytes
    // ntdll.dll .text:0x8f6c0, 0x74648 bytes
    // ntdll.dll .text:0x8bf10, 0x6fc38 bytes
    //
    _p22(sdk::unknown_ptr) i64tow;
    
    // [ImportTablepHashCanonicalLists]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdc9c8, 0x67960 bytes
    // ntdll.dll .text:0xe0308, 0x6fc38 bytes
    // ntdll.dll .text:0xeab5c, 0x74648 bytes
    // ntdll.dll .text:0xe0278, 0x6fc38 bytes
    //
    _p23(sdk::unknown_ptr) import_tablep_hash_canonical_lists;
    
    // [ImportTablepInsertFunctionSorted]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdcab0, 0x67960 bytes
    // ntdll.dll .text:0xe03f0, 0x6fc38 bytes
    // ntdll.dll .text:0xeac44, 0x74648 bytes
    // ntdll.dll .text:0xe0360, 0x6fc38 bytes
    //
    _p24(sdk::unknown_ptr) import_tablep_insert_function_sorted;
    
    // [ImportTablepInsertModuleSorted]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdcab0, 0x67960 bytes
    // ntdll.dll .text:0xe03f0, 0x6fc38 bytes
    // ntdll.dll .text:0xeacc4, 0x74648 bytes
    // ntdll.dll .text:0xe0360, 0x6fc38 bytes
    //
    _p25(sdk::unknown_ptr) import_tablep_insert_module_sorted;
    
    // [InitRegistryInfoCritSect]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154370, 0x67960 bytes
    // ntdll.dll .data:0x16b678, 0x6fc38 bytes
    // ntdll.dll .data:0x185208, 0x74648 bytes
    // ntdll.dll .data:0x16c668, 0x6fc38 bytes
    //
    _p26(sdk::unknown_ptr) init_registry_info_crit_sect;
    
    // [InitializeTEBUserLangList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x21e88, 0x67960 bytes
    // ntdll.dll .text:0x2a790, 0x6fc38 bytes
    // ntdll.dll .text:0x12c28, 0x74648 bytes
    // ntdll.dll .text:0x2a790, 0x6fc38 bytes
    //
    _p27(sdk::unknown_ptr) initialize_teb_user_lang_list;
    
    // [InitializeUserOrMachineLangList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1e300, 0x67960 bytes
    // ntdll.dll .text:0x6b914, 0x6fc38 bytes
    // ntdll.dll .text:0x70740, 0x74648 bytes
    // ntdll.dll .text:0x6ba34, 0x6fc38 bytes
    //
    _p28(sdk::unknown_ptr) initialize_user_or_machine_lang_list;
    
    // [_input_l]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9fc70, 0x67960 bytes
    // ntdll.dll .text:0x946e0, 0x6fc38 bytes
    // ntdll.dll .text:0x98390, 0x74648 bytes
    // ntdll.dll .text:0x94880, 0x6fc38 bytes
    //
    _p29(sdk::unknown_ptr) input_l;
    
    // [isalnum]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96d80, 0x67960 bytes
    // ntdll.dll .text:0x8b950, 0x6fc38 bytes
    // ntdll.dll .text:0x8f230, 0x74648 bytes
    // ntdll.dll .text:0x8baf0, 0x6fc38 bytes
    //
    _p30(sdk::unknown_ptr) isalnum;
    
    // [isalpha]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96db0, 0x67960 bytes
    // ntdll.dll .text:0x8b980, 0x6fc38 bytes
    // ntdll.dll .text:0x8f260, 0x74648 bytes
    // ntdll.dll .text:0x8bb20, 0x6fc38 bytes
    //
    _p31(sdk::unknown_ptr) isalpha;
    
    // [iscntrl]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96de0, 0x67960 bytes
    // ntdll.dll .text:0x8b9b0, 0x6fc38 bytes
    // ntdll.dll .text:0x8f290, 0x74648 bytes
    // ntdll.dll .text:0x8bb50, 0x6fc38 bytes
    //
    _p32(sdk::unknown_ptr) iscntrl;
    
    // [__iscsym]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96ce0, 0x67960 bytes
    // ntdll.dll .text:0x8b8c0, 0x6fc38 bytes
    // ntdll.dll .text:0x8f190, 0x74648 bytes
    // ntdll.dll .text:0x8ba60, 0x6fc38 bytes
    //
    _p33(sdk::unknown_ptr) iscsym;
    
    // [__iscsymf]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96d30, 0x67960 bytes
    // ntdll.dll .text:0x8b900, 0x6fc38 bytes
    // ntdll.dll .text:0x8f1d0, 0x74648 bytes
    // ntdll.dll .text:0x8baa0, 0x6fc38 bytes
    //
    _p34(sdk::unknown_ptr) iscsymf;
    
    // [isgraph]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96e40, 0x67960 bytes
    // ntdll.dll .text:0x8ba10, 0x6fc38 bytes
    // ntdll.dll .text:0x8f2f0, 0x74648 bytes
    // ntdll.dll .text:0x8bbb0, 0x6fc38 bytes
    //
    _p35(sdk::unknown_ptr) isgraph;
    
    // [isleadbyte]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x99cf8, 0x67960 bytes
    // ntdll.dll .text:0x8eaa8, 0x6fc38 bytes
    // ntdll.dll .text:0x92508, 0x74648 bytes
    // ntdll.dll .text:0x8ec48, 0x6fc38 bytes
    //
    _p36(sdk::unknown_ptr) isleadbyte;
    
    // [ispunct]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96ed0, 0x67960 bytes
    // ntdll.dll .text:0x8baa0, 0x6fc38 bytes
    // ntdll.dll .text:0x8f380, 0x74648 bytes
    // ntdll.dll .text:0x8bc40, 0x6fc38 bytes
    //
    _p37(sdk::unknown_ptr) ispunct;
    
    // [iswascii]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x99d40, 0x67960 bytes
    // ntdll.dll .text:0x8eaf0, 0x6fc38 bytes
    // ntdll.dll .text:0x92570, 0x74648 bytes
    // ntdll.dll .text:0x8ec90, 0x6fc38 bytes
    //
    _p38(sdk::unknown_ptr) iswascii;
    
    // [iswgraph]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x99d70, 0x67960 bytes
    // ntdll.dll .text:0x8eb20, 0x6fc38 bytes
    // ntdll.dll .text:0x925b0, 0x74648 bytes
    // ntdll.dll .text:0x8ecc0, 0x6fc38 bytes
    //
    _p39(sdk::unknown_ptr) iswgraph;
    
    // [iswlower]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x99d80, 0x67960 bytes
    // ntdll.dll .text:0x8eb30, 0x6fc38 bytes
    // ntdll.dll .text:0x925d0, 0x74648 bytes
    // ntdll.dll .text:0x8ecd0, 0x6fc38 bytes
    //
    _p40(sdk::unknown_ptr) iswlower;
    
    // [iswprint]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x99d90, 0x67960 bytes
    // ntdll.dll .text:0x8eb40, 0x6fc38 bytes
    // ntdll.dll .text:0x925f0, 0x74648 bytes
    // ntdll.dll .text:0x8ece0, 0x6fc38 bytes
    //
    _p41(sdk::unknown_ptr) iswprint;
    
    // [iswxdigit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x99db0, 0x67960 bytes
    // ntdll.dll .text:0x8eb60, 0x6fc38 bytes
    // ntdll.dll .text:0x92630, 0x74648 bytes
    // ntdll.dll .text:0x8ed00, 0x6fc38 bytes
    //
    _p42(sdk::unknown_ptr) iswxdigit;
    
    // [Kernel32ThreadInitThunkFunction]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152ef0, 0x67960 bytes
    // ntdll.dll .data:0x169ff0, 0x6fc38 bytes
    // ntdll.dll .data:0x183eb0, 0x74648 bytes
    // ntdll.dll .data:0x16aff0, 0x6fc38 bytes
    //
    _p43(sdk::unknown_ptr) kernel32_thread_init_thunk_function;
    
    // [labs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x98570, 0x67960 bytes
    // ntdll.dll .text:0x8d300, 0x6fc38 bytes
    // ntdll.dll .text:0x926a0, 0x74648 bytes
    // ntdll.dll .text:0x8d4a0, 0x6fc38 bytes
    //
    _p44(sdk::unknown_ptr) labs;
    
    // [_lfind]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x973b0, 0x67960 bytes
    // ntdll.dll .text:0x8bf50, 0x6fc38 bytes
    // ntdll.dll .text:0x8f900, 0x74648 bytes
    // ntdll.dll .text:0x8c0f0, 0x6fc38 bytes
    //
    _p45(sdk::unknown_ptr) lfind;
    
    // [LoadAsDataCrits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1520e0, 0x67960 bytes
    // ntdll.dll .data:0x169400, 0x6fc38 bytes
    // ntdll.dll .data:0x1832c0, 0x74648 bytes
    // ntdll.dll .data:0x16a400, 0x6fc38 bytes
    //
    _p46(sdk::unknown_ptr) load_as_data_crits;
    
    // [LoadAsDataTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152108, 0x67960 bytes
    // ntdll.dll .data:0x169428, 0x6fc38 bytes
    // ntdll.dll .data:0x1832e8, 0x74648 bytes
    // ntdll.dll .data:0x16a428, 0x6fc38 bytes
    //
    _p47(sdk::unknown_ptr) load_as_data_table;
    
    // [LoadAsDataTableBlockCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1520c0, 0x67960 bytes
    // ntdll.dll .data:0x1693e8, 0x6fc38 bytes
    // ntdll.dll .data:0x1832b8, 0x74648 bytes
    // ntdll.dll .data:0x16a3e8, 0x6fc38 bytes
    //
    _p48(sdk::unknown_ptr) load_as_data_table_block_count;
    
    // [LoadAsDataTableCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x152114, 0x67960 bytes
    // ntdll.dll .data:0x169430, 0x6fc38 bytes
    // ntdll.dll .data:0x1832f0, 0x74648 bytes
    // ntdll.dll .data:0x16a430, 0x6fc38 bytes
    //
    _p49(sdk::unknown_ptr) load_as_data_table_count;
    
    // [LoadFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10d2a0, 0x67960 bytes
    // ntdll.dll .rdata:0x1218b0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x135ca0, 0x74648 bytes
    // ntdll.dll .rdata:0x121bb0, 0x6fc38 bytes
    //
    _p50(sdk::unknown_ptr) load_failure;
    
    // [LoadFailureOperational]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d470, 0x67960 bytes
    // ntdll.dll .rdata:0x130538, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14bab8, 0x74648 bytes
    // ntdll.dll .rdata:0x130838, 0x6fc38 bytes
    //
    _p51(sdk::unknown_ptr) load_failure_operational;
    
    // [LoaderFatalErrorProc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d490, 0x67960 bytes
    // ntdll.dll .rdata:0x130558, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14bad8, 0x74648 bytes
    // ntdll.dll .rdata:0x130858, 0x6fc38 bytes
    //
    _p52(sdk::unknown_ptr) loader_fatal_error_proc;
    
    // [LoaderFatalErrorThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d3a0, 0x67960 bytes
    // ntdll.dll .rdata:0x130468, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14b9f8, 0x74648 bytes
    // ntdll.dll .rdata:0x130768, 0x6fc38 bytes
    //
    _p53(sdk::unknown_ptr) loader_fatal_error_thread;
    
    // [_ltoa]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x97070, 0x67960 bytes
    // ntdll.dll .text:0x8bc10, 0x6fc38 bytes
    // ntdll.dll .text:0x8f520, 0x74648 bytes
    // ntdll.dll .text:0x8bdb0, 0x6fc38 bytes
    //
    _p54(sdk::unknown_ptr) ltoa;
    
    // [_ltow]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x97250, 0x67960 bytes
    // ntdll.dll .text:0x8bdb0, 0x6fc38 bytes
    // ntdll.dll .text:0x8f730, 0x74648 bytes
    // ntdll.dll .text:0x8bf50, 0x6fc38 bytes
    //
    _p55(sdk::unknown_ptr) ltow;
    
    // [MD4Final]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfdd10, 0x67960 bytes
    // ntdll.dll .text:0x10f470, 0x6fc38 bytes
    // ntdll.dll .text:0x1230a0, 0x74648 bytes
    // ntdll.dll .text:0x10f610, 0x6fc38 bytes
    //
    _p56(sdk::unknown_ptr) md4_final;
    
    // [MD4Init]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfdde0, 0x67960 bytes
    // ntdll.dll .text:0x10f540, 0x6fc38 bytes
    // ntdll.dll .text:0x123170, 0x74648 bytes
    // ntdll.dll .text:0x10f6e0, 0x6fc38 bytes
    //
    _p57(sdk::unknown_ptr) md4_init;
    
    // [MD4Transform]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xacac0, 0x67960 bytes
    // ntdll.dll .text:0x10f56c, 0x6fc38 bytes
    // ntdll.dll .text:0x12319c, 0x74648 bytes
    // ntdll.dll .text:0x10f70c, 0x6fc38 bytes
    //
    _p58(sdk::unknown_ptr) md4_transform;
    
    // [MD4Update]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfde10, 0x67960 bytes
    // ntdll.dll .text:0x10fb00, 0x6fc38 bytes
    // ntdll.dll .text:0x123730, 0x74648 bytes
    // ntdll.dll .text:0x10fca0, 0x6fc38 bytes
    //
    _p59(sdk::unknown_ptr) md4_update;
    
    // [MD5Final]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6cc80, 0x67960 bytes
    // ntdll.dll .text:0x5e670, 0x6fc38 bytes
    // ntdll.dll .text:0x5c500, 0x74648 bytes
    // ntdll.dll .text:0x5e670, 0x6fc38 bytes
    //
    _p60(sdk::unknown_ptr) md5_final;
    
    // [MD5Init]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83830, 0x67960 bytes
    // ntdll.dll .text:0x7c400, 0x6fc38 bytes
    // ntdll.dll .text:0x7f8c0, 0x74648 bytes
    // ntdll.dll .text:0x7c5a0, 0x6fc38 bytes
    //
    _p61(sdk::unknown_ptr) md5_init;
    
    // [MD5Update]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6cd50, 0x67960 bytes
    // ntdll.dll .text:0x5e740, 0x6fc38 bytes
    // ntdll.dll .text:0x5c5d0, 0x74648 bytes
    // ntdll.dll .text:0x5e740, 0x6fc38 bytes
    //
    _p62(sdk::unknown_ptr) md5_update;
    
    // [_memccpy]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x974a0, 0x67960 bytes
    // ntdll.dll .text:0x8c030, 0x6fc38 bytes
    // ntdll.dll .text:0x8f9e0, 0x74648 bytes
    // ntdll.dll .text:0x8c1d0, 0x6fc38 bytes
    //
    _p63(sdk::unknown_ptr) memccpy;
    
    // [MS_Windows_AeSwitchBack_Provider]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10cd90, 0x67960 bytes
    // ntdll.dll .rdata:0x124560, 0x6fc38 bytes
    // ntdll.dll .rdata:0x13a760, 0x74648 bytes
    // ntdll.dll .rdata:0x124860, 0x6fc38 bytes
    //
    _p64(sdk::unknown_ptr) ms_windows_ae_switch_back_provider;
    
    // [MuiCacheSWRLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154438, 0x67960 bytes
    // ntdll.dll .data:0x16b670, 0x6fc38 bytes
    // ntdll.dll .data:0x185098, 0x74648 bytes
    // ntdll.dll .data:0x16c660, 0x6fc38 bytes
    //
    _p65(sdk::unknown_ptr) mui_cache_swr_lock;
    
    // [NtdllBaseTag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1532b0, 0x67960 bytes
    // ntdll.dll .data:0x16a530, 0x6fc38 bytes
    // ntdll.dll .data:0x1843f0, 0x74648 bytes
    // ntdll.dll .data:0x16b530, 0x6fc38 bytes
    //
    _p66(sdk::unknown_ptr) ntdll_base_tag;
    
    // [NtdllButtonWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5de0, 0x67960 bytes
    // ntdll.dll .text:0x9bae0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ea90, 0x74648 bytes
    // ntdll.dll .text:0x9bac0, 0x6fc38 bytes
    //
    _p67(sdk::unknown_ptr) ntdll_button_wnd_proc_a;
    
    // [NtdllButtonWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5df0, 0x67960 bytes
    // ntdll.dll .text:0x9baf0, 0x6fc38 bytes
    // ntdll.dll .text:0x9eaa0, 0x74648 bytes
    // ntdll.dll .text:0x9bad0, 0x6fc38 bytes
    //
    _p68(sdk::unknown_ptr) ntdll_button_wnd_proc_w;
    
    // [NtdllButtonWndProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5fe0, 0x67960 bytes
    // ntdll.dll .text:0x9bd00, 0x6fc38 bytes
    // ntdll.dll .text:0x9ecb0, 0x74648 bytes
    // ntdll.dll .text:0x9bce0, 0x6fc38 bytes
    //
    _p69(sdk::unknown_ptr) ntdll_button_wnd_proc_worker;
    
    // [NtdllComboBoxWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5e00, 0x67960 bytes
    // ntdll.dll .text:0x9bb00, 0x6fc38 bytes
    // ntdll.dll .text:0x9eab0, 0x74648 bytes
    // ntdll.dll .text:0x9bae0, 0x6fc38 bytes
    //
    _p70(sdk::unknown_ptr) ntdll_combo_box_wnd_proc_a;
    
    // [NtdllComboBoxWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5e10, 0x67960 bytes
    // ntdll.dll .text:0x9bb10, 0x6fc38 bytes
    // ntdll.dll .text:0x9eac0, 0x74648 bytes
    // ntdll.dll .text:0x9baf0, 0x6fc38 bytes
    //
    _p71(sdk::unknown_ptr) ntdll_combo_box_wnd_proc_w;
    
    // [NtdllComboBoxWndProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5ff0, 0x67960 bytes
    // ntdll.dll .text:0x9bd10, 0x6fc38 bytes
    // ntdll.dll .text:0x9ecc0, 0x74648 bytes
    // ntdll.dll .text:0x9bcf0, 0x6fc38 bytes
    //
    _p72(sdk::unknown_ptr) ntdll_combo_box_wnd_proc_worker;
    
    // [NtdllComboListBoxProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5e20, 0x67960 bytes
    // ntdll.dll .text:0x9bb20, 0x6fc38 bytes
    // ntdll.dll .text:0x9ead0, 0x74648 bytes
    // ntdll.dll .text:0x9bb00, 0x6fc38 bytes
    //
    _p73(sdk::unknown_ptr) ntdll_combo_list_box_proc_a;
    
    // [NtdllComboListBoxProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5e30, 0x67960 bytes
    // ntdll.dll .text:0x9bb30, 0x6fc38 bytes
    // ntdll.dll .text:0x9eae0, 0x74648 bytes
    // ntdll.dll .text:0x9bb10, 0x6fc38 bytes
    //
    _p74(sdk::unknown_ptr) ntdll_combo_list_box_proc_w;
    
    // [NtdllComboListBoxProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6000, 0x67960 bytes
    // ntdll.dll .text:0x9bd20, 0x6fc38 bytes
    // ntdll.dll .text:0x9ecd0, 0x74648 bytes
    // ntdll.dll .text:0x9bd00, 0x6fc38 bytes
    //
    _p75(sdk::unknown_ptr) ntdll_combo_list_box_proc_worker;
    
    // [NtdllCtfHookProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6080, 0x67960 bytes
    // ntdll.dll .text:0x9bda0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ed50, 0x74648 bytes
    // ntdll.dll .text:0x9bd80, 0x6fc38 bytes
    //
    _p76(sdk::unknown_ptr) ntdll_ctf_hook_proc_worker;
    
    // [NtdllDefWindowProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5d80, 0x67960 bytes
    // ntdll.dll .text:0x9ba80, 0x6fc38 bytes
    // ntdll.dll .text:0x9ea30, 0x74648 bytes
    // ntdll.dll .text:0x9ba60, 0x6fc38 bytes
    //
    _p77(sdk::unknown_ptr) ntdll_def_window_proc_a;
    
    // [NtdllDefWindowProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5d90, 0x67960 bytes
    // ntdll.dll .text:0x9ba90, 0x6fc38 bytes
    // ntdll.dll .text:0x9ea40, 0x74648 bytes
    // ntdll.dll .text:0x9ba70, 0x6fc38 bytes
    //
    _p78(sdk::unknown_ptr) ntdll_def_window_proc_w;
    
    // [NtdllDesktopWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5d60, 0x67960 bytes
    // ntdll.dll .text:0x9ba60, 0x6fc38 bytes
    // ntdll.dll .text:0x9ea10, 0x74648 bytes
    // ntdll.dll .text:0x9ba40, 0x6fc38 bytes
    //
    _p79(sdk::unknown_ptr) ntdll_desktop_wnd_proc_a;
    
    // [NtdllDesktopWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5d70, 0x67960 bytes
    // ntdll.dll .text:0x9ba70, 0x6fc38 bytes
    // ntdll.dll .text:0x9ea20, 0x74648 bytes
    // ntdll.dll .text:0x9ba50, 0x6fc38 bytes
    //
    _p80(sdk::unknown_ptr) ntdll_desktop_wnd_proc_w;
    
    // [NtdllDialogWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5e40, 0x67960 bytes
    // ntdll.dll .text:0x9bb40, 0x6fc38 bytes
    // ntdll.dll .text:0x9eaf0, 0x74648 bytes
    // ntdll.dll .text:0x9bb20, 0x6fc38 bytes
    //
    _p81(sdk::unknown_ptr) ntdll_dialog_wnd_proc_a;
    
    // [NtdllDialogWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5e50, 0x67960 bytes
    // ntdll.dll .text:0x9bb50, 0x6fc38 bytes
    // ntdll.dll .text:0x9eb00, 0x74648 bytes
    // ntdll.dll .text:0x9bb30, 0x6fc38 bytes
    //
    _p82(sdk::unknown_ptr) ntdll_dialog_wnd_proc_w;
    
    // [NtdllDialogWndProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6010, 0x67960 bytes
    // ntdll.dll .text:0x9bd30, 0x6fc38 bytes
    // ntdll.dll .text:0x9ece0, 0x74648 bytes
    // ntdll.dll .text:0x9bd10, 0x6fc38 bytes
    //
    _p83(sdk::unknown_ptr) ntdll_dialog_wnd_proc_worker;
    
    // [NtdllDispatchDefWindowProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5f80, 0x67960 bytes
    // ntdll.dll .text:0x9bc80, 0x6fc38 bytes
    // ntdll.dll .text:0x9ec30, 0x74648 bytes
    // ntdll.dll .text:0x9bc60, 0x6fc38 bytes
    //
    _p84(sdk::unknown_ptr) ntdll_dispatch_def_window_proc_a;
    
    // [NtdllDispatchDefWindowProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5f90, 0x67960 bytes
    // ntdll.dll .text:0x9bc90, 0x6fc38 bytes
    // ntdll.dll .text:0x9ec40, 0x74648 bytes
    // ntdll.dll .text:0x9bc70, 0x6fc38 bytes
    //
    _p85(sdk::unknown_ptr) ntdll_dispatch_def_window_proc_w;
    
    // [NtdllDispatchHook_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5f60, 0x67960 bytes
    // ntdll.dll .text:0x9bc60, 0x6fc38 bytes
    // ntdll.dll .text:0x9ec10, 0x74648 bytes
    // ntdll.dll .text:0x9bc40, 0x6fc38 bytes
    //
    _p86(sdk::unknown_ptr) ntdll_dispatch_hook_a;
    
    // [NtdllDispatchHook_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5f70, 0x67960 bytes
    // ntdll.dll .text:0x9bc70, 0x6fc38 bytes
    // ntdll.dll .text:0x9ec20, 0x74648 bytes
    // ntdll.dll .text:0x9bc50, 0x6fc38 bytes
    //
    _p87(sdk::unknown_ptr) ntdll_dispatch_hook_w;
    
    // [NtdllDispatchMessage_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5fa0, 0x67960 bytes
    // ntdll.dll .text:0x9bca0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ec50, 0x74648 bytes
    // ntdll.dll .text:0x9bc80, 0x6fc38 bytes
    //
    _p88(sdk::unknown_ptr) ntdll_dispatch_message_a;
    
    // [NtdllDispatchMessage_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5fb0, 0x67960 bytes
    // ntdll.dll .text:0x9bcb0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ec60, 0x74648 bytes
    // ntdll.dll .text:0x9bc90, 0x6fc38 bytes
    //
    _p89(sdk::unknown_ptr) ntdll_dispatch_message_w;
    
    // [NtdllEditWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5e60, 0x67960 bytes
    // ntdll.dll .text:0x9bb60, 0x6fc38 bytes
    // ntdll.dll .text:0x9eb10, 0x74648 bytes
    // ntdll.dll .text:0x9bb40, 0x6fc38 bytes
    //
    _p90(sdk::unknown_ptr) ntdll_edit_wnd_proc_a;
    
    // [NtdllEditWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5e70, 0x67960 bytes
    // ntdll.dll .text:0x9bb70, 0x6fc38 bytes
    // ntdll.dll .text:0x9eb20, 0x74648 bytes
    // ntdll.dll .text:0x9bb50, 0x6fc38 bytes
    //
    _p91(sdk::unknown_ptr) ntdll_edit_wnd_proc_w;
    
    // [NtdllEditWndProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6020, 0x67960 bytes
    // ntdll.dll .text:0x9bd40, 0x6fc38 bytes
    // ntdll.dll .text:0x9ecf0, 0x74648 bytes
    // ntdll.dll .text:0x9bd20, 0x6fc38 bytes
    //
    _p92(sdk::unknown_ptr) ntdll_edit_wnd_proc_worker;
    
    // [NtdllGhostWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5f00, 0x67960 bytes
    // ntdll.dll .text:0x9bc00, 0x6fc38 bytes
    // ntdll.dll .text:0x9ebb0, 0x74648 bytes
    // ntdll.dll .text:0x9bbe0, 0x6fc38 bytes
    //
    _p93(sdk::unknown_ptr) ntdll_ghost_wnd_proc_a;
    
    // [NtdllGhostWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5f10, 0x67960 bytes
    // ntdll.dll .text:0x9bc10, 0x6fc38 bytes
    // ntdll.dll .text:0x9ebc0, 0x74648 bytes
    // ntdll.dll .text:0x9bbf0, 0x6fc38 bytes
    //
    _p94(sdk::unknown_ptr) ntdll_ghost_wnd_proc_w;
    
    // [NtdllGhostWndProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6070, 0x67960 bytes
    // ntdll.dll .text:0x9bd90, 0x6fc38 bytes
    // ntdll.dll .text:0x9ed40, 0x74648 bytes
    // ntdll.dll .text:0x9bd70, 0x6fc38 bytes
    //
    _p95(sdk::unknown_ptr) ntdll_ghost_wnd_proc_worker;
    
    // [NtdllHkINLPCWPRETSTRUCT_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5f40, 0x67960 bytes
    // ntdll.dll .text:0x9bc40, 0x6fc38 bytes
    // ntdll.dll .text:0x9ebf0, 0x74648 bytes
    // ntdll.dll .text:0x9bc20, 0x6fc38 bytes
    //
    _p96(sdk::unknown_ptr) ntdll_hk_inlpcwpretstruct_a;
    
    // [NtdllHkINLPCWPRETSTRUCT_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5f50, 0x67960 bytes
    // ntdll.dll .text:0x9bc50, 0x6fc38 bytes
    // ntdll.dll .text:0x9ec00, 0x74648 bytes
    // ntdll.dll .text:0x9bc30, 0x6fc38 bytes
    //
    _p97(sdk::unknown_ptr) ntdll_hk_inlpcwpretstruct_w;
    
    // [NtdllHkINLPCWPSTRUCT_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5f20, 0x67960 bytes
    // ntdll.dll .text:0x9bc20, 0x6fc38 bytes
    // ntdll.dll .text:0x9ebd0, 0x74648 bytes
    // ntdll.dll .text:0x9bc00, 0x6fc38 bytes
    //
    _p98(sdk::unknown_ptr) ntdll_hk_inlpcwpstruct_a;
    
    // [NtdllHkINLPCWPSTRUCT_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5f30, 0x67960 bytes
    // ntdll.dll .text:0x9bc30, 0x6fc38 bytes
    // ntdll.dll .text:0x9ebe0, 0x74648 bytes
    // ntdll.dll .text:0x9bc10, 0x6fc38 bytes
    //
    _p99(sdk::unknown_ptr) ntdll_hk_inlpcwpstruct_w;
    
    // [NtdllImeWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5ee0, 0x67960 bytes
    // ntdll.dll .text:0x9bbe0, 0x6fc38 bytes
    // ntdll.dll .text:0x9eb90, 0x74648 bytes
    // ntdll.dll .text:0x9bbc0, 0x6fc38 bytes
    //
    _q00(sdk::unknown_ptr) ntdll_ime_wnd_proc_a;
    
    // [NtdllImeWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5ef0, 0x67960 bytes
    // ntdll.dll .text:0x9bbf0, 0x6fc38 bytes
    // ntdll.dll .text:0x9eba0, 0x74648 bytes
    // ntdll.dll .text:0x9bbd0, 0x6fc38 bytes
    //
    _q01(sdk::unknown_ptr) ntdll_ime_wnd_proc_w;
    
    // [NtdllImeWndProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6060, 0x67960 bytes
    // ntdll.dll .text:0x9bd80, 0x6fc38 bytes
    // ntdll.dll .text:0x9ed30, 0x74648 bytes
    // ntdll.dll .text:0x9bd60, 0x6fc38 bytes
    //
    _q02(sdk::unknown_ptr) ntdll_ime_wnd_proc_worker;
    
    // [NtdllListBoxWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5e80, 0x67960 bytes
    // ntdll.dll .text:0x9bb80, 0x6fc38 bytes
    // ntdll.dll .text:0x9eb30, 0x74648 bytes
    // ntdll.dll .text:0x9bb60, 0x6fc38 bytes
    //
    _q03(sdk::unknown_ptr) ntdll_list_box_wnd_proc_a;
    
    // [NtdllListBoxWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5e90, 0x67960 bytes
    // ntdll.dll .text:0x9bb90, 0x6fc38 bytes
    // ntdll.dll .text:0x9eb40, 0x74648 bytes
    // ntdll.dll .text:0x9bb70, 0x6fc38 bytes
    //
    _q04(sdk::unknown_ptr) ntdll_list_box_wnd_proc_w;
    
    // [NtdllListBoxWndProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6030, 0x67960 bytes
    // ntdll.dll .text:0x9bd50, 0x6fc38 bytes
    // ntdll.dll .text:0x9ed00, 0x74648 bytes
    // ntdll.dll .text:0x9bd30, 0x6fc38 bytes
    //
    _q05(sdk::unknown_ptr) ntdll_list_box_wnd_proc_worker;
    
    // [NtdllMDIActivateDlgProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5fc0, 0x67960 bytes
    // ntdll.dll .text:0x9bcc0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ec70, 0x74648 bytes
    // ntdll.dll .text:0x9bca0, 0x6fc38 bytes
    //
    _q06(sdk::unknown_ptr) ntdll_mdi_activate_dlg_proc_a;
    
    // [NtdllMDIActivateDlgProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5fd0, 0x67960 bytes
    // ntdll.dll .text:0x9bcd0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ec80, 0x74648 bytes
    // ntdll.dll .text:0x9bcb0, 0x6fc38 bytes
    //
    _q07(sdk::unknown_ptr) ntdll_mdi_activate_dlg_proc_w;
    
    // [NtdllMDIClientWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5ea0, 0x67960 bytes
    // ntdll.dll .text:0x9bba0, 0x6fc38 bytes
    // ntdll.dll .text:0x9eb50, 0x74648 bytes
    // ntdll.dll .text:0x9bb80, 0x6fc38 bytes
    //
    _q08(sdk::unknown_ptr) ntdll_mdi_client_wnd_proc_a;
    
    // [NtdllMDIClientWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5eb0, 0x67960 bytes
    // ntdll.dll .text:0x9bbb0, 0x6fc38 bytes
    // ntdll.dll .text:0x9eb60, 0x74648 bytes
    // ntdll.dll .text:0x9bb90, 0x6fc38 bytes
    //
    _q09(sdk::unknown_ptr) ntdll_mdi_client_wnd_proc_w;
    
    // [NtdllMDIClientWndProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6040, 0x67960 bytes
    // ntdll.dll .text:0x9bd60, 0x6fc38 bytes
    // ntdll.dll .text:0x9ed10, 0x74648 bytes
    // ntdll.dll .text:0x9bd40, 0x6fc38 bytes
    //
    _q10(sdk::unknown_ptr) ntdll_mdi_client_wnd_proc_worker;
    
    // [NtdllMenuWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5d40, 0x67960 bytes
    // ntdll.dll .text:0x9ba40, 0x6fc38 bytes
    // ntdll.dll .text:0x9e9f0, 0x74648 bytes
    // ntdll.dll .text:0x9ba20, 0x6fc38 bytes
    //
    _q11(sdk::unknown_ptr) ntdll_menu_wnd_proc_a;
    
    // [NtdllMenuWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5d50, 0x67960 bytes
    // ntdll.dll .text:0x9ba50, 0x6fc38 bytes
    // ntdll.dll .text:0x9ea00, 0x74648 bytes
    // ntdll.dll .text:0x9ba30, 0x6fc38 bytes
    //
    _q12(sdk::unknown_ptr) ntdll_menu_wnd_proc_w;
    
    // [NtdllMessageWindowProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5da0, 0x67960 bytes
    // ntdll.dll .text:0x9baa0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ea50, 0x74648 bytes
    // ntdll.dll .text:0x9ba80, 0x6fc38 bytes
    //
    _q13(sdk::unknown_ptr) ntdll_message_window_proc_a;
    
    // [NtdllMessageWindowProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5db0, 0x67960 bytes
    // ntdll.dll .text:0x9bab0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ea60, 0x74648 bytes
    // ntdll.dll .text:0x9ba90, 0x6fc38 bytes
    //
    _q14(sdk::unknown_ptr) ntdll_message_window_proc_w;
    
    // [NtdllScrollBarWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5d00, 0x67960 bytes
    // ntdll.dll .text:0x9ba00, 0x6fc38 bytes
    // ntdll.dll .text:0x9e9b0, 0x74648 bytes
    // ntdll.dll .text:0x9b9e0, 0x6fc38 bytes
    //
    _q15(sdk::unknown_ptr) ntdll_scroll_bar_wnd_proc_a;
    
    // [NtdllScrollBarWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5d10, 0x67960 bytes
    // ntdll.dll .text:0x9ba10, 0x6fc38 bytes
    // ntdll.dll .text:0x9e9c0, 0x74648 bytes
    // ntdll.dll .text:0x9b9f0, 0x6fc38 bytes
    //
    _q16(sdk::unknown_ptr) ntdll_scroll_bar_wnd_proc_w;
    
    // [NtdllStaticWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5ec0, 0x67960 bytes
    // ntdll.dll .text:0x9bbc0, 0x6fc38 bytes
    // ntdll.dll .text:0x9eb70, 0x74648 bytes
    // ntdll.dll .text:0x9bba0, 0x6fc38 bytes
    //
    _q17(sdk::unknown_ptr) ntdll_static_wnd_proc_a;
    
    // [NtdllStaticWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5ed0, 0x67960 bytes
    // ntdll.dll .text:0x9bbd0, 0x6fc38 bytes
    // ntdll.dll .text:0x9eb80, 0x74648 bytes
    // ntdll.dll .text:0x9bbb0, 0x6fc38 bytes
    //
    _q18(sdk::unknown_ptr) ntdll_static_wnd_proc_w;
    
    // [NtdllStaticWndProcWorker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6050, 0x67960 bytes
    // ntdll.dll .text:0x9bd70, 0x6fc38 bytes
    // ntdll.dll .text:0x9ed20, 0x74648 bytes
    // ntdll.dll .text:0x9bd50, 0x6fc38 bytes
    //
    _q19(sdk::unknown_ptr) ntdll_static_wnd_proc_worker;
    
    // [NtdllSwitchWindowProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5dc0, 0x67960 bytes
    // ntdll.dll .text:0x9bac0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ea70, 0x74648 bytes
    // ntdll.dll .text:0x9baa0, 0x6fc38 bytes
    //
    _q20(sdk::unknown_ptr) ntdll_switch_window_proc_a;
    
    // [NtdllSwitchWindowProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5dd0, 0x67960 bytes
    // ntdll.dll .text:0x9bad0, 0x6fc38 bytes
    // ntdll.dll .text:0x9ea80, 0x74648 bytes
    // ntdll.dll .text:0x9bab0, 0x6fc38 bytes
    //
    _q21(sdk::unknown_ptr) ntdll_switch_window_proc_w;
    
    // [NtdllTitleWndProc_A]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5d20, 0x67960 bytes
    // ntdll.dll .text:0x9ba20, 0x6fc38 bytes
    // ntdll.dll .text:0x9e9d0, 0x74648 bytes
    // ntdll.dll .text:0x9ba00, 0x6fc38 bytes
    //
    _q22(sdk::unknown_ptr) ntdll_title_wnd_proc_a;
    
    // [NtdllTitleWndProc_W]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5d30, 0x67960 bytes
    // ntdll.dll .text:0x9ba30, 0x6fc38 bytes
    // ntdll.dll .text:0x9e9e0, 0x74648 bytes
    // ntdll.dll .text:0x9ba10, 0x6fc38 bytes
    //
    _q23(sdk::unknown_ptr) ntdll_title_wnd_proc_w;
    
    // [NtdllpAllocateStringRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2a658, 0x67960 bytes
    // ntdll.dll .text:0x13c80, 0x6fc38 bytes
    // ntdll.dll .text:0x39780, 0x74648 bytes
    // ntdll.dll .text:0x13c80, 0x6fc38 bytes
    //
    _q24(sdk::unknown_ptr) ntdllp_allocate_string_routine;
    
    // [NtdllpFreeStringRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd170, 0x67960 bytes
    // ntdll.dll .text:0x13c60, 0x6fc38 bytes
    // ntdll.dll .text:0x39760, 0x74648 bytes
    // ntdll.dll .text:0x13c60, 0x6fc38 bytes
    //
    _q25(sdk::unknown_ptr) ntdllp_free_string_routine;
    
    // [NtdllpReallocateStringRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd4024, 0x67960 bytes
    // ntdll.dll .text:0xd47a4, 0x6fc38 bytes
    // ntdll.dll .text:0xdf33c, 0x74648 bytes
    // ntdll.dll .text:0xd4718, 0x6fc38 bytes
    //
    _q26(sdk::unknown_ptr) ntdllp_reallocate_string_routine;
    
    // [pTblPtrs]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154378, 0x67960 bytes
    // ntdll.dll .data:0x16b530, 0x6fc38 bytes
    // ntdll.dll .data:0x184cd8, 0x74648 bytes
    // ntdll.dll .data:0x16c510, 0x6fc38 bytes
    //
    _q27(sdk::unknown_ptr) p_tbl_ptrs;
    
    // [PebLdr]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1533a0, 0x67960 bytes
    // ntdll.dll .data:0x16a4c0, 0x6fc38 bytes
    // ntdll.dll .data:0x184380, 0x74648 bytes
    // ntdll.dll .data:0x16b4c0, 0x6fc38 bytes
    //
    _q28(sdk::unknown_ptr) peb_ldr;
    
    // [_pow_special]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9f820, 0x67960 bytes
    // ntdll.dll .text:0x94270, 0x6fc38 bytes
    // ntdll.dll .text:0x97f10, 0x74648 bytes
    // ntdll.dll .text:0x94410, 0x6fc38 bytes
    //
    _q29(sdk::unknown_ptr) pow_special;
    
    // [PssNtCaptureSnapshot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5f470, 0x67960 bytes
    // ntdll.dll .text:0x1132e0, 0x6fc38 bytes
    // ntdll.dll .text:0x1272f0, 0x74648 bytes
    // ntdll.dll .text:0x113480, 0x6fc38 bytes
    //
    _q30(sdk::unknown_ptr) pss_nt_capture_snapshot;
    
    // [PssNtDuplicateSnapshot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f10, 0x67960 bytes
    // ntdll.dll .text:0x1137b0, 0x6fc38 bytes
    // ntdll.dll .text:0x1277c0, 0x74648 bytes
    // ntdll.dll .text:0x113950, 0x6fc38 bytes
    //
    _q31(sdk::unknown_ptr) pss_nt_duplicate_snapshot;
    
    // [PssNtFreeRemoteSnapshot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xffc30, 0x67960 bytes
    // ntdll.dll .text:0x113830, 0x6fc38 bytes
    // ntdll.dll .text:0x127840, 0x74648 bytes
    // ntdll.dll .text:0x1139d0, 0x6fc38 bytes
    //
    _q32(sdk::unknown_ptr) pss_nt_free_remote_snapshot;
    
    // [PssNtFreeSnapshot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f90, 0x67960 bytes
    // ntdll.dll .text:0x113a40, 0x6fc38 bytes
    // ntdll.dll .text:0x127a50, 0x74648 bytes
    // ntdll.dll .text:0x113be0, 0x6fc38 bytes
    //
    _q33(sdk::unknown_ptr) pss_nt_free_snapshot;
    
    // [PssNtFreeWalkMarker]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x890a0, 0x67960 bytes
    // ntdll.dll .text:0x113bd0, 0x6fc38 bytes
    // ntdll.dll .text:0x127be0, 0x74648 bytes
    // ntdll.dll .text:0x113d70, 0x6fc38 bytes
    //
    _q34(sdk::unknown_ptr) pss_nt_free_walk_marker;
    
    // [PssNtQuerySnapshot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5100, 0x67960 bytes
    // ntdll.dll .text:0x113c00, 0x6fc38 bytes
    // ntdll.dll .text:0x127c20, 0x74648 bytes
    // ntdll.dll .text:0x113da0, 0x6fc38 bytes
    //
    _q35(sdk::unknown_ptr) pss_nt_query_snapshot;
    
    // [PssNtValidateDescriptor]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55d0, 0x67960 bytes
    // ntdll.dll .text:0x113eb0, 0x6fc38 bytes
    // ntdll.dll .text:0x127ed0, 0x74648 bytes
    // ntdll.dll .text:0x114050, 0x6fc38 bytes
    //
    _q36(sdk::unknown_ptr) pss_nt_validate_descriptor;
    
    // [PssNtWalkSnapshot]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5340, 0x67960 bytes
    // ntdll.dll .text:0x114040, 0x6fc38 bytes
    // ntdll.dll .text:0x128060, 0x74648 bytes
    // ntdll.dll .text:0x1141e0, 0x6fc38 bytes
    //
    _q37(sdk::unknown_ptr) pss_nt_walk_snapshot;
    
    // [PsspCaptureAuxiliaryPages]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5edc8, 0x67960 bytes
    // ntdll.dll .text:0x11467c, 0x6fc38 bytes
    // ntdll.dll .text:0x128698, 0x74648 bytes
    // ntdll.dll .text:0x11481c, 0x6fc38 bytes
    //
    _q38(sdk::unknown_ptr) pssp_capture_auxiliary_pages;
    
    // [PsspCaptureHandleInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5e1fc, 0x67960 bytes
    // ntdll.dll .text:0x1151a4, 0x6fc38 bytes
    // ntdll.dll .text:0x129214, 0x74648 bytes
    // ntdll.dll .text:0x115344, 0x6fc38 bytes
    //
    _q39(sdk::unknown_ptr) pssp_capture_handle_information;
    
    // [PsspCaptureHandleTrace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5ed20, 0x67960 bytes
    // ntdll.dll .text:0x114188, 0x6fc38 bytes
    // ntdll.dll .text:0x1281a8, 0x74648 bytes
    // ntdll.dll .text:0x114328, 0x6fc38 bytes
    //
    _q40(sdk::unknown_ptr) pssp_capture_handle_trace;
    
    // [PsspCaptureImageInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5d7f8, 0x67960 bytes
    // ntdll.dll .text:0x114904, 0x6fc38 bytes
    // ntdll.dll .text:0x128938, 0x74648 bytes
    // ntdll.dll .text:0x114aa4, 0x6fc38 bytes
    //
    _q41(sdk::unknown_ptr) pssp_capture_image_information;
    
    // [PsspCaptureProcessInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5eb70, 0x67960 bytes
    // ntdll.dll .text:0x1144dc, 0x6fc38 bytes
    // ntdll.dll .text:0x1284f8, 0x74648 bytes
    // ntdll.dll .text:0x11467c, 0x6fc38 bytes
    //
    _q42(sdk::unknown_ptr) pssp_capture_process_information;
    
    // [PsspCaptureThreadInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5dbc0, 0x67960 bytes
    // ntdll.dll .text:0x115c0c, 0x6fc38 bytes
    // ntdll.dll .text:0x129c50, 0x74648 bytes
    // ntdll.dll .text:0x115dac, 0x6fc38 bytes
    //
    _q43(sdk::unknown_ptr) pssp_capture_thread_information;
    
    // [PsspCaptureVaSpaceInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5a578, 0x67960 bytes
    // ntdll.dll .text:0x114a0c, 0x6fc38 bytes
    // ntdll.dll .text:0x128a40, 0x74648 bytes
    // ntdll.dll .text:0x114bac, 0x6fc38 bytes
    //
    _q44(sdk::unknown_ptr) pssp_capture_va_space_information;
    
    // [PsspDuplicateSnapshotLocalToRemote]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3818, 0x67960 bytes
    // ntdll.dll .text:0x1168a8, 0x6fc38 bytes
    // ntdll.dll .text:0x12a9cc, 0x74648 bytes
    // ntdll.dll .text:0x116a48, 0x6fc38 bytes
    //
    _q45(sdk::unknown_ptr) pssp_duplicate_snapshot_local_to_remote;
    
    // [PsspDuplicateSnapshotRemoteToRemote]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8804c, 0x67960 bytes
    // ntdll.dll .text:0x116e10, 0x6fc38 bytes
    // ntdll.dll .text:0x12af38, 0x74648 bytes
    // ntdll.dll .text:0x116fb0, 0x6fc38 bytes
    //
    _q46(sdk::unknown_ptr) pssp_duplicate_snapshot_remote_to_remote;
    
    // [PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5a80, 0x67960 bytes
    // ntdll.dll .text:0x116210, 0x6fc38 bytes
    // ntdll.dll .text:0x12a338, 0x74648 bytes
    // ntdll.dll .text:0x1163b0, 0x6fc38 bytes
    //
    _q47(sdk::unknown_ptr) pssp_query_info_class_pss_query_process_information;
    
    // [PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x566c, 0x67960 bytes
    // ntdll.dll .text:0x1162c4, 0x6fc38 bytes
    // ntdll.dll .text:0x12a3ec, 0x74648 bytes
    // ntdll.dll .text:0x116464, 0x6fc38 bytes
    //
    _q48(sdk::unknown_ptr) pssp_walk_info_class_pss_walk_auxiliary_pages;
    
    // [PsspWalkInfoClass_PSS_WALK_HANDLES]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5790, 0x67960 bytes
    // ntdll.dll .text:0x1163f0, 0x6fc38 bytes
    // ntdll.dll .text:0x12a518, 0x74648 bytes
    // ntdll.dll .text:0x116590, 0x6fc38 bytes
    //
    _q49(sdk::unknown_ptr) pssp_walk_info_class_pss_walk_handles;
    
    // [PsspWalkInfoClass_PSS_WALK_THREADS]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5904, 0x67960 bytes
    // ntdll.dll .text:0x116570, 0x6fc38 bytes
    // ntdll.dll .text:0x12a694, 0x74648 bytes
    // ntdll.dll .text:0x116710, 0x6fc38 bytes
    //
    _q50(sdk::unknown_ptr) pssp_walk_info_class_pss_walk_threads;
    
    // [RXactpCommit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82e64, 0x67960 bytes
    // ntdll.dll .text:0x7ed18, 0x6fc38 bytes
    // ntdll.dll .text:0x7fb78, 0x74648 bytes
    // ntdll.dll .text:0x7eeb8, 0x6fc38 bytes
    //
    _q51(sdk::unknown_ptr) r_xactp_commit;
    
    // [RXactpOpenTargetKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82fb4, 0x67960 bytes
    // ntdll.dll .text:0x895a4, 0x6fc38 bytes
    // ntdll.dll .text:0x8bb10, 0x74648 bytes
    // ntdll.dll .text:0x89744, 0x6fc38 bytes
    //
    _q52(sdk::unknown_ptr) r_xactp_open_target_key;
    
    // [RegistryInfoCritSect]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x151c00, 0x67960 bytes
    // ntdll.dll .data:0x168e00, 0x6fc38 bytes
    // ntdll.dll .data:0x1830e0, 0x74648 bytes
    // ntdll.dll .data:0x169e00, 0x6fc38 bytes
    //
    _q53(sdk::unknown_ptr) registry_info_crit_sect;
    
    // [__remainder_piby2]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9e794, 0x67960 bytes
    // ntdll.dll .text:0x93250, 0x6fc38 bytes
    // ntdll.dll .text:0x96e98, 0x74648 bytes
    // ntdll.dll .text:0x933f0, 0x6fc38 bytes
    //
    _q54(sdk::unknown_ptr) remainder_piby2;
    
    // [ReportExceptionInternal]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5e9c4, 0x67960 bytes
    // ntdll.dll .text:0xdc6e8, 0x6fc38 bytes
    // ntdll.dll .text:0xe6b58, 0x74648 bytes
    // ntdll.dll .text:0xdc658, 0x6fc38 bytes
    //
    _q55(sdk::unknown_ptr) report_exception_internal;
    
    // [__report_securityfailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96a5c, 0x67960 bytes
    // ntdll.dll .text:0x8b3ec, 0x6fc38 bytes
    // ntdll.dll .text:0x8e90c, 0x74648 bytes
    // ntdll.dll .text:0x8b58c, 0x6fc38 bytes
    //
    _q56(sdk::function<void(uint32_t)>*) report_securityfailure;
    
    // [SbAtomicCaptureContextGuid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1017c, 0x67960 bytes
    // ntdll.dll .text:0x43f30, 0x6fc38 bytes
    // ntdll.dll .text:0x70bb8, 0x74648 bytes
    // ntdll.dll .text:0x43f30, 0x6fc38 bytes
    //
    _q57(sdk::unknown_ptr) sb_atomic_capture_context_guid;
    
    // [SbCleanupTrace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7a7c, 0x67960 bytes
    // ntdll.dll .text:0x647e8, 0x6fc38 bytes
    // ntdll.dll .text:0x519f0, 0x74648 bytes
    // ntdll.dll .text:0x64908, 0x6fc38 bytes
    //
    _q58(sdk::unknown_ptr) sb_cleanup_trace;
    
    // [SbDynamicContextDllCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x150d90, 0x67960 bytes
    // ntdll.dll .data:0x167740, 0x6fc38 bytes
    // ntdll.dll .data:0x1816e8, 0x74648 bytes
    // ntdll.dll .data:0x168740, 0x6fc38 bytes
    //
    _q59(sdk::unknown_ptr) sb_dynamic_context_dll_count;
    
    // [SbExecuteProcedure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff940, 0x67960 bytes
    // ntdll.dll .text:0x112ff0, 0x6fc38 bytes
    // ntdll.dll .text:0x126fe0, 0x74648 bytes
    // ntdll.dll .text:0x113190, 0x6fc38 bytes
    //
    _q60(sdk::unknown_ptr) sb_execute_procedure;
    
    // [SbFilterProcedure_RTL]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xacab0, 0x67960 bytes
    // ntdll.dll .text:0x84d00, 0x6fc38 bytes
    // ntdll.dll .text:0x891e0, 0x74648 bytes
    // ntdll.dll .text:0x84ea0, 0x6fc38 bytes
    //
    _q61(sdk::unknown_ptr) sb_filter_procedure_rtl;
    
    // [SbGetContextDetailsById]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf4e4, 0x67960 bytes
    // ntdll.dll .text:0x41424, 0x6fc38 bytes
    // ntdll.dll .text:0x2f2cc, 0x74648 bytes
    // ntdll.dll .text:0x41424, 0x6fc38 bytes
    //
    _q62(sdk::unknown_ptr) sb_get_context_details_by_id;
    
    // [SbGetContextDetailsByVersion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf97c, 0x67960 bytes
    // ntdll.dll .text:0x42bdc, 0x6fc38 bytes
    // ntdll.dll .text:0x7cf00, 0x74648 bytes
    // ntdll.dll .text:0x42bdc, 0x6fc38 bytes
    //
    _q63(sdk::unknown_ptr) sb_get_context_details_by_version;
    
    // [SbObtainTraceHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82160, 0x67960 bytes
    // ntdll.dll .text:0x7d544, 0x6fc38 bytes
    // ntdll.dll .text:0x2f51c, 0x74648 bytes
    // ntdll.dll .text:0x7d6e4, 0x6fc38 bytes
    //
    _q64(sdk::unknown_ptr) sb_obtain_trace_handle;
    
    // [SbSelectProcedure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf580, 0x67960 bytes
    // ntdll.dll .text:0x414b0, 0x6fc38 bytes
    // ntdll.dll .text:0x2f350, 0x74648 bytes
    // ntdll.dll .text:0x414b0, 0x6fc38 bytes
    //
    _q65(sdk::unknown_ptr) sb_select_procedure;
    
    // [SbUpdateSwitchContextBasedOnDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf2a0, 0x67960 bytes
    // ntdll.dll .text:0x411d0, 0x6fc38 bytes
    // ntdll.dll .text:0x2f084, 0x74648 bytes
    // ntdll.dll .text:0x411d0, 0x6fc38 bytes
    //
    _q66(sdk::unknown_ptr) sb_update_switch_context_based_on_dll;
    
    // [SbpContextLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154410, 0x67960 bytes
    // ntdll.dll .data:0x16b650, 0x6fc38 bytes
    // ntdll.dll .data:0x1851e8, 0x74648 bytes
    // ntdll.dll .data:0x16c640, 0x6fc38 bytes
    //
    _q67(sdk::unknown_ptr) sbp_context_lock;
    
    // [SbpDetermineDllContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xeeb8, 0x67960 bytes
    // ntdll.dll .text:0x40de0, 0x6fc38 bytes
    // ntdll.dll .text:0x2ea94, 0x74648 bytes
    // ntdll.dll .text:0x40de0, 0x6fc38 bytes
    //
    _q68(sdk::unknown_ptr) sbp_determine_dll_context;
    
    // [SbpFindMatchingContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1039c, 0x67960 bytes
    // ntdll.dll .text:0x4415c, 0x6fc38 bytes
    // ntdll.dll .text:0x70b78, 0x74648 bytes
    // ntdll.dll .text:0x4415c, 0x6fc38 bytes
    //
    _q69(sdk::unknown_ptr) sbp_find_matching_context;
    
    // [SbpLookup]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff96c, 0x67960 bytes
    // ntdll.dll .text:0x11301c, 0x6fc38 bytes
    // ntdll.dll .text:0x127014, 0x74648 bytes
    // ntdll.dll .text:0x1131bc, 0x6fc38 bytes
    //
    _q70(sdk::unknown_ptr) sbp_lookup;
    
    // [SbpParseFuncName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xffa70, 0x67960 bytes
    // ntdll.dll .text:0x113120, 0x6fc38 bytes
    // ntdll.dll .text:0x127114, 0x74648 bytes
    // ntdll.dll .text:0x1132c0, 0x6fc38 bytes
    //
    _q71(sdk::unknown_ptr) sbp_parse_func_name;
    
    // [SbpResolveBasedOnName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xffb14, 0x67960 bytes
    // ntdll.dll .text:0x1131b8, 0x6fc38 bytes
    // ntdll.dll .text:0x1271bc, 0x74648 bytes
    // ntdll.dll .text:0x113358, 0x6fc38 bytes
    //
    _q72(sdk::unknown_ptr) sbp_resolve_based_on_name;
    
    // [SbpRetrieveCompatibilityManifest]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1225c, 0x67960 bytes
    // ntdll.dll .text:0x44204, 0x6fc38 bytes
    // ntdll.dll .text:0x7dca0, 0x74648 bytes
    // ntdll.dll .text:0x44204, 0x6fc38 bytes
    //
    _q73(sdk::unknown_ptr) sbp_retrieve_compatibility_manifest;
    
    // [SbpTraceContextUpdate]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xff85c, 0x67960 bytes
    // ntdll.dll .text:0x112f18, 0x6fc38 bytes
    // ntdll.dll .text:0x126f04, 0x74648 bytes
    // ntdll.dll .text:0x1130b8, 0x6fc38 bytes
    //
    _q74(sdk::unknown_ptr) sbp_trace_context_update;
    
    // [SbpUpdateCache]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x10230, 0x67960 bytes
    // ntdll.dll .text:0x43fe8, 0x6fc38 bytes
    // ntdll.dll .text:0x70a0c, 0x74648 bytes
    // ntdll.dll .text:0x43fe8, 0x6fc38 bytes
    //
    _q75(sdk::unknown_ptr) sbp_update_cache;
    
    // [SbpUpdateCacheWithCurrentImpl]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xf7a0, 0x67960 bytes
    // ntdll.dll .text:0x41690, 0x6fc38 bytes
    // ntdll.dll .text:0x2f590, 0x74648 bytes
    // ntdll.dll .text:0x41690, 0x6fc38 bytes
    //
    _q76(sdk::unknown_ptr) sbp_update_cache_with_current_impl;
    
    // [SendMessageToWERService]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5e5d4, 0x67960 bytes
    // ntdll.dll .text:0xdd23c, 0x6fc38 bytes
    // ntdll.dll .text:0xe76dc, 0x74648 bytes
    // ntdll.dll .text:0xdd1ac, 0x6fc38 bytes
    //
    _q77(sdk::unknown_ptr) send_message_to_wer_service;
    
    // [SetAssertBufferPtrinPeb]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xda374, 0x67960 bytes
    // ntdll.dll .text:0xddc54, 0x6fc38 bytes
    // ntdll.dll .text:0xe80f0, 0x74648 bytes
    // ntdll.dll .text:0xddbc4, 0x6fc38 bytes
    //
    _q78(sdk::unknown_ptr) set_assert_buffer_ptrin_peb;
    
    // [SetLastWin32ErrorEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d3f0, 0x67960 bytes
    // ntdll.dll .rdata:0x1304b8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14ba38, 0x74648 bytes
    // ntdll.dll .rdata:0x1307b8, 0x6fc38 bytes
    //
    _q79(sdk::unknown_ptr) set_last_win32_error_event;
    
    // [SHA256Final]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5b06c, 0x67960 bytes
    // ntdll.dll .text:0x5c01c, 0x6fc38 bytes
    // ntdll.dll .text:0xec3c, 0x74648 bytes
    // ntdll.dll .text:0x5c01c, 0x6fc38 bytes
    //
    _q80(sdk::unknown_ptr) sha256_final;
    
    // [SHA256Magic]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x112c00, 0x67960 bytes
    // ntdll.dll .rdata:0x125910, 0x6fc38 bytes
    // ntdll.dll .rdata:0x13aa40, 0x74648 bytes
    // ntdll.dll .rdata:0x125c10, 0x6fc38 bytes
    //
    _q81(sdk::unknown_ptr) sha256_magic;
    
    // [SHA256Transform]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5c6c8, 0x67960 bytes
    // ntdll.dll .text:0x5c288, 0x6fc38 bytes
    // ntdll.dll .text:0xca54, 0x74648 bytes
    // ntdll.dll .text:0x5c288, 0x6fc38 bytes
    //
    _q82(sdk::unknown_ptr) sha256_transform;
    
    // [SHA256Update]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5c5c4, 0x67960 bytes
    // ntdll.dll .text:0x5c168, 0x6fc38 bytes
    // ntdll.dll .text:0xc970, 0x74648 bytes
    // ntdll.dll .text:0x5c168, 0x6fc38 bytes
    //
    _q83(sdk::unknown_ptr) sha256_update;
    
    // [SHATransform]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5b3e0, 0x67960 bytes
    // ntdll.dll .text:0x5ce50, 0x6fc38 bytes
    // ntdll.dll .text:0xefb0, 0x74648 bytes
    // ntdll.dll .text:0x5ce50, 0x6fc38 bytes
    //
    _q84(sdk::unknown_ptr) sha_transform;
    
    // [ShipAssert]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xda3f0, 0x67960 bytes
    // ntdll.dll .text:0xddcd0, 0x6fc38 bytes
    // ntdll.dll .text:0xe8170, 0x74648 bytes
    // ntdll.dll .text:0xddc40, 0x6fc38 bytes
    //
    _q85(sdk::unknown_ptr) ship_assert;
    
    // [ShipAssertGetBufferInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xda510, 0x67960 bytes
    // ntdll.dll .text:0xdddf0, 0x6fc38 bytes
    // ntdll.dll .text:0xe82b0, 0x74648 bytes
    // ntdll.dll .text:0xddd60, 0x6fc38 bytes
    //
    _q86(sdk::unknown_ptr) ship_assert_get_buffer_info;
    
    // [ShipAssertMsgA]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xda540, 0x67960 bytes
    // ntdll.dll .text:0xdde20, 0x6fc38 bytes
    // ntdll.dll .text:0xe82e0, 0x74648 bytes
    // ntdll.dll .text:0xddd90, 0x6fc38 bytes
    //
    _q87(sdk::unknown_ptr) ship_assert_msg_a;
    
    // [ShipAssertMsgW]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xda540, 0x67960 bytes
    // ntdll.dll .text:0xdde20, 0x6fc38 bytes
    // ntdll.dll .text:0xe82f0, 0x74648 bytes
    // ntdll.dll .text:0xddd90, 0x6fc38 bytes
    //
    _q88(sdk::unknown_ptr) ship_assert_msg_w;
    
    // [ShowSnaps]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x14da00, 0x67960 bytes
    // ntdll.dll .data:0x164ab0, 0x6fc38 bytes
    // ntdll.dll .data:0x17ea00, 0x74648 bytes
    // ntdll.dll .data:0x165ab0, 0x6fc38 bytes
    //
    _q89(sdk::unknown_ptr) show_snaps;
    
    // [SignalStartWerSvc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5e870, 0x67960 bytes
    // ntdll.dll .text:0xdd448, 0x6fc38 bytes
    // ntdll.dll .text:0xe78e8, 0x74648 bytes
    // ntdll.dll .text:0xdd3b8, 0x6fc38 bytes
    //
    _q90(sdk::unknown_ptr) signal_start_wer_svc;
    
    // [sin]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x99610, 0x67960 bytes
    // ntdll.dll .text:0x8e400, 0x6fc38 bytes
    // ntdll.dll .text:0x91e40, 0x74648 bytes
    // ntdll.dll .text:0x8e5a0, 0x6fc38 bytes
    //
    _q91(sdk::unknown_ptr) sin;
    
    // [SlashSystem32SlashString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109920, 0x67960 bytes
    // ntdll.dll .rdata:0x11c1e0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x1311d0, 0x74648 bytes
    // ntdll.dll .rdata:0x11c1e0, 0x6fc38 bytes
    //
    _q92(sdk::unknown_ptr) slash_system32_slash_string;
    
    // [_splitpath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x976e0, 0x67960 bytes
    // ntdll.dll .text:0x8c280, 0x6fc38 bytes
    // ntdll.dll .text:0x8fc30, 0x74648 bytes
    // ntdll.dll .text:0x8c420, 0x6fc38 bytes
    //
    _q93(sdk::unknown_ptr) splitpath;
    
    // [_sptype]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9f680, 0x67960 bytes
    // ntdll.dll .text:0x940c4, 0x6fc38 bytes
    // ntdll.dll .text:0x97d60, 0x74648 bytes
    // ntdll.dll .text:0x94264, 0x6fc38 bytes
    //
    _q94(sdk::unknown_ptr) sptype;
    
    // [sscanf]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9acf0, 0x67960 bytes
    // ntdll.dll .text:0x8f9c0, 0x6fc38 bytes
    // ntdll.dll .text:0x934c0, 0x74648 bytes
    // ntdll.dll .text:0x8fb60, 0x6fc38 bytes
    //
    _q95(sdk::function<int32_t(const char const*, const char const*, ...)>*) sscanf;
    
    // [strcspn]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9b010, 0x67960 bytes
    // ntdll.dll .text:0x8fcf0, 0x6fc38 bytes
    // ntdll.dll .text:0x93860, 0x74648 bytes
    // ntdll.dll .text:0x8fe90, 0x6fc38 bytes
    //
    _q96(sdk::unknown_ptr) strcspn;
    
    // [_strlwr_s]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x97a70, 0x67960 bytes
    // ntdll.dll .text:0x8c630, 0x6fc38 bytes
    // ntdll.dll .text:0x8ffd0, 0x74648 bytes
    // ntdll.dll .text:0x8c7d0, 0x6fc38 bytes
    //
    _q97(sdk::unknown_ptr) strlwr_s;
    
    // [strpbrk]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9b590, 0x67960 bytes
    // ntdll.dll .text:0x90280, 0x6fc38 bytes
    // ntdll.dll .text:0x93e30, 0x74648 bytes
    // ntdll.dll .text:0x90420, 0x6fc38 bytes
    //
    _q98(sdk::unknown_ptr) strpbrk;
    
    // [_strupr_s]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x97b90, 0x67960 bytes
    // ntdll.dll .text:0x8c770, 0x6fc38 bytes
    // ntdll.dll .text:0x90100, 0x74648 bytes
    // ntdll.dll .text:0x8c910, 0x6fc38 bytes
    //
    _q99(sdk::unknown_ptr) strupr_s;
    
    // [SwitchedRtlGetVersion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x11828, 0x67960 bytes
    // ntdll.dll .text:0x2eb1c, 0x6fc38 bytes
    // ntdll.dll .text:0x4a338, 0x74648 bytes
    // ntdll.dll .text:0x2eb1c, 0x6fc38 bytes
    //
    _r00(sdk::unknown_ptr) switched_rtl_get_version;
    
    // [SwitchedRtlGetVersion_Current]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0x86a30, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _r01(sdk::unknown_ptr) switched_rtl_get_version_current;
    
    // [SwitchedRtlGetVersion_Win8]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14e00, 0x67960 bytes
    // ntdll.dll .text:0x84ce0, 0x6fc38 bytes
    // ntdll.dll .text:0x891b0, 0x74648 bytes
    // ntdll.dll .text:0x84e80, 0x6fc38 bytes
    //
    _r02(sdk::unknown_ptr) switched_rtl_get_version_win8;
    
    // [SwitchedRtlGetVersion_WinBLUE]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87c30, 0x67960 bytes
    // ntdll.dll .text:0x84cf0, 0x6fc38 bytes
    // ntdll.dll .text:0x891c0, 0x74648 bytes
    // ntdll.dll .text:0x84e90, 0x6fc38 bytes
    //
    _r03(sdk::unknown_ptr) switched_rtl_get_version_win_blue;
    
    // [tan]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9bb40, 0x67960 bytes
    // ntdll.dll .text:0x90750, 0x6fc38 bytes
    // ntdll.dll .text:0x94320, 0x74648 bytes
    // ntdll.dll .text:0x908f0, 0x6fc38 bytes
    //
    _r04(sdk::unknown_ptr) tan;
    
    // [TlsBitMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153300, 0x67960 bytes
    // ntdll.dll .data:0x16a440, 0x6fc38 bytes
    // ntdll.dll .data:0x184310, 0x74648 bytes
    // ntdll.dll .data:0x16b440, 0x6fc38 bytes
    //
    _r05(sdk::unknown_ptr) tls_bit_map;
    
    // [TlsExpansionBitMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1532d0, 0x67960 bytes
    // ntdll.dll .data:0x16a420, 0x6fc38 bytes
    // ntdll.dll .data:0x1842e0, 0x74648 bytes
    // ntdll.dll .data:0x16b420, 0x6fc38 bytes
    //
    _r06(sdk::unknown_ptr) tls_expansion_bit_map;
    
    // [__toascii]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96d70, 0x67960 bytes
    // ntdll.dll .text:0x8b940, 0x6fc38 bytes
    // ntdll.dll .text:0x8f220, 0x74648 bytes
    // ntdll.dll .text:0x8bae0, 0x6fc38 bytes
    //
    _r07(sdk::unknown_ptr) toascii;
    
    // [TransformMD5]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6cea0, 0x67960 bytes
    // ntdll.dll .text:0x5e890, 0x6fc38 bytes
    // ntdll.dll .text:0x5c710, 0x74648 bytes
    // ntdll.dll .text:0x5e890, 0x6fc38 bytes
    //
    _r08(sdk::unknown_ptr) transform_md5;
    
    // [TrkContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x155418, 0x67960 bytes
    // ntdll.dll .data:0x16bbc8, 0x6fc38 bytes
    // ntdll.dll .data:0x185968, 0x74648 bytes
    // ntdll.dll .data:0x16cbc8, 0x6fc38 bytes
    //
    _r09(sdk::unknown_ptr) trk_context;
    
    // [_ui64toa]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x970a0, 0x67960 bytes
    // ntdll.dll .text:0x8bc40, 0x6fc38 bytes
    // ntdll.dll .text:0x8f550, 0x74648 bytes
    // ntdll.dll .text:0x8bde0, 0x6fc38 bytes
    //
    _r10(sdk::unknown_ptr) ui64toa;
    
    // [_ui64tow]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x97280, 0x67960 bytes
    // ntdll.dll .text:0x8bde0, 0x6fc38 bytes
    // ntdll.dll .text:0x8f760, 0x74648 bytes
    // ntdll.dll .text:0x8bf80, 0x6fc38 bytes
    //
    _r11(sdk::unknown_ptr) ui64tow;
    
    // [_ultoa]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x97100, 0x67960 bytes
    // ntdll.dll .text:0x8bc60, 0x6fc38 bytes
    // ntdll.dll .text:0x8f580, 0x74648 bytes
    // ntdll.dll .text:0x8be00, 0x6fc38 bytes
    //
    _r12(sdk::unknown_ptr) ultoa;
    
    // [_umatherr]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9f468, 0x67960 bytes
    // ntdll.dll .text:0x93eb4, 0x6fc38 bytes
    // ntdll.dll .text:0x97b58, 0x74648 bytes
    // ntdll.dll .text:0x94054, 0x6fc38 bytes
    //
    _r13(sdk::unknown_ptr) umatherr;
    
    // [UninitUser32Proc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x96500, 0x67960 bytes
    // ntdll.dll .text:0x8af50, 0x6fc38 bytes
    // ntdll.dll .text:0x8e460, 0x74648 bytes
    // ntdll.dll .text:0x8b0f0, 0x6fc38 bytes
    //
    _r14(sdk::unknown_ptr) uninit_user32_proc;
    
    // [UseCOR]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153318, 0x67960 bytes
    // ntdll.dll .data:0x16a468, 0x6fc38 bytes
    // ntdll.dll .data:0x184338, 0x74648 bytes
    // ntdll.dll .data:0x16b468, 0x6fc38 bytes
    //
    _r15(sdk::unknown_ptr) use_cor;
    
    // [UseWOW64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1532a0, 0x67960 bytes
    // ntdll.dll .data:0x16a528, 0x6fc38 bytes
    // ntdll.dll .data:0x1843e8, 0x74648 bytes
    // ntdll.dll .data:0x16b528, 0x6fc38 bytes
    //
    _r16(sdk::unknown_ptr) use_wow64;
    
    // [UserDiagnosticGuid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10f190, 0x67960 bytes
    // ntdll.dll .rdata:0x130568, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14bae8, 0x74648 bytes
    // ntdll.dll .rdata:0x130868, 0x6fc38 bytes
    //
    _r17(sdk::unknown_ptr) user_diagnostic_guid;
    
    // [UserDiagnosticProviderCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xefe50, 0x67960 bytes
    // ntdll.dll .text:0xfc880, 0x6fc38 bytes
    // ntdll.dll .text:0x109760, 0x74648 bytes
    // ntdll.dll .text:0xfc830, 0x6fc38 bytes
    //
    _r18(sdk::unknown_ptr) user_diagnostic_provider_callback;
    
    // [UserLoaderGuid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d460, 0x67960 bytes
    // ntdll.dll .rdata:0x121908, 0x6fc38 bytes
    // ntdll.dll .rdata:0x136d78, 0x74648 bytes
    // ntdll.dll .rdata:0x121c08, 0x6fc38 bytes
    //
    _r19(sdk::unknown_ptr) user_loader_guid;
    
    // [ValidatePointer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x142f8, 0x67960 bytes
    // ntdll.dll .text:0x45144, 0x6fc38 bytes
    // ntdll.dll .text:0x6c038, 0x74648 bytes
    // ntdll.dll .text:0x45144, 0x6fc38 bytes
    //
    _r20(sdk::unknown_ptr) validate_pointer;
    
    // [VrfcoreDllString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x10a3c0, 0x67960 bytes
    // ntdll.dll .rdata:0x11d498, 0x6fc38 bytes
    // ntdll.dll .rdata:0x132738, 0x74648 bytes
    // ntdll.dll .rdata:0x11d4b8, 0x6fc38 bytes
    //
    _r21(sdk::unknown_ptr) vrfcore_dll_string;
    
    // [_vscwprintf]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x97c00, 0x67960 bytes
    // ntdll.dll .text:0x8c9b0, 0x6fc38 bytes
    // ntdll.dll .text:0x90350, 0x74648 bytes
    // ntdll.dll .text:0x8cb50, 0x6fc38 bytes
    //
    _r22(sdk::function<int32_t(const wchar_t const*, char*)>*) vscwprintf;
    
    // [_vscwprintf_helper]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x97c1c, 0x67960 bytes
    // ntdll.dll .text:0x8c8bc, 0x6fc38 bytes
    // ntdll.dll .text:0x9036c, 0x74648 bytes
    // ntdll.dll .text:0x8ca5c, 0x6fc38 bytes
    //
    _r23(sdk::unknown_ptr) vscwprintf_helper;
    
    // [WaitForWerSvc]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5e7d4, 0x67960 bytes
    // ntdll.dll .text:0xdd4f4, 0x6fc38 bytes
    // ntdll.dll .text:0xe7994, 0x74648 bytes
    // ntdll.dll .text:0xdd464, 0x6fc38 bytes
    //
    _r24(sdk::unknown_ptr) wait_for_wer_svc;
    
    // [_wcstoui64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x981a0, 0x67960 bytes
    // ntdll.dll .text:0x8cf30, 0x6fc38 bytes
    // ntdll.dll .text:0x90960, 0x74648 bytes
    // ntdll.dll .text:0x8d0d0, 0x6fc38 bytes
    //
    _r25(sdk::unknown_ptr) wcstoui64;
    
    // [_wcsupr_s]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x98480, 0x67960 bytes
    // ntdll.dll .text:0x8d210, 0x6fc38 bytes
    // ntdll.dll .text:0x90c30, 0x74648 bytes
    // ntdll.dll .text:0x8d3b0, 0x6fc38 bytes
    //
    _r26(sdk::unknown_ptr) wcsupr_s;
    
    // [WerEscalationLazyInit]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xda6a8, 0x67960 bytes
    // ntdll.dll .text:0xddf38, 0x6fc38 bytes
    // ntdll.dll .text:0xe8448, 0x74648 bytes
    // ntdll.dll .text:0xddea8, 0x6fc38 bytes
    //
    _r27(sdk::unknown_ptr) wer_escalation_lazy_init;
    
    // [WerEscalationReadImageVersionInfoForModuleBase]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14068, 0x67960 bytes
    // ntdll.dll .text:0x44f00, 0x6fc38 bytes
    // ntdll.dll .text:0x6bdbc, 0x74648 bytes
    // ntdll.dll .text:0x44f00, 0x6fc38 bytes
    //
    _r28(sdk::unknown_ptr) wer_escalation_read_image_version_info_for_module_base;
    
    // [WerEscalationReadImageVersionInfoForModuleBaseSafe]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x13fac, 0x67960 bytes
    // ntdll.dll .text:0x44e44, 0x6fc38 bytes
    // ntdll.dll .text:0x6bd44, 0x74648 bytes
    // ntdll.dll .text:0x44e44, 0x6fc38 bytes
    //
    _r29(sdk::unknown_ptr) wer_escalation_read_image_version_info_for_module_base_safe;
    
    // [WerReportSQMEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdaa20, 0x67960 bytes
    // ntdll.dll .text:0xde2d0, 0x6fc38 bytes
    // ntdll.dll .text:0xe87c0, 0x74648 bytes
    // ntdll.dll .text:0xde240, 0x6fc38 bytes
    //
    _r30(sdk::unknown_ptr) wer_report_sqm_event;
    
    // [WerpBreakIntoDebuggerIfPresent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x489c, 0x67960 bytes
    // ntdll.dll .text:0xdd74c, 0x6fc38 bytes
    // ntdll.dll .text:0xe7bec, 0x74648 bytes
    // ntdll.dll .text:0xdd6bc, 0x6fc38 bytes
    //
    _r31(sdk::unknown_ptr) werp_break_into_debugger_if_present;
    
    // [WerpCreateCompletionEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x495c, 0x67960 bytes
    // ntdll.dll .text:0xdd7a0, 0x6fc38 bytes
    // ntdll.dll .text:0xe7c40, 0x74648 bytes
    // ntdll.dll .text:0xdd710, 0x6fc38 bytes
    //
    _r32(sdk::unknown_ptr) werp_create_completion_event;
    
    // [WerpCreateCrashDataSection]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4a70, 0x67960 bytes
    // ntdll.dll .text:0xdd804, 0x6fc38 bytes
    // ntdll.dll .text:0xe7ca4, 0x74648 bytes
    // ntdll.dll .text:0xdd774, 0x6fc38 bytes
    //
    _r33(sdk::unknown_ptr) werp_create_crash_data_section;
    
    // [WerpEscalationIsDisabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdaacc, 0x67960 bytes
    // ntdll.dll .text:0xde37c, 0x6fc38 bytes
    // ntdll.dll .text:0xe8810, 0x74648 bytes
    // ntdll.dll .text:0xde2ec, 0x6fc38 bytes
    //
    _r34(sdk::unknown_ptr) werp_escalation_is_disabled;
    
    // [WerpEscalationIsWMRSendStringSet]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdab7c, 0x67960 bytes
    // ntdll.dll .text:0xde42c, 0x6fc38 bytes
    // ntdll.dll .text:0xe88c0, 0x74648 bytes
    // ntdll.dll .text:0xde39c, 0x6fc38 bytes
    //
    _r35(sdk::unknown_ptr) werp_escalation_is_wmr_send_string_set;
    
    // [WerpEscalationReadUlongFromKey]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdac2c, 0x67960 bytes
    // ntdll.dll .text:0xde4dc, 0x6fc38 bytes
    // ntdll.dll .text:0xe8970, 0x74648 bytes
    // ntdll.dll .text:0xde44c, 0x6fc38 bytes
    //
    _r36(sdk::unknown_ptr) werp_escalation_read_ulong_from_key;
    
    // [WerpFreeSid]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5e494, 0x67960 bytes
    // ntdll.dll .text:0xdd96c, 0x6fc38 bytes
    // ntdll.dll .text:0xe7e0c, 0x74648 bytes
    // ntdll.dll .text:0xdd8dc, 0x6fc38 bytes
    //
    _r37(sdk::unknown_ptr) werp_free_sid;
    
    // [WerpGlobalFlagsForProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x657c, 0x67960 bytes
    // ntdll.dll .text:0x648ac, 0x6fc38 bytes
    // ntdll.dll .text:0x51ae4, 0x74648 bytes
    // ntdll.dll .text:0x649cc, 0x6fc38 bytes
    //
    _r38(sdk::unknown_ptr) werp_global_flags_for_process;
    
    // [WerpIsDebugPortPresent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x48d0, 0x67960 bytes
    // ntdll.dll .text:0xdd9b0, 0x6fc38 bytes
    // ntdll.dll .text:0xe7e50, 0x74648 bytes
    // ntdll.dll .text:0xdd920, 0x6fc38 bytes
    //
    _r39(sdk::unknown_ptr) werp_is_debug_port_present;
    
    // [WerpPathTail]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5dc4, 0x67960 bytes
    // ntdll.dll .text:0x64a9c, 0x6fc38 bytes
    // ntdll.dll .text:0x525e4, 0x74648 bytes
    // ntdll.dll .text:0x64bbc, 0x6fc38 bytes
    //
    _r40(sdk::unknown_ptr) werp_path_tail;
    
    // [WerpProcessId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6548, 0x67960 bytes
    // ntdll.dll .text:0x64a64, 0x6fc38 bytes
    // ntdll.dll .text:0x51aac, 0x74648 bytes
    // ntdll.dll .text:0x64b84, 0x6fc38 bytes
    //
    _r41(sdk::unknown_ptr) werp_process_id;
    
    // [WerpSetProcessFaultInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4918, 0x67960 bytes
    // ntdll.dll .text:0xdd9f8, 0x6fc38 bytes
    // ntdll.dll .text:0xe7e98, 0x74648 bytes
    // ntdll.dll .text:0xdd968, 0x6fc38 bytes
    //
    _r42(sdk::unknown_ptr) werp_set_process_fault_information;
    
    // [WerpThreadId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5be0, 0x67960 bytes
    // ntdll.dll .text:0xdda38, 0x6fc38 bytes
    // ntdll.dll .text:0xe7ed8, 0x74648 bytes
    // ntdll.dll .text:0xdd9a8, 0x6fc38 bytes
    //
    _r43(sdk::unknown_ptr) werp_thread_id;
    
    // [WerpWaitForCrashReporting]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5b34, 0x67960 bytes
    // ntdll.dll .text:0xdda70, 0x6fc38 bytes
    // ntdll.dll .text:0xe7f10, 0x74648 bytes
    // ntdll.dll .text:0xdd9e0, 0x6fc38 bytes
    //
    _r44(sdk::unknown_ptr) werp_wait_for_crash_reporting;
    
    // [WinSqmCheckEscalationAddToStreamEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0xe8b50, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _r45(sdk::unknown_ptr) win_sqm_check_escalation_add_to_stream_ex;
    
    // [WinSqmCheckEscalationSetDWORD]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0xe8b60, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _r46(sdk::unknown_ptr) win_sqm_check_escalation_set_dword;
    
    // [WinSqmCheckEscalationSetDWORD64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0xe8b70, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _r47(sdk::unknown_ptr) win_sqm_check_escalation_set_dword64;
    
    // [WinSqmCheckEscalationSetString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0xe8b80, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _r48(sdk::unknown_ptr) win_sqm_check_escalation_set_string;
    
    // [WinSqmCommonDatapointDelete]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14e00, 0x67960 bytes
    // ntdll.dll .text:0x84ce0, 0x6fc38 bytes
    // ntdll.dll .text:0xe8b90, 0x74648 bytes
    // ntdll.dll .text:0x84e80, 0x6fc38 bytes
    //
    _r49(sdk::unknown_ptr) win_sqm_common_datapoint_delete;
    
    // [WinSqmCommonDatapointSetDWORD]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14e00, 0x67960 bytes
    // ntdll.dll .text:0x84ce0, 0x6fc38 bytes
    // ntdll.dll .text:0xe8ba0, 0x74648 bytes
    // ntdll.dll .text:0x84e80, 0x6fc38 bytes
    //
    _r50(sdk::unknown_ptr) win_sqm_common_datapoint_set_dword;
    
    // [WinSqmCommonDatapointSetDWORD64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14e00, 0x67960 bytes
    // ntdll.dll .text:0x84ce0, 0x6fc38 bytes
    // ntdll.dll .text:0xe8bb0, 0x74648 bytes
    // ntdll.dll .text:0x84e80, 0x6fc38 bytes
    //
    _r51(sdk::unknown_ptr) win_sqm_common_datapoint_set_dword64;
    
    // [WinSqmCommonDatapointSetStreamEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14e00, 0x67960 bytes
    // ntdll.dll .text:0x84ce0, 0x6fc38 bytes
    // ntdll.dll .text:0xe8bc0, 0x74648 bytes
    // ntdll.dll .text:0x84e80, 0x6fc38 bytes
    //
    _r52(sdk::unknown_ptr) win_sqm_common_datapoint_set_stream_ex;
    
    // [WinSqmCommonDatapointSetString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14e00, 0x67960 bytes
    // ntdll.dll .text:0x84ce0, 0x6fc38 bytes
    // ntdll.dll .text:0xe8bd0, 0x74648 bytes
    // ntdll.dll .text:0x84e80, 0x6fc38 bytes
    //
    _r53(sdk::unknown_ptr) win_sqm_common_datapoint_set_string;
    
    // [WinSqmGetEscalationRuleStatus]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0xe8c00, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _r54(sdk::unknown_ptr) win_sqm_get_escalation_rule_status;
    
    // [WinSqmGetInstrumentationProperty]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdae00, 0x67960 bytes
    // ntdll.dll .text:0xde6b0, 0x6fc38 bytes
    // ntdll.dll .text:0xe8c10, 0x74648 bytes
    // ntdll.dll .text:0xde620, 0x6fc38 bytes
    //
    _r55(sdk::unknown_ptr) win_sqm_get_instrumentation_property;
    
    // [WinSqmIsSessionDisabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14e00, 0x67960 bytes
    // ntdll.dll .text:0x84ce0, 0x6fc38 bytes
    // ntdll.dll .text:0xe8b90, 0x74648 bytes
    // ntdll.dll .text:0x84e80, 0x6fc38 bytes
    //
    _r56(sdk::unknown_ptr) win_sqm_is_session_disabled;
    
    // [WinSqmSetDWORD64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0xe8c40, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _r57(sdk::unknown_ptr) win_sqm_set_dword64;
    
    // [WinSqmSetEscalationInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14e00, 0x67960 bytes
    // ntdll.dll .text:0x84ce0, 0x6fc38 bytes
    // ntdll.dll .text:0x9e1d0, 0x74648 bytes
    // ntdll.dll .text:0x84e80, 0x6fc38 bytes
    //
    _r58(sdk::unknown_ptr) win_sqm_set_escalation_info;
    
    // [WinSqmSetIfMaxDWORD]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0x842f0, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _r59(sdk::unknown_ptr) win_sqm_set_if_max_dword;
    
    // [WinSqmSetIfMinDWORD]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0x842f0, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _r60(sdk::unknown_ptr) win_sqm_set_if_min_dword;
    
    // [WinSqmStartSessionForPartner]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89da0, 0x67960 bytes
    // ntdll.dll .text:0x84bb0, 0x6fc38 bytes
    // ntdll.dll .text:0xe8c50, 0x74648 bytes
    // ntdll.dll .text:0x84d50, 0x6fc38 bytes
    //
    _r61(sdk::unknown_ptr) win_sqm_start_session_for_partner;
    
    // [WinSqmStartSqmOptinListener]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0x8e440, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _r62(sdk::unknown_ptr) win_sqm_start_sqm_optin_listener;
    
    // [Wow64ApcRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153328, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f228, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199230, 0x74648 bytes
    // ntdll.dll .mrdata:0x180228, 0x6fc38 bytes
    //
    _r63(sdk::unknown_ptr) wow64_apc_routine;
    
    // [Wow64EnvironmentThunkTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x109f30, 0x67960 bytes
    // ntdll.dll .rdata:0x11ccb0, 0x6fc38 bytes
    // ntdll.dll .rdata:0x131fa0, 0x74648 bytes
    // ntdll.dll .rdata:0x11ccb0, 0x6fc38 bytes
    //
    _r64(sdk::unknown_ptr) wow64_environment_thunk_table;
    
    // [Wow64PrepareForException]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1532f0, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f230, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199238, 0x74648 bytes
    // ntdll.dll .mrdata:0x180230, 0x6fc38 bytes
    //
    _r65(sdk::unknown_ptr) wow64_prepare_for_exception;
    
    // [_wtoi64]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x98530, 0x67960 bytes
    // ntdll.dll .text:0x8d2c0, 0x6fc38 bytes
    // ntdll.dll .text:0x90ce0, 0x74648 bytes
    // ntdll.dll .text:0x8d460, 0x6fc38 bytes
    //
    _r66(sdk::unknown_ptr) wtoi64;
};
#include "magic/api.end.hpp"
