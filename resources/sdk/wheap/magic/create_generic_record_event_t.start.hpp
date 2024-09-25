#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_CREATE_GENERIC_RECORD_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x4ba63ae3c3fb05d2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WHEAP_CREATE_GENERIC_RECORD_EVENT.Error", error, 0x100, 0x0, true, 0x4dad470b1943530b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_CREATE_GENERIC_RECORD_EVENT.EntryCount", entry_count, 0x200, 0x20, true, 0xcf2ab27c53cf84)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEAP_CREATE_GENERIC_RECORD_EVENT.Status", status, 0x220, 0x20, true, 0x4347947a01e14b5e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif