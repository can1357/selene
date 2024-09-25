#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_PARAMETERS.Length", length, 0x0, 0x20, true, 0xf6a9ed04af2934cc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_PARAMETERS.SegmentReserve", segment_reserve, 0x40, 0x40, true, 0x6bfd3b5ba38467ff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_PARAMETERS.SegmentCommit", segment_commit, 0x80, 0x40, true, 0x8bc3658a7a84ace8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_PARAMETERS.DeCommitFreeBlockThreshold", de_commit_free_block_threshold, 0xc0, 0x40, true, 0xe1aa772c84bcf520)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_PARAMETERS.DeCommitTotalFreeThreshold", de_commit_total_free_threshold, 0x100, 0x40, true, 0xad8e1b234cddf084)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_PARAMETERS.MaximumAllocationSize", maximum_allocation_size, 0x140, 0x40, true, 0xd4f8192558d37445)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_PARAMETERS.VirtualMemoryThreshold", virtual_memory_threshold, 0x180, 0x40, true, 0xf0d82be0be9ae940)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_PARAMETERS.InitialCommit", initial_commit, 0x1c0, 0x40, true, 0x5f445fdd6914f65e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_PARAMETERS.InitialReserve", initial_reserve, 0x200, 0x40, true, 0xd5ccf73c3cf5641e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(prtl_heap_commit_routine_t ), "_RTL_HEAP_PARAMETERS.CommitRoutine", commit_routine, 0x240, 0x40, true, 0x571f41dc94a9ce6c)
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
#endif