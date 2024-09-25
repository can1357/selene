#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::tib32_t), "_TEB32.NtTib", nt_tib, 0x0, 0xe0, true, 0x6305cfcf7fd248df)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.EnvironmentPointer", environment_pointer, 0xe0, 0x20, true, 0xa4363dd5f2ca2cca)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id32_t), "_TEB32.ClientId", client_id, 0x100, 0x40, true, 0xf27d00d698bc60ac)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ActiveRpcHandle", active_rpc_handle, 0x140, 0x20, true, 0xf258a99c45cc3e51)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ThreadLocalStoragePointer", thread_local_storage_pointer, 0x160, 0x20, true, 0x6a97644c98daf6af)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ProcessEnvironmentBlock", process_environment_block, 0x180, 0x20, true, 0x60f1a79aee344c76)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.LastErrorValue", last_error_value, 0x1a0, 0x20, true, 0xd0ce4686624ea427)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.CountOfOwnedCriticalSections", count_of_owned_critical_sections, 0x1c0, 0x20, true, 0xdd5fc7d4df8f6908)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.CsrClientThread", csr_client_thread, 0x1e0, 0x20, true, 0x98c5f12658e9bbe)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.Win32ThreadInfo", win32_thread_info, 0x200, 0x20, true, 0xd9941e6be8a62388)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 26>), "_TEB32.User32Reserved", user32_reserved, 0x220, 0x40, true, 0xb3286406a9d21559)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_TEB32.UserReserved", user_reserved, 0x560, 0xa0, true, 0xd55baf39070d6444)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.WOW32Reserved", wow32_reserved, 0x600, 0x20, true, 0x39d140d7791eafab)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.CurrentLocale", current_locale, 0x620, 0x20, true, 0xa4b62894a50da8ee)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.FpSoftwareStatusRegister", fp_software_status_register, 0x640, 0x20, true, 0xf8c04dc5ba230ea0)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_TEB32.ReservedForDebuggerInstrumentation", reserved_for_debugger_instrumentation, 0x660, 0x0, true, 0x76df17ad51ba4b9c)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 36>), "_TEB32.SystemReserved1", system_reserved1, 0x860, 0x40, true, 0xa4420cae94c4637d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_TEB32.WorkingOnBehalfTicket", working_on_behalf_ticket, 0xce0, 0x40, true, 0x6716001a0389d229)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TEB32.ExceptionCode", exception_code, 0xd20, 0x20, true, 0x6859d4d26b5891ad)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ActivationContextStackPointer", activation_context_stack_pointer, 0xd40, 0x20, true, 0x5cbcc1555bcddec)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.InstrumentationCallbackSp", instrumentation_callback_sp, 0xd60, 0x20, true, 0xea638213d900d84)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.InstrumentationCallbackPreviousPc", instrumentation_callback_previous_pc, 0xd80, 0x20, true, 0x7559c59e38513106)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.InstrumentationCallbackPreviousSp", instrumentation_callback_previous_sp, 0xda0, 0x20, true, 0x4b0b2d5b6f77b8aa)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB32.InstrumentationCallbackDisabled", instrumentation_callback_disabled, 0xdc0, 0x8, true, 0x7286827968074b82)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.TxFsContext", tx_fs_context, 0xe80, 0x20, true, 0xa34ac7b644d10906)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gdi_teb_batch32_t), "_TEB32.GdiTebBatch", gdi_teb_batch, 0xea0, 0x0, true, 0x3c0d6a52bfe297c8)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id32_t), "_TEB32.RealClientId", real_client_id, 0x35a0, 0x40, true, 0x12c7c326e88a132)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.GdiCachedProcessHandle", gdi_cached_process_handle, 0x35e0, 0x20, true, 0x180c820bf2fa0731)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.GdiClientPID", gdi_client_pid, 0x3600, 0x20, true, 0x759de19223511fad)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.GdiClientTID", gdi_client_tid, 0x3620, 0x20, true, 0x3542fb6dd2ca3a08)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.GdiThreadLocalInfo", gdi_thread_local_info, 0x3640, 0x20, true, 0x116846790b19fc72)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 62>), "_TEB32.Win32ClientInfo", win32_client_info, 0x3660, 0xc0, true, 0x33ccfae9403095ee)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 233>), "_TEB32.glDispatchTable", gl_dispatch_table, 0x3e20, 0x20, true, 0xbdff2aa877b92a0e)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 29>), "_TEB32.glReserved1", gl_reserved1, 0x5b40, 0xa0, true, 0x995c669235c6b211)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.glReserved2", gl_reserved2, 0x5ee0, 0x20, true, 0xdefc484ea9bc2fce)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.glSectionInfo", gl_section_info, 0x5f00, 0x20, true, 0x6d49f26bdd29871a)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.glSection", gl_section, 0x5f20, 0x20, true, 0xc01e7ca1062ede22)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.glTable", gl_table, 0x5f40, 0x20, true, 0x8651e52c9d9a9043)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.glCurrentRC", gl_current_rc, 0x5f60, 0x20, true, 0x56e622c4c60b7765)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.glContext", gl_context, 0x5f80, 0x20, true, 0x754bd6cf87ff403)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.LastStatusValue", last_status_value, 0x5fa0, 0x20, true, 0x188447dde3c5dcd9)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view32), "_TEB32.StaticUnicodeString", static_unicode_string, 0x5fc0, 0x40, true, 0x4e294c1db7cf8929)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 261>), "_TEB32.StaticUnicodeBuffer", static_unicode_buffer, 0x6000, 0x50, true, 0x1623bb6ed777eff9)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.DeallocationStack", deallocation_stack, 0x7060, 0x20, true, 0x4c3cd89474b1f4cd)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_TEB32.TlsSlots", tls_slots, 0x7080, 0x0, true, 0xda0b58f7041e5ca0)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry32_t), "_TEB32.TlsLinks", tls_links, 0x7880, 0x40, true, 0x4f8d53eda3941f47)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.Vdm", vdm, 0x78c0, 0x20, true, 0x5b7d5abb1d2b235c)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ReservedForNtRpc", reserved_for_nt_rpc, 0x78e0, 0x20, true, 0xc6180e6e5ac082bd)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_TEB32.DbgSsReserved", dbg_ss_reserved, 0x7900, 0x40, true, 0x158c0a0a0441ea6d)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.HardErrorMode", hard_error_mode, 0x7940, 0x20, true, 0x5a33de191643481c)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 9>), "_TEB32.Instrumentation", instrumentation, 0x7960, 0x20, true, 0xbb9fbcd2c94725d1)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TEB32.ActivityId", activity_id, 0x7a80, 0x80, true, 0x52bcd8a3dd466635)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.SubProcessTag", sub_process_tag, 0x7b00, 0x20, true, 0xb1511b5eb26c6a95)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.PerflibData", perflib_data, 0x7b20, 0x20, true, 0x938e8a07b4463416)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.EtwTraceData", etw_trace_data, 0x7b40, 0x20, true, 0x51f91b068ee759bf)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.WinSockData", win_sock_data, 0x7b60, 0x20, true, 0xe4e1a5cf627cb71d)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.GdiBatchCount", gdi_batch_count, 0x7b80, 0x20, true, 0xd6e4b3c88b2f606f)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_number_t), "_TEB32.CurrentIdealProcessor", current_ideal_processor, 0x7ba0, 0x20, true, 0x2dd8e2690d003046)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.IdealProcessorValue", ideal_processor_value, 0x7ba0, 0x20, true, 0xf96bc9755efab6b2)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB32.IdealProcessor", ideal_processor, 0x7bb8, 0x8, true, 0xb9c7ce364667e133)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.GuaranteedStackBytes", guaranteed_stack_bytes, 0x7bc0, 0x20, true, 0xf7d44f9312f0fb27)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ReservedForPerf", reserved_for_perf, 0x7be0, 0x20, true, 0x70d3c9ebec7b8fcd)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ReservedForOle", reserved_for_ole, 0x7c00, 0x20, true, 0x90bd36305cb9cf87)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.WaitingOnLoaderLock", waiting_on_loader_lock, 0x7c20, 0x20, true, 0x9f8c78cbad2cd3ed)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.SavedPriorityState", saved_priority_state, 0x7c40, 0x20, true, 0x5b9a70dd8b3be434)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ReservedForCodeCoverage", reserved_for_code_coverage, 0x7c60, 0x20, true, 0x610eb53f991434ab)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ThreadPoolData", thread_pool_data, 0x7c80, 0x20, true, 0x952dda67995d689f)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.TlsExpansionSlots", tls_expansion_slots, 0x7ca0, 0x20, true, 0x13ba218527e7d6f)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.MuiGeneration", mui_generation, 0x7cc0, 0x20, true, 0x5d1919773ba06b99)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.IsImpersonating", is_impersonating, 0x7ce0, 0x20, true, 0xf17f047973a028d)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.NlsCache", nls_cache, 0x7d00, 0x20, true, 0x54d5567cd8ac3fac)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.pShimData", p_shim_data, 0x7d20, 0x20, true, 0x6c3c004c170b773e)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.CurrentTransactionHandle", current_transaction_handle, 0x7d60, 0x20, true, 0xe2bc65b45b64d2ea)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ActiveFrame", active_frame, 0x7d80, 0x20, true, 0x3c05ea19b70199da)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.FlsData", fls_data, 0x7da0, 0x20, true, 0xfca707c4f54a1f49)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.PreferredLanguages", preferred_languages, 0x7dc0, 0x20, true, 0x4c41fbe1adf0dc1)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.UserPrefLanguages", user_pref_languages, 0x7de0, 0x20, true, 0x7adc3607a6e74728)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.MergedPrefLanguages", merged_pref_languages, 0x7e00, 0x20, true, 0x698eafb2bf062ee6)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.MuiImpersonation", mui_impersonation, 0x7e20, 0x20, true, 0x2189a99650957a32)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint16_t), "_TEB32.CrossTebFlags", cross_teb_flags, 0x7e40, 0x10, true, 0x1da10a2b4d42fce8)
#define _m080 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint16_t), "_TEB32.SpareCrossTebBits", spare_cross_teb_bits, 0x7e40, 0x10, true, 0x33d371b9c41d3a76, 16, uint16_t)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TEB32.SameTebFlags", same_teb_flags, 0x7e50, 0x10, true, 0xa3a8e122e325e9d4)
#define _m082 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.SafeThunkCall", safe_thunk_call, 0x7e50, 0x1, true, 0xf817a006931e95c, 1, uint16_t)
#define _m083 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.InDebugPrint", in_debug_print, 0x7e51, 0x1, true, 0xfdf49e4124093b52, 1, uint16_t)
#define _m084 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.HasFiberData", has_fiber_data, 0x7e52, 0x1, true, 0x51bc20b0ae688c7f, 1, uint16_t)
#define _m085 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.SkipThreadAttach", skip_thread_attach, 0x7e53, 0x1, true, 0x4ebd4bd4dfcb1a7c, 1, uint16_t)
#define _m086 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.WerInShipAssertCode", wer_in_ship_assert_code, 0x7e54, 0x1, true, 0x515529c5d8838123, 1, uint16_t)
#define _m087 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.RanProcessInit", ran_process_init, 0x7e55, 0x1, true, 0x31da4c6fb9e49400, 1, uint16_t)
#define _m088 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.ClonedThread", cloned_thread, 0x7e56, 0x1, true, 0x94d2000d629bf5f6, 1, uint16_t)
#define _m089 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.SuppressDebugMsg", suppress_debug_msg, 0x7e57, 0x1, true, 0x75437af3421ed78, 1, uint16_t)
#define _m090 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.DisableUserStackWalk", disable_user_stack_walk, 0x7e58, 0x1, true, 0xf56a5b0c158dc692, 1, uint16_t)
#define _m091 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.RtlExceptionAttached", rtl_exception_attached, 0x7e59, 0x1, true, 0xb75abcbce34aebc3, 1, uint16_t)
#define _m092 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.InitialThread", initial_thread, 0x7e5a, 0x1, true, 0xae498ecb8f69ee95, 1, uint16_t)
#define _m093 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.SessionAware", session_aware, 0x7e5b, 0x1, true, 0x1d84428e57625c04, 1, uint16_t)
#define _m094 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.LoadOwner", load_owner, 0x7e5c, 0x1, true, 0x60b0eabb9c11684b, 1, uint16_t)
#define _m095 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.LoaderWorker", loader_worker, 0x7e5d, 0x1, true, 0xe42bac8b8e0161a0, 1, uint16_t)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.TxnScopeEnterCallback", txn_scope_enter_callback, 0x7e60, 0x20, true, 0x9d74fd2e6b721c6d)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.TxnScopeExitCallback", txn_scope_exit_callback, 0x7e80, 0x20, true, 0xcfcf2505c7573fe6)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.TxnScopeContext", txn_scope_context, 0x7ea0, 0x20, true, 0x931a3d36f52fd191)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.LockCount", lock_count, 0x7ec0, 0x20, true, 0x13051f97cc4c7801)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TEB32.WowTebOffset", wow_teb_offset, 0x7ee0, 0x20, true, 0xb7b8665bec4ee9bb)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ResourceRetValue", resource_ret_value, 0x7f00, 0x20, true, 0x2416b650a0c2cc44)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ReservedForWdf", reserved_for_wdf, 0x7f20, 0x20, true, 0x42c5964d3679c02e)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB32.ReservedForCrt", reserved_for_crt, 0x7f40, 0x40, true, 0x85a3db8053438931)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TEB32.EffectiveContainerId", effective_container_id, 0x7f80, 0x80, true, 0xfc170f1b62d46ee6)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_TEB32.PlaceholderCompatibilityMode", placeholder_compatibility_mode, 0xba0, 0x8, true, 0x48bbb62e97e68852)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB32.PlaceholderHydrationAlwaysExplicit", placeholder_hydration_always_explicit, 0xba8, 0x8, true, 0xb0b6cd78bb9b0874)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.ProxiedProcessId", proxied_process_id, 0xc00, 0x20, true, 0xd5c98bbf653e551e)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_stack32_t), "_TEB32._ActivationStack", activation_stack, 0xc20, 0xc0, true, 0xe31387fb174a2e7)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.HeapData", heap_data, 0x7d40, 0x20, true, 0x1a5170e3d196a041)
#define _m110 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.SkipLoaderInit", skip_loader_init, 0x7e5e, 0x1, true, 0x1bb119369aca9973, 1, uint16_t)
#define _m111 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB32.SkipFileAPIBrokering", skip_file_api_brokering, 0x0, 0x0, false, 0xe0bba3802ce880c1, 1, uint16_t)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB32.LastSleepCounter", last_sleep_counter, 0x0, 0x0, false, 0xea32766239380f6e)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB32.SpinCallCount", spin_call_count, 0x0, 0x0, false, 0x286118667b75e8d8)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB32.ExtendedFeatureDisableMask", extended_feature_disable_mask, 0x0, 0x0, false, 0x13789e5455f0e11f)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TEB32.HeapVirtualAffinity", heap_virtual_affinity, 0x0, 0x0, false, 0x67a4489102ae9ae5)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TEB32.LowFragHeapDataSlot", low_frag_heap_data_slot, 0x0, 0x0, false, 0x9b0049be48b82d98)
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
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m096
#define _m097
#define _m098
#define _m099
#define _m100
#define _m101
#define _m102
#define _m103
#define _m104
#define _m105
#define _m106
#define _m107
#define _m108
#define _m109
#define _m110
#define _m111
#define _m112
#define _m113
#define _m114
#define _m115
#define _m116
#endif