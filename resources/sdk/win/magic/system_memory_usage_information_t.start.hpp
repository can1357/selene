#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_USAGE_INFORMATION.TotalPhysicalBytes", total_physical_bytes, 0x0, 0x40, true, 0x58cf1d1046eae7ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_USAGE_INFORMATION.AvailableBytes", available_bytes, 0x40, 0x40, true, 0x880b98bf56cd32d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_MEMORY_USAGE_INFORMATION.ResidentAvailableBytes", resident_available_bytes, 0x80, 0x40, true, 0xc27df9c56fd40edb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_USAGE_INFORMATION.CommittedBytes", committed_bytes, 0xc0, 0x40, true, 0x965ee0412137805a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_USAGE_INFORMATION.SharedCommittedBytes", shared_committed_bytes, 0x100, 0x40, true, 0x532dcbd79c27ff45)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_USAGE_INFORMATION.CommitLimitBytes", commit_limit_bytes, 0x140, 0x40, true, 0x659c8fed48693b8a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_USAGE_INFORMATION.PeakCommitmentBytes", peak_commitment_bytes, 0x180, 0x40, true, 0xa5e67c02a043bf91)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif