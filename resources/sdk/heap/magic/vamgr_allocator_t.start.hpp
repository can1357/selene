#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_VAMGR_ALLOCATOR.TreeLock", tree_lock, 0x0, 0x40, true, 0x8e07749172085e34)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_HEAP_VAMGR_ALLOCATOR.FreeRanges", free_ranges, 0x40, 0x80, true, 0xbf82e0a92c328a41)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::vamgr_vaspace_t*), "_HEAP_VAMGR_ALLOCATOR.VaSpace", va_space, 0xc0, 0x40, true, 0x11ec3afecaff4d62)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_VAMGR_ALLOCATOR.ChunksPerRegion", chunks_per_region, 0x140, 0x10, true, 0xa8fa8bab472225d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_VAMGR_ALLOCATOR.RefCount", ref_count, 0x150, 0x10, true, 0xdd33825e8d3f4e71)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_VAMGR_ALLOCATOR.AllocatorIndex", allocator_index, 0x160, 0x8, true, 0xc19c8273ca99e3a6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_VAMGR_ALLOCATOR.NumaNode", numa_node, 0x168, 0x8, true, 0x22e7781f9e9a8db)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VAMGR_ALLOCATOR.LockType", lock_type, 0x170, 0x1, true, 0x789ebded61eee61c, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_HEAP_VAMGR_ALLOCATOR.MemoryType", memory_type, 0x171, 0x2, true, 0x985396edf77a8692, 0, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VAMGR_ALLOCATOR.ConstrainedVA", constrained_va, 0x173, 0x1, true, 0xa2348e8cf2e25d41, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VAMGR_ALLOCATOR.AllowFreeHead", allow_free_head, 0x174, 0x1, true, 0xf02649791d170f75, 1, uint8_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_VAMGR_ALLOCATOR.PartitionHandle", partition_handle, 0x100, 0x40, true, 0xf8b0fb8fa07228)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_VAMGR_ALLOCATOR.ContextHandle", context_handle, 0x0, 0x0, false, 0xafcc2e348f48450b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif