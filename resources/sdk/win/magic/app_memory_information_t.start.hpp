#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_APP_MEMORY_INFORMATION.AvailableCommit", available_commit, 0x0, 0x40, true, 0xd3ea55c501ee6dde)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_APP_MEMORY_INFORMATION.PrivateCommitUsage", private_commit_usage, 0x40, 0x40, true, 0x3b71a9901f931c99)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_APP_MEMORY_INFORMATION.PeakPrivateCommitUsage", peak_private_commit_usage, 0x80, 0x40, true, 0x6a964b35e3bddc1f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_APP_MEMORY_INFORMATION.TotalCommitUsage", total_commit_usage, 0xc0, 0x40, true, 0xfcb1f31fd8e82a05)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif