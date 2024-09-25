#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SPINLOCK_CONFIG.SpinLockSpinThreshold", spin_lock_spin_threshold, 0x0, 0x20, true, 0x5c649b720c2a4a85)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SPINLOCK_CONFIG.SpinLockContentionSampleRate", spin_lock_contention_sample_rate, 0x20, 0x20, true, 0x96efb4b463f5816d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SPINLOCK_CONFIG.SpinLockAcquireSampleRate", spin_lock_acquire_sample_rate, 0x40, 0x20, true, 0x7ff75efe7020065b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SPINLOCK_CONFIG.SpinLockHoldThreshold", spin_lock_hold_threshold, 0x60, 0x20, true, 0x76cc2c44dae5c64a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif