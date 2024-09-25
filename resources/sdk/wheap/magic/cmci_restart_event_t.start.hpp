#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_CMCI_RESTART_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xea83e169aeb5a027)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_CMCI_RESTART_EVENT.CmciRestoreAttempts", cmci_restore_attempts, 0x100, 0x20, true, 0xf0efc39a940ff07d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_CMCI_RESTART_EVENT.MaxCmciRestoreLimit", max_cmci_restore_limit, 0x120, 0x20, true, 0x2ae16ea4cfda706e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_CMCI_RESTART_EVENT.MaxCorrectedErrorsFound", max_corrected_errors_found, 0x140, 0x20, true, 0x6e7c87f98d3ae6d2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_CMCI_RESTART_EVENT.MaxCorrectedErrorLimit", max_corrected_error_limit, 0x160, 0x20, true, 0x9314d1c263962656)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif