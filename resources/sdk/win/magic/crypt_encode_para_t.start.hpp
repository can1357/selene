#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_ENCODE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xb7efe7bd5832f7ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t)>*), "_CRYPT_ENCODE_PARA.pfnAlloc", pfn_alloc, 0x40, 0x40, true, 0xc8b04e40950b1197)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CRYPT_ENCODE_PARA.pfnFree", pfn_free, 0x80, 0x40, true, 0x80f9d5d750dd805b)
#else
#define _m00
#define _m01
#define _m02
#endif