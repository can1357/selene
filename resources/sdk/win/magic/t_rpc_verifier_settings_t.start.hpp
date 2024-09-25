#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fFaultInjectImpersonateClient", f_fault_inject_impersonate_client, 0x0, 0x20, true, 0xad051f7dfdb57705)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.ProbFaultInjectImpersonateClient", prob_fault_inject_impersonate_client, 0x20, 0x20, true, 0x4f91e375d330bf61)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.DelayFaultInjectImpersonateClient", delay_fault_inject_impersonate_client, 0x40, 0x20, true, 0x9948fff1ceb0266)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fCorruptionInjectServerReceives", f_corruption_inject_server_receives, 0x60, 0x20, true, 0x6c9cdfcf21499e93)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fCorruptionInjectClientReceives", f_corruption_inject_client_receives, 0x80, 0x20, true, 0xaf041c058ff283a5)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fCorruptionInjectSends", f_corruption_inject_sends, 0xa0, 0x20, true, 0x6f4592d4fa361519)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fCorruptionInjectNdrSends", f_corruption_inject_ndr_sends, 0xc0, 0x20, true, 0xb4ffbc05cb922b27)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fCorruptionInjectNdrReturns", f_corruption_inject_ndr_returns, 0xe0, 0x20, true, 0x465d0abbcce78803)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fCorruptionInjectNdr", f_corruption_inject_ndr, 0x100, 0x20, true, 0xcbe686446fe2a0dc)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.ProbRpcHeaderCorruption", prob_rpc_header_corruption, 0x120, 0x20, true, 0xf250610ad1f45211)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.ProbDataCorruption", prob_data_corruption, 0x140, 0x20, true, 0xafacd783ad441d72)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.ProbSecureDataCorruption", prob_secure_data_corruption, 0x160, 0x20, true, 0x79a05b15ced8d30b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::t_corruption_pattern_t), "_tRpcVerifierSettings.CorruptionPattern", corruption_pattern, 0x180, 0x20, true, 0x5f53cf6428bbcae8)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::t_corruption_size_type_t), "_tRpcVerifierSettings.CorruptionSizeType", corruption_size_type, 0x1a0, 0x20, true, 0xafdb0c85e6d0da27)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.CorruptionSize", corruption_size, 0x1c0, 0x20, true, 0xcc1045ea16a19b32)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::t_corruption_distribution_type_t), "_tRpcVerifierSettings.CorruptionDistributionType", corruption_distribution_type, 0x1e0, 0x20, true, 0x7bc8c378979a01bc)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.ProbBufferTruncation", prob_buffer_truncation, 0x200, 0x20, true, 0xb58c342cc6f8ebd0)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.MaxBufferTruncationSize", max_buffer_truncation_size, 0x220, 0x20, true, 0x22f5b2c3d398a935)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fFaultInjectTransports", f_fault_inject_transports, 0x240, 0x20, true, 0x70b310626c322058)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.ProbFaultInjectTransports", prob_fault_inject_transports, 0x260, 0x20, true, 0x25dbbbe3e9eab9e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.DelayFaultInjectTransports", delay_fault_inject_transports, 0x280, 0x20, true, 0x56ecba231f22982f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fSendReplay", f_send_replay, 0x2a0, 0x20, true, 0xa503f826696bfde5)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.SentBufferListSize", sent_buffer_list_size, 0x2c0, 0x20, true, 0xa231546e3a1e3bf9)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.ReplayFrequency", replay_frequency, 0x2e0, 0x20, true, 0x6d662e1941b82c66)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fPauseInject", f_pause_inject, 0x300, 0x20, true, 0x9b9b8386dcadf6af)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::t_delay_type_t), "_tRpcVerifierSettings.PauseInjectIntervalType", pause_inject_interval_type, 0x320, 0x20, true, 0xc822f6a3632a8fc9)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.PauseInjectIntervalLength", pause_inject_interval_length, 0x340, 0x20, true, 0x506910be32b0fcfb)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::t_delay_type_t), "_tRpcVerifierSettings.PauseInjectPauseType", pause_inject_pause_type, 0x360, 0x20, true, 0xbae2f2a5c50827bd)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.PauseInjectPauseLength", pause_inject_pause_length, 0x380, 0x20, true, 0x560f6aef5fe51fe1)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fPauseInjectExternalAPIs", f_pause_inject_external_ap_is, 0x3a0, 0x20, true, 0x31c73c4cfa80f4cb)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.ProbPauseInjectExternalAPIs", prob_pause_inject_external_ap_is, 0x3c0, 0x20, true, 0x53e53fba37a249c0)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.PauseInjectExternalAPIsMaxWait", pause_inject_external_ap_is_max_wait, 0x3e0, 0x20, true, 0xa3ba33aec1eab0f2)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.IsHighPrivilege", is_high_privilege, 0x400, 0x20, true, 0x1105b22ef631a399)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_tRpcVerifierSettings.fSupressAppVerifierBreaks", f_supress_app_verifier_breaks, 0x420, 0x20, true, 0xbbdf817c273702c0)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(enum win::t_buffer_type_t, uint32_t*, uint8_t**)>*), "_tRpcVerifierSettings.TestCorruptionInjectCallback", test_corruption_inject_callback, 0x440, 0x40, true, 0x6d440c157785bd99)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_tRpcVerifierSettings.NdrCorruptionCallback", ndr_corruption_callback, 0x480, 0x40, true, 0xe0ab68c7bf223fd)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.NDRVerifierMaxExtensionFactor", ndr_verifier_max_extension_factor, 0x4c0, 0x20, true, 0x5e59ac276290bb43)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.NDRVerifierMaxExtensionBufferLength", ndr_verifier_max_extension_buffer_length, 0x4e0, 0x20, true, 0x1cff43d56f1e4c2f)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tRpcVerifierSettings.DelayCorruption", delay_corruption, 0x500, 0x20, true, 0xeaa579bca89721a9)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_tRpcVerifierSettings.InitializeRpcShim", initialize_rpc_shim, 0x540, 0x40, true, 0x565ace86ac3ed825)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(enum win::t_buffer_type_t, uint32_t*, uint8_t**)>*), "_tRpcVerifierSettings.CorruptionInject", corruption_inject, 0x580, 0x40, true, 0x8cdd40ab5fc54ea0)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct rpc::message_t*)>*), "_tRpcVerifierSettings.NDRSendCorruptionInject", ndr_send_corruption_inject, 0x5c0, 0x40, true, 0xc1c63480e7921734)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*)>*), "_tRpcVerifierSettings.NDRReturnCorruptionInject", ndr_return_corruption_inject, 0x600, 0x40, true, 0x94443189744b3239)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_tRpcVerifierSettings.RegisterThreadForPauseInjection", register_thread_for_pause_injection, 0x640, 0x40, true, 0x933198f9679bc8f9)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_tRpcVerifierSettings.UnregisterThreadForPauseInjection", unregister_thread_for_pause_injection, 0x680, 0x40, true, 0xd49e99e4829f5c13)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_tRpcVerifierSettings.CloseAlpcPort", close_alpc_port, 0x6c0, 0x40, true, 0x4cabf90f5b3b360a)
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
#endif