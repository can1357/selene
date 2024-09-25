#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RPC_SYNTAX_IDENTIFIER.SyntaxGUID", syntax_guid, 0x0, 0x80, true, 0xf42e990c950cf30e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::version_t), "_RPC_SYNTAX_IDENTIFIER.SyntaxVersion", syntax_version, 0x80, 0x20, true, 0xacde8224a9c88ddb)
#else
#define _m00
#define _m01
#endif