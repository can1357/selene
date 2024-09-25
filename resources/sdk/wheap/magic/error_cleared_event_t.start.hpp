#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_ERROR_CLEARED_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x6c5d8e52cea1fa64)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_CLEARED_EVENT.EpIndex", ep_index, 0x100, 0x20, true, 0xa0aab0e9b649eb55)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_CLEARED_EVENT.Bank", bank, 0x120, 0x20, true, 0x6862d1b274ac7d23)
#else
#define _m00
#define _m01
#define _m02
#endif