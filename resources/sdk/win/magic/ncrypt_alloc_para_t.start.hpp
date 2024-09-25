#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NCRYPT_ALLOC_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xaf19eb432bf9f8ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t)>*), "NCRYPT_ALLOC_PARA.pfnAlloc", pfn_alloc, 0x40, 0x40, true, 0xea9fa4f1afcae573)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "NCRYPT_ALLOC_PARA.pfnFree", pfn_free, 0x80, 0x40, true, 0x936b72d9036fa434)
#else
#define _m00
#define _m01
#define _m02
#endif