#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0x221890902acc057d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0xbd94e56ea34ffb5b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS.ProviderContext", provider_context, 0x40, 0x40, true, 0x120952bffca5d42e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*), "_NDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS.AllocateSharedMemoryHandler", allocate_shared_memory_handler, 0x80, 0x40, true, 0x9dd9a05f40eb36ec)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_SHARED_MEMORY_PROVIDER_CHARACTERISTICS.FreeSharedMemoryHandler", free_shared_memory_handler, 0xc0, 0x40, true, 0xe723cd659bb63032)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif