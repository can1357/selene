#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_SPINLOCK_INFORMATION_V1.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x2469b5311c8b5e90)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_SPINLOCK_INFORMATION_V1.SpinLockSpinThreshold", spin_lock_spin_threshold, 0x20, 0x20, true, 0xb00912ac626ad0ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_SPINLOCK_INFORMATION_V1.SpinLockAcquireSampleRate", spin_lock_acquire_sample_rate, 0x40, 0x20, true, 0x6044f59d5b40fe0c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_SPINLOCK_INFORMATION_V1.SpinLockContentionSampleRate", spin_lock_contention_sample_rate, 0x60, 0x20, true, 0x317f1a045b4990a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif