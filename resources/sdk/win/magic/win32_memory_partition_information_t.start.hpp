#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WIN32_MEMORY_PARTITION_INFORMATION.Flags", flags, 0x0, 0x0, false, 0xa6de748919f688ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WIN32_MEMORY_PARTITION_INFORMATION.NumaNode", numa_node, 0x0, 0x0, false, 0x651798fdbf24447e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WIN32_MEMORY_PARTITION_INFORMATION.Channel", channel, 0x0, 0x0, false, 0xce03ce729efd6d24)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WIN32_MEMORY_PARTITION_INFORMATION.NumberOfNumaNodes", number_of_numa_nodes, 0x0, 0x0, false, 0xd9095f7d153d9e87)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_PARTITION_INFORMATION.ResidentAvailablePages", resident_available_pages, 0x0, 0x0, false, 0xd00931454c861fab)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_PARTITION_INFORMATION.CommittedPages", committed_pages, 0x0, 0x0, false, 0x73e3bdc102666312)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_PARTITION_INFORMATION.CommitLimit", commit_limit, 0x0, 0x0, false, 0xc1213e1b08f62c83)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_PARTITION_INFORMATION.PeakCommitment", peak_commitment, 0x0, 0x0, false, 0x476aeadaf772d153)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_PARTITION_INFORMATION.TotalNumberOfPages", total_number_of_pages, 0x0, 0x0, false, 0xbe105b267d6bbbd9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_PARTITION_INFORMATION.AvailablePages", available_pages, 0x0, 0x0, false, 0xfbaf61f4406e559f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_PARTITION_INFORMATION.ZeroPages", zero_pages, 0x0, 0x0, false, 0xc3b3639220e6acce)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_PARTITION_INFORMATION.FreePages", free_pages, 0x0, 0x0, false, 0xc4ddc66da26e7664)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_PARTITION_INFORMATION.StandbyPages", standby_pages, 0x0, 0x0, false, 0xd6530ab2c0b54be5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_PARTITION_INFORMATION.MaximumCommitLimit", maximum_commit_limit, 0x0, 0x0, false, 0x9db9cbbf9d4bc47c)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WIN32_MEMORY_PARTITION_INFORMATION.PartitionId", partition_id, 0x0, 0x0, false, 0x7a5caf30b6f36656)
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
#endif