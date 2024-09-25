#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::vamgr_vaspace_t), "_HEAP_VAMGR_CTX.VaSpace", va_space, 0x0, 0x0, true, 0x5f431778f1a491de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VAMGR_CTX.AllocatorLock", allocator_lock, 0x4300, 0x40, true, 0x64c3332bfed05aae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_VAMGR_CTX.AllocatorCount", allocator_count, 0x4340, 0x20, true, 0x5b9466c1fada6f96)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::vamgr_allocator_t, 255>), "_HEAP_VAMGR_CTX.Allocators", allocators, 0x4380, 0x80, true, 0x21704a79556849a9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif