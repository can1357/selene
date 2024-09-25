#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_KMEM_CACHE.TotalSize", total_size, 0x0, 0x20, true, 0xeb5eb1b1433b7750)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_KMEM_CACHE.SizeOfData", size_of_data, 0x20, 0x20, true, 0x45b148624483f7b7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_KMEM_CACHE.SignatureSize", signature_size, 0x40, 0x20, true, 0x79233300d97006b2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_KMEM_CACHE.Flags", flags, 0x60, 0x20, true, 0x20175a3760ff324a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_KMEM_CACHE.Version", version, 0x80, 0x20, true, 0x1cede6198722cfe4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::sl_kmem_cache_value_descriptor_t, 1>), "_SL_KMEM_CACHE.Descriptors", descriptors, 0xa0, 0xa0, true, 0xbcfd51a210b5882f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif