#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE2_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x404d4cc6887d2a93)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE2_EVENT.BootId", boot_id, 0x100, 0x20, true, 0x396eb7fa5f727455)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE2_EVENT.Success", success, 0x120, 0x8, true, 0xde2c86eefa3bea9b)
#else
#define _m00
#define _m01
#define _m02
#endif