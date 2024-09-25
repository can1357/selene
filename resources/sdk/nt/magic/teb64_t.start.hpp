#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::tib64_t), "_TEB64.NtTib", nt_tib, 0x0, 0xc0, true, 0xbcd670b743dcdc5)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.EnvironmentPointer", environment_pointer, 0x1c0, 0x40, true, 0xb8ef28c04e5d320d)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id64_t), "_TEB64.ClientId", client_id, 0x200, 0x80, true, 0x1994a0ae116589ad)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ActiveRpcHandle", active_rpc_handle, 0x280, 0x40, true, 0x54c9c92235d6228a)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ThreadLocalStoragePointer", thread_local_storage_pointer, 0x2c0, 0x40, true, 0x6ba5d344961b41e5)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ProcessEnvironmentBlock", process_environment_block, 0x300, 0x40, true, 0x6fc8a112c024e2de)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.LastErrorValue", last_error_value, 0x340, 0x20, true, 0x3a1580a0e428d030)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.CountOfOwnedCriticalSections", count_of_owned_critical_sections, 0x360, 0x20, true, 0x35f2dea12217115c)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.CsrClientThread", csr_client_thread, 0x380, 0x40, true, 0xc46dfe41ffadc357)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.Win32ThreadInfo", win32_thread_info, 0x3c0, 0x40, true, 0x43192d78705a2e60)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 26>), "_TEB64.User32Reserved", user32_reserved, 0x400, 0x40, true, 0xb5ea0f7c85e6045e)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_TEB64.UserReserved", user_reserved, 0x740, 0xa0, true, 0xf7221f3f9428e063)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.WOW32Reserved", wow32_reserved, 0x800, 0x40, true, 0x2fe74edafc2aea25)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.CurrentLocale", current_locale, 0x840, 0x20, true, 0xc5c98ae0264f11c3)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.FpSoftwareStatusRegister", fp_software_status_register, 0x860, 0x20, true, 0x2bd730d5bc52f10e)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 16>), "_TEB64.ReservedForDebuggerInstrumentation", reserved_for_debugger_instrumentation, 0x880, 0x0, true, 0x7f42225692cbe9a9)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 37>), "_TEB64.SystemReserved1", system_reserved1, 0xc80, 0x80, true, 0xaa1773c9cd42eeb3)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_TEB64.WorkingOnBehalfTicket", working_on_behalf_ticket, 0x15c0, 0x40, true, 0x7371178509c4d825)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TEB64.ExceptionCode", exception_code, 0x1600, 0x20, true, 0xa4f4c4ba52313f79)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ActivationContextStackPointer", activation_context_stack_pointer, 0x1640, 0x40, true, 0x366e0763cfebbd8b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.InstrumentationCallbackSp", instrumentation_callback_sp, 0x1680, 0x40, true, 0x3cc4a4b40f30d4)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.InstrumentationCallbackPreviousPc", instrumentation_callback_previous_pc, 0x16c0, 0x40, true, 0x7cfd80bf738f6553)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.InstrumentationCallbackPreviousSp", instrumentation_callback_previous_sp, 0x1700, 0x40, true, 0x714d27bd33869ecc)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.TxFsContext", tx_fs_context, 0x1740, 0x20, true, 0x2f3952bc2917a713)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB64.InstrumentationCallbackDisabled", instrumentation_callback_disabled, 0x1760, 0x8, true, 0x12fd68c93582806d)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::gdi_teb_batch64_t), "_TEB64.GdiTebBatch", gdi_teb_batch, 0x1780, 0x40, true, 0x948db3d711deee43)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id64_t), "_TEB64.RealClientId", real_client_id, 0x3ec0, 0x80, true, 0xc897358b6ef44556)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.GdiCachedProcessHandle", gdi_cached_process_handle, 0x3f40, 0x40, true, 0x6579eefa5da24c6d)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.GdiClientPID", gdi_client_pid, 0x3f80, 0x20, true, 0x7683734ccd489d6c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.GdiClientTID", gdi_client_tid, 0x3fa0, 0x20, true, 0x6db3ec7715f63d63)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.GdiThreadLocalInfo", gdi_thread_local_info, 0x3fc0, 0x40, true, 0x4e878404d81d5f1b)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 62>), "_TEB64.Win32ClientInfo", win32_client_info, 0x4000, 0x80, true, 0x42d9b137f6d6063c)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 233>), "_TEB64.glDispatchTable", gl_dispatch_table, 0x4f80, 0x40, true, 0xfdee5b435495feb)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 29>), "_TEB64.glReserved1", gl_reserved1, 0x89c0, 0x40, true, 0x17d27297e5fbffb1)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.glReserved2", gl_reserved2, 0x9100, 0x40, true, 0x352c9d598a6e1466)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.glSectionInfo", gl_section_info, 0x9140, 0x40, true, 0x17154d81284a0dcf)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.glSection", gl_section, 0x9180, 0x40, true, 0xa2ff146c07ad27ae)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.glTable", gl_table, 0x91c0, 0x40, true, 0x3bb17397dfe950c4)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.glCurrentRC", gl_current_rc, 0x9200, 0x40, true, 0x4a611a3b604c238d)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.glContext", gl_context, 0x9240, 0x40, true, 0x1d7f3ac03cf499f3)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.LastStatusValue", last_status_value, 0x9280, 0x20, true, 0x1cf21338b1ff35ff)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_TEB64.StaticUnicodeString", static_unicode_string, 0x92c0, 0x80, true, 0xe6d571101784ee3f)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 261>), "_TEB64.StaticUnicodeBuffer", static_unicode_buffer, 0x9340, 0x50, true, 0xabd5ce1aa31a8d06)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.DeallocationStack", deallocation_stack, 0xa3c0, 0x40, true, 0x6aa831dee4d4054e)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 64>), "_TEB64.TlsSlots", tls_slots, 0xa400, 0x0, true, 0x799b1855d5a73de)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "_TEB64.TlsLinks", tls_links, 0xb400, 0x80, true, 0x89e25e6c488bdb7f)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.Vdm", vdm, 0xb480, 0x40, true, 0x6a1eac819d436ec9)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ReservedForNtRpc", reserved_for_nt_rpc, 0xb4c0, 0x40, true, 0x9ae1429b9ad3508f)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_TEB64.DbgSsReserved", dbg_ss_reserved, 0xb500, 0x80, true, 0x17ed89fff55974e7)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.HardErrorMode", hard_error_mode, 0xb580, 0x20, true, 0x51d7fb2ab38fb892)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 11>), "_TEB64.Instrumentation", instrumentation, 0xb5c0, 0xc0, true, 0x6685418546f78bcb)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TEB64.ActivityId", activity_id, 0xb880, 0x80, true, 0xd2ca0e7c1ffd6c3)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.SubProcessTag", sub_process_tag, 0xb900, 0x40, true, 0x807f57baa1a76b4f)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.PerflibData", perflib_data, 0xb940, 0x40, true, 0x58c40ebbe1d0bc4d)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.EtwTraceData", etw_trace_data, 0xb980, 0x40, true, 0xb1732d863d676574)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.WinSockData", win_sock_data, 0xb9c0, 0x40, true, 0xfbe74f209b3806ca)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.GdiBatchCount", gdi_batch_count, 0xba00, 0x20, true, 0x390d05186579413c)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_number_t), "_TEB64.CurrentIdealProcessor", current_ideal_processor, 0xba20, 0x20, true, 0xaca4daa2a3c823a)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.IdealProcessorValue", ideal_processor_value, 0xba20, 0x20, true, 0x461406bf17a03051)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB64.IdealProcessor", ideal_processor, 0xba38, 0x8, true, 0xc43569b238d846e0)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.GuaranteedStackBytes", guaranteed_stack_bytes, 0xba40, 0x20, true, 0xc42f97ecae12a3c)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ReservedForPerf", reserved_for_perf, 0xba80, 0x40, true, 0xf0bb7cf5a746c298)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ReservedForOle", reserved_for_ole, 0xbac0, 0x40, true, 0xd244336b1c23f2dd)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.WaitingOnLoaderLock", waiting_on_loader_lock, 0xbb00, 0x20, true, 0x3227e0e6ac7efe91)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.SavedPriorityState", saved_priority_state, 0xbb40, 0x40, true, 0x73a00d4841dd0cee)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ReservedForCodeCoverage", reserved_for_code_coverage, 0xbb80, 0x40, true, 0xc47fb6bae5ae1f1)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ThreadPoolData", thread_pool_data, 0xbbc0, 0x40, true, 0xdfc3ac65f563451e)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.TlsExpansionSlots", tls_expansion_slots, 0xbc00, 0x40, true, 0x10ff66b8ac3785fe)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.MuiGeneration", mui_generation, 0xbcc0, 0x20, true, 0x1605747be1846421)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.IsImpersonating", is_impersonating, 0xbce0, 0x20, true, 0xbdceb9d377ddabe7)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.NlsCache", nls_cache, 0xbd00, 0x40, true, 0x497ab4d5fd87f6d0)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.pShimData", p_shim_data, 0xbd40, 0x40, true, 0x40bc5b3cd462746d)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.CurrentTransactionHandle", current_transaction_handle, 0xbdc0, 0x40, true, 0x4d656e96c7a2b41f)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ActiveFrame", active_frame, 0xbe00, 0x40, true, 0x4bc81d7b1ef73c67)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.FlsData", fls_data, 0xbe40, 0x40, true, 0x4b98d57c4effdf07)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.PreferredLanguages", preferred_languages, 0xbe80, 0x40, true, 0xe7a843b8bb5fed9f)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.UserPrefLanguages", user_pref_languages, 0xbec0, 0x40, true, 0xa319f21bfb275d35)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.MergedPrefLanguages", merged_pref_languages, 0xbf00, 0x40, true, 0xac54abfd8067fe15)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.MuiImpersonation", mui_impersonation, 0xbf40, 0x20, true, 0x93820beff9f89e6d)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint16_t), "_TEB64.CrossTebFlags", cross_teb_flags, 0xbf60, 0x10, true, 0x8f46fe4d7b4ab3cb)
#define _m080 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint16_t), "_TEB64.SpareCrossTebBits", spare_cross_teb_bits, 0xbf60, 0x10, true, 0xea2760e375266e70, 16, uint16_t)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TEB64.SameTebFlags", same_teb_flags, 0xbf70, 0x10, true, 0x65853cf82a1fdb8b)
#define _m082 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.SafeThunkCall", safe_thunk_call, 0xbf70, 0x1, true, 0x4d38fc42be255b53, 1, uint16_t)
#define _m083 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.InDebugPrint", in_debug_print, 0xbf71, 0x1, true, 0x74e10b6eaeb35b7e, 1, uint16_t)
#define _m084 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.HasFiberData", has_fiber_data, 0xbf72, 0x1, true, 0x7f130c75c643390, 1, uint16_t)
#define _m085 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.SkipThreadAttach", skip_thread_attach, 0xbf73, 0x1, true, 0x7338d82c41b9e4e3, 1, uint16_t)
#define _m086 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.WerInShipAssertCode", wer_in_ship_assert_code, 0xbf74, 0x1, true, 0x2f956629e1d1c4f8, 1, uint16_t)
#define _m087 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.RanProcessInit", ran_process_init, 0xbf75, 0x1, true, 0x295ff5d66f092bc6, 1, uint16_t)
#define _m088 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.ClonedThread", cloned_thread, 0xbf76, 0x1, true, 0x9f1f5e1d902a08d6, 1, uint16_t)
#define _m089 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.SuppressDebugMsg", suppress_debug_msg, 0xbf77, 0x1, true, 0xae8812f650ed2a62, 1, uint16_t)
#define _m090 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.DisableUserStackWalk", disable_user_stack_walk, 0xbf78, 0x1, true, 0x4e7153988722a93e, 1, uint16_t)
#define _m091 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.RtlExceptionAttached", rtl_exception_attached, 0xbf79, 0x1, true, 0xfc0838b75b192fc8, 1, uint16_t)
#define _m092 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.InitialThread", initial_thread, 0xbf7a, 0x1, true, 0xf69dca1f806ce21d, 1, uint16_t)
#define _m093 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.SessionAware", session_aware, 0xbf7b, 0x1, true, 0xddf3ab8e51e36208, 1, uint16_t)
#define _m094 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.LoadOwner", load_owner, 0xbf7c, 0x1, true, 0xeeb3a1b21866c38d, 1, uint16_t)
#define _m095 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.LoaderWorker", loader_worker, 0xbf7d, 0x1, true, 0x4e6cd41f8a8b9797, 1, uint16_t)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.TxnScopeEnterCallback", txn_scope_enter_callback, 0xbf80, 0x40, true, 0x2f36a3c30471e9eb)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.TxnScopeExitCallback", txn_scope_exit_callback, 0xbfc0, 0x40, true, 0x139f70ce46cd7061)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.TxnScopeContext", txn_scope_context, 0xc000, 0x40, true, 0x25cb7448baad61f5)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.LockCount", lock_count, 0xc040, 0x20, true, 0xf13515c8723a2a85)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TEB64.WowTebOffset", wow_teb_offset, 0xc060, 0x20, true, 0xf788e4db82561087)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ResourceRetValue", resource_ret_value, 0xc080, 0x40, true, 0xca63ad5efba3388)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ReservedForWdf", reserved_for_wdf, 0xc0c0, 0x40, true, 0x7ba4d446fd646661)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ReservedForCrt", reserved_for_crt, 0xc100, 0x40, true, 0xfc6099e78e046c5b)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TEB64.EffectiveContainerId", effective_container_id, 0xc140, 0x80, true, 0x8ba7c4ad2f879c81)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_TEB64.PlaceholderCompatibilityMode", placeholder_compatibility_mode, 0x1400, 0x8, true, 0xb693d52794d4a9e9)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB64.PlaceholderHydrationAlwaysExplicit", placeholder_hydration_always_explicit, 0x1408, 0x8, true, 0x8afaa115c1c9d7a0)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.ProxiedProcessId", proxied_process_id, 0x1460, 0x20, true, 0x3dae548edb1337bb)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_stack64_t), "_TEB64._ActivationStack", activation_stack, 0x1480, 0x40, true, 0x45378afbd0e370c4)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TEB64.UnalignedLoadStoreExceptions", unaligned_load_store_exceptions, 0x1768, 0x8, true, 0x965f1e370b0e2b16)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.HeapData", heap_data, 0xbd80, 0x20, true, 0x64de1636bf85710a)
#define _m111 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.SkipLoaderInit", skip_loader_init, 0xbf7e, 0x1, true, 0x997276c9cbfacf26, 1, uint16_t)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.DeallocationBStore", deallocation_b_store, 0xbc40, 0x40, true, 0xd77d1ede15772f2a)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.BStoreLimit", b_store_limit, 0xbc80, 0x40, true, 0x34ad9549040919fc)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ChpeV2CpuAreaInfo", chpe_v2_cpu_area_info, 0x0, 0x0, false, 0x8831f18ad35b002d)
#define _m115 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TEB64.SkipFileAPIBrokering", skip_file_api_brokering, 0x0, 0x0, false, 0x3149bf58afeef9bb, 1, uint16_t)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.LastSleepCounter", last_sleep_counter, 0x0, 0x0, false, 0x2a3cce15a188325c)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB64.SpinCallCount", spin_call_count, 0x0, 0x0, false, 0xa3fb1f4f72413c99)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TEB64.ExtendedFeatureDisableMask", extended_feature_disable_mask, 0x0, 0x0, false, 0x54678a204b9a406c)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TEB64.HeapVirtualAffinity", heap_virtual_affinity, 0x0, 0x0, false, 0xc8b761dc58fc0d4a)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TEB64.LowFragHeapDataSlot", low_frag_heap_data_slot, 0x0, 0x0, false, 0x89a197e6bd8f42a)
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
#endif