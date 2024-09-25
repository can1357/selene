#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "RPC_IF_ID_VECTOR.Count", count, 0x0, 0x20, true, 0x25d142a7695e2436)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rpc::if_id_t*, 1>), "RPC_IF_ID_VECTOR.IfId", if_id, 0x40, 0x40, true, 0x366b31c6db2d7c5e)
#else
#define _m00
#define _m01
#endif