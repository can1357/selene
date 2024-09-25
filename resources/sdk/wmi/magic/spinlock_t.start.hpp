#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_SPINLOCK.SpinLockAddress", spin_lock_address, 0x0, 0x40, true, 0x708d6f3967e8383a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_SPINLOCK.CallerAddress", caller_address, 0x40, 0x40, true, 0xc5008a3749454f2d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_SPINLOCK.AcquireTime", acquire_time, 0x80, 0x40, true, 0xb49e7bbc34c218a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_SPINLOCK.ReleaseTime", release_time, 0xc0, 0x40, true, 0xcbc423aae1aaad13)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_SPINLOCK.WaitTimeInCycles", wait_time_in_cycles, 0x100, 0x20, true, 0x5ad3c1e47ef856d6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_SPINLOCK.SpinCount", spin_count, 0x120, 0x20, true, 0x9f8ed35834b97478)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_SPINLOCK.ThreadId", thread_id, 0x140, 0x20, true, 0xa17c23cbc6e6e0a4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_SPINLOCK.InterruptCount", interrupt_count, 0x160, 0x20, true, 0xc9e5a4fe77b6966a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_SPINLOCK.Irql", irql, 0x180, 0x8, true, 0x6810ce4ff0a90bb2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_SPINLOCK.AcquireDepth", acquire_depth, 0x188, 0x8, true, 0x30c337532c96d3eb)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_WMI_SPINLOCK.AcquireMode", acquire_mode, 0x190, 0x6, true, 0xeaa7896d5f7ceaef, 6, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_SPINLOCK.ExecuteDpc", execute_dpc, 0x196, 0x1, true, 0x65597025755fe3ce, 1, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WMI_SPINLOCK.ExecuteIsr", execute_isr, 0x197, 0x1, true, 0xb937d11960fd6258, 1, uint8_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_SPINLOCK.Flags", flags, 0x190, 0x8, true, 0x8aa55311fd1cac5a)
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