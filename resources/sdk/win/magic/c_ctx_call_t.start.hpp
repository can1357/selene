#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._dwFlags", dw_flags, 0x100, 0x20, true, 0x43f0ff24848cb207)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._dwStage", dw_stage, 0x120, 0x20, true, 0xa96525dc61c21aa2)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._cMarshalItfs", c_marshal_itfs, 0x140, 0x20, true, 0x1604fd1ddee6cb32)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._cUnmarshalItfs", c_unmarshal_itfs, 0x160, 0x20, true, 0x88211790eb5821f4)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._cFree", c_free, 0x180, 0x20, true, 0xf0c924f2201ad3ba)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._cError", c_error, 0x1a0, 0x20, true, 0x3e701249faff5a40)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CCtxCall._fError", f_error, 0x1c0, 0x20, true, 0x2fd8e491bc537dc7)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._dwDestCtx", dw_dest_ctx, 0x1e0, 0x20, true, 0x48b44fe6ee31bd8b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._cItfs", c_itfs, 0x200, 0x20, true, 0xbe1ef1e5020fa7d5)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._idx", idx, 0x220, 0x20, true, 0xcdb29694cd626521)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "CCtxCall._ppItfs", pp_itfs, 0x240, 0x40, true, 0x32f78bc663585f99)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._cPolicies", c_policies, 0x280, 0x20, true, 0xfa0e9be417ba767d)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._cbExtent", cb_extent, 0x2a0, 0x20, true, 0xa09fb312fda7ad68)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CCtxCall._pvExtent", pv_extent, 0x2c0, 0x40, true, 0x4883879a88bfa25d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CCtxCall._hr", hr, 0x300, 0x20, true, 0xc5f24dfd1fc2a6d0)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_policy_set_t*), "CCtxCall._pPS", p_ps, 0x340, 0x40, true, 0x71b054b2ed380fc2)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "CCtxCall._pContext", p_context, 0x380, 0x40, true, 0xdbc91458c79b478c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._dataRep", data_rep, 0x3c0, 0x20, true, 0xa58fe368367db441)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CCtxCall._hrServer", hr_server, 0x3e0, 0x20, true, 0x6c8ce6dda82c1d22)
#define _m019 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint16_t), "CCtxCall._iMethod", i_method, 0x400, 0x10, true, 0x7c550679e5710c26, 16, uint16_t)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "CCtxCall._piid", piid, 0x440, 0x40, true, 0xa6e5bfde9b9f057f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxCall._uCallTraceId", u_call_trace_id, 0x480, 0x20, true, 0x3bd92dcd2c4df7cf)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::prevent_rundown_bias_container_t*), "CCtxCall._pInBiasContainer", p_in_bias_container, 0x5c0, 0x40, true, 0x21a3e48f54da5f25)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::prevent_rundown_bias_container_t*), "CCtxCall._pOutBiasContainer", p_out_bias_container, 0x600, 0x40, true, 0x4c1639f35b476451)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::push_tls_prevent_rundown_mitigation_t), "CCtxCall._pushTlsMitigation", push_tls_mitigation, 0x640, 0x40, true, 0x90567f38c1dbdc75)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CCtxCall._bEnabledInParameterMitigation", b_enabled_in_parameter_mitigation, 0x680, 0x1, true, 0xe11d1e9897666cea, 1, uint8_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CCtxCall._bEnabledInprocOutParameterMitigation", b_enabled_inproc_out_parameter_mitigation, 0x681, 0x1, true, 0x682894059804bacb, 1, uint8_t)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rpcolemessage_t*), "CCtxCall._pStubMessage", p_stub_message, 0x800, 0x40, true, 0x43b64edc7bf2d7b9)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_wrapper_t*), "CCtxCall._pWrapper", p_wrapper, 0x840, 0x40, true, 0xf196577b3a92589)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::i_face_entry_t*), "CCtxCall._pIFaceEntry", p_i_face_entry, 0x880, 0x40, true, 0x34d0012187747511)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<class win::marshaled_handle_storage_t*, 2>), "CCtxCall._marshaledHandles", marshaled_handles, 0x8c0, 0x80, true, 0xb885e9be8f8c98a2)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::error_object_with_associated_passthrough_data_t), "CCtxCall._savedErrorObject", saved_error_object, 0x4c0, 0xc0, true, 0x2879101ba22ee66)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "CCtxCall._enableCallTracing", enable_call_tracing, 0x580, 0x8, true, 0x3a858b48a22c312c)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CCtxCall._passthroughTraceActivity", passthrough_trace_activity, 0x6a0, 0x80, true, 0xba0c6039a311dcd4)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CCtxCall._callId", call_id, 0x780, 0x80, true, 0xef9faa3c8214b4f1)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::source_of_client_h_result_t), "CCtxCall._sourceOfClientHResult", source_of_client_h_result, 0x940, 0x20, true, 0xf03b5e0a7924fdf4)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::marshal_by_value_serialization_data_t), "CCtxCall._marshalByValueSerializationData", marshal_by_value_serialization_data, 0x980, 0x0, true, 0xa1a5c80b2a76c04c)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CCtxCall._clientSyncTraceStarted", client_sync_trace_started, 0xa80, 0x8, true, 0x95a510a16363aa27)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_error_info_t*), "CCtxCall._pErrorInfo", p_error_info, 0x0, 0x0, false, 0x5dfd32579154c68e)
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
#endif