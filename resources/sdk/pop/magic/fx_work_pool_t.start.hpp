#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_plugin_t*), "_POP_FX_WORK_POOL.Plugin", plugin, 0x0, 0x40, true, 0x9096e19aa1397cfd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_WORK_POOL.EmergencyWorkQueueLock", emergency_work_queue_lock, 0x40, 0x40, true, 0x832c16616f11a12a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_FX_WORK_POOL.EmergencyWorkQueue", emergency_work_queue, 0x80, 0x80, true, 0xb0087692f87ea7bd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ksemaphore_t, 2>), "_POP_FX_WORK_POOL.WorkPoolQueues", work_pool_queues, 0x100, 0x0, true, 0x504a68b1e62a09ed)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_FX_WORK_POOL.WorkItemStatus", work_item_status, 0x300, 0x20, true, 0x34b7b8732a0a6f06)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct pop::fx_work_pool_item_t, 4>), "_POP_FX_WORK_POOL.WorkItems", work_items, 0x340, 0x0, true, 0x2dae460f87ea7b11)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_POP_FX_WORK_POOL.EmergencyWorkerThread", emergency_worker_thread, 0x840, 0x40, true, 0x1eecb1115df45e4f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kthread_t*, 4>), "_POP_FX_WORK_POOL.DynamicWorkerThreads", dynamic_worker_threads, 0x880, 0x0, true, 0xfff9405393300e2e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kthread_t*, 5>), "_POP_FX_WORK_POOL.PoolWorkerThreads", pool_worker_threads, 0x0, 0x0, false, 0x8ca20d37b966d127)
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