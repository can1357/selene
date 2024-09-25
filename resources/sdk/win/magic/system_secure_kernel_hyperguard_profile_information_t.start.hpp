#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.ExtentCount", extent_count, 0x0, 0x20, true, 0xf3e829b0b629d02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.ValidStructureSize", valid_structure_size, 0x20, 0x20, true, 0x4b4539ec4db32a24)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.NextExtentIndex", next_extent_index, 0x40, 0x20, true, 0x455a41863a19ace7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.ExtentRestart", extent_restart, 0x60, 0x20, true, 0xa71574601b6d42c1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.CycleCount", cycle_count, 0x80, 0x20, true, 0x73345c8b4abec34a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.TimeoutCount", timeout_count, 0xa0, 0x20, true, 0xf3a32690cfb9a20d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.CycleTime", cycle_time, 0xc0, 0x40, true, 0x35583269390ba26a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.CycleTimeMax", cycle_time_max, 0x100, 0x40, true, 0x5aed37df4166479a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.ExtentTime", extent_time, 0x140, 0x40, true, 0x901c418bb1409e3d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.ExtentTimeIndex", extent_time_index, 0x180, 0x20, true, 0x2ca5180353bed32a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.ExtentTimeMaxIndex", extent_time_max_index, 0x1a0, 0x20, true, 0x57756f28ad1673c5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.ExtentTimeMax", extent_time_max, 0x1c0, 0x40, true, 0xa099c93f2a88d9e1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.HyperFlushTimeMax", hyper_flush_time_max, 0x200, 0x40, true, 0x7390f4f652721303)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.TranslateVaTimeMax", translate_va_time_max, 0x240, 0x40, true, 0x817842f0c4bca243)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.DebugExemptionCount", debug_exemption_count, 0x280, 0x40, true, 0x3fbc5069374c7770)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.TbHitCount", tb_hit_count, 0x2c0, 0x40, true, 0xe698aeb14c87dade)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.TbMissCount", tb_miss_count, 0x300, 0x40, true, 0x173a90d6b6278742)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.VinaPendingYield", vina_pending_yield, 0x340, 0x40, true, 0xf02e6099da2f457e)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.HashCycles", hash_cycles, 0x380, 0x40, true, 0x26edd57551129980)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.HistogramOffset", histogram_offset, 0x3c0, 0x20, true, 0xfb1b63c6dde7f310)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.HistogramBuckets", histogram_buckets, 0x3e0, 0x20, true, 0xd9bb003882fae6b0)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.HistogramShift", histogram_shift, 0x400, 0x20, true, 0x7c29673a25d406f3)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SECURE_KERNEL_HYPERGUARD_PROFILE_INFORMATION.PageNotPresentCount", page_not_present_count, 0x440, 0x40, true, 0xa405eb824f6ffa6c)
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
#define _m19
#define _m20
#define _m21
#define _m22
#endif