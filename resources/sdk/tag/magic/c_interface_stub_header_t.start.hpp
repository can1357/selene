#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "tagCInterfaceStubHeader.piid", piid, 0x0, 0x40, true, 0xdd44b09062b4e4ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::midl_server_info_t*), "tagCInterfaceStubHeader.pServerInfo", p_server_info, 0x40, 0x40, true, 0xb0cbdd624ebd7ca0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCInterfaceStubHeader.DispatchTableCount", dispatch_table_count, 0x80, 0x20, true, 0x33ea2ae3b6e7aee6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_rpc_stub_buffer_t*, struct win::i_rpc_channel_buffer_t*, struct rpc::message_t*, uint32_t*)> const**), "tagCInterfaceStubHeader.pDispatchTable", p_dispatch_table, 0xc0, 0x40, true, 0xcb1f3af8fd45d42c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif