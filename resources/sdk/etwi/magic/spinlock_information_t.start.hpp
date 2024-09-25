#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_SPINLOCK_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x9c03db988a8afc08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_SPINLOCK_INFORMATION.SpinLockSpinThreshold", spin_lock_spin_threshold, 0x20, 0x20, true, 0xcbeb6c0f742c39bb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_SPINLOCK_INFORMATION.SpinLockAcquireSampleRate", spin_lock_acquire_sample_rate, 0x40, 0x20, true, 0x2605445a274d835b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_SPINLOCK_INFORMATION.SpinLockContentionSampleRate", spin_lock_contention_sample_rate, 0x60, 0x20, true, 0x26b09a906a841f39)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_SPINLOCK_INFORMATION.SpinLockHoldThreshold", spin_lock_hold_threshold, 0x80, 0x20, true, 0x658bf4574fc40bca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif