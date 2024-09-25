#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_EVENT_QUEUE.SortedQueueEnabled", sorted_queue_enabled, 0x0, 0x1, true, 0x48777930317e6d85, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_EVENT_QUEUE.QosModeEnabled", qos_mode_enabled, 0x1, 0x1, true, 0xccc8630e257f91bd, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_EVENT_QUEUE.AbortSupported", abort_supported, 0x2, 0x1, true, 0x5e0e9b4666e9c8d7, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EVENT_QUEUE.Flags", flags, 0x0, 0x20, true, 0x9f6270e83583caec)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EVENT_QUEUE.TimePerTick", time_per_tick, 0x20, 0x20, true, 0x93b2b31836a2265a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EVENT_QUEUE.ProcessorQueueCount", processor_queue_count, 0x40, 0x20, true, 0xcca9f47ecd5df61d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::stor_event_subqueue_t, 1>), "_STOR_EVENT_QUEUE.ProcessorQueues", processor_queues, 0x200, 0x0, true, 0xa16ca8dbf4c7516c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::stor_event_queue_node_t, 1>), "_STOR_EVENT_QUEUE.Queues", queues, 0x0, 0x0, false, 0x3ea2220393abf896)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif