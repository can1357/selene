#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CREATE_CONTEXT_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xd071d759347d73d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CERT_CREATE_CONTEXT_PARA.pfnFree", pfn_free, 0x40, 0x40, true, 0x26bfd0c13026caea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CREATE_CONTEXT_PARA.pvFree", pv_free, 0x80, 0x40, true, 0xdb06437bb21a7bca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_cert_create_context_sort_func_t ), "_CERT_CREATE_CONTEXT_PARA.pfnSort", pfn_sort, 0xc0, 0x40, true, 0x845dca9eb198ca3b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CREATE_CONTEXT_PARA.pvSort", pv_sort, 0x100, 0x40, true, 0x24b5c529d1cd9c3e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif