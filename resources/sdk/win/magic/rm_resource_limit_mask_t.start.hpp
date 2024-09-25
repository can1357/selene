#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_MASK.CommitMediumThreshold", commit_medium_threshold, 0x0, 0x1, true, 0x140cb840eff44462, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_MASK.CommitHighThreshold", commit_high_threshold, 0x1, 0x1, true, 0x3f5af5dc11c5ddee, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_MASK.CommitTarget", commit_target, 0x2, 0x1, true, 0x1c7cccdd0dad362e, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_MASK.CommitCap", commit_cap, 0x3, 0x1, true, 0xe365f6dfa4060aa9, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_MASK.ExpectedCommitTarget", expected_commit_target, 0x4, 0x1, true, 0xa024448832cc195a, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_MASK.ExecutionSpeed", execution_speed, 0x5, 0x1, true, 0x2fb358f74e670a7b, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_MASK.MonitorGpuInterference", monitor_gpu_interference, 0x6, 0x1, true, 0x8729a347ba1531d2, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_MASK.TakeMaximum", take_maximum, 0x7, 0x1, true, 0x3d9bf04a001b39a2, 1, uint64_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RM_RESOURCE_LIMIT_MASK.All", all, 0x0, 0x40, true, 0x4f0d2c5d0546b308)
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
#endif