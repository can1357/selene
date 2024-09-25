#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::winrt_async_channel_operation_info_t), "WinrtAsyncChannelOperation._channelOperationInfo", channel_operation_info, 0x800, 0x0, true, 0x324b85e550abd523)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_stub_call_t const*), "WinrtAsyncChannelOperation._proxyStubCall", proxy_stub_call, 0xc40, 0x40, true, 0xbd8f5e1765b07985)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "WinrtAsyncChannelOperation._dwTransportCallCreationState", dw_transport_call_creation_state, 0xc80, 0x20, true, 0x71cc1a6be9d43733)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "WinrtAsyncChannelOperation._callTraceId", call_trace_id, 0xca0, 0x20, true, 0xf318d87919f603da)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t const*), "WinrtAsyncChannelOperation._pServerOxidEntry", p_server_oxid_entry, 0xe40, 0x40, true, 0xba83da5a67b6cd0)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "WinrtAsyncChannelOperation._serverIpid", server_ipid, 0xe80, 0x80, true, 0xae5836d83d81325d)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "WinrtAsyncChannelOperation._serverMoidForTracing", server_moid_for_tracing, 0xf00, 0x80, true, 0x48993bdf94c0ec94)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "WinrtAsyncChannelOperation._dcomCausalityId", dcom_causality_id, 0xf80, 0x80, true, 0xd8429c18bfb0b2b2)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::which_transfer_syntax_t), "WinrtAsyncChannelOperation._whichTransferSyntax", which_transfer_syntax, 0x1080, 0x20, true, 0xaeb7d1c890d7b1d1)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::async_client_call_retry_context_t), "WinrtAsyncChannelOperation._retryContext", retry_context, 0x10c0, 0x80, true, 0x476e1f8b92efbe69)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::transport_and_server_calls_t), "WinrtAsyncChannelOperation._transportAndServerCalls", transport_and_server_calls, 0x1380, 0x80, true, 0xb14fdb9e68040064)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncChannelOperation._subscribedServerTransportCallEvents", subscribed_server_transport_call_events, 0x1400, 0x8, true, 0x616f632454feb35e)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncChannelOperation._usedNonDefaultAssociation", used_non_default_association, 0x1408, 0x8, true, 0x44f69c5360684a22)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::async_operation_storage_t), "WinrtAsyncChannelOperation._realOperation", real_operation, 0x1500, 0x0, true, 0xf66dec0b78002445)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtAsyncChannelOperation._realOperationStubDataLength", real_operation_stub_data_length, 0x1600, 0x20, true, 0x9fed6353f6361041)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncChannelOperation._cancelRealOperationWhenStarted", cancel_real_operation_when_started, 0x1680, 0x8, true, 0xee709f0f4f5068cb)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncChannelOperation._handledFailureToCreateOperationObject", handled_failure_to_create_operation_object, 0x1688, 0x8, true, 0x2523e30fb7a44d79)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncChannelOperation._haveContainerId", have_container_id, 0x1690, 0x8, true, 0xf388f9a310163a4b)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WinrtAsyncChannelOperation._containerId", container_id, 0x16a0, 0x80, true, 0x4111eb5cdea14722)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "WinrtAsyncChannelOperation._cGetResultsCalled", c_get_results_called, 0x1720, 0x20, true, 0x2d58028ae83aa7de)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtAsyncChannelOperation._sequenceNumberOfFacadePassedToCompletedDelegate", sequence_number_of_facade_passed_to_completed_delegate, 0x1760, 0x20, true, 0x88549f1d19e62ac1)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncChannelOperation._isClientTransportCompletionReceived", is_client_transport_completion_received, 0x1800, 0x8, true, 0xcb419c5c31981261)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "WinrtAsyncChannelOperation._pResultData", p_result_data, 0x18c0, 0x40, true, 0xeeadf0a177928729)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtAsyncChannelOperation._cbResultData", cb_result_data, 0x1900, 0x20, true, 0x907e34103b3bbeb2)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WinrtAsyncChannelOperation._marshalingSetId", marshaling_set_id, 0x1940, 0x40, true, 0x327bee57f0649d28)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncChannelOperation._cancelWasCalled", cancel_was_called, 0x1990, 0x8, true, 0x4af24d77f65f127b)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncChannelOperation._didVerifierStopForFailureToCallGetResults", did_verifier_stop_for_failure_to_call_get_results, 0x1998, 0x8, true, 0x6f07479e9714f6db)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncChannelOperation._successfullySentCall", successfully_sent_call, 0x19a0, 0x8, true, 0x6629f9ef86a1a06b)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "WinrtAsyncChannelOperation._passthroughTraceActivity", passthrough_trace_activity, 0xcc0, 0x80, true, 0xb16d8c2c798aa73c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "WinrtAsyncChannelOperation._enableCallTracing", enable_call_tracing, 0xd40, 0x8, true, 0xb48f11baa5226f6)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "WinrtAsyncChannelOperation._callId", call_id, 0xd60, 0x80, true, 0xdd5994f64d46d13)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "WinrtAsyncChannelOperation._clientPid", client_pid, 0x1000, 0x20, true, 0x4fc31aaf67bc80e2)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WinrtAsyncChannelOperation._completionTraceActivity", completion_trace_activity, 0x1820, 0x80, true, 0x87394106e203dcff)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WinrtAsyncChannelOperation._marshalingSetAcknowledgmentOxid", marshaling_set_acknowledgment_oxid, 0x0, 0x0, false, 0x9cf84d453c3c3a75)
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
#endif