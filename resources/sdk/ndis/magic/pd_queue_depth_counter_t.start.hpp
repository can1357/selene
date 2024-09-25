#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_QUEUE_DEPTH_COUNTER.AvgQueueDepth", avg_queue_depth, 0x0, 0x0, false, 0xb383880c6052f262)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_QUEUE_DEPTH_COUNTER.AvgQueueUtilization", avg_queue_utilization, 0x0, 0x0, false, 0xeb93b9b2d760dc1c)
#else
#define _m00
#define _m01
#endif