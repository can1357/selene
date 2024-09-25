#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION_V2.Key", key, 0x0, 0x0, false, 0xfd5da110dded76d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION_V2.DpcQueueDepth", dpc_queue_depth, 0x0, 0x0, false, 0x1208cedfa8b4fde2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION_V2.DpcCount", dpc_count, 0x0, 0x0, false, 0xf692b3df4df19860)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION_V2.TargetProcessorIndex", target_processor_index, 0x0, 0x0, false, 0xf199c61ef51f588a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION_V2.Importance", importance, 0x0, 0x0, false, 0x9b684fbc1d557125)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION_V2.DpcRuntime", dpc_runtime, 0x0, 0x0, false, 0x23977997a3584026)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif