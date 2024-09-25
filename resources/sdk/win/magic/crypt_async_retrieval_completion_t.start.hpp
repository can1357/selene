#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_crypt_async_retrieval_completion_func_t ), "_CRYPT_ASYNC_RETRIEVAL_COMPLETION.pfnCompletion", pfn_completion, 0x0, 0x40, true, 0x12775c54ce43384a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_ASYNC_RETRIEVAL_COMPLETION.pvCompletion", pv_completion, 0x40, 0x40, true, 0xdd9ae626e1d16658)
#else
#define _m00
#define _m01
#endif