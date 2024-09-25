#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_SET_TIMER_EVENT.ExpectedDueTime", expected_due_time, 0x0, 0x40, true, 0xc116025dcc8ff09c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_SET_TIMER_EVENT.TimerAddress", timer_address, 0x40, 0x40, true, 0xc14101c47ac93617)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SET_TIMER_EVENT.TargetProcessorGroup", target_processor_group, 0x80, 0x10, true, 0xffb9a24a6839f516)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_SET_TIMER_EVENT.TargetProcessorIndex", target_processor_index, 0x90, 0x8, true, 0x2e67ae0168a5ab63)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_SET_TIMER_EVENT.Flags", flags, 0x98, 0x8, true, 0xef27d86c5aad8e4f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_SET_TIMER_EVENT.Period", period, 0xa0, 0x20, true, 0x486d9484e6152e5a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_SET_TIMER_EVENT.EncodedDelay", encoded_delay, 0xc0, 0x8, true, 0x15aec0424d76255d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SET_TIMER_EVENT.UniqueProcessId", unique_process_id, 0xd0, 0x10, true, 0x1a801d68f1b81d47)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif