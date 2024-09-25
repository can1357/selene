#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WORKER_FACTORY_BASIC_INFORMATION.Timeout", timeout, 0x0, 0x40, true, 0xf0193f92d8cac8ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WORKER_FACTORY_BASIC_INFORMATION.RetryTimeout", retry_timeout, 0x40, 0x40, true, 0xbcba60790d84666a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WORKER_FACTORY_BASIC_INFORMATION.IdleTimeout", idle_timeout, 0x80, 0x40, true, 0xc1a7edb5978c7c82)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WORKER_FACTORY_BASIC_INFORMATION.Paused", paused, 0xc0, 0x8, true, 0xceb6184ad414e936)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WORKER_FACTORY_BASIC_INFORMATION.TimerSet", timer_set, 0xc8, 0x8, true, 0x5dd447556f0f7c12)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WORKER_FACTORY_BASIC_INFORMATION.QueuedToExWorker", queued_to_ex_worker, 0xd0, 0x8, true, 0x1b13271b5e0ff131)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WORKER_FACTORY_BASIC_INFORMATION.MayCreate", may_create, 0xd8, 0x8, true, 0x9453e69be15808c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WORKER_FACTORY_BASIC_INFORMATION.CreateInProgress", create_in_progress, 0xe0, 0x8, true, 0x9ac8c8ed67c8fcb2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WORKER_FACTORY_BASIC_INFORMATION.InsertedIntoQueue", inserted_into_queue, 0xe8, 0x8, true, 0x3afc4a3118e702d7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WORKER_FACTORY_BASIC_INFORMATION.Shutdown", shutdown, 0xf0, 0x8, true, 0x2a1bb923c8293f5a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORKER_FACTORY_BASIC_INFORMATION.BindingCount", binding_count, 0x100, 0x20, true, 0x86d50445d5268ea0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORKER_FACTORY_BASIC_INFORMATION.ThreadMinimum", thread_minimum, 0x120, 0x20, true, 0xab2c3f273d3ce09b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORKER_FACTORY_BASIC_INFORMATION.ThreadMaximum", thread_maximum, 0x140, 0x20, true, 0xd620752c91a79a41)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORKER_FACTORY_BASIC_INFORMATION.PendingWorkerCount", pending_worker_count, 0x160, 0x20, true, 0xfbf371ee20c2ef0f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORKER_FACTORY_BASIC_INFORMATION.WaitingWorkerCount", waiting_worker_count, 0x180, 0x20, true, 0xd88ab060f66acbb8)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORKER_FACTORY_BASIC_INFORMATION.TotalWorkerCount", total_worker_count, 0x1a0, 0x20, true, 0x2a60e3575e1cf488)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORKER_FACTORY_BASIC_INFORMATION.ReleaseCount", release_count, 0x1c0, 0x20, true, 0x6ce30027bc20bc5f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WORKER_FACTORY_BASIC_INFORMATION.InfiniteWaitGoal", infinite_wait_goal, 0x200, 0x40, true, 0xa079873b55bc2a94)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_WORKER_FACTORY_BASIC_INFORMATION.StartRoutine", start_routine, 0x240, 0x40, true, 0xead7097ae6a2633c)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WORKER_FACTORY_BASIC_INFORMATION.StartParameter", start_parameter, 0x280, 0x40, true, 0x78ece12fcf36a932)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WORKER_FACTORY_BASIC_INFORMATION.ProcessId", process_id, 0x2c0, 0x40, true, 0xaa53994c6e700d74)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WORKER_FACTORY_BASIC_INFORMATION.StackReserve", stack_reserve, 0x300, 0x40, true, 0xced5f55123da06e2)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WORKER_FACTORY_BASIC_INFORMATION.StackCommit", stack_commit, 0x340, 0x40, true, 0x755b53652fb2cb73)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WORKER_FACTORY_BASIC_INFORMATION.LastThreadCreationStatus", last_thread_creation_status, 0x380, 0x20, true, 0x983b6198ebd6df63)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif