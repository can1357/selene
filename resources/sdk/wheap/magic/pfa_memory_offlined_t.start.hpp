#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PFA_MEMORY_OFFLINED.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xd9c34ef8d87ba1c7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wheap::pfa_offline_decision_type_t), "_WHEAP_PFA_MEMORY_OFFLINED.DecisionType", decision_type, 0x100, 0x20, true, 0x8a227301ccd156f0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PFA_MEMORY_OFFLINED.ImmediateSuccess", immediate_success, 0x120, 0x8, true, 0x332e748ef1cf2303)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PFA_MEMORY_OFFLINED.Page", page, 0x128, 0x20, true, 0xa10fa479b4c9f567)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif