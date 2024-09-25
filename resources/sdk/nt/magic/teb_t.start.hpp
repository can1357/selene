#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct os::tib_t), "_TEB.NtTib", nt_tib, 0x0, 0xc0, true, 0xa9168a08f06bc7d5)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.EnvironmentPointer", environment_pointer, 0x1c0, 0x40, true, 0xa67235eced5e8914)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_TEB.ClientId", client_id, 0x200, 0x80, true, 0xff6fc60cc6c0315)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.ActiveRpcHandle", active_rpc_handle, 0x280, 0x40, true, 0x85d193d292380131)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.ThreadLocalStoragePointer", thread_local_storage_pointer, 0x2c0, 0x40, true, 0xfab20c8959c8c3d8)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::peb_t*), "_TEB.ProcessEnvironmentBlock", process_environment_block, 0x300, 0x40, true, 0xeb3bfa8bcbd58c80)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.LastErrorValue", last_error_value, 0x340, 0x20, true, 0xc8f51238708fcf88)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.CountOfOwnedCriticalSections", count_of_owned_critical_sections, 0x360, 0x20, true, 0xbe54f2b8f23b4656)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.CsrClientThread", csr_client_thread, 0x380, 0x40, true, 0xd766b9e26f19c39d)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.Win32ThreadInfo", win32_thread_info, 0x3c0, 0x40, true, 0xc545b329ebfa3cc)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 26>), "_TEB.User32Reserved", user32_reserved, 0x400, 0x40, true, 0xe80dd6d355b4cbbe)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_TEB.UserReserved", user_reserved, 0x740, 0xa0, true, 0xa16ef106c7d8880e)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.WOW32Reserved", wow32_reserved, 0x800, 0x40, true, 0xfd8bcd7e5e2b2fca)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.CurrentLocale", current_locale, 0x840, 0x20, true, 0x26e991932510ec90)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.FpSoftwareStatusRegister", fp_software_status_register, 0x860, 0x20, true, 0x9d3cccdf3d60d4d9)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 16>), "_TEB.ReservedForDebuggerInstrumentation", reserved_for_debugger_instrumentation, 0x880, 0x0, true, 0x9850288a93b3918e)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 30>), "_TEB.SystemReserved1", system_reserved1, 0xc80, 0x80, true, 0xf3594e15220c658c)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_TEB.WorkingOnBehalfTicket", working_on_behalf_ticket, 0x15c0, 0x40, true, 0x455363af1dcc3d17)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_TEB.ExceptionCode", exception_code, 0x1600, 0x20, true, 0x3a2efd6b556ae707)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_stack_t*), "_TEB.ActivationContextStackPointer", activation_context_stack_pointer, 0x1640, 0x40, true, 0xec7546fe9ba4f5ff)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB.InstrumentationCallbackSp", instrumentation_callback_sp, 0x1680, 0x40, true, 0x9037953ee2ff59aa)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB.InstrumentationCallbackPreviousPc", instrumentation_callback_previous_pc, 0x16c0, 0x40, true, 0xff325139aed1def2)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB.InstrumentationCallbackPreviousSp", instrumentation_callback_previous_sp, 0x1700, 0x40, true, 0xc1716122d3312d90)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.TxFsContext", tx_fs_context, 0x1740, 0x20, true, 0x99636e99e79b59c7)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB.InstrumentationCallbackDisabled", instrumentation_callback_disabled, 0x1760, 0x8, true, 0x675f3202b3fa70c4)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::gdi_teb_batch_t), "_TEB.GdiTebBatch", gdi_teb_batch, 0x1780, 0x40, true, 0x540452dd2003b4eb)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_TEB.RealClientId", real_client_id, 0x3ec0, 0x80, true, 0xe06fca8b1caf1c0)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.GdiCachedProcessHandle", gdi_cached_process_handle, 0x3f40, 0x40, true, 0x29577c7e59671cb5)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.GdiClientPID", gdi_client_pid, 0x3f80, 0x20, true, 0xb99d627708aa6ff1)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.GdiClientTID", gdi_client_tid, 0x3fa0, 0x20, true, 0x5fbfdfd4c2a6138)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.GdiThreadLocalInfo", gdi_thread_local_info, 0x3fc0, 0x40, true, 0x6109ce62f542dac2)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 62>), "_TEB.Win32ClientInfo", win32_client_info, 0x4000, 0x80, true, 0xefd1e4040ed84fcb)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 233>), "_TEB.glDispatchTable", gl_dispatch_table, 0x4f80, 0x40, true, 0xbd4274fefc1926c1)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 29>), "_TEB.glReserved1", gl_reserved1, 0x89c0, 0x40, true, 0xc4e8ef21b71afa1e)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.glReserved2", gl_reserved2, 0x9100, 0x40, true, 0x7118ae6e4b5ef1f3)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.glSectionInfo", gl_section_info, 0x9140, 0x40, true, 0xab737d74bb26c17c)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.glSection", gl_section, 0x9180, 0x40, true, 0x8ad6dfd6a84e14c0)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.glTable", gl_table, 0x91c0, 0x40, true, 0xfd64925af386cee3)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.glCurrentRC", gl_current_rc, 0x9200, 0x40, true, 0xe862f59d7b1bf2fa)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.glContext", gl_context, 0x9240, 0x40, true, 0x720eedcd522224ee)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_TEB.LastStatusValue", last_status_value, 0x9280, 0x20, true, 0xa7d6fc96a6b3c4d5)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_TEB.StaticUnicodeString", static_unicode_string, 0x92c0, 0x80, true, 0xe9db0b88dade12a1)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 261>), "_TEB.StaticUnicodeBuffer", static_unicode_buffer, 0x9340, 0x50, true, 0x67cf84fe5d2dbe30)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.DeallocationStack", deallocation_stack, 0xa3c0, 0x40, true, 0x20b745f1935a7542)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 64>), "_TEB.TlsSlots", tls_slots, 0xa400, 0x0, true, 0xc0cc596da5bf2f68)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_TEB.TlsLinks", tls_links, 0xb400, 0x80, true, 0x9c950137db3f7e3e)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.Vdm", vdm, 0xb480, 0x40, true, 0x466bff5f98e8b213)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.ReservedForNtRpc", reserved_for_nt_rpc, 0xb4c0, 0x40, true, 0xf8727af3b4aaf467)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_TEB.DbgSsReserved", dbg_ss_reserved, 0xb500, 0x80, true, 0xf985847a66a25855)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.HardErrorMode", hard_error_mode, 0xb580, 0x20, true, 0x84e7b39e35d3f7de)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 11>), "_TEB.Instrumentation", instrumentation, 0xb5c0, 0xc0, true, 0x3d58c155afa50286)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TEB.ActivityId", activity_id, 0xb880, 0x80, true, 0xc20496dfa4957282)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.SubProcessTag", sub_process_tag, 0xb900, 0x40, true, 0x458a23546ed31e2a)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.PerflibData", perflib_data, 0xb940, 0x40, true, 0x64b26ed658f6c05c)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.EtwTraceData", etw_trace_data, 0xb980, 0x40, true, 0xfbb3f23ff35d9769)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.WinSockData", win_sock_data, 0xb9c0, 0x40, true, 0xc2c164a30b461038)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.GdiBatchCount", gdi_batch_count, 0xba00, 0x20, true, 0xfe5053ddbee03307)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::processor_number_t), "_TEB.CurrentIdealProcessor", current_ideal_processor, 0xba20, 0x20, true, 0xfa3174f35b232e58)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.IdealProcessorValue", ideal_processor_value, 0xba20, 0x20, true, 0x125f663fc32718c1)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB.IdealProcessor", ideal_processor, 0xba38, 0x8, true, 0xda03706a482f06d2)
#define _m060 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.GuaranteedStackBytes", guaranteed_stack_bytes, 0xba40, 0x20, true, 0x59b2c4d4a9b082e5)
#define _m061 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.ReservedForPerf", reserved_for_perf, 0xba80, 0x40, true, 0xe7d6d7d209344c1e)
#define _m062 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.ReservedForOle", reserved_for_ole, 0xbac0, 0x40, true, 0xde5563c19ad68b2f)
#define _m063 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.WaitingOnLoaderLock", waiting_on_loader_lock, 0xbb00, 0x20, true, 0x8fa52d550d8f0c97)
#define _m064 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.SavedPriorityState", saved_priority_state, 0xbb40, 0x40, true, 0x496967076b64e3d9)
#define _m065 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB.ReservedForCodeCoverage", reserved_for_code_coverage, 0xbb80, 0x40, true, 0x8353a2cba0aa3286)
#define _m066 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.ThreadPoolData", thread_pool_data, 0xbbc0, 0x40, true, 0x154b4ae16f189af3)
#define _m067 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "_TEB.TlsExpansionSlots", tls_expansion_slots, 0xbc00, 0x40, true, 0x6c608db3be65ec90)
#define _m068 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.MuiGeneration", mui_generation, 0xbcc0, 0x20, true, 0x53a8565243d33847)
#define _m069 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.IsImpersonating", is_impersonating, 0xbce0, 0x20, true, 0x3056b86707216c3f)
#define _m070 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.NlsCache", nls_cache, 0xbd00, 0x40, true, 0x741ce371f1f7638b)
#define _m071 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.pShimData", p_shim_data, 0xbd40, 0x40, true, 0x664b0648f4c73f98)
#define _m072 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.CurrentTransactionHandle", current_transaction_handle, 0xbdc0, 0x40, true, 0x6a2682f4360af586)
#define _m073 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::teb_active_frame_t*), "_TEB.ActiveFrame", active_frame, 0xbe00, 0x40, true, 0x8cd5db3f5e8fbd0)
#define _m074 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.FlsData", fls_data, 0xbe40, 0x40, true, 0x8aead32755e70574)
#define _m075 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.PreferredLanguages", preferred_languages, 0xbe80, 0x40, true, 0xf3e6d2e938a2c2e5)
#define _m076 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.UserPrefLanguages", user_pref_languages, 0xbec0, 0x40, true, 0x98dc416469c13340)
#define _m077 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.MergedPrefLanguages", merged_pref_languages, 0xbf00, 0x40, true, 0x40368040aba75beb)
#define _m078 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.MuiImpersonation", mui_impersonation, 0xbf40, 0x20, true, 0xf8c069aa75ade0e8)
#define _m079 _SDK_NONVOL_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint16_t), "_TEB.CrossTebFlags", cross_teb_flags, 0xbf60, 0x10, true, 0xefde164db82c7cc, 16, uint16_t)
#define _m080 _SDK_NONVOL_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint16_t), "_TEB.SpareCrossTebBits", spare_cross_teb_bits, 0xbf60, 0x10, true, 0x86414f7b47abda16, 16, uint16_t)
#define _m081 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TEB.SameTebFlags", same_teb_flags, 0xbf70, 0x10, true, 0x6c145bd9ebc07152)
#define _m082 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.SafeThunkCall", safe_thunk_call, 0xbf70, 0x1, true, 0xd00a8c614ccce4fc, 1, uint16_t)
#define _m083 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.InDebugPrint", in_debug_print, 0xbf71, 0x1, true, 0x56cf623d0f4875d2, 1, uint16_t)
#define _m084 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.HasFiberData", has_fiber_data, 0xbf72, 0x1, true, 0xed8648f0ba74f455, 1, uint16_t)
#define _m085 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.SkipThreadAttach", skip_thread_attach, 0xbf73, 0x1, true, 0x7e925fae301518ec, 1, uint16_t)
#define _m086 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.WerInShipAssertCode", wer_in_ship_assert_code, 0xbf74, 0x1, true, 0x867615c49a93dd7c, 1, uint16_t)
#define _m087 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.RanProcessInit", ran_process_init, 0xbf75, 0x1, true, 0x8ad86cbe80a29ea8, 1, uint16_t)
#define _m088 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.ClonedThread", cloned_thread, 0xbf76, 0x1, true, 0x5107d229080323ac, 1, uint16_t)
#define _m089 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.SuppressDebugMsg", suppress_debug_msg, 0xbf77, 0x1, true, 0x21ab5ffa9d48c4a, 1, uint16_t)
#define _m090 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.DisableUserStackWalk", disable_user_stack_walk, 0xbf78, 0x1, true, 0x3445fc6dd0aee50f, 1, uint16_t)
#define _m091 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.RtlExceptionAttached", rtl_exception_attached, 0xbf79, 0x1, true, 0x180a1177a05e4dff, 1, uint16_t)
#define _m092 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.InitialThread", initial_thread, 0xbf7a, 0x1, true, 0xd6dfd0622b033797, 1, uint16_t)
#define _m093 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.SessionAware", session_aware, 0xbf7b, 0x1, true, 0xb67c49426ad0ecc6, 1, uint16_t)
#define _m094 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.LoadOwner", load_owner, 0xbf7c, 0x1, true, 0x2e0e2944d9ea950d, 1, uint16_t)
#define _m095 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.LoaderWorker", loader_worker, 0xbf7d, 0x1, true, 0xcf03fa8dbb0e7f39, 1, uint16_t)
#define _m096 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.TxnScopeEnterCallback", txn_scope_enter_callback, 0xbf80, 0x40, true, 0x6ad1484021e61c4d)
#define _m097 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.TxnScopeExitCallback", txn_scope_exit_callback, 0xbfc0, 0x40, true, 0xf3afcd992043606b)
#define _m098 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.TxnScopeContext", txn_scope_context, 0xc000, 0x40, true, 0xc6d31ae792254f39)
#define _m099 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.LockCount", lock_count, 0xc040, 0x20, true, 0xa3cafe358bc4ab1f)
#define _m100 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_TEB.WowTebOffset", wow_teb_offset, 0xc060, 0x20, true, 0xf80a7bba617bcfdb)
#define _m101 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.ResourceRetValue", resource_ret_value, 0xc080, 0x40, true, 0xc001cee24097cd75)
#define _m102 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.ReservedForWdf", reserved_for_wdf, 0xc0c0, 0x40, true, 0x603b39ed5ef3b4f9)
#define _m103 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB.ReservedForCrt", reserved_for_crt, 0xc100, 0x40, true, 0x3e820ad1ae54f052)
#define _m104 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TEB.EffectiveContainerId", effective_container_id, 0xc140, 0x80, true, 0x85a953ce175bf0f0)
#define _m105 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_TEB.PlaceholderCompatibilityMode", placeholder_compatibility_mode, 0x1400, 0x8, true, 0xdcf42224e72a2caa)
#define _m106 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB.PlaceholderHydrationAlwaysExplicit", placeholder_hydration_always_explicit, 0x1408, 0x8, true, 0xbe30f5da3878bfc3)
#define _m107 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.ProxiedProcessId", proxied_process_id, 0x1460, 0x20, true, 0x51bcd970a1c16cb5)
#define _m108 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB.UnalignedLoadStoreExceptions", unaligned_load_store_exceptions, 0x1768, 0x8, true, 0xea4ca63059037362)
#define _m109 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.HeapData", heap_data, 0xbd80, 0x20, true, 0x767e788be26cb3a1)
#define _m110 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.SkipLoaderInit", skip_loader_init, 0xbf7e, 0x1, true, 0x5e3527057fd9db14, 1, uint16_t)
#define _m111 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.DeallocationBStore", deallocation_b_store, 0xbc40, 0x40, true, 0x7f2825ac7a3bbc91)
#define _m112 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TEB.BStoreLimit", b_store_limit, 0xbc80, 0x40, true, 0xefb6ca66792fe2c6)
#define _m113 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_stack_t), "_TEB._ActivationStack", activation_stack, 0x1480, 0x40, true, 0x7135478e7a50b411)
#define _m114 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_stack_t), "_TEB.ActivationStack", activation_stack_, 0x1480, 0x40, true, 0x62f2e27fdf0229d8)
#define _m115 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::chpev2_cpuarea_info_t*), "_TEB.ChpeV2CpuAreaInfo", chpe_v2_cpu_area_info, 0xbc40, 0x40, true, 0x7fb88a1b18dbbaee)
#define _m116 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB.SkipFileAPIBrokering", skip_file_api_brokering, 0xbf7f, 0x1, true, 0x6bd51b6ba0938ff6, 1, uint16_t)
#define _m117 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB.LastSleepCounter", last_sleep_counter, 0xc1c0, 0x40, true, 0x3b8f916d2142a6e4)
#define _m118 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB.SpinCallCount", spin_call_count, 0xc200, 0x20, true, 0x259b8778085e6e24)
#define _m119 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB.ExtendedFeatureDisableMask", extended_feature_disable_mask, 0xc240, 0x40, true, 0x7c1bef9befa12ab5)
#define _m120 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TEB.HeapVirtualAffinity", heap_virtual_affinity, 0xbd80, 0x10, true, 0xc8592412334582db)
#define _m121 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TEB.LowFragHeapDataSlot", low_frag_heap_data_slot, 0xbd90, 0x10, true, 0x2a6c8e62483ca246)
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
#define _m117
#define _m118
#define _m119
#define _m120
#define _m121
#endif