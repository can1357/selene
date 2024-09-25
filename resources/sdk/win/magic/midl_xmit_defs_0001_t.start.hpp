#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "__MIDL_XmitDefs_0001.asyncOperationId", async_operation_id, 0x0, 0x80, true, 0xfdd0fe356ad8d997)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "__MIDL_XmitDefs_0001.oxidClientProcessNA", oxid_client_process_na, 0x80, 0x40, true, 0xd3cb1992ef62f11e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "__MIDL_XmitDefs_0001.originalClientLogicalThreadId", original_client_logical_thread_id, 0xc0, 0x80, true, 0x28fa4542ae6ee4d2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "__MIDL_XmitDefs_0001.uClientCausalityTraceId", u_client_causality_trace_id, 0x140, 0x40, true, 0x937a15ce65b3e6d8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif