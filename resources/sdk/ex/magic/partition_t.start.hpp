#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::epartition_t*), "_EX_PARTITION.PartitionObject", partition_object, 0x0, 0x40, true, 0x8697a5f9ba5a3761)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::work_queue_t* volatile**), "_EX_PARTITION.WorkQueues", work_queues, 0x40, 0x40, true, 0xd6a7bade42063754)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::work_queue_manager_t**), "_EX_PARTITION.WorkQueueManagers", work_queue_managers, 0x80, 0x40, true, 0xf3cfbe38a48ee803)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_EX_PARTITION.QueueAllocationMask", queue_allocation_mask, 0xc0, 0x20, true, 0xdea7eb6f5f924259)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif