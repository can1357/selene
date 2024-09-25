#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WATCHDOG_TRIAGE_BLOCK.Signature", signature, 0x0, 0x20, true, 0x7f4715bbda3b2742)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WATCHDOG_TRIAGE_BLOCK.TimeoutMilliseconds", timeout_milliseconds, 0x20, 0x20, true, 0xe6dc44f8f0f0f45)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_WATCHDOG_TRIAGE_BLOCK.GlobalTriage", global_triage, 0x40, 0x40, true, 0xbaa302b23b381f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_WATCHDOG_TRIAGE_BLOCK.TargetObject", target_object, 0x80, 0x40, true, 0x66901e3ec96ddc1c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_WATCHDOG_TRIAGE_BLOCK.StartTime", start_time, 0xc0, 0x40, true, 0xd285f2af4ba7e772)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_WATCHDOG_TRIAGE_BLOCK.PrimaryThread", primary_thread, 0x100, 0x40, true, 0x4ac61e5b7c081829)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_WATCHDOG_TRIAGE_BLOCK.ExtraArgument", extra_argument, 0x140, 0x40, true, 0x49490e95993137da)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_WATCHDOG_TRIAGE_BLOCK.Pending9FDetected", pending9f_detected, 0x180, 0x8, true, 0xf8723f03916ad44e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_WATCHDOG_TRIAGE_BLOCK.TargetInstructionPointer", target_instruction_pointer, 0x1c0, 0x40, true, 0xd6c038d5fd7711a4)
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
#endif