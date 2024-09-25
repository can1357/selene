#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__MIDL_XmitDefs_0010.asyncStatus", async_status, 0x0, 0x20, true, 0xdc3be7521566b473)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "__MIDL_XmitDefs_0010.uServerCausalityTraceId", u_server_causality_trace_id, 0x40, 0x40, true, 0xfa1e6885b64137ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_xmit_defs_0008_t*), "__MIDL_XmitDefs_0010.pOutcomeDetails", p_outcome_details, 0x140, 0x40, true, 0x4181017c9c33622d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "__MIDL_XmitDefs_0010.completionTraceActivity", completion_trace_activity, 0x80, 0x80, true, 0x159605ba60580234)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif