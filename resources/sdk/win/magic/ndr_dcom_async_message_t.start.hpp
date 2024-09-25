#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_DCOM_ASYNC_MESSAGE.Version", version, 0x0, 0x20, true, 0x71fe9d2ea19abe3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_DCOM_ASYNC_MESSAGE.Signature", signature, 0x20, 0x20, true, 0x251f99d7d7f821c5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::syntax_type_t), "_NDR_DCOM_ASYNC_MESSAGE.SyntaxType", syntax_type, 0x40, 0x20, true, 0x771c603180c652f7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_DCOM_ASYNC_MESSAGE.nBeginParams", n_begin_params, 0x60, 0x20, true, 0x1454b83c0187526d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDR_DCOM_ASYNC_MESSAGE.BeginParams", begin_params, 0x80, 0x40, true, 0xb3fb2551d93127a8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_DCOM_ASYNC_MESSAGE.nFinishParams", n_finish_params, 0xc0, 0x20, true, 0x40d89be0eb84640f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDR_DCOM_ASYNC_MESSAGE.FinishParams", finish_params, 0x100, 0x40, true, 0xd0db921914771760)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDR_DCOM_ASYNC_MESSAGE.BeginStack", begin_stack, 0x140, 0x40, true, 0x69f73c2596e58abd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDR_DCOM_ASYNC_MESSAGE.FinishStack", finish_stack, 0x180, 0x40, true, 0xcacee32cce55a081)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_DCOM_ASYNC_MESSAGE.BeginStackSize", begin_stack_size, 0x1c0, 0x20, true, 0x45e222fda556d261)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_DCOM_ASYNC_MESSAGE.FinishStackSize", finish_stack_size, 0x1e0, 0x20, true, 0x8485107714f72174)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::flags_t), "_NDR_DCOM_ASYNC_MESSAGE.Flags", flags, 0x200, 0x10, true, 0x93416ace8ff360bf)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_DCOM_ASYNC_MESSAGE.RefCount", ref_count, 0x220, 0x20, true, 0xb4fe29c405f465b1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDR_DCOM_ASYNC_MESSAGE.pThis", p_this, 0x240, 0x40, true, 0x52f4fa5c7d2137ec)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDR_DCOM_ASYNC_MESSAGE.pAsyncPB", p_async_pb, 0x280, 0x40, true, 0xf9ab3a9748d38666)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDR_DCOM_ASYNC_MESSAGE.pAsyncSB", p_async_sb, 0x2c0, 0x40, true, 0x7e66a2a0a1308cd8)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_NDR_DCOM_ASYNC_MESSAGE.pdwStubPhase", pdw_stub_phase, 0x300, 0x40, true, 0xafd9d03a14227726)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDR_DCOM_ASYNC_MESSAGE.StubPhase", stub_phase, 0x340, 0x10, true, 0xc5900f41b716ea46)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_DCOM_ASYNC_MESSAGE.ErrorCode", error_code, 0x360, 0x20, true, 0x433f7a86fe59ecb6)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::message_t), "_NDR_DCOM_ASYNC_MESSAGE.RpcMsg", rpc_msg, 0x380, 0x80, true, 0x7054740bafc8ca88)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_message_t), "_NDR_DCOM_ASYNC_MESSAGE.StubMsg", stub_msg, 0x600, 0x80, true, 0x3941cb8557ddd9)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_proc_context_t), "_NDR_DCOM_ASYNC_MESSAGE.ProcContext", proc_context, 0x1280, 0x0, true, 0x4d554e39056864a)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDR_DCOM_ASYNC_MESSAGE.pArg", p_arg, 0x2b80, 0x40, true, 0x71f35307f95a4b37)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDR_DCOM_ASYNC_MESSAGE.AppStack", app_stack, 0x2bc0, 0x40, true, 0x9539ca584f8d433a)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif