#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_PROCESS_HEST_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xcc13b8266b5a9857)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WHEAP_PROCESS_HEST_EVENT.Error", error, 0x100, 0x0, true, 0xc1ee9e84ebf0c419)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WHEAP_PROCESS_HEST_EVENT.EntryType", entry_type, 0x200, 0x0, true, 0x15b652312802c14f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_HEST_EVENT.EntryIndex", entry_index, 0x300, 0x20, true, 0x2b0833eec068fdc4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_PROCESS_HEST_EVENT.HestValid", hest_valid, 0x320, 0x8, true, 0x74beb71011c046a3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_HEST_EVENT.CmcCount", cmc_count, 0x328, 0x20, true, 0x8e962af8934f05ed)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_HEST_EVENT.MceCount", mce_count, 0x348, 0x20, true, 0x625c8563fd07c4c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_HEST_EVENT.NmiCount", nmi_count, 0x368, 0x20, true, 0xc74cf6916afef324)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_HEST_EVENT.AerRootCount", aer_root_count, 0x388, 0x20, true, 0xb5c6c7416fb26a6a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_HEST_EVENT.AerBridgeCount", aer_bridge_count, 0x3a8, 0x20, true, 0xf96f5b96ccc2a439)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_HEST_EVENT.AerEndPointCount", aer_end_point_count, 0x3c8, 0x20, true, 0x6f1d73c71dd544bb)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_HEST_EVENT.GenericV1Count", generic_v1_count, 0x3e8, 0x20, true, 0x7b4c2f249fc8e831)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_PROCESS_HEST_EVENT.GenericV2Count", generic_v2_count, 0x408, 0x20, true, 0x66ccf5ec384da76)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif