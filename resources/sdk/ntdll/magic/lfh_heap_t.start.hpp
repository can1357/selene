#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "_LFH_HEAP.Lock", lock, 0x0, 0x40, true, 0x41d421bbc098d34c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LFH_HEAP.SubSegmentZones", sub_segment_zones, 0x40, 0x80, true, 0x8dd8d0ede477f51c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LFH_HEAP.Heap", heap, 0xc0, 0x40, true, 0x27af635ba55333ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LFH_HEAP.NextSegmentInfoArrayAddress", next_segment_info_array_address, 0x100, 0x40, true, 0xe92396e65d4d7a14)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LFH_HEAP.FirstUncommittedAddress", first_uncommitted_address, 0x140, 0x40, true, 0xc2badc0679abb830)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LFH_HEAP.ReservedAddressLimit", reserved_address_limit, 0x180, 0x40, true, 0x7797550400f7c95)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LFH_HEAP.SegmentCreate", segment_create, 0x1c0, 0x20, true, 0xd458299b4e95f4e9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LFH_HEAP.SegmentDelete", segment_delete, 0x1e0, 0x20, true, 0xf605de1e8b3e229f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_LFH_HEAP.MinimumCacheDepth", minimum_cache_depth, 0x200, 0x20, true, 0xa1077306d29656db)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_LFH_HEAP.CacheShiftThreshold", cache_shift_threshold, 0x220, 0x20, true, 0xc6da43b5291a263d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_LFH_HEAP.SizeInCache", size_in_cache, 0x240, 0x40, true, 0xd3415412f84970c1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile union heap::bucket_run_info_t), "_LFH_HEAP.RunInfo", run_info, 0x280, 0x40, true, 0xb9ffd01f8736503f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ntdll::user_memory_cache_entry_t, 12>), "_LFH_HEAP.UserBlockCache", user_block_cache, 0x300, 0x0, true, 0x3fe3b17c7659b479)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::lfh_mem_policies_t), "_LFH_HEAP.MemoryPolicies", memory_policies, 0x1500, 0x20, true, 0x12718c87b7171262)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::bucket_t, 129>), "_LFH_HEAP.Buckets", buckets, 0x1520, 0x20, true, 0x4aa3d4842942fad2)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::local_segment_info_t*, 129>), "_LFH_HEAP.SegmentInfoArrays", segment_info_arrays, 0x2540, 0x40, true, 0x31055385bbc804ae)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::local_segment_info_t*, 129>), "_LFH_HEAP.AffinitizedInfoArrays", affinitized_info_arrays, 0x4580, 0x40, true, 0xa4bc2c348d012317)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::segment_heap_t*), "_LFH_HEAP.SegmentAllocator", segment_allocator, 0x65c0, 0x40, true, 0x22e5292a4432f1f5)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::local_data_t, 1>), "_LFH_HEAP.LocalData", local_data, 0x6600, 0x80, true, 0x998e82506926e475)
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
#define _m17
#define _m18
#endif