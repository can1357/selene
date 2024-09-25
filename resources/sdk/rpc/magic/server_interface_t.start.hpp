#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SERVER_INTERFACE.Length", length, 0x0, 0x20, true, 0x323334aec0cc2f87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::syntax_identifier_t), "_RPC_SERVER_INTERFACE.InterfaceId", interface_id, 0x20, 0xa0, true, 0x196973d063b8ddac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::syntax_identifier_t), "_RPC_SERVER_INTERFACE.TransferSyntax", transfer_syntax, 0xc0, 0xa0, true, 0x6e2d777b93c8497b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::dispatch_table_t*), "_RPC_SERVER_INTERFACE.DispatchTable", dispatch_table, 0x180, 0x40, true, 0x7204ba9b62f18424)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SERVER_INTERFACE.RpcProtseqEndpointCount", rpc_protseq_endpoint_count, 0x1c0, 0x20, true, 0x1356b6eac540a12c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::protseq_endpoint_t*), "_RPC_SERVER_INTERFACE.RpcProtseqEndpoint", rpc_protseq_endpoint, 0x200, 0x40, true, 0x86ef964b489857f0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_SERVER_INTERFACE.DefaultManagerEpv", default_manager_epv, 0x240, 0x40, true, 0x2c794128efa9fe6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_RPC_SERVER_INTERFACE.InterpreterInfo", interpreter_info, 0x280, 0x40, true, 0x8939a60b82f69074)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_SERVER_INTERFACE.Flags", flags, 0x2c0, 0x20, true, 0x8cd62bc33da72caf)
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
#endif