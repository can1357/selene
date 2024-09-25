#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VF_WATCHDOG_IRP.ListEntry", list_entry, 0x0, 0x80, true, 0xeb75a7b6c2ad8ac2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_VF_WATCHDOG_IRP.Irp", irp, 0x80, 0x40, true, 0xc56e09f54069fe48)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_WATCHDOG_IRP.DueTickCount", due_tick_count, 0xc0, 0x20, true, 0x1b2c4ec125cb26d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_VF_WATCHDOG_IRP.Inserted", inserted, 0xe0, 0x8, true, 0x21edf4072bfe398b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_VF_WATCHDOG_IRP.TrackedStackLocation", tracked_stack_location, 0xe8, 0x8, true, 0xc8bd46d1ad6708f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_VF_WATCHDOG_IRP.CancelTimeoutTicks", cancel_timeout_ticks, 0xf0, 0x10, true, 0xaf0c81a6d16a63ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif