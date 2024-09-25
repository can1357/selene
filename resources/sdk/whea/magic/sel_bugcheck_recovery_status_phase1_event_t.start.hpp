#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xe2dc54fa7bbf5a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT.Success", success, 0x100, 0x8, true, 0x5f6e897de9f99cd0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT.Version", version, 0x108, 0x8, true, 0xa0c598993ec26fb1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT.EntryCount", entry_count, 0x110, 0x10, true, 0xf6b44fd4482501b9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT.Data.DumpPolicy", dump_policy, 0x0, 0x0, false, 0x8d67368057b899ba)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT.Data", data, 0x120, 0x20, true, 0x6fd00154768d0f1c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif