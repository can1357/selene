#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_VA_STATE.SystemTablesLock", system_tables_lock, 0x0, 0x40, true, 0x45445d719294f6f3)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_VA_STATE.AvailableSystemCacheVa", available_system_cache_va, 0x40, 0x40, true, 0xa657e827a9c803e0)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dynamic_bitmap_t), "_MI_SYSTEM_VA_STATE.DynamicBitMapSystemPtes", dynamic_bit_map_system_ptes, 0x2c0, 0x40, true, 0x3e14afa19012614f)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::dynamic_bitmap_t, 2>), "_MI_SYSTEM_VA_STATE.DynamicBitMapDriverImages", dynamic_bit_map_driver_images, 0x500, 0x80, true, 0x8380d2bdb47e1b0d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dynamic_bitmap_t), "_MI_SYSTEM_VA_STATE.DynamicBitMapPagedPool", dynamic_bit_map_paged_pool, 0x980, 0x40, true, 0xda71e26f5d9f73c1)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dynamic_bitmap_t), "_MI_SYSTEM_VA_STATE.DynamicBitMapSystemCache", dynamic_bit_map_system_cache, 0xbc0, 0x40, true, 0x7259c61e0d646c38)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_MI_SYSTEM_VA_STATE.SystemVaAssignment", system_va_assignment, 0x10c0, 0x0, true, 0x9be1adb952cbca7c)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SYSTEM_VA_STATE.SystemVaAssignmentHint", system_va_assignment_hint, 0x11c0, 0x20, true, 0xb0ab7b452810eb5a)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SYSTEM_VA_STATE.DeleteKvaLock", delete_kva_lock, 0x15e0, 0x20, true, 0x9713be2ac6ea0716)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SYSTEM_VA_STATE.HyperSpaceEnd", hyper_space_end, 0x1840, 0x40, true, 0xf6971f78dc22f579)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_SYSTEM_VA_STATE.FreeSystemCacheVa", free_system_cache_va, 0x1940, 0xc0, true, 0xb282590bb005fbba)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_VA_STATE.SystemVaLock", system_va_lock, 0x1a00, 0x40, true, 0x5a33522bf1da35b8)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_VA_STATE.SystemCacheViewLock", system_cache_view_lock, 0x1a40, 0x40, true, 0x464b28add45c5729)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dynamic_bitmap_t), "_MI_SYSTEM_VA_STATE.DynamicBitMapKernelStacks", dynamic_bit_map_kernel_stacks, 0x80, 0x40, true, 0xb9075cd50ff48c6d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dynamic_bitmap_t), "_MI_SYSTEM_VA_STATE.DynamicBitMapSecureNonPagedPool", dynamic_bit_map_secure_non_paged_pool, 0xe00, 0x40, true, 0x7cdff95c58702a7a)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SYSTEM_VA_STATE.HalPrivateVaStart", hal_private_va_start, 0x1040, 0x40, true, 0x5b77edf9bcd89a7f)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_VA_STATE.HalPrivateVaSize", hal_private_va_size, 0x1080, 0x40, true, 0x84a5dc07169c56c5)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_MI_SYSTEM_VA_STATE.TopLevelPteLockBits", top_level_pte_lock_bits, 0x11e0, 0x0, true, 0x4ab07eecbf71e95e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::wsle_t*, 8>), "_MI_SYSTEM_VA_STATE.WsleArrays", wsle_arrays, 0x1600, 0x0, true, 0xe78910220983deb8)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SYSTEM_VA_STATE.PagableHyperSpace", pagable_hyper_space, 0x1800, 0x40, true, 0xb1040a82944e2c93)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_VA_STATE.PagableHyperSpaceBytes", pagable_hyper_space_bytes, 0x1880, 0x40, true, 0xbe54913fef60249)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_MI_SYSTEM_VA_STATE.PageTableCommitmentOffset", page_table_commitment_offset, 0x18c0, 0x80, true, 0x568343a987eac293)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmwsl_instance_t, 8>), "_MI_SYSTEM_VA_STATE.SystemWorkingSetList", system_working_set_list, 0x1a80, 0x0, true, 0x1d2341fbb7ec98a5)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_MI_SYSTEM_VA_STATE.SelfmapLock", selfmap_lock, 0x2480, 0x0, true, 0xb92849cca5df127b)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dynamic_bitmap_t), "_MI_SYSTEM_VA_STATE.DynamicBitMapSpecialPool", dynamic_bit_map_special_pool, 0x0, 0x0, false, 0x57ce9aaeaed26463)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_MI_SYSTEM_VA_STATE.VaRegionShadowed", va_region_shadowed, 0x0, 0x0, false, 0xb0980a9a52be05c8)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsle_hash_t*), "_MI_SYSTEM_VA_STATE.WorkingSetListHashStart", working_set_list_hash_start, 0x0, 0x0, false, 0xc588f2c036e22cf5)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsle_hash_t*), "_MI_SYSTEM_VA_STATE.WorkingSetListHashEnd", working_set_list_hash_end, 0x0, 0x0, false, 0x60ff25131f881fef)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsle_nondirect_hash_t*), "_MI_SYSTEM_VA_STATE.WorkingSetListIndirectHashStart", working_set_list_indirect_hash_start, 0x0, 0x0, false, 0x4c90625de54edcb4)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::pte_chain_head_t), "_MI_SYSTEM_VA_STATE.FreeSystemCache", free_system_cache, 0x0, 0x0, false, 0x7d0621e77e795b5e)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SYSTEM_VA_STATE.SystemCacheInitLock", system_cache_init_lock, 0x0, 0x0, false, 0xf608c23d121b9b63)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_MI_SYSTEM_VA_STATE.UnusableWsles", unusable_wsles, 0x0, 0x0, false, 0x7647ba5937b9304c)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_MI_SYSTEM_VA_STATE.PossibleWsles", possible_wsles, 0x0, 0x0, false, 0x50e9ef8eff879d37)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmsupport_instance_t*, 3>), "_MI_SYSTEM_VA_STATE.SystemWs", system_ws, 0x0, 0x0, false, 0xdd2188d4a35d18c8)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dynamic_bitmap_t), "_MI_SYSTEM_VA_STATE.DynamicBitMapKernelShadowStacks", dynamic_bit_map_kernel_shadow_stacks, 0x0, 0x0, false, 0xcdd990a8ee3b381b)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#endif