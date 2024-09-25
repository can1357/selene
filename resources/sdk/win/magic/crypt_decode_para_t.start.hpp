#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_DECODE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xd0f78d8ecfdeb520)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t)>*), "_CRYPT_DECODE_PARA.pfnAlloc", pfn_alloc, 0x40, 0x40, true, 0x48db2c6477904e83)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CRYPT_DECODE_PARA.pfnFree", pfn_free, 0x80, 0x40, true, 0x7e728dd8ddde5199)
#else
#define _m00
#define _m01
#define _m02
#endif