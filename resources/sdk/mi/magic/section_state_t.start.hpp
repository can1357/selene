#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SECTION_STATE.SectionObjectPointersLock", section_object_pointers_lock, 0x0, 0x20, true, 0x8cbea1c4283416ec)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_SECTION_STATE.SectionBasedRoot", section_based_root, 0x40, 0x40, true, 0xad08e9881b1eab44)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SECTION_STATE.SectionBasedLock", section_based_lock, 0x80, 0x40, true, 0xa2af4e8eab1fde56)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.DataSectionProtectionMask", data_section_protection_mask, 0x100, 0x20, true, 0xc83b6ad9e217bc91)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SECTION_STATE.HighSectionBase", high_section_base, 0x140, 0x40, true, 0xcab7e9905f1c90ca)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::msubsection_t), "_MI_SECTION_STATE.PhysicalSubsection", physical_subsection, 0x180, 0x80, true, 0x89693ae47442af33)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t), "_MI_SECTION_STATE.PhysicalControlArea", physical_control_area, 0x600, 0x0, true, 0xae31549b5ca5c26b)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_SECTION_STATE.DanglingExtentsWorkItem", dangling_extents_work_item, 0xb80, 0x0, true, 0x1adae34c0b3f3164)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SECTION_STATE.DanglingExtentsWorkerActive", dangling_extents_worker_active, 0xd88, 0x8, true, 0x6351e9ff71491ed8)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SECTION_STATE.RelocateBitmapsLock", relocate_bitmaps_lock, 0xe40, 0x40, true, 0x57661bb965a493eb)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::bitmap_t, struct rtl::bitmap_ex_t>), "_MI_SECTION_STATE.ImageBitMap64Low", image_bit_map64_low, 0x1300, 0x80, true, 0x69e6d41fdde783b1)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_MI_SECTION_STATE.ImageBias64Low", image_bias64_low, 0x1380, 0x40, true, 0xb82821a990c29929, 0, uint32_t,uint64_t)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SECTION_STATE.ApiSetSection", api_set_section, 0x13c0, 0x40, true, 0x4095f69129b5631b)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SECTION_STATE.ApiSetSchema", api_set_schema, 0x1400, 0x40, true, 0x5d69c4530bfe6adf)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SECTION_STATE.ApiSetSchemaSize", api_set_schema_size, 0x1440, 0x40, true, 0x1370a3490bc80082)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.LostDataFiles", lost_data_files, 0x1480, 0x20, true, 0xf4b0b1dbcb0ce3e2)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.LostDataPages", lost_data_pages, 0x14a0, 0x20, true, 0xb07b4ed813c19a99)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.ImageFailureReason", image_failure_reason, 0x14c0, 0x20, true, 0x61b85e4127d142ec)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.ImageCfgFailure", image_cfg_failure, 0x1640, 0x20, true, 0x745cc020165b0853)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SECTION_STATE.ImageValidationFailed", image_validation_failed, 0x18e0, 0x20, true, 0x3d83f16df503b37d)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_SECTION_STATE.UnusedSegmentPagedPool", unused_segment_paged_pool, 0xc0, 0x40, true, 0xbc196616e33a6ea5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_SECTION_STATE.PurgingExtentPages", purging_extent_pages, 0xa00, 0x40, true, 0x6bedd0bd3910b243)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MI_SECTION_STATE.DanglingExtentPages", dangling_extent_pages, 0xb40, 0x40, true, 0xad9c85241724c3a1)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::extent_deletion_wait_block_t), "_MI_SECTION_STATE.DanglingExtentsDeletionWaitList", dangling_extents_deletion_wait_list, 0xc80, 0x0, true, 0x54608babd84d5b38)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SECTION_STATE.FileOnlyMemoryPfnsCreated", file_only_memory_pfns_created, 0xd80, 0x8, true, 0xc1a9f6876325dce9)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SECTION_STATE.PurgingExtentsNeedWatchdog", purging_extents_need_watchdog, 0xd90, 0x8, true, 0x4d8493cecfe17fba)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_SECTION_STATE.PrototypePtesTree", prototype_ptes_tree, 0xdc0, 0x40, true, 0xde8288970940c662)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SECTION_STATE.PrototypePtesTreeSpinLock", prototype_ptes_tree_spin_lock, 0xe00, 0x20, true, 0xfac7530aa459ff66)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_SECTION_STATE.ImageBitMapNative", image_bit_map_native, 0xe80, 0x80, true, 0x7c4e1f965098d621)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SECTION_STATE.ImageBiasNative", image_bias_native, 0xf00, 0x40, true, 0x6d8fe2b53cd87f5c)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dll_overflow_area_t), "_MI_SECTION_STATE.OverflowArea", overflow_area, 0xf40, 0x0, true, 0x7d31d0b5c81b5910)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::section_wow_state_t, 1>), "_MI_SECTION_STATE.Wow", wow, 0x1040, 0x0, true, 0x3b15aa37e66d887c)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SECTION_STATE.ImageBiasWow", image_bias_wow, 0x1240, 0x40, true, 0x4e0ddd680766f68b)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_SECTION_STATE.ImageBitMapWowScratch", image_bit_map_wow_scratch, 0x1280, 0x80, true, 0x72ffbe92ee79ab52)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::section_t*), "_MI_SECTION_STATE.CfgBitMapSection", cfg_bit_map_section, 0x1500, 0x40, true, 0x598802d3de3edbbc)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_MI_SECTION_STATE.CfgBitMapControlArea", cfg_bit_map_control_area, 0x1540, 0x40, true, 0xb0ac515a096d00b3)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_SECTION_STATE.KernelCfgBitMap", kernel_cfg_bit_map, 0x1580, 0x80, true, 0xd96d146f51643dfa)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SECTION_STATE.KernelCfgBitMapLock", kernel_cfg_bit_map_lock, 0x1600, 0x40, true, 0xc090e6a2bcd638d5)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.RetpolineReservePages", retpoline_reserve_pages, 0x1660, 0x20, true, 0xdad92976cfd48ef)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_MI_SECTION_STATE.RetpolineStubMdl", retpoline_stub_mdl, 0x1680, 0x40, true, 0x1ce7613132e20481)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_SECTION_STATE.KernelRetpolineBitMap", kernel_retpoline_bit_map, 0x16c0, 0x80, true, 0xbb42e4cc5dfdee0e)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::retpoline_routines_t*), "_MI_SECTION_STATE.RetpolineRoutines", retpoline_routines, 0x1740, 0x40, true, 0x6411bd9392c70b3d)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_SECTION_STATE.RetpolineRevertPte", retpoline_revert_pte, 0x1780, 0x40, true, 0xfdd192d39dd3bd0d)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_SECTION_STATE.NonRetpolineImageLoadList", non_retpoline_image_load_list, 0x17c0, 0x80, true, 0x37a6627e405564fd)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.RetpolineStubPages", retpoline_stub_pages, 0x1840, 0x20, true, 0xee835a4eff1371f7)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_SECTION_STATE.RetpolineBootStatus", retpoline_boot_status, 0x1860, 0x20, true, 0x309693a1a8eda079)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.ImageBreakpointEnabled", image_breakpoint_enabled, 0x1880, 0x20, true, 0x4979b168865f5949)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.ImageBreakpointChecksum", image_breakpoint_checksum, 0x18a0, 0x20, true, 0xd8e61a1735053271)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.ImageBreakpointSize", image_breakpoint_size, 0x18c0, 0x20, true, 0xece1f5cecb32ebf9)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_SECTION_STATE.ImageExtentTree", image_extent_tree, 0x1900, 0x40, true, 0x315299dc373a92e1)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SECTION_STATE.ImageExtentTreeLock", image_extent_tree_lock, 0x1940, 0x40, true, 0xa020148a9ec5f103)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.HotPatchReserveSize", hot_patch_reserve_size, 0x1980, 0x20, true, 0xc467693303635314)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SECTION_STATE.SectionExtendLock", section_extend_lock, 0x0, 0x0, false, 0x18857bc96baab5dd)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SECTION_STATE.SectionExtendSetLock", section_extend_set_lock, 0x0, 0x0, false, 0x7f82bdc85de25920)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SECTION_STATE.UnusedSubsectionPagedPool", unused_subsection_paged_pool, 0x0, 0x0, false, 0x5807195135a89ec3)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.UnusedSegmentForceFree", unused_segment_force_free, 0x0, 0x0, false, 0x7321db9585cff3db)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MI_SECTION_STATE.DanglingExtentsPages", dangling_extents_pages, 0x0, 0x0, false, 0x1504bfb8e2b900f7)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SECTION_STATE.DanglingExtentsLock", dangling_extents_lock, 0x0, 0x0, false, 0x597907cb1b06783a)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_SECTION_STATE.PageFileSectionHead", page_file_section_head, 0x0, 0x0, false, 0xdcbf6edee79122a)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SECTION_STATE.PageFileSectionListSpinLock", page_file_section_list_spin_lock, 0x0, 0x0, false, 0xf420dc18b28deee7)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::cross_partition_charges_t), "_MI_SECTION_STATE.SharedSegmentCharges", shared_segment_charges, 0x0, 0x0, false, 0xfb6d4e13b7876584)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::cross_partition_charges_t), "_MI_SECTION_STATE.SharedPageCombineCharges", shared_page_combine_charges, 0x0, 0x0, false, 0xff48218acf25f6fa)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.ImageBias", image_bias, 0x0, 0x0, false, 0xe67bc9044027e9ee)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_MI_SECTION_STATE.ImageBitMap", image_bit_map, 0x0, 0x0, false, 0xb4f569498a3be0e7)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SECTION_STATE.ImageBias64High", image_bias64_high, 0x0, 0x0, false, 0xe14c3e5aa7880e97)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_MI_SECTION_STATE.ImageBitMap64High", image_bit_map64_high, 0x0, 0x0, false, 0xb9434bc45a07863b)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_MI_SECTION_STATE.ImageBitMapWow64Dll", image_bit_map_wow64_dll, 0x0, 0x0, false, 0x32f095964d14827)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::section_t*), "_MI_SECTION_STATE.CfgBitMapSection32", cfg_bit_map_section32, 0x0, 0x0, false, 0x643601bd1128ab8f)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_MI_SECTION_STATE.CfgBitMapControlArea32", cfg_bit_map_control_area32, 0x0, 0x0, false, 0x6c4136fd6fc1a9c2)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::section_t*), "_MI_SECTION_STATE.CfgBitMapSection64", cfg_bit_map_section64, 0x0, 0x0, false, 0xa25309e79f247a37)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_MI_SECTION_STATE.CfgBitMapControlArea64", cfg_bit_map_control_area64, 0x0, 0x0, false, 0x47cacbf4f75fdaf4)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::avl_tree_t, 2>), "_MI_SECTION_STATE.ExtentTree", extent_tree, 0x0, 0x0, false, 0x877510656c5334d5)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SECTION_STATE.ExtentTreeLock", extent_tree_lock, 0x0, 0x0, false, 0x2b9c653282d67c0c)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SECTION_STATE.ExtentForwardProgressMappingLock", extent_forward_progress_mapping_lock, 0x0, 0x0, false, 0xbfd028bad1e17f77)
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
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#endif