#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_CLIENT_INTERFACE.Length", length, 0x0, 0x20, true, 0x474df9662fe8e233)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::syntax_identifier_t), "_RPC_CLIENT_INTERFACE.InterfaceId", interface_id, 0x20, 0xa0, true, 0xc91787e123da3d23)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::syntax_identifier_t), "_RPC_CLIENT_INTERFACE.TransferSyntax", transfer_syntax, 0xc0, 0xa0, true, 0x349d8104b1cdd59c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::dispatch_table_t*), "_RPC_CLIENT_INTERFACE.DispatchTable", dispatch_table, 0x180, 0x40, true, 0x275fc64bdd567e93)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_CLIENT_INTERFACE.RpcProtseqEndpointCount", rpc_protseq_endpoint_count, 0x1c0, 0x20, true, 0xb3d5f0f2075841b3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::protseq_endpoint_t*), "_RPC_CLIENT_INTERFACE.RpcProtseqEndpoint", rpc_protseq_endpoint, 0x200, 0x40, true, 0x551604d032c3b34b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_RPC_CLIENT_INTERFACE.InterpreterInfo", interpreter_info, 0x280, 0x40, true, 0x6a97d60eac0e8d5c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_CLIENT_INTERFACE.Flags", flags, 0x2c0, 0x20, true, 0x1f888e7d316d0ab7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif