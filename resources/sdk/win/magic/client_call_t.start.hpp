#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t const*), "ClientCall._pServerOXIDEntry", p_server_oxid_entry, 0x200, 0x40, true, 0x2c9512b27e878940)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t const*), "ClientCall._pStdId", p_std_id, 0x240, 0x40, true, 0x747fe772269505b1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t const*), "ClientCall._pServerIPIDEntry", p_server_ipid_entry, 0x280, 0x40, true, 0xfcb89cc2bc6b518d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::push_tls_prevent_rundown_mitigation_t), "ClientCall._pushTlsMitigation", push_tls_mitigation, 0x2c0, 0x40, true, 0x1bb6ffd792836e54)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "ClientCall._uCallTraceId", u_call_trace_id, 0x300, 0x20, true, 0x1a5b850438b7c3a5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "ClientCall._dwTransportCallCreationState", dw_transport_call_creation_state, 0x320, 0x20, true, 0xe50c5b096a0f0338)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "ClientCall._hrClient", hr_client, 0x380, 0x20, true, 0x9ed88b75137c0653)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::source_of_client_h_result_t), "ClientCall._sourceOfHResult", source_of_h_result, 0x3a0, 0x20, true, 0xa9357440efdce9a2)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ClientCall._bLockedClient", b_locked_client, 0x3c0, 0x1, true, 0x80b6f653327b7d35, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ClientCall._bIncrementedCallsInTls", b_incremented_calls_in_tls, 0x3c1, 0x1, true, 0x5f08982ed17dfa58, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ClientCall._bClientCalledGetBuffer", b_client_called_get_buffer, 0x3c2, 0x1, true, 0xa3a42aa23d3d688d, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ClientCall._bEnabledRundownTlsMitigation", b_enabled_rundown_tls_mitigation, 0x3c3, 0x1, true, 0x26b33a025e93da0d, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ClientCall._bClientCalledSendOrSendReceive", b_client_called_send_or_send_receive, 0x3c4, 0x1, true, 0x6758c8694172d997, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ClientCall._bClientCalledReceiveOrSendReceive", b_client_called_receive_or_send_receive, 0x3c5, 0x1, true, 0xac5b464430629a6a, 1, uint8_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ClientCall._bClientReceiveOrSendReceiveCompletedSuccessfully", b_client_receive_or_send_receive_completed_successfully, 0x3c6, 0x1, true, 0xe714512730821bc6, 1, uint8_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "ClientCall._passthroughTraceActivity", passthrough_trace_activity, 0x80, 0x80, true, 0xa562ae132bce0208)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "ClientCall._enableCallTracing", enable_call_tracing, 0x100, 0x8, true, 0xc2d4370ed4df89bf)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "ClientCall._callId", call_id, 0x180, 0x80, true, 0x2f7a6a9011d9c09f)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::marshal_by_value_serialization_data_t), "ClientCall._marshalByValueSerializationData", marshal_by_value_serialization_data, 0x400, 0x0, true, 0xc39e97a1d92224e7)
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