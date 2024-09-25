#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::unbiased_timer_t), "OutgoingCallDiagnosis._timer", timer, 0x0, 0xc0, true, 0xbb576c82ae7c6a5f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "OutgoingCallDiagnosis._tickCount", tick_count, 0xc0, 0x40, true, 0x961b8bd972dcd0c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OutgoingCallDiagnosis._waitsCompleted", waits_completed, 0x100, 0x20, true, 0xb426a0cd704352f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "OutgoingCallDiagnosis._outerTimeout", outer_timeout, 0x120, 0x20, true, 0x28670328410de220)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "OutgoingCallDiagnosis._callTimeout", call_timeout, 0x140, 0x20, true, 0x6002039cf5d735)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif