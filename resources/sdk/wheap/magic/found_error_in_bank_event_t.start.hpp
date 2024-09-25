#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_FOUND_ERROR_IN_BANK_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xf798e5b82e3a5d50)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_FOUND_ERROR_IN_BANK_EVENT.EpIndex", ep_index, 0x100, 0x20, true, 0xebfe5ff0e9f65faf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_FOUND_ERROR_IN_BANK_EVENT.Bank", bank, 0x120, 0x20, true, 0xc9fd47f72fa0eeef)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_FOUND_ERROR_IN_BANK_EVENT.MciStatus", mci_status, 0x140, 0x40, true, 0xc5a9d26aebd49891)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_FOUND_ERROR_IN_BANK_EVENT.ErrorType", error_type, 0x180, 0x20, true, 0x9067f45a1bfccba4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif