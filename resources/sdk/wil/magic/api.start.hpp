#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(...)>*), "$wil_details_EvaluateFeatureDependencies$ntoskrnl.exe", 0x5c6638, 0x0, true, 0x3a0c149d26f23a62)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers$ntoskrnl.exe", 0xa355e8, 0x0, true, 0x6c01b3e8c7dabda6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$wil_InitializeFeatureStagingFromBuffers$ntoskrnl.exe", 0x0, 0x0, false, 0x8762889e2ec68c04)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$wil_RegisterFeatureStagingChangeNotification$ntoskrnl.exe", 0x5c6564, 0x0, true, 0x536397eba903f8c9)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(int32_t, const struct rtl::feature_configuration_t*, union wil::details_feature_state_cache_t*)>*), "$wil_details_BuildFeatureStateCacheFromQueryResults$ntoskrnl.exe", 0x5c65c4, 0x0, true, 0xf382c7193c11c7d5)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<union wil::details_feature_state_cache_t(union wil::details_feature_state_cache_t*, const struct wil::details_feature_descriptor_t*)>*), "$wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState$ntoskrnl.exe", 0x5c66e4, 0x0, true, 0x8ed1627e9cddc7b)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<union wil::details_feature_state_cache_t(union wil::details_feature_state_cache_t*, union wil::details_feature_state_cache_t, const struct wil::details_feature_descriptor_t*)>*), "$wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState$ntoskrnl.exe", 0x5c6718, 0x0, true, 0xa5a622bba3ab1717)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$wil_details_featureChangeNotification$ntoskrnl.exe", 0xc4c3b0, 0x0, true, 0xb36f096edba77208)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$wil_details_featureDescriptors_a$ntoskrnl.exe", 0xc8d18, 0x0, true, 0x4e8153202d38971b)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$wil_details_featureDescriptors_z$ntoskrnl.exe", 0xc8d90, 0x0, true, 0x206296bd926e7d23)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<union wil::details_feature_state_cache_t(union wil::details_feature_state_cache_t*, union wil::details_feature_state_cache_t, const struct wil::details_feature_descriptor_t*)>*), "$wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState$ntoskrnl.exe", 0x3ebe9c, 0x0, true, 0x54c4ff9bd787ef63)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$wil_details_OnFeatureConfigurationChange$ntoskrnl.exe", 0x5c67d0, 0x0, true, 0xaf593a5d2939e52a)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct wil::details_staging_config_t*)>*), "$wil_details_StagingConfig_AreAnyFeaturesConfigured$ntoskrnl.exe", 0x50c5c0, 0x0, true, 0xd3cb5f6c447c7c6f)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct wil::wnf_state_name_t*), "$__WIL_WNF_WIL_MACHINE_FEATURE_STORE$ntoskrnl.exe", 0x1e578, 0x0, true, 0x2df30686a5b0bfad)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct wil::wnf_state_name_t*), "$__WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED$ntoskrnl.exe", 0x33008, 0x0, true, 0xcb02bead685fd67f)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct wil::wnf_state_name_t*), "$__WIL_WNF_WIL_USER_FEATURE_STORE$ntoskrnl.exe", 0x33000, 0x0, true, 0xbfb4ddfaed137f06)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(struct wil::wnf_state_name_t*), "$__WIL_WNF_WIL_USER_FEATURE_STORE_MODIFIED$ntoskrnl.exe", 0x32ff8, 0x0, true, 0x51dff20a6e4de5f7)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<union wil::details_feature_state_cache_t(union wil::details_feature_state_cache_t*, const struct wil::details_feature_descriptor_t*)>*/*types differ*/), "$wil_details_FeatureStateCache_GetCachedFeatureEnabledState$ntoskrnl.exe", 0x389044, 0x0, true, 0x7d4bd8b39839ab02)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<union wil::details_feature_state_cache_t(const struct wil::details_feature_descriptor_t*, int32_t*)>*/*types differ*/), "$wil_details_GetCurrentFeatureEnabledState$ntoskrnl.exe", 0x322ad0, 0x0, true, 0xbda2e1befc83d19b)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$wil_UninitializeFeatureStaging$ndis.sys", 0xf8328, 0x0, true, 0x7fc8e5a4cefe4f5d)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct wil::details_feature_reporting_cache_t*, uint32_t, int32_t, int32_t, const struct nt::feature_logged_traits_t*, int32_t, uint8_t, uint32_t, enum wil::variant_reporting_kind_t, uint64_t)>*), "$wil_details_FeatureReporting_ReportVariantUsageToService$dxgi.dll", 0x0, 0x0, false, 0x6432b00acafa4cab)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<void(void*)>*, void*, uint64_t*, void**)>*), "$wil_details_RtlRegisterFeatureConfigurationChangeNotification$dxgi.dll", 0x14af4, 0x0, true, 0x621167c47fcaf2e1)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct wil::details_staging_config_t*, uint32_t, uint16_t, int32_t)>*), "$wil_details_StagingConfig_FireNotification$dxgi.dll", 0x47f04, 0x0, true, 0xe900507f6316ee4e)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct wil::feature_state_t*, uint32_t, int32_t, enum wil::feature_store_t, int32_t*, int32_t*)>*), "$wil_QueryFeatureState$dxgi.dll", 0x47c88, 0x0, true, 0xe5f4d82ad7eb3cc1)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, int32_t)>*), "$wil_StagingConfig_RecordFeatureUsage$dxgi.dll", 0x47d78, 0x0, true, 0xa52218a57b7f9fec)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<struct win::hinstance_t*()>*), "$wil_details_GetNtDllModuleHandle$dxgi.dll", 0x14dc4, 0x0, true, 0xb330a017e9df4a04)
#define _o6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct wil::wnf_state_name_t*, const struct wil::wnf_type_id_t*, const void*, uint32_t*, void*, uint32_t*)>*), "$wil_details_NtQueryWnfStateData$dxgi.dll", 0x14ce4, 0x0, true, 0xeccd738d5e37a550)
#define _o7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(const struct wil::wnf_state_name_t*, const void*, uint32_t, const struct wil::wnf_type_id_t*, const void*, uint32_t, uint32_t)>*), "$wil_details_NtUpdateWnfStateData$dxgi.dll", 0x47e28, 0x0, true, 0xd822aaaae6967af0)
#define _o8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown/*none*/*), "$wil_details_WriteSRUMWnfUsageBuffer$dxgi.dll", 0x480b0, 0x0, true, 0x598ed264e3b29eb6)
#define _o9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, int32_t)>*), "$wil_RtlStagingConfig_RecordFeatureUsage$dxgi.dll", 0x47d08, 0x0, true, 0xc9a1b58c0d62facf)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#define _n6(...) __VA_ARGS__
#define _n7(...) __VA_ARGS__
#define _n8(...) __VA_ARGS__
#define _n9(...) __VA_ARGS__
#define _o0(...) __VA_ARGS__
#define _o1(...) __VA_ARGS__
#define _o2(...) __VA_ARGS__
#define _o3(...) __VA_ARGS__
#define _o4(...) __VA_ARGS__
#define _o5(...) __VA_ARGS__
#define _o6(...) __VA_ARGS__
#define _o7(...) __VA_ARGS__
#define _o8(...) __VA_ARGS__
#define _o9(...) __VA_ARGS__
#endif