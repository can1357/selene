#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_ASYNC_MESSAGE.Version", version, 0x0, 0x20, true, 0x30b203a025e67a94)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_ASYNC_MESSAGE.Signature", signature, 0x20, 0x20, true, 0x40f14c095f435be1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::async_state_t*), "_NDR_ASYNC_MESSAGE.AsyncHandle", async_handle, 0x40, 0x40, true, 0xa134c421050e2b1e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::flags_t), "_NDR_ASYNC_MESSAGE.Flags", flags, 0x80, 0x10, true, 0x3742cd58042b8715)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_ASYNC_MESSAGE.StubPhase", stub_phase, 0x90, 0x10, true, 0xacac6ad7d833fe17)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_ASYNC_MESSAGE.RefCount", ref_count, 0xa0, 0x20, true, 0xaec41fdc0d5df0d1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_ASYNC_MESSAGE.ErrorCode", error_code, 0xc0, 0x20, true, 0xb9d8976dfc53fb4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::message_t), "_NDR_ASYNC_MESSAGE.RpcMsg", rpc_msg, 0x100, 0x80, true, 0x5e655dfe2ae52a0a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_message_t), "_NDR_ASYNC_MESSAGE.StubMsg", stub_msg, 0x380, 0x80, true, 0xef75b38f86f4bf9e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_NDR_ASYNC_MESSAGE.pdwStubPhase", pdw_stub_phase, 0x1000, 0x40, true, 0xf82e4cc61246e173)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_proc_context_t), "_NDR_ASYNC_MESSAGE.ProcContext", proc_context, 0x1040, 0x0, true, 0xd7a767e89a3268df)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDR_ASYNC_MESSAGE.AsyncGuard", async_guard, 0x2940, 0x80, true, 0xf85e090852bdd781)
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
#define _m09
#define _m10
#define _m11
#endif