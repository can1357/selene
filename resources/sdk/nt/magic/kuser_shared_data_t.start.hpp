#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.TickCountLowDeprecated", tick_count_low_deprecated, 0x0, 0x20, true, 0xca78a40560573998)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.TickCountMultiplier", tick_count_multiplier, 0x20, 0x20, true, 0xac0a429b65280328)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile struct nt::ksystem_time_t), "_KUSER_SHARED_DATA.InterruptTime", interrupt_time, 0x40, 0x60, true, 0xca2c1243f7a59b74)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile struct nt::ksystem_time_t), "_KUSER_SHARED_DATA.SystemTime", system_time, 0xa0, 0x60, true, 0x74340368a3b3cea8)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile struct nt::ksystem_time_t), "_KUSER_SHARED_DATA.TimeZoneBias", time_zone_bias, 0x100, 0x60, true, 0x2c5e283d41109a25)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KUSER_SHARED_DATA.ImageNumberLow", image_number_low, 0x160, 0x10, true, 0xcda5fcb777fa78f5)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KUSER_SHARED_DATA.ImageNumberHigh", image_number_high, 0x170, 0x10, true, 0x83d3ca965c73e8c5)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_KUSER_SHARED_DATA.NtSystemRoot", nt_system_root, 0x180, 0x40, true, 0xb7927c495d21040a)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.MaxStackTraceDepth", max_stack_trace_depth, 0x11c0, 0x20, true, 0x730fcf7b88b08c82)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.CryptoExponent", crypto_exponent, 0x11e0, 0x20, true, 0x1f574e20691065fc)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.TimeZoneId", time_zone_id, 0x1200, 0x20, true, 0xa2205af4c239524)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.LargePageMinimum", large_page_minimum, 0x1220, 0x20, true, 0x64ba464c6e7eb683)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.AitSamplingValue", ait_sampling_value, 0x1240, 0x20, true, 0x7a2876b25a68272a)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.AppCompatFlag", app_compat_flag, 0x1260, 0x20, true, 0xb42d433ff2e520e9)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUSER_SHARED_DATA.RNGSeedVersion", rng_seed_version, 0x1280, 0x40, true, 0x16b569fe1113f0db)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.GlobalValidationRunlevel", global_validation_runlevel, 0x12c0, 0x20, true, 0xdc0196a4ce540c3a)
#define _m016 _SDK_NONVOL_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int32_t), "_KUSER_SHARED_DATA.TimeZoneBiasStamp", time_zone_bias_stamp, 0x12e0, 0x20, true, 0xc6ad01b4c60d941f, 32, uint32_t)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.NtBuildNumber", nt_build_number, 0x1300, 0x20, true, 0xc62cec8820e3a445)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum os::product_type_t), "_KUSER_SHARED_DATA.NtProductType", nt_product_type, 0x1320, 0x20, true, 0x65a37040f96970b3)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KUSER_SHARED_DATA.ProductTypeIsValid", product_type_is_valid, 0x1340, 0x8, true, 0x9fc11065ce55afda)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KUSER_SHARED_DATA.NativeProcessorArchitecture", native_processor_architecture, 0x1350, 0x10, true, 0xa61fe3e3ecae29da)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.NtMajorVersion", nt_major_version, 0x1360, 0x20, true, 0x93b507f4911f57a8)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.NtMinorVersion", nt_minor_version, 0x1380, 0x20, true, 0x10cc765a8ad97143)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_KUSER_SHARED_DATA.ProcessorFeatures", processor_features, 0x13a0, 0x0, true, 0x7b9ae95a0feb201c)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KUSER_SHARED_DATA.TimeSlip", time_slip, 0x15e0, 0x20, true, 0xfa8dae7cf09e2926)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::alternative_architecture_type_t), "_KUSER_SHARED_DATA.AlternativeArchitecture", alternative_architecture, 0x1600, 0x20, true, 0x29aaf7c556a5de06)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.BootId", boot_id, 0x1620, 0x20, true, 0xc00bf0ee77cb492c)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KUSER_SHARED_DATA.SystemExpirationDate", system_expiration_date, 0x1640, 0x40, true, 0xee9377db377e452a)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.SuiteMask", suite_mask, 0x1680, 0x20, true, 0x9354b3fe8bdcac7a)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KUSER_SHARED_DATA.KdDebuggerEnabled", kd_debugger_enabled, 0x16a0, 0x8, true, 0xae6d2527ba052199)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KUSER_SHARED_DATA.MitigationPolicies", mitigation_policies, 0x16a8, 0x8, true, 0x530b38cf8d4d0f1d)
#define _m031 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_KUSER_SHARED_DATA.NXSupportPolicy", nx_support_policy, 0x16a8, 0x2, true, 0x137a321fb3b83720, 2, uint8_t)
#define _m032 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_KUSER_SHARED_DATA.SEHValidationPolicy", seh_validation_policy, 0x16aa, 0x2, true, 0xc382ce7c3b2c0d45, 2, uint8_t)
#define _m033 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_KUSER_SHARED_DATA.CurDirDevicesSkippedForDlls", cur_dir_devices_skipped_for_dlls, 0x16ac, 0x2, true, 0x7785c54789fce335, 2, uint8_t)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KUSER_SHARED_DATA.ActiveConsoleId", active_console_id, 0x16c0, 0x20, true, 0xf12ff02cb994436)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KUSER_SHARED_DATA.DismountCount", dismount_count, 0x16e0, 0x20, true, 0x8e71172e3be43d09)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.ComPlusPackage", com_plus_package, 0x1700, 0x20, true, 0xf01b43510b62a358)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.LastSystemRITEventTickCount", last_system_rit_event_tick_count, 0x1720, 0x20, true, 0x37cc31ab27c3e024)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.NumberOfPhysicalPages", number_of_physical_pages, 0x1740, 0x20, true, 0x3c5899a3b2182fbe)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KUSER_SHARED_DATA.SafeBootMode", safe_boot_mode, 0x1760, 0x8, true, 0x623634d1db4f2b19)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KUSER_SHARED_DATA.VirtualizationFlags", virtualization_flags, 0x1768, 0x8, true, 0x99992ca223e98c3c)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.SharedDataFlags", shared_data_flags, 0x1780, 0x20, true, 0x730b3fc4a243ffef)
#define _m042 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgErrorPortPresent", dbg_error_port_present, 0x1780, 0x1, true, 0xd86628e4d18ae9d9, 1, uint32_t)
#define _m043 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgElevationEnabled", dbg_elevation_enabled, 0x1781, 0x1, true, 0xc3787a7593b0e7f5, 1, uint32_t)
#define _m044 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgVirtEnabled", dbg_virt_enabled, 0x1782, 0x1, true, 0x5a2cee5daeb1a7b5, 1, uint32_t)
#define _m045 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgInstallerDetectEnabled", dbg_installer_detect_enabled, 0x1783, 0x1, true, 0x52071858535c098d, 1, uint32_t)
#define _m046 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgLkgEnabled", dbg_lkg_enabled, 0x1784, 0x1, true, 0xc4e5f59ffc334d23, 1, uint32_t)
#define _m047 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgDynProcessorEnabled", dbg_dyn_processor_enabled, 0x1785, 0x1, true, 0x2431be9179ca1db6, 1, uint32_t)
#define _m048 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgConsoleBrokerEnabled", dbg_console_broker_enabled, 0x1786, 0x1, true, 0x442098330afb79b, 1, uint32_t)
#define _m049 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgSecureBootEnabled", dbg_secure_boot_enabled, 0x1787, 0x1, true, 0xaec5f7bcac1dec1f, 1, uint32_t)
#define _m050 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgMultiSessionSku", dbg_multi_session_sku, 0x1788, 0x1, true, 0xde3b674273af25fe, 1, uint32_t)
#define _m051 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgMultiUsersInSessionSku", dbg_multi_users_in_session_sku, 0x1789, 0x1, true, 0x8c46a1c16872edd1, 1, uint32_t)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_KUSER_SHARED_DATA.DataFlagsPad", data_flags_pad, 0x17a0, 0x20, true, 0x8f362e797b1323f9)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUSER_SHARED_DATA.TestRetInstruction", test_ret_instruction, 0x17c0, 0x40, true, 0xd5408eda3f79fb2b)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KUSER_SHARED_DATA.QpcFrequency", qpc_frequency, 0x1800, 0x40, true, 0x9a4b1bf904666127)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.SystemCall", system_call, 0x1840, 0x20, true, 0x9afc1d6fc65aeaa1)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_KUSER_SHARED_DATA.SystemCallPad", system_call_pad, 0x1880, 0x80, true, 0xd1d26eba96ae04e5)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile struct nt::ksystem_time_t), "_KUSER_SHARED_DATA.TickCount", tick_count, 0x1900, 0x60, true, 0xa0df97367f212005)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_KUSER_SHARED_DATA.TickCountQuad", tick_count_quad, 0x1900, 0x40, true, 0xd5a931530caee9a5)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_KUSER_SHARED_DATA.ReservedTickCountOverlay", reserved_tick_count_overlay, 0x1900, 0x60, true, 0xa9c270ccc5202059)
#define _m060 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_KUSER_SHARED_DATA.TickCountPad", tick_count_pad, 0x1960, 0x20, true, 0x45704b60d794ba6e)
#define _m061 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.Cookie", cookie, 0x1980, 0x20, true, 0x3b43c1c36909691b)
#define _m062 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_KUSER_SHARED_DATA.CookiePad", cookie_pad, 0x19a0, 0x20, true, 0x7aaf87046f14cce8)
#define _m063 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KUSER_SHARED_DATA.ConsoleSessionForegroundProcessId", console_session_foreground_process_id, 0x19c0, 0x40, true, 0xd0234d082c271dec)
#define _m064 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUSER_SHARED_DATA.TimeUpdateLock", time_update_lock, 0x1a00, 0x40, true, 0x6c2221b7b76d82b4)
#define _m065 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUSER_SHARED_DATA.BaselineSystemTimeQpc", baseline_system_time_qpc, 0x1a40, 0x40, true, 0x19032b554be17d55)
#define _m066 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUSER_SHARED_DATA.BaselineInterruptTimeQpc", baseline_interrupt_time_qpc, 0x1a80, 0x40, true, 0xfc67b77646fc06a1)
#define _m067 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUSER_SHARED_DATA.QpcSystemTimeIncrement", qpc_system_time_increment, 0x1ac0, 0x40, true, 0x8e8a1727bec3e776)
#define _m068 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUSER_SHARED_DATA.QpcInterruptTimeIncrement", qpc_interrupt_time_increment, 0x1b00, 0x40, true, 0xfecc0cc68bb10f3c)
#define _m069 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KUSER_SHARED_DATA.QpcSystemTimeIncrementShift", qpc_system_time_increment_shift, 0x1b40, 0x8, true, 0x9712d56c4c31fe1f)
#define _m070 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KUSER_SHARED_DATA.QpcInterruptTimeIncrementShift", qpc_interrupt_time_increment_shift, 0x1b48, 0x8, true, 0x67bb88a9c27924bb)
#define _m071 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KUSER_SHARED_DATA.UnparkedProcessorCount", unparked_processor_count, 0x1b50, 0x10, true, 0x1f79ddee8d7cab34)
#define _m072 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_KUSER_SHARED_DATA.EnclaveFeatureMask", enclave_feature_mask, 0x1b60, 0x80, true, 0x80e172d56b249730)
#define _m073 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 16>), "_KUSER_SHARED_DATA.UserModeGlobalLogger", user_mode_global_logger, 0x1c00, 0x0, true, 0xa8e407031a7f4bc2)
#define _m074 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.ImageFileExecutionOptions", image_file_execution_options, 0x1d00, 0x20, true, 0x4aae38b4a3f6f7e1)
#define _m075 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.LangGenerationCount", lang_generation_count, 0x1d20, 0x20, true, 0x30c18d9f39cc4818)
#define _m076 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_KUSER_SHARED_DATA.InterruptTimeBias", interrupt_time_bias, 0x1d80, 0x40, true, 0x6d9b35d6599cacfd)
#define _m077 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_KUSER_SHARED_DATA.QpcBias", qpc_bias, 0x1dc0, 0x40, true, 0xfb37729de82a0ff0)
#define _m078 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.ActiveProcessorCount", active_processor_count, 0x1e00, 0x20, true, 0x6b2e8b1aa3577bce)
#define _m079 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KUSER_SHARED_DATA.ActiveGroupCount", active_group_count, 0x1e20, 0x8, true, 0x1b202ee76495386)
#define _m080 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KUSER_SHARED_DATA.QpcData", qpc_data, 0x1e30, 0x10, true, 0x816eeca8ef3733fd)
#define _m081 _SDK_NONVOL_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint8_t), "_KUSER_SHARED_DATA.QpcBypassEnabled", qpc_bypass_enabled, 0x1e30, 0x8, true, 0x155435b5f077b0a8, 0, uint8_t)
#define _m082 _SDK_NONVOL_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint8_t), "_KUSER_SHARED_DATA.QpcShift", qpc_shift, 0x1e38, 0x8, true, 0xa47a476caef510aa, 0, uint8_t)
#define _m083 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KUSER_SHARED_DATA.TimeZoneBiasEffectiveStart", time_zone_bias_effective_start, 0x1e40, 0x40, true, 0x4736604f222d3059)
#define _m084 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KUSER_SHARED_DATA.TimeZoneBiasEffectiveEnd", time_zone_bias_effective_end, 0x1e80, 0x40, true, 0x24c15909e4ac8aa2)
#define _m085 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::xstate_configuration_t), "_KUSER_SHARED_DATA.XState", x_state, 0x1ec0, 0xc0, true, 0x85c84d1605538b2d)
#define _m086 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KUSER_SHARED_DATA.CyclesPerYield", cycles_per_yield, 0x16b0, 0x10, true, 0xe5b6500fe6d6acd0)
#define _m087 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.DbgStateSeparationEnabled", dbg_state_separation_enabled, 0x178a, 0x1, true, 0x3ef5fc250f6ea009, 1, uint32_t)
#define _m088 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.TelemetryCoverageRound", telemetry_coverage_round, 0x1be0, 0x20, true, 0x5384b37cd06c4b36)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksystem_time_t), "_KUSER_SHARED_DATA.FeatureConfigurationChangeStamp", feature_configuration_change_stamp, 0x3880, 0x60, true, 0xc2f3eb41df935874)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_user_cet_available_environments_t), "_KUSER_SHARED_DATA.UserCetAvailableEnvironments", user_cet_available_environments, 0x1860, 0x20, true, 0x1e8677837aa44d6d)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KUSER_SHARED_DATA.UserPointerAuthMask", user_pointer_auth_mask, 0x0, 0x0, false, 0x4c98e9a69d851bb0)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.SystemCallPad0", system_call_pad0, 0x0, 0x0, false, 0x6903c83437b5e873)
#define _m90 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KUSER_SHARED_DATA.UserCetAvailableEnvironments.AllFlags", all_flags, 0x0, 0x20, true, 0x1183777add900eb0)
#define _m91 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.UserCetAvailableEnvironments.Win32Process", win32_process, 0x0, 0x1, true, 0x2440ccd4b28162c2, 1, uint32_t)
#define _m92 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.UserCetAvailableEnvironments.Sgx2Enclave", sgx2_enclave, 0x1, 0x1, true, 0x9b1ff51cda090421, 1, uint32_t)
#define _m93 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KUSER_SHARED_DATA.UserCetAvailableEnvironments.VbsBasicEnclave", vbs_basic_enclave, 0x2, 0x1, true, 0x452376a5ce7c8d24, 1, uint32_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#define _m088
#define _m089
#define _m094
#define _m095
#define _m096
#define _m90
#define _m91
#define _m92
#define _m93
#endif