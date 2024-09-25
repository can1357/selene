#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_BEHAVIOR_INFORMATION.DpcQueueDepth", dpc_queue_depth, 0x20, 0x20, true, 0x3d646867a6dc4c16)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_BEHAVIOR_INFORMATION.MinimumDpcRate", minimum_dpc_rate, 0x40, 0x20, true, 0xd5a86f69be4a9ab3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_BEHAVIOR_INFORMATION.AdjustDpcThreshold", adjust_dpc_threshold, 0x60, 0x20, true, 0x64b662f6a88894f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_BEHAVIOR_INFORMATION.IdealDpcRate", ideal_dpc_rate, 0x80, 0x20, true, 0x9f338933343b2ad6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif