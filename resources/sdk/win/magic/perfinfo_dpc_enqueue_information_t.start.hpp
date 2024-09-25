#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION.Key", key, 0x0, 0x40, true, 0x5d63f89e7af84d30)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION.DpcQueueDepth", dpc_queue_depth, 0x40, 0x20, true, 0x5f4a1a9fbd9fbc91)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION.DpcCount", dpc_count, 0x60, 0x20, true, 0xd3befeedcc9cf29c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION.TargetProcessorIndex", target_processor_index, 0x80, 0x20, true, 0x9c0a4d4c69dcb87f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_DPC_ENQUEUE_INFORMATION.Importance", importance, 0xa0, 0x8, true, 0x291e126491e103c3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif