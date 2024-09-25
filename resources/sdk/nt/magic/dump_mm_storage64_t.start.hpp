#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE64.Version", version, 0x0, 0x20, true, 0xf1b264912374f00f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE64.Size", size, 0x20, 0x20, true, 0x7dd4b644f759d3ca)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE64.MmSpecialPoolTag", mm_special_pool_tag, 0x40, 0x20, true, 0x74cfb304a14daa18)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE64.MiTriageActionTaken", mi_triage_action_taken, 0x60, 0x20, true, 0x80da21ae82d3e402)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE64.MmVerifyDriverLevel", mm_verify_driver_level, 0x80, 0x20, true, 0xe0940cff1c5110da)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE64.KernelVerifier", kernel_verifier, 0xa0, 0x20, true, 0xb20bd903dd7dac76)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_MM_STORAGE64.MmMaximumNonPagedPool", mm_maximum_non_paged_pool, 0xc0, 0x40, true, 0xd2c0348ed625b62a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_MM_STORAGE64.MmAllocatedNonPagedPool", mm_allocated_non_paged_pool, 0x100, 0x40, true, 0xeb5f9f209f3b77ef)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_MM_STORAGE64.PagedPoolMaximum", paged_pool_maximum, 0x140, 0x40, true, 0xa57a8b4ba3513b02)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_MM_STORAGE64.PagedPoolAllocated", paged_pool_allocated, 0x180, 0x40, true, 0x1796ece138305ece)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_MM_STORAGE64.CommittedPages", committed_pages, 0x1c0, 0x40, true, 0xa364e89a6661e282)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_MM_STORAGE64.CommittedPagesPeak", committed_pages_peak, 0x200, 0x40, true, 0x8e00788b848dc67)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_MM_STORAGE64.CommitLimitMaximum", commit_limit_maximum, 0x240, 0x40, true, 0xa40890ec9b0c3071)
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