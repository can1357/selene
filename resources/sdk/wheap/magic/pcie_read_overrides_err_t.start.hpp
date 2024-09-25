#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PCIE_READ_OVERRIDES_ERR.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x69325ccb60e54930)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PCIE_READ_OVERRIDES_ERR.FailureReason", failure_reason, 0x0, 0x0, false, 0x105d753900edb46f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEAP_PCIE_READ_OVERRIDES_ERR.FailureStatus", failure_status, 0x0, 0x0, false, 0x3395ff2bd6e3743d)
#else
#define _m00
#define _m01
#define _m02
#endif