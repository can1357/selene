#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::midl_stub_desc_t*), "_MIDL_SERVER_INFO_.pStubDesc", p_stub_desc, 0x0, 0x40, true, 0x9e5231fbf3eb1a77)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t()> const**, sdk::function<int32_t(...)> const**>), "_MIDL_SERVER_INFO_.DispatchTable", dispatch_table, 0x40, 0x40, true, 0x6422d91eea49818c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_MIDL_SERVER_INFO_.ProcString", proc_string, 0x80, 0x40, true, 0x560cfcf97db31181)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t*), "_MIDL_SERVER_INFO_.FmtStringOffset", fmt_string_offset, 0xc0, 0x40, true, 0x5555cb654c75712c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*)> const**), "_MIDL_SERVER_INFO_.ThunkTable", thunk_table, 0x100, 0x40, true, 0x57632f0cde310d02)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::syntax_identifier_t*), "_MIDL_SERVER_INFO_.pTransferSyntax", p_transfer_syntax, 0x140, 0x40, true, 0x71e1772e612c5322)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MIDL_SERVER_INFO_.nCount", n_count, 0x180, 0x40, true, 0x27f9996e92a04089)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_syntax_info_t*), "_MIDL_SERVER_INFO_.pSyntaxInfo", p_syntax_info, 0x1c0, 0x40, true, 0xcc6b763ca08f87b9)
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