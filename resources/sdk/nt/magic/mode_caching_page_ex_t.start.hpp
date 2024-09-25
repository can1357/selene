#if !IN_PARSER
#define _m000 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_CACHING_PAGE_EX.PageCode", page_code, 0x0, 0x6, true, 0xe81c9cd4806e9b65, 6, uint8_t)
#define _m001 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.SubPageFormat", sub_page_format, 0x6, 0x1, true, 0xa683e37f2b50d99b, 1, uint8_t)
#define _m002 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.PageSavable", page_savable, 0x7, 0x1, true, 0xfe9921c0ae2efe73, 1, uint8_t)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CACHING_PAGE_EX.PageLength", page_length, 0x8, 0x8, true, 0xc36af9f7f443329b)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.ReadDisableCache", read_disable_cache, 0x10, 0x1, true, 0xd0b28ff6ff27814e, 1, uint8_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.MultiplicationFactor", multiplication_factor, 0x11, 0x1, true, 0xf7dc42c93943a868, 1, uint8_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.WriteCacheEnable", write_cache_enable, 0x12, 0x1, true, 0xa100222291429507, 1, uint8_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.SizeEnable", size_enable, 0x13, 0x1, true, 0x53574ecd8a62f206, 1, uint8_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.Discontinuity", discontinuity, 0x14, 0x1, true, 0x113e2ff4c628cf6b, 1, uint8_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.CachingAnalysisPermitted", caching_analysis_permitted, 0x15, 0x1, true, 0x4732c1eba99707a9, 1, uint8_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.AbortPreFetch", abort_pre_fetch, 0x16, 0x1, true, 0x76ca78ef77a33311, 1, uint8_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.InitiatorControl", initiator_control, 0x17, 0x1, true, 0xf3423f3591ae54ef, 1, uint8_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CACHING_PAGE_EX.WriteRetensionPriority", write_retension_priority, 0x18, 0x4, true, 0x1bed633d15cdda67, 4, uint8_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CACHING_PAGE_EX.ReadRetensionPriority", read_retension_priority, 0x1c, 0x4, true, 0x4175e504bc76b7b, 4, uint8_t)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CACHING_PAGE_EX.DisablePrefetchTransfer", disable_prefetch_transfer, 0x20, 0x10, true, 0x142a3add634f54ab)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CACHING_PAGE_EX.MinimumPrefetch", minimum_prefetch, 0x30, 0x10, true, 0xf7ba39335a056b14)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CACHING_PAGE_EX.MaximumPrefetch", maximum_prefetch, 0x40, 0x10, true, 0x4a37c8c7fc42fd26)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CACHING_PAGE_EX.MaximumPrefetchCeiling", maximum_prefetch_ceiling, 0x50, 0x10, true, 0xc8229c1019d6b244)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.NvCacheDisable", nv_cache_disable, 0x60, 0x1, true, 0xf5eeda8d7d12e147, 1, uint8_t)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MODE_CACHING_PAGE_EX.SyncCacheProgress", sync_cache_progress, 0x61, 0x2, true, 0x73ca780d0167f367, 2, uint8_t)
#define _m020 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MODE_CACHING_PAGE_EX.VendorSpecific", vendor_specific, 0x63, 0x2, true, 0x4793619117129ccf, 2, uint8_t)
#define _m021 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.DisableReadAhead", disable_read_ahead, 0x65, 0x1, true, 0xaff73cfe71770b75, 1, uint8_t)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.LogicalBlockCacheSegmentSize", logical_block_cache_segment_size, 0x66, 0x1, true, 0x728478112c1037ba, 1, uint8_t)
#define _m023 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE_EX.ForceSequentialWrite", force_sequential_write, 0x67, 0x1, true, 0xca5f25ed8f06b5d3, 1, uint8_t)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CACHING_PAGE_EX.NumberOfCacheSegments", number_of_cache_segments, 0x68, 0x8, true, 0x215cdec154ad6df5)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CACHING_PAGE_EX.CacheSegmentSize", cache_segment_size, 0x70, 0x10, true, 0x2514f278dbf06a08)
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
#endif