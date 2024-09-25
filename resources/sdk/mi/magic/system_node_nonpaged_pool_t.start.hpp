#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dynamic_bitmap_t), "_MI_SYSTEM_NODE_NONPAGED_POOL.DynamicBitMapNonPagedPool", dynamic_bit_map_non_paged_pool, 0x0, 0x0, false, 0xc3ea42b9c1c9956b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_NODE_NONPAGED_POOL.CachedNonPagedPoolCount", cached_non_paged_pool_count, 0x0, 0x0, false, 0x62b9d694f6ac1dbe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_NODE_NONPAGED_POOL.NonPagedPoolSpinLock", non_paged_pool_spin_lock, 0x0, 0x0, false, 0x77dc8a356d04d316)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MI_SYSTEM_NODE_NONPAGED_POOL.CachedNonPagedPool", cached_non_paged_pool, 0x0, 0x0, false, 0x7f0ae8c9c6e50a33)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SYSTEM_NODE_NONPAGED_POOL.NonPagedPoolFirstVa", non_paged_pool_first_va, 0x0, 0x0, false, 0xc894f52ef662f14b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SYSTEM_NODE_NONPAGED_POOL.NonPagedPoolLastVa", non_paged_pool_last_va, 0x0, 0x0, false, 0xbed066501e4714c2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<enum mi::pfn_cache_attribute_t, 4>, 4>), "_MI_SYSTEM_NODE_NONPAGED_POOL.OptimalZeroingAttribute", optimal_zeroing_attribute, 0x0, 0x0, false, 0x5586812459c474cd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<sdk::array<struct mi::zero_cost_counts_t, 2>, 2>, 3>), "_MI_SYSTEM_NODE_NONPAGED_POOL.ZeroCostCounts", zero_cost_counts, 0x0, 0x0, false, 0xe3f0fc16ab208e5c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_node_information_t*), "_MI_SYSTEM_NODE_NONPAGED_POOL.SystemNodeInformation", system_node_information, 0x0, 0x0, false, 0x2d7b1a01083b5643)
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
#endif