#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_SEL_BUGCHECK_PROGRESS.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x181dc63caf6600ef)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_SEL_BUGCHECK_PROGRESS.BugCheckCode", bug_check_code, 0x100, 0x20, true, 0x32f6dfd7de260deb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_SEL_BUGCHECK_PROGRESS.BugCheckProgressSummary", bug_check_progress_summary, 0x120, 0x20, true, 0x4c5bd5e48824320b)
#else
#define _m00
#define _m01
#define _m02
#endif