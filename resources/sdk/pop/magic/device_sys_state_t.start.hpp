#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_DEVICE_SYS_STATE.IrpMinor", irp_minor, 0x0, 0x8, true, 0x8a4edacdb055754c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_POP_DEVICE_SYS_STATE.SystemState", system_state, 0x20, 0x20, true, 0x2cd14408671ae397)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_DEVICE_SYS_STATE.SpinLock", spin_lock, 0x40, 0x40, true, 0xf5bd7e482c2b2798)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_POP_DEVICE_SYS_STATE.Thread", thread, 0x80, 0x40, true, 0xd07864f5d9ba4612)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_POP_DEVICE_SYS_STATE.AbortEvent", abort_event, 0xc0, 0x40, true, 0xabde90d0f3a3ea0e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t*), "_POP_DEVICE_SYS_STATE.ReadySemaphore", ready_semaphore, 0x100, 0x40, true, 0xf6247eadb42419e7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t*), "_POP_DEVICE_SYS_STATE.FinishedSemaphore", finished_semaphore, 0x140, 0x40, true, 0xa8eda0eda78b6dad)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::device_notify_order_t), "_POP_DEVICE_SYS_STATE.Order", order, 0x180, 0x0, true, 0x7ee95bda98f73220)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_DEVICE_SYS_STATE.Pending", pending, 0xd80, 0x80, true, 0x70ecec7024ea5272)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_DEVICE_SYS_STATE.Status", status, 0xe00, 0x20, true, 0xbd57d867a7269ea1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_DEVICE_SYS_STATE.FailedDevice", failed_device, 0xe40, 0x40, true, 0x1f6229c4eb81b61)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_DEVICE_SYS_STATE.Waking", waking, 0xe80, 0x8, true, 0x871f02912fb973dc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_DEVICE_SYS_STATE.Cancelled", cancelled, 0xe88, 0x8, true, 0x816e59134d231b0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_DEVICE_SYS_STATE.IgnoreErrors", ignore_errors, 0xe90, 0x8, true, 0x1cfbd6c90c7cc5d1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_DEVICE_SYS_STATE.IgnoreNotImplemented", ignore_not_implemented, 0xe98, 0x8, true, 0x7d32eca63dc1643f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_DEVICE_SYS_STATE.TimeRefreshLockAcquired", time_refresh_lock_acquired, 0xea0, 0x8, true, 0xc1bceeb32bb0be59)
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
#endif