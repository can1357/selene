#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_GENERIC_ERR_MEM_MAP_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x4e1a78673e91051a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WHEAP_GENERIC_ERR_MEM_MAP_EVENT.MapReason", map_reason, 0x100, 0x0, true, 0x5f0caa6d667418b1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_GENERIC_ERR_MEM_MAP_EVENT.PhysicalAddress", physical_address, 0x200, 0x40, true, 0x7f4100426cbb2407)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_GENERIC_ERR_MEM_MAP_EVENT.Length", length, 0x240, 0x40, true, 0xfe955c1fafa8de71)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif