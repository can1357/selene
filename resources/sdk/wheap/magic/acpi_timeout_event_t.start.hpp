#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_ACPI_TIMEOUT_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x5aea56589268f464)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WHEAP_ACPI_TIMEOUT_EVENT.TableType", table_type, 0x100, 0x0, true, 0x6c63cfef104fc7d6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WHEAP_ACPI_TIMEOUT_EVENT.TableRequest", table_request, 0x200, 0x0, true, 0x446a9cf461487526)
#else
#define _m00
#define _m01
#define _m02
#endif