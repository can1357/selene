#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_DISPATCH_TABLE.DispatchTableCount", dispatch_table_count, 0x0, 0x20, true, 0x3712db700a5eb9d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct rpc::message_t*)>**), "RPC_DISPATCH_TABLE.DispatchTable", dispatch_table, 0x40, 0x40, true, 0x913d79922a8c4340)
#else
#define _m00
#define _m01
#endif