#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "ServerCall._pStdId", p_std_id, 0x340, 0x40, true, 0xf3791e4661dcf6c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_call_t*), "ServerCall._pServerCtxCall", p_server_ctx_call, 0x380, 0x40, true, 0xc71b2d9645bbc185)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::push_tls_prevent_rundown_mitigation_t), "ServerCall._pushTlsMitigation", push_tls_mitigation, 0x3c0, 0x40, true, 0x5dbfc080a4d9ebfe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "ServerCall._uCallTraceId", u_call_trace_id, 0x400, 0x20, true, 0xc42c37a6ac41c1dc)
#define _m04 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint32_t), "ServerCall._dwClientPid", dw_client_pid, 0x420, 0x20, true, 0x39c0e5bb88223688, 32, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint32_t), "ServerCall._dwClientTid", dw_client_tid, 0x440, 0x20, true, 0x8fa5f11bc89b9989, 32, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "ServerCall._pDisconnectableContext", p_disconnectable_context, 0x480, 0x40, true, 0x24c4f15e74510f9c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ipid_entry_t*), "ServerCall._pIPIDEntry", p_ipid_entry, 0x4c0, 0x40, true, 0xbc0a456b4ff5882c)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ServerCall._bBecameServerAsync", b_became_server_async, 0x500, 0x1, true, 0xaa9db8a9ce931461, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ServerCall._bBecameServerAsyncAbiModel", b_became_server_async_abi_model, 0x501, 0x1, true, 0xbcb22183ad0bcab1, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "ServerCall._bEnabledRundownTlsMitigation", b_enabled_rundown_tls_mitigation, 0x502, 0x1, true, 0x80bea410159a6813, 1, uint8_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "ServerCall._passthroughTraceActivity", passthrough_trace_activity, 0x1c0, 0x80, true, 0xa2a8148befff9f77)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "ServerCall._enableCallTracing", enable_call_tracing, 0x240, 0x8, true, 0xc3f6ee108c973e2)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "ServerCall._callId", call_id, 0x2c0, 0x80, true, 0xc0541de89e01cd31)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::marshal_by_value_serialization_data_t), "ServerCall._marshalByValueSerializationData", marshal_by_value_serialization_data, 0x540, 0x0, true, 0x3980f54195f6ee6e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ServerCall._moid", moid, 0x0, 0x0, false, 0x4e4b2b5e1406aea3)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_rpc_call_t), "ServerCall._rpcCall", rpc_call, 0x0, 0x0, false, 0x4995b7045cc771c6)
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