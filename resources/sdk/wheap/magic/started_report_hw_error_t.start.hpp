#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_STARTED_REPORT_HW_ERROR.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x20fdf40a1372fd6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::error_packet_v2_t*), "_WHEAP_STARTED_REPORT_HW_ERROR.ErrorPacket", error_packet, 0x100, 0x40, true, 0xe10e65ad0c001b91)
#else
#define _m00
#define _m01
#endif