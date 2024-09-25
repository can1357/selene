#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDPC.TargetInfoAsUlong", target_info_as_ulong, 0x0, 0x20, true, 0x2c61c48ca2a78f26)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KDPC.Type", type, 0x0, 0x8, true, 0x9c39da302692cf37)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KDPC.Importance", importance, 0x8, 0x8, true, 0x745440fd4e63d963)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint16_t), "_KDPC.Number", number, 0x10, 0x10, true, 0xa029e93711440d17)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KDPC.DpcListEntry", dpc_list_entry, 0x40, 0x40, true, 0x7ca01a6f13437b10)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDPC.ProcessorHistory", processor_history, 0x80, 0x40, true, 0x6edf382654235fa0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pkdeferred_routine_t ), "_KDPC.DeferredRoutine", deferred_routine, 0xc0, 0x40, true, 0x5dbe668fac175b01)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KDPC.DeferredContext", deferred_context, 0x100, 0x40, true, 0x63534a70df105285)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KDPC.SystemArgument1", system_argument1, 0x140, 0x40, true, 0xa7035d0d4932033d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KDPC.SystemArgument2", system_argument2, 0x180, 0x40, true, 0xf172f090b12f178c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KDPC.DpcData", dpc_data, 0x1c0, 0x40, true, 0x7288f94917e63659)
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
#endif