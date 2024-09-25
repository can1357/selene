#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::rm_resource_limit_mask_t), "_RM_RESOURCE_LIMITS.ValidityMask", validity_mask, 0x0, 0x40, true, 0x25ce8a7172b545bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RM_RESOURCE_LIMITS.CommitMemoryMediumThreshold", commit_memory_medium_threshold, 0x40, 0x40, true, 0xc31fd7e8e78abef4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RM_RESOURCE_LIMITS.CommitMemoryHighThreshold", commit_memory_high_threshold, 0x80, 0x40, true, 0xf4aafef49890480d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RM_RESOURCE_LIMITS.CommitTarget", commit_target, 0xc0, 0x40, true, 0x39dbfb34752d59b0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RM_RESOURCE_LIMITS.CommitMemoryCap", commit_memory_cap, 0x100, 0x40, true, 0x576059b7278d1001)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RM_RESOURCE_LIMITS.ExpectedCommitTarget", expected_commit_target, 0x140, 0x40, true, 0xad3332dfb8cad1ec)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union win::rm_resource_limit_flags_t), "_RM_RESOURCE_LIMITS.Flags", flags, 0x180, 0x20, true, 0x36603e7d37c92d12)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif