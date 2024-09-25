#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_SPURIOUS_AER_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x8557a6945f4cc0bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum whea::error_severity_t), "_WHEAP_SPURIOUS_AER_EVENT.ErrorSeverity", error_severity, 0x0, 0x0, false, 0xd5b6a249c9dd658d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_SPURIOUS_AER_EVENT.ErrorHandlerType", error_handler_type, 0x0, 0x0, false, 0x2d929964b323203a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_SPURIOUS_AER_EVENT.SpuriousErrorSourceId", spurious_error_source_id, 0x0, 0x0, false, 0xbb5cafad69870952)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_SPURIOUS_AER_EVENT.RootErrorCommand", root_error_command, 0x0, 0x0, false, 0x900b0f4812df2b9e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_SPURIOUS_AER_EVENT.RootErrorStatus", root_error_status, 0x0, 0x0, false, 0x79094b33881770fd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_SPURIOUS_AER_EVENT.DeviceAssociationBitmap", device_association_bitmap, 0x0, 0x0, false, 0x3a92903d02b56e32)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif