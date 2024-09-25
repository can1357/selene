#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_EC_UTILIZATION_COUNTER.ProcessorNumber", processor_number, 0x0, 0x0, false, 0xa71476cffe85fc50)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_EC_UTILIZATION_COUNTER.IterationCount", iteration_count, 0x0, 0x0, false, 0xdc6c547297258315)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_EC_UTILIZATION_COUNTER.BusyWaitIterationCount", busy_wait_iteration_count, 0x0, 0x0, false, 0x4e59be78bdbd0b63)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_EC_UTILIZATION_COUNTER.TxQueueCount", tx_queue_count, 0x0, 0x0, false, 0x8eccbb6f77bf303c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_EC_UTILIZATION_COUNTER.RxQueueCount", rx_queue_count, 0x0, 0x0, false, 0xa426c2e2e5190fff)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_EC_UTILIZATION_COUNTER.CpuCycleTime", cpu_cycle_time, 0x0, 0x0, false, 0x8917bf9befcd18ef)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_EC_UTILIZATION_COUNTER.ThreadCycleTime", thread_cycle_time, 0x0, 0x0, false, 0x1cc5810a0898f459)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_EC_UTILIZATION_COUNTER.ProcessingCycles", processing_cycles, 0x0, 0x0, false, 0xec3f1e6661503c78)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_EC_UTILIZATION_COUNTER.BusyWaitCycles", busy_wait_cycles, 0x0, 0x0, false, 0x1dd26e214b06c8fc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_EC_UTILIZATION_COUNTER.IdleCycles", idle_cycles, 0x0, 0x0, false, 0x41e4b41e9d8e6f5f)
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
#endif