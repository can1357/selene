#pragma once
#include <sdkgen/support_library.hpp>
#include "wnf_type_id_t.hpp"
#include "feature_state_t.hpp"
#include "feature_store_t.hpp"
#include "wnf_state_name_t.hpp"
#include "../win/hinstance_t.hpp"
#include "feature_change_time_t.hpp"
#include "details_staging_config_t.hpp"
#include "variant_reporting_kind_t.hpp"
#include "details_feature_descriptor_t.hpp"
#include "../nt/feature_logged_traits_t.hpp"
#include "details_feature_state_cache_t.hpp"
#include "../rtl/feature_configuration_t.hpp"
#include "details_feature_reporting_cache_t.hpp"

#include "magic/api.start.hpp"
namespace wil
{
    // [wil_details_EvaluateFeatureDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c6638, 0x1fe000 bytes
    //
    _m0(sdk::function<void(...)>*) details_evaluate_feature_dependencies;
    
    // [wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa355e8, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) details_populate_initial_configured_feature_states_from_buffers;
    
    // [wil_InitializeFeatureStagingFromBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb2493c, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) initialize_feature_staging_from_buffers;
    
    // [wil_RegisterFeatureStagingChangeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c6564, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) register_feature_staging_change_notification;
    
    // [wil_details_BuildFeatureStateCacheFromQueryResults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa05498, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c65c4, 0x1fe000 bytes
    //
    _m4(sdk::function<int32_t(int32_t, const struct rtl::feature_configuration_t*, union wil::details_feature_state_cache_t*)>*) details_build_feature_state_cache_from_query_results;
    
    // [wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa0550c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c66e4, 0x1fe000 bytes
    //
    _m5(sdk::function<union wil::details_feature_state_cache_t(union wil::details_feature_state_cache_t*, const struct wil::details_feature_descriptor_t*)>*) details_evaluate_feature_dependencies_get_cached_feature_enabled_state;
    
    // [wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa05540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c6718, 0x1fe000 bytes
    //
    _m6(sdk::function<union wil::details_feature_state_cache_t(union wil::details_feature_state_cache_t*, union wil::details_feature_state_cache_t, const struct wil::details_feature_descriptor_t*)>*) details_evaluate_feature_dependencies_reevaluate_cached_feature_enabled_state;
    
    // [wil_details_featureChangeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xd1b990, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c3b0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) details_feature_change_notification;
    
    // [wil_details_featureDescriptors_a]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xcda38, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc8d18, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) details_feature_descriptors_a;
    
    // [wil_details_featureDescriptors_z]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xcdd38, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc8d90, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) details_feature_descriptors_z;
    
    // [wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f18f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebe9c, 0x1fe000 bytes
    //
    _n0(sdk::function<union wil::details_feature_state_cache_t(union wil::details_feature_state_cache_t*, union wil::details_feature_state_cache_t, const struct wil::details_feature_descriptor_t*)>*) details_feature_state_cache_reevaluate_cached_feature_enabled_state;
    
    // [wil_details_OnFeatureConfigurationChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa05600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c67d0, 0x1fe000 bytes
    //
    _n1(sdk::function<void(void*)>*) details_on_feature_configuration_change;
    
    // [wil_details_StagingConfig_AreAnyFeaturesConfigured]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50c7e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50c5c0, 0x1fe000 bytes
    //
    _n2(sdk::function<int32_t(struct wil::details_staging_config_t*)>*) details_staging_config_are_any_features_configured;
    
    // [__WIL_WNF_WIL_MACHINE_FEATURE_STORE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1e5f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1e578, 0x1fe000 bytes
    //
    _n3(struct wil::wnf_state_name_t*) wnf_wil_machine_feature_store;
    
    // [__WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x32cc8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x33008, 0x1fe000 bytes
    //
    _n4(struct wil::wnf_state_name_t*) wnf_wil_machine_feature_store_modified;
    
    // [__WIL_WNF_WIL_USER_FEATURE_STORE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x32cc0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x33000, 0x1fe000 bytes
    //
    _n5(struct wil::wnf_state_name_t*) wnf_wil_user_feature_store;
    
    // [__WIL_WNF_WIL_USER_FEATURE_STORE_MODIFIED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x32cb8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x32ff8, 0x1fe000 bytes
    //
    _n6(struct wil::wnf_state_name_t*) wnf_wil_user_feature_store_modified;
    
    // [wil_details_FeatureStateCache_GetCachedFeatureEnabledState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3872cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f18bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389044, 0x1fe000 bytes
    //
    _n7(sdk::function<union wil::details_feature_state_cache_t(union wil::details_feature_state_cache_t*, uint32_t, int32_t, enum wil::feature_change_time_t, enum wil::feature_store_t, sdk::function<int32_t()>*)>*) details_feature_state_cache_get_cached_feature_enabled_state;
    
    // [wil_details_GetCurrentFeatureEnabledState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3873d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f19f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322ad0, 0x1fe000 bytes
    //
    _n8(sdk::function<union wil::details_feature_state_cache_t(uint32_t, int32_t, enum wil::feature_change_time_t, enum wil::feature_store_t, sdk::function<int32_t()>*, int32_t*)>*) details_get_current_feature_enabled_state;
    
    // [wil_UninitializeFeatureStaging]
    // Ldr = [ndis.sys]
    // => Windows 10 v20H2
    // ndis.sys PAGE:0xf8328, 0x1d2c0 bytes
    //
    _n9(sdk::unknown_ptr) uninitialize_feature_staging;
    
    // [wil_details_FeatureReporting_ReportVariantUsageToService]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x67c8c, 0x18b10 bytes
    //
    _o0(sdk::function<void(struct wil::details_feature_reporting_cache_t*, uint32_t, int32_t, int32_t, const struct nt::feature_logged_traits_t*, int32_t, uint8_t, uint32_t, enum wil::variant_reporting_kind_t, uint64_t)>*) details_feature_reporting_report_variant_usage_to_service;
    
    // [wil_details_RtlRegisterFeatureConfigurationChangeNotification]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x19384, 0x17e70 bytes
    // dxgi.dll .text:0x195e4, 0x17e70 bytes
    // dxgi.dll .text:0x14af4, 0x17e70 bytes
    //
    _o1(sdk::function<int32_t(sdk::function<void(void*)>*, void*, uint64_t*, void**)>*) details_rtl_register_feature_configuration_change_notification;
    
    // [wil_details_StagingConfig_FireNotification]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x46a44, 0x17e70 bytes
    // dxgi.dll .text:0x46b34, 0x17e70 bytes
    // dxgi.dll .text:0x47f04, 0x17e70 bytes
    //
    _o2(sdk::function<int32_t(struct wil::details_staging_config_t*, uint32_t, uint16_t, int32_t)>*) details_staging_config_fire_notification;
    
    // [wil_QueryFeatureState]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x467c8, 0x17e70 bytes
    // dxgi.dll .text:0x468b8, 0x17e70 bytes
    // dxgi.dll .text:0x47c88, 0x17e70 bytes
    //
    _o3(sdk::function<int32_t(struct wil::feature_state_t*, uint32_t, int32_t, enum wil::feature_store_t, int32_t*, int32_t*)>*) query_feature_state;
    
    // [wil_StagingConfig_RecordFeatureUsage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x468b8, 0x17e70 bytes
    // dxgi.dll .text:0x469a8, 0x17e70 bytes
    // dxgi.dll .text:0x47d78, 0x17e70 bytes
    //
    _o4(sdk::function<int32_t(uint32_t, uint32_t, int32_t)>*) staging_config_record_feature_usage;
    
    // [wil_details_GetNtDllModuleHandle]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x19654, 0x17e70 bytes
    // dxgi.dll .text:0x198b4, 0x17e70 bytes
    // dxgi.dll .text:0xb700, 0x18b10 bytes
    // dxgi.dll .text:0x14dc4, 0x17e70 bytes
    //
    _o5(sdk::function<struct win::hinstance_t*()>*) details_get_nt_dll_module_handle;
    
    // [wil_details_NtQueryWnfStateData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1956c, 0x17e70 bytes
    // dxgi.dll .text:0x197d4, 0x17e70 bytes
    // dxgi.dll .text:0xa0d0, 0x18b10 bytes
    // dxgi.dll .text:0x14ce4, 0x17e70 bytes
    //
    _o6(sdk::function<int32_t(const struct wil::wnf_state_name_t*, const struct wil::wnf_type_id_t*, const void*, uint32_t*, void*, uint32_t*)>*) details_nt_query_wnf_state_data;
    
    // [wil_details_NtUpdateWnfStateData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46968, 0x17e70 bytes
    // dxgi.dll .text:0x46a58, 0x17e70 bytes
    // dxgi.dll .text:0x51e30, 0x18b10 bytes
    // dxgi.dll .text:0x47e28, 0x17e70 bytes
    //
    _o7(sdk::function<int32_t(const struct wil::wnf_state_name_t*, const void*, uint32_t, const struct wil::wnf_type_id_t*, const void*, uint32_t, uint32_t)>*) details_nt_update_wnf_state_data;
    
    // [wil_details_WriteSRUMWnfUsageBuffer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46bf0, 0x17e70 bytes
    // dxgi.dll .text:0x46ce0, 0x17e70 bytes
    // dxgi.dll .text:0x51ed4, 0x18b10 bytes
    // dxgi.dll .text:0x480b0, 0x17e70 bytes
    //
    _o8(sdk::unknown/*none*/*) details_write_srum_wnf_usage_buffer;
    
    // [wil_RtlStagingConfig_RecordFeatureUsage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x46848, 0x17e70 bytes
    // dxgi.dll .text:0x46938, 0x17e70 bytes
    // dxgi.dll .text:0x51db8, 0x18b10 bytes
    // dxgi.dll .text:0x47d08, 0x17e70 bytes
    //
    _o9(sdk::function<int32_t(uint32_t, uint32_t, int32_t)>*) rtl_staging_config_record_feature_usage;
};
#include "magic/api.end.hpp"
