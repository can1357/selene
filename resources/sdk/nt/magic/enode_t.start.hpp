#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::knode_t), "_ENODE.Ncb", ncb, 0x0, 0x0, true, 0x8d74f53d9981cd52)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_ENODE.HotAddProcessorWorkItem", hot_add_processor_work_item, 0xc00, 0x0, true, 0x964bf53b0c86034c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ex::work_queue_t volatile*, 8>), "_ENODE.ExWorkQueues", ex_work_queues, 0x0, 0x0, false, 0xba441d40a093b740)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::work_queue_t), "_ENODE.ExWorkQueue", ex_work_queue, 0x0, 0x0, false, 0x71318e837fab590c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::work_queue_t), "_ENODE.IoWorkQueue", io_work_queue, 0x0, 0x0, false, 0x2321d0198b7b9c5e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_ENODE.ExpThreadSetManagerEvent", exp_thread_set_manager_event, 0x0, 0x0, false, 0x9d226d70a72cc0ee)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_ENODE.ExpDeadlockTimer", exp_deadlock_timer, 0x0, 0x0, false, 0x54f5560a190a76dc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_ENODE.ExpThreadReaperEvent", exp_thread_reaper_event, 0x0, 0x0, false, 0x4b4ecd338699a5fc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kwait_block_t, 3>), "_ENODE.WaitBlocks", wait_blocks, 0x0, 0x0, false, 0x9eb6fc0fb9e5cd8d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_ENODE.ExpWorkerThreadBalanceManagerPtr", exp_worker_thread_balance_manager_ptr, 0x0, 0x0, false, 0x50709d312e407d03)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENODE.ExpWorkerSeed", exp_worker_seed, 0x0, 0x0, false, 0x267f2fb97e6ecb56)
#define _m11 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_ENODE.ExWorkerFullInit", ex_worker_full_init, 0x0, 0x0, false, 0x43af0c2986bb115f, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_ENODE.ExWorkerStructInit", ex_worker_struct_init, 0x0, 0x0, false, 0xfc22a8c8d924df57, 1, uint32_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_ENODE.ExWorkerFlags", ex_worker_flags, 0x0, 0x0, false, 0xc1647967f40ada65)
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
#define _m11
#define _m12
#define _m13
#endif