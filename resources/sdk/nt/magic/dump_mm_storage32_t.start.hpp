#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.Version", version, 0x0, 0x20, true, 0xc66931e5d927e937)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.Size", size, 0x20, 0x20, true, 0x3e3fecfe5a99363f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.MmSpecialPoolTag", mm_special_pool_tag, 0x40, 0x20, true, 0xd4f1a35af170feb4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.MiTriageActionTaken", mi_triage_action_taken, 0x60, 0x20, true, 0x86d20d40e2f84f38)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.MmVerifyDriverLevel", mm_verify_driver_level, 0x80, 0x20, true, 0x48840c55da1e7ecb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.KernelVerifier", kernel_verifier, 0xa0, 0x20, true, 0x46c5e5ad643fcc70)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.MmMaximumNonPagedPool", mm_maximum_non_paged_pool, 0xc0, 0x20, true, 0xc6f9403b86fc2acc)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.MmAllocatedNonPagedPool", mm_allocated_non_paged_pool, 0xe0, 0x20, true, 0x58ea31b138da5d4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.PagedPoolMaximum", paged_pool_maximum, 0x100, 0x20, true, 0x332294ac3c66dece)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.PagedPoolAllocated", paged_pool_allocated, 0x120, 0x20, true, 0x2134816a6371fe7c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.CommittedPages", committed_pages, 0x140, 0x20, true, 0x80635ec1b39c72b8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.CommittedPagesPeak", committed_pages_peak, 0x160, 0x20, true, 0x55bfc042a4818973)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_MM_STORAGE32.CommitLimitMaximum", commit_limit_maximum, 0x180, 0x20, true, 0x7782c7a6c1a51a54)
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