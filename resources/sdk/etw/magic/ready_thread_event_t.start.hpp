#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_READY_THREAD_EVENT.ThreadId", thread_id, 0x0, 0x20, true, 0xeeb6db3ba4d1ec97)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_READY_THREAD_EVENT.AdjustReason", adjust_reason, 0x20, 0x8, true, 0xced0317a15111777)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int8_t), "_ETW_READY_THREAD_EVENT.AdjustIncrement", adjust_increment, 0x28, 0x8, true, 0x47c3f83004ccb1ab)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_READY_THREAD_EVENT.ExecutingDpc", executing_dpc, 0x30, 0x1, true, 0x4485e0465cac5e5, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_READY_THREAD_EVENT.KernelStackNotResident", kernel_stack_not_resident, 0x31, 0x1, true, 0x650f6e46f8d62a5c, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_READY_THREAD_EVENT.ProcessOutOfMemory", process_out_of_memory, 0x32, 0x1, true, 0xe8b490b471d8659c, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_READY_THREAD_EVENT.DirectSwitchAttempt", direct_switch_attempt, 0x33, 0x1, true, 0x5aaa2bc91a7526e8, 1, uint8_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_READY_THREAD_EVENT.Flags", flags, 0x30, 0x8, true, 0xd572bd4b4d937a7f)
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