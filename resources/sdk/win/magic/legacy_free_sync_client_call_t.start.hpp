#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t const*), "LegacyFreeSyncClientCall._pServerOXIDEntry", p_server_oxid_entry, 0x200, 0x40, true, 0x57b14d5ede55845c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t const*), "LegacyFreeSyncClientCall._pStdId", p_std_id, 0x240, 0x40, true, 0x590178cb392c0ef8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t const*), "LegacyFreeSyncClientCall._pServerIPIDEntry", p_server_ipid_entry, 0x280, 0x40, true, 0xd3530a3056f9c6bb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::push_tls_prevent_rundown_mitigation_t), "LegacyFreeSyncClientCall._pushTlsMitigation", push_tls_mitigation, 0x2c0, 0x40, true, 0x6bbb5bb22d184f9b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "LegacyFreeSyncClientCall._uCallTraceId", u_call_trace_id, 0x300, 0x20, true, 0x6fb6ee48cc56b820)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "LegacyFreeSyncClientCall._dwTransportCallCreationState", dw_transport_call_creation_state, 0x320, 0x20, true, 0x92bd795bd0713822)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "LegacyFreeSyncClientCall._hrClient", hr_client, 0x380, 0x20, true, 0xf0de7cdedfe94a9b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::source_of_client_h_result_t), "LegacyFreeSyncClientCall._sourceOfHResult", source_of_h_result, 0x3a0, 0x20, true, 0xa666a0d2f946edaf)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "LegacyFreeSyncClientCall._bLockedClient", b_locked_client, 0x3c0, 0x1, true, 0xdffa4adcb64b72e4, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "LegacyFreeSyncClientCall._bIncrementedCallsInTls", b_incremented_calls_in_tls, 0x3c1, 0x1, true, 0x86bf69790d0e946, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "LegacyFreeSyncClientCall._bClientCalledGetBuffer", b_client_called_get_buffer, 0x3c2, 0x1, true, 0x9b1d1bdec34ee673, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "LegacyFreeSyncClientCall._bEnabledRundownTlsMitigation", b_enabled_rundown_tls_mitigation, 0x3c3, 0x1, true, 0x74991434ae8e52af, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "LegacyFreeSyncClientCall._bClientCalledSendOrSendReceive", b_client_called_send_or_send_receive, 0x3c4, 0x1, true, 0x924064c282d97e46, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "LegacyFreeSyncClientCall._bClientCalledReceiveOrSendReceive", b_client_called_receive_or_send_receive, 0x3c5, 0x1, true, 0x5c4d0d4d3b6e6581, 1, uint8_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "LegacyFreeSyncClientCall._bClientReceiveOrSendReceiveCompletedSuccessfully", b_client_receive_or_send_receive_completed_successfully, 0x3c6, 0x1, true, 0x1c22fa649d2b2d75, 1, uint8_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "LegacyFreeSyncClientCall._passthroughTraceActivity", passthrough_trace_activity, 0x80, 0x80, true, 0xd689327bb2309916)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "LegacyFreeSyncClientCall._enableCallTracing", enable_call_tracing, 0x100, 0x8, true, 0x9280ed7c2346d607)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "LegacyFreeSyncClientCall._callId", call_id, 0x180, 0x80, true, 0xdfae99324d408f1a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::marshal_by_value_serialization_data_t), "LegacyFreeSyncClientCall._marshalByValueSerializationData", marshal_by_value_serialization_data, 0x400, 0x0, true, 0x55982f35a0af8010)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif