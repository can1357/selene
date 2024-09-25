#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtlp::hp_heap_manager_t), "_EX_POOL_HEAP_MANAGER_STATE.HeapManager", heap_manager, 0x0, 0x80, true, 0xa9d76ca7bc35ce6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_POOL_HEAP_MANAGER_STATE.NumberOfPools", number_of_pools, 0x1c680, 0x20, true, 0xf8c7704b690cfb73)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ex::heap_pool_node_t, 64>), "_EX_POOL_HEAP_MANAGER_STATE.PoolNode", pool_node, 0x1c800, 0x0, true, 0xf32795b734cf1acb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ntdll::segment_heap_t*, 4>), "_EX_POOL_HEAP_MANAGER_STATE.SpecialHeaps", special_heaps, 0x434800, 0x0, true, 0xecc2a382b225785e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif