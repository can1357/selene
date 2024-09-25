#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_STATE.PartitionLock", partition_lock, 0x0, 0x40, true, 0xdcc10be12f446038)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_PARTITION_STATE.PartitionIdLock", partition_id_lock, 0x40, 0x40, true, 0x7de71021a7dc1114)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_STATE.InitialPartitionIdBits", initial_partition_id_bits, 0x80, 0x40, true, 0xb6e140c60bc6cab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PARTITION_STATE.PartitionList", partition_list, 0xc0, 0x80, true, 0xf56e8352caeb39c2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t*), "_MI_PARTITION_STATE.PartitionIdBitmap", partition_id_bitmap, 0x140, 0x40, true, 0x8470954390e3a7fe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_MI_PARTITION_STATE.InitialPartitionIdBitmap", initial_partition_id_bitmap, 0x180, 0x80, true, 0x89f2ac2d1cdafc29)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::partition_t*, 1>), "_MI_PARTITION_STATE.TempPartitionPointers", temp_partition_pointers, 0x200, 0x40, true, 0xe33b154193397aa1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_t**), "_MI_PARTITION_STATE.Partition", partition, 0x240, 0x40, true, 0x41b85c96e07f5c6b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_STATE.CrossPartitionDenials", cross_partition_denials, 0x2c0, 0x20, true, 0xde2accf80b4b5f1f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_STATE.MultiplePartitionsExist", multiple_partitions_exist, 0x2e0, 0x8, true, 0x735d05cef0779970)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_PARTITION_STATE.HugeIoPfnBitMap", huge_io_pfn_bit_map, 0x300, 0x80, true, 0x137bac78e1df5de6)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::huge_pfn_t*), "_MI_PARTITION_STATE.HugePfnDatabase", huge_pfn_database, 0x380, 0x40, true, 0x8e3a3ab43f943387)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_STATE.HugeRangesLock", huge_ranges_lock, 0x400, 0x40, true, 0xe9234f7ff43857b0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_STATE.TotalPagesInChildPartitions", total_pages_in_child_partitions, 0x280, 0x40, true, 0x8506141fc305a7c1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 64>), "_MI_PARTITION_STATE.TotalNodePagesInChildPartitions", total_node_pages_in_child_partitions, 0x0, 0x0, false, 0xe8186be47e98afbb)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 4>, 64>), "_MI_PARTITION_STATE.TotalSpecialPurposeMemoryInChildPartitions", total_special_purpose_memory_in_child_partitions, 0x0, 0x0, false, 0x44b53c977a54e818)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_STATE.ChildPartitionBytes", child_partition_bytes, 0x0, 0x0, false, 0x6bbe612bd3e6449a)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MI_PARTITION_STATE.HugePfnLockArray", huge_pfn_lock_array, 0x0, 0x0, false, 0x9a7736d42bd2d5f6)
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
#endif