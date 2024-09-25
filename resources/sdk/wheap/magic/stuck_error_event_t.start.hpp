#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_STUCK_ERROR_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x1620d291f653806c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_STUCK_ERROR_EVENT.EpIndex", ep_index, 0x100, 0x20, true, 0xacdb25da0ef85c33)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_STUCK_ERROR_EVENT.Bank", bank, 0x120, 0x20, true, 0x51f678b9b2a0e0c4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_STUCK_ERROR_EVENT.MciStatus", mci_status, 0x140, 0x40, true, 0xc43d840180f6dd9a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif