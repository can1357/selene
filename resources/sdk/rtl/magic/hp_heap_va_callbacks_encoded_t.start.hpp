#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HP_HEAP_VA_CALLBACKS_ENCODED.CallbackContext", callback_context, 0x0, 0x0, false, 0x911fb371f3207c61)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HP_HEAP_VA_CALLBACKS_ENCODED.AllocateVirtualMemoryEncoded", allocate_virtual_memory_encoded, 0x0, 0x0, false, 0x451df06bf0bcbfe3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HP_HEAP_VA_CALLBACKS_ENCODED.FreeVirtualMemoryEncoded", free_virtual_memory_encoded, 0x0, 0x0, false, 0xaada798f5e2ed318)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HP_HEAP_VA_CALLBACKS_ENCODED.QueryVirtualMemoryEncoded", query_virtual_memory_encoded, 0x0, 0x0, false, 0xada48d71d72182ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif