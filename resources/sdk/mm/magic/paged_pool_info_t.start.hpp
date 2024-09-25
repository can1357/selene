#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MM_PAGED_POOL_INFO.Lock", lock, 0x0, 0x40, true, 0x54354670b8923ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_PAGED_POOL_INFO.MaximumSize", maximum_size, 0x40, 0x40, true, 0xcadd15cbb6b517c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_PAGED_POOL_INFO.AllocatedPagedPool", allocated_paged_pool, 0x80, 0x40, true, 0x3e9bea2b926ace9d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MM_PAGED_POOL_INFO.PagedPoolAllocationMap", paged_pool_allocation_map, 0x0, 0x0, false, 0xf4f4886a0e040614)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MM_PAGED_POOL_INFO.FirstPteForPagedPool", first_pte_for_paged_pool, 0x0, 0x0, false, 0x7d250707f307db1d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_PAGED_POOL_INFO.PagedPoolHint", paged_pool_hint, 0x0, 0x0, false, 0x557c2f9cf47a8240)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif