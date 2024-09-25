#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_ERR_SRC_ARRAY_INVALID_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x4050b036ec98b5a0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERR_SRC_ARRAY_INVALID_EVENT.ErrorSourceCount", error_source_count, 0x100, 0x20, true, 0xdd52d8d2a2acb58d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERR_SRC_ARRAY_INVALID_EVENT.ReportedLength", reported_length, 0x120, 0x20, true, 0xe9eae274c4a88a48)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERR_SRC_ARRAY_INVALID_EVENT.ExpectedLength", expected_length, 0x140, 0x20, true, 0x492aac741b60d15)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif