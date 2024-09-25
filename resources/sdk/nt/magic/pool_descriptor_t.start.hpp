#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "_POOL_DESCRIPTOR.PoolType", pool_type, 0x0, 0x0, false, 0xca452b1b36767e4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_POOL_DESCRIPTOR.PagedLock", paged_lock, 0x0, 0x0, false, 0x3d1e19813c25b28e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOL_DESCRIPTOR.NonPagedLock", non_paged_lock, 0x0, 0x0, false, 0xf3670c9b5a459436)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POOL_DESCRIPTOR.RunningAllocs", running_allocs, 0x0, 0x0, false, 0xc5af24ef0ea311cb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_POOL_DESCRIPTOR.PagesAllocated", pages_allocated, 0x0, 0x0, false, 0x625e9e89c123305)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_POOL_DESCRIPTOR.BigPagesAllocated", big_pages_allocated, 0x0, 0x0, false, 0x21b1e4cdbd01a344)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_POOL_DESCRIPTOR.BytesAllocated", bytes_allocated, 0x0, 0x0, false, 0x5be09e68d4828e2e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POOL_DESCRIPTOR.RunningDeallocs", running_deallocs, 0x0, 0x0, false, 0x4db2b592ca919ce5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_POOL_DESCRIPTOR.PagesDeallocated", pages_deallocated, 0x0, 0x0, false, 0xb75fc2c5a113d56b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_POOL_DESCRIPTOR.BigPagesDeallocated", big_pages_deallocated, 0x0, 0x0, false, 0xd5229beade89543f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_POOL_DESCRIPTOR.BytesDeallocated", bytes_deallocated, 0x0, 0x0, false, 0x7fa2381152ed73c1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POOL_DESCRIPTOR.PoolIndex", pool_index, 0x0, 0x0, false, 0x65a1242d29c25012)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "_POOL_DESCRIPTOR.PoolTypeCopy", pool_type_copy, 0x0, 0x0, false, 0xb0eb71b50dba1cf0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_POOL_DESCRIPTOR.PendingFrees", pending_frees, 0x0, 0x0, false, 0xa65539af0e20c0cd)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POOL_DESCRIPTOR.ThreadsProcessingDeferrals", threads_processing_deferrals, 0x0, 0x0, false, 0x726969b783bd81b4)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POOL_DESCRIPTOR.PendingFreeDepth", pending_free_depth, 0x0, 0x0, false, 0xb3866fdcfdc2f9c1)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 256>), "_POOL_DESCRIPTOR.ListHeads", list_heads, 0x0, 0x0, false, 0x18378fac7a1825a5)
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
#define _m13
#define _m14
#define _m15
#define _m16
#endif