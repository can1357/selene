#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_JOB_MEMORY_INFO.SharedCommitUsage", shared_commit_usage, 0x0, 0x40, true, 0xa1a534d38f5738db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_JOB_MEMORY_INFO.PrivateCommitUsage", private_commit_usage, 0x40, 0x40, true, 0x7161519e5f072afd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_JOB_MEMORY_INFO.PeakPrivateCommitUsage", peak_private_commit_usage, 0x80, 0x40, true, 0xf0ec7cb0ea16015e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_JOB_MEMORY_INFO.PrivateCommitLimit", private_commit_limit, 0xc0, 0x40, true, 0x93ebb9309f7e9ca8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_JOB_MEMORY_INFO.TotalCommitLimit", total_commit_limit, 0x100, 0x40, true, 0x5860b4495532f72e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif