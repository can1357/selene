#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_COUNTERS.TotalMemoryReserved", total_memory_reserved, 0x0, 0x40, true, 0x15197abad1b93ff4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_COUNTERS.TotalMemoryCommitted", total_memory_committed, 0x40, 0x40, true, 0x5c93db04dabedfb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_COUNTERS.TotalMemoryLargeUCR", total_memory_large_ucr, 0x80, 0x40, true, 0xa2e477dc145b8993)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_COUNTERS.TotalSizeInVirtualBlocks", total_size_in_virtual_blocks, 0xc0, 0x40, true, 0x65e2b2094aaaf8d5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.TotalSegments", total_segments, 0x100, 0x20, true, 0x72aaa79c307621f1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.TotalUCRs", total_uc_rs, 0x120, 0x20, true, 0x7d02431f26642c01)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.CommittOps", committ_ops, 0x140, 0x20, true, 0x7e99f7e0d7f5f01c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.DeCommitOps", de_commit_ops, 0x160, 0x20, true, 0x99265b637c6782b1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.LockAcquires", lock_acquires, 0x180, 0x20, true, 0xd6294b8b7fa2e451)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.LockCollisions", lock_collisions, 0x1a0, 0x20, true, 0x82730267f5f0c174)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.CommitRate", commit_rate, 0x1c0, 0x20, true, 0x8e6f7a975939e4e9)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.DecommittRate", decommitt_rate, 0x1e0, 0x20, true, 0xf43daf040fe73d0a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.CommitFailures", commit_failures, 0x200, 0x20, true, 0x604e8d6cf58bb021)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.InBlockCommitFailures", in_block_commit_failures, 0x220, 0x20, true, 0xfbb85a3ed62a7d18)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.PollIntervalCounter", poll_interval_counter, 0x240, 0x20, true, 0x4730522216d3500f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.DecommitsSinceLastCheck", decommits_since_last_check, 0x260, 0x20, true, 0x8e6f7358cda54aaa)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.HeapPollInterval", heap_poll_interval, 0x280, 0x20, true, 0xc0c1e603a7c004ca)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.AllocAndFreeOps", alloc_and_free_ops, 0x2a0, 0x20, true, 0x96cb85f8710a5329)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.AllocationIndicesActive", allocation_indices_active, 0x2c0, 0x20, true, 0x21b320e5bab379ef)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_COUNTERS.InBlockDeccommits", in_block_deccommits, 0x2e0, 0x20, true, 0xc7c26dd0f8d590ae)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_COUNTERS.InBlockDeccomitSize", in_block_deccomit_size, 0x300, 0x40, true, 0x2901786a22705273)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_COUNTERS.HighWatermarkSize", high_watermark_size, 0x340, 0x40, true, 0xd2cf4b1e08a46a48)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_COUNTERS.LastPolledSize", last_polled_size, 0x380, 0x40, true, 0xb787d3784790ed75)
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