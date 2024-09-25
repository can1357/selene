#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MI_CLONE_BLOCK_FLAGS.CloneProtection", clone_protection, 0x3b, 0x5, true, 0xea429318470482c4, 5, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint59_t), "_MI_CLONE_BLOCK_FLAGS.ActualCloneCommit", actual_clone_commit, 0x0, 0x3b, true, 0xc1f7bcdc1e72d08b, 59, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint55_t), "_MI_CLONE_BLOCK_FLAGS.ReducedCommitCount", reduced_commit_count, 0x0, 0x0, false, 0xf66f3bc9d0ae731a, 55, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_CLONE_BLOCK_FLAGS.OwningPartitionResidentCharged", owning_partition_resident_charged, 0x0, 0x0, false, 0x88d3a7c2fd37a798, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_CLONE_BLOCK_FLAGS.OwningPartitionCommitCharged", owning_partition_commit_charged, 0x0, 0x0, false, 0x6fc1f95d5461f2aa, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_CLONE_BLOCK_FLAGS.OwningPartitionCommitFloating", owning_partition_commit_floating, 0x0, 0x0, false, 0x4d390e63edadbd8e, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_CLONE_BLOCK_FLAGS.LockBit", lock_bit, 0x0, 0x0, false, 0xa18a7dcdd2d02fc6, 1, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif