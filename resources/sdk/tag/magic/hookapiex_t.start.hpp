#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHOOKAPIEX.dwHooksetId", dw_hookset_id, 0x0, 0x20, true, 0xfda61082361beac2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagHOOKAPIEX.pszRedirModule", psz_redir_module, 0x40, 0x40, true, 0x6568c3781b4619ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagHOOKAPIEX.pszRedirFunctionName", psz_redir_function_name, 0x80, 0x40, true, 0x4b235e11c405fe91)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagHOOKAPIEX.pFinalModule", p_final_module, 0xc0, 0x40, true, 0xefdc798e184bccad)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagHOOKAPIEX.pfnFinal", pfn_final, 0x100, 0x40, true, 0x4a9068334c4ac4d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHOOKAPIEX.bStub", b_stub, 0x140, 0x20, true, 0x29d15f88ee83f1c3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagHOOKAPIEX.pStubModule", p_stub_module, 0x180, 0x40, true, 0x16d8fa0cfd71dfa5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagHOOKAPIEX.pfnStub", pfn_stub, 0x1c0, 0x40, true, 0x942adfe29873a829)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::hookapi_t*), "tagHOOKAPIEX.pTopOfChain", p_top_of_chain, 0x200, 0x40, true, 0x4aff1ff7e90f40f7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::hookapi_t*), "tagHOOKAPIEX.pNext", p_next, 0x240, 0x40, true, 0x7fd190f46b061298)
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
#endif