#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "LegacyFreeSyncServerCall._pStdId", p_std_id, 0x340, 0x40, true, 0xe32e1ae15b4d568c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_call_t*), "LegacyFreeSyncServerCall._pServerCtxCall", p_server_ctx_call, 0x380, 0x40, true, 0x849610c6653a02e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::push_tls_prevent_rundown_mitigation_t), "LegacyFreeSyncServerCall._pushTlsMitigation", push_tls_mitigation, 0x3c0, 0x40, true, 0x70b8074dff15eec8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "LegacyFreeSyncServerCall._uCallTraceId", u_call_trace_id, 0x400, 0x20, true, 0x33d527dfebcfb9c8)
#define _m04 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint32_t), "LegacyFreeSyncServerCall._dwClientPid", dw_client_pid, 0x420, 0x20, true, 0x97d7ff9702594496, 32, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint32_t), "LegacyFreeSyncServerCall._dwClientTid", dw_client_tid, 0x440, 0x20, true, 0xa64ec19545a0b0e1, 32, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "LegacyFreeSyncServerCall._pDisconnectableContext", p_disconnectable_context, 0x480, 0x40, true, 0x795fd31440726bd1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t*), "LegacyFreeSyncServerCall._pIPIDEntry", p_ipid_entry, 0x4c0, 0x40, true, 0x8afc629ad698bf1a)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "LegacyFreeSyncServerCall._bBecameServerAsync", b_became_server_async, 0x500, 0x1, true, 0xcfc9d80fd9e98ff5, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "LegacyFreeSyncServerCall._bBecameServerAsyncAbiModel", b_became_server_async_abi_model, 0x501, 0x1, true, 0x491d8c2c8b44c0a7, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "LegacyFreeSyncServerCall._bEnabledRundownTlsMitigation", b_enabled_rundown_tls_mitigation, 0x502, 0x1, true, 0x1932cbcbe1a71c61, 1, uint8_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "LegacyFreeSyncServerCall._passthroughTraceActivity", passthrough_trace_activity, 0x1c0, 0x80, true, 0x4d71e8bf5ca1a2ec)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "LegacyFreeSyncServerCall._enableCallTracing", enable_call_tracing, 0x240, 0x8, true, 0x1da180fc77dd2650)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "LegacyFreeSyncServerCall._callId", call_id, 0x2c0, 0x80, true, 0x2cdd338265884bf2)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::marshal_by_value_serialization_data_t), "LegacyFreeSyncServerCall._marshalByValueSerializationData", marshal_by_value_serialization_data, 0x540, 0x0, true, 0x9b90bab7091adda3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "LegacyFreeSyncServerCall._moid", moid, 0x0, 0x0, false, 0x56778f1d1412baf6)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_rpc_call_t), "LegacyFreeSyncServerCall._rpcCall", rpc_call, 0x0, 0x0, false, 0x445321107c12b6ef)
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
#endif