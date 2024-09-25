#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.Flags", flags, 0x0, 0x20, true, 0x60318e9a2658702a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.NumaNode", numa_node, 0x20, 0x20, true, 0x82bf85ac680287d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.Channel", channel, 0x40, 0x20, true, 0x18a3db0b1085269)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.NumberOfNumaNodes", number_of_numa_nodes, 0x60, 0x20, true, 0x157d7264ad9ac00c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.ResidentAvailablePages", resident_available_pages, 0x80, 0x40, true, 0xfee67552e658e909)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.CommittedPages", committed_pages, 0xc0, 0x40, true, 0x2f97522e3484df92)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.CommitLimit", commit_limit, 0x100, 0x40, true, 0xd6d5d3c9a44e997f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.PeakCommitment", peak_commitment, 0x140, 0x40, true, 0x67a94aa1c4b1b0b2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.TotalNumberOfPages", total_number_of_pages, 0x180, 0x40, true, 0x21b24f9a3a7d79cc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.AvailablePages", available_pages, 0x1c0, 0x40, true, 0x7108df26b3a5c8fe)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.ZeroPages", zero_pages, 0x200, 0x40, true, 0x674e40c9cf5f698d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.FreePages", free_pages, 0x240, 0x40, true, 0xb004eb4ceb749545)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.StandbyPages", standby_pages, 0x280, 0x40, true, 0x9137c2a77d724a03)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.StandbyPageCountByPriority", standby_page_count_by_priority, 0x2c0, 0x0, true, 0x148afa8549f1afe8)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.RepurposedPagesByPriority", repurposed_pages_by_priority, 0x4c0, 0x0, true, 0x7184c69fafd18def)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.MaximumCommitLimit", maximum_commit_limit, 0x6c0, 0x40, true, 0xba4930f0afc2ce32)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.PartitionId", partition_id, 0x740, 0x20, true, 0x3c2c10bde31a7c48)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.DonatedPagesToPartitions", donated_pages_to_partitions, 0x700, 0x40, true, 0x16d46818c57dac13)
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