#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PFA_MEMORY_REMOVE_MONITOR.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x6b036bf7377624c5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::pfa_remove_trigger_t), "_WHEAP_PFA_MEMORY_REMOVE_MONITOR.RemoveTrigger", remove_trigger, 0x100, 0x20, true, 0x27b114a60b9f4e89)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PFA_MEMORY_REMOVE_MONITOR.TimeInList", time_in_list, 0x120, 0x20, true, 0x5db74d8d814c7e8c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PFA_MEMORY_REMOVE_MONITOR.ErrorCount", error_count, 0x140, 0x20, true, 0x299a5b605904c1f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PFA_MEMORY_REMOVE_MONITOR.Page", page, 0x160, 0x20, true, 0x7c56022afb2418e7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif