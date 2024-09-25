#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_ATTEMPT_RECOVERY_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x2074f24e580e42e5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::error_record_header_t), "_WHEAP_ATTEMPT_RECOVERY_EVENT.ErrorHeader", error_header, 0x100, 0x0, true, 0x9dce6e63def5b4f9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_ATTEMPT_RECOVERY_EVENT.ArchitecturalRecovery", architectural_recovery, 0x500, 0x8, true, 0xabd8449ce87df743)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_ATTEMPT_RECOVERY_EVENT.PshedRecovery", pshed_recovery, 0x508, 0x8, true, 0x592316e2b0845114)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEAP_ATTEMPT_RECOVERY_EVENT.Status", status, 0x510, 0x20, true, 0xded8783e358b2a42)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif