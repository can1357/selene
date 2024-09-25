#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RPC_IMPORT_CONTEXT_P.LookupContext", lookup_context, 0x0, 0x40, true, 0x4f988f40a1ccf5d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "RPC_IMPORT_CONTEXT_P.ProposedHandle", proposed_handle, 0x40, 0x40, true, 0xcea65bc3270654a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::binding_vector_t*), "RPC_IMPORT_CONTEXT_P.Bindings", bindings, 0x80, 0x40, true, 0x904a644a4b61e70)
#else
#define _m00
#define _m01
#define _m02
#endif