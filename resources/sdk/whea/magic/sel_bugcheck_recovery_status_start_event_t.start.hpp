#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_START_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x523038fc44a0392)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_START_EVENT.StartingIrql", starting_irql, 0x100, 0x8, true, 0xa39e86b7069ba70d)
#else
#define _m00
#define _m01
#endif