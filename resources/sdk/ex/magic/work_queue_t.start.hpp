#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kpriqueue_t), "_EX_WORK_QUEUE.WorkPriQueue", work_pri_queue, 0x0, 0x80, true, 0x19804e16ad3cdd45)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::enode_t*), "_EX_WORK_QUEUE.Node", node, 0x15c0, 0x40, true, 0x104d074f3aae710f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_EX_WORK_QUEUE.WorkItemsProcessed", work_items_processed, 0x1600, 0x20, true, 0x35dd9b4d272b44dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_WORK_QUEUE.WorkItemsProcessedLastPass", work_items_processed_last_pass, 0x1620, 0x20, true, 0xe11686245657c5ba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_EX_WORK_QUEUE.ThreadCount", thread_count, 0x1640, 0x20, true, 0x24450474c0372a6a)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int31_t), "_EX_WORK_QUEUE.MinThreads", min_threads, 0x1660, 0x1f, true, 0x1a307666e41bfc61, 31, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_WORK_QUEUE.TryFailed", try_failed, 0x167f, 0x1, true, 0xf53d564452b810b7, 1, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EX_WORK_QUEUE.MaxThreads", max_threads, 0x1680, 0x20, true, 0xe5cde308c4b19bfe)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::exqueueindex_t), "_EX_WORK_QUEUE.QueueIndex", queue_index, 0x16a0, 0x20, true, 0x2e0c2848b140cdfe)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::partition_t*), "_EX_WORK_QUEUE.Partition", partition, 0x1580, 0x40, true, 0x2685da25fe84ec6b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_EX_WORK_QUEUE.AllThreadsExitedEvent", all_threads_exited_event, 0x16c0, 0x40, true, 0x15b3e00c0349b538)
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
#define _m10
#endif