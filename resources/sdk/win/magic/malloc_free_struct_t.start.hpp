#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t)>*), "_MALLOC_FREE_STRUCT.pfnAllocate", pfn_allocate, 0x0, 0x40, true, 0xe8811b3c290d3015)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_MALLOC_FREE_STRUCT.pfnFree", pfn_free, 0x40, 0x40, true, 0xca80191dc3b80542)
#else
#define _m00
#define _m01
#endif