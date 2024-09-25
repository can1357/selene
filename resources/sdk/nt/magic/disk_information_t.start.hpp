#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_DISK_INFORMATION.Length", length, 0x0, 0x10, true, 0xc6f34038e592241e)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DISK_INFORMATION.DiskStatus", disk_status, 0x10, 0x2, true, 0xfdef365f38690548, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DISK_INFORMATION.LastSessionStatus", last_session_status, 0x12, 0x2, true, 0xe8c8521a61d4af14, 2, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISK_INFORMATION.Erasable", erasable, 0x14, 0x1, true, 0xcecea0a620716c0f, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_INFORMATION.FirstTrackNumber", first_track_number, 0x18, 0x8, true, 0x71c15c5d5665b7d9)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_INFORMATION.NumberOfSessions", number_of_sessions, 0x20, 0x8, true, 0xfed0f138210998d5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_INFORMATION.LastSessionFirstTrack", last_session_first_track, 0x28, 0x8, true, 0xbe3740e64ed8b6af)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_INFORMATION.LastSessionLastTrack", last_session_last_track, 0x30, 0x8, true, 0x89b3ebba5f0659f0)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISK_INFORMATION.GEN", gen, 0x3d, 0x1, true, 0x48d934be316a9251, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISK_INFORMATION.DBC_V", dbc_v, 0x3e, 0x1, true, 0xc06fde2ba7ec8f61, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISK_INFORMATION.DID_V", did_v, 0x3f, 0x1, true, 0x66d549dd0a2b1efa, 1, uint8_t)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_INFORMATION.DiskType", disk_type, 0x40, 0x8, true, 0x4860cc8ef002ca30)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DISK_INFORMATION.DiskIdentification", disk_identification, 0x60, 0x20, true, 0xb87afc2303e8f642)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DISK_INFORMATION.LastSessionLeadIn", last_session_lead_in, 0x80, 0x20, true, 0xf68c1c5df46ea784)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DISK_INFORMATION.LastPossibleStartTime", last_possible_start_time, 0xa0, 0x20, true, 0x12141c2d58a855ae)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_DISK_INFORMATION.DiskBarCode", disk_bar_code, 0xc0, 0x40, true, 0xf0ad91b2ea35adde)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISK_INFORMATION.NumberOPCEntries", number_opc_entries, 0x108, 0x8, true, 0x71dba80748f5a187)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::opc_table_entry_t>), "_DISK_INFORMATION.OPCTable", opc_table, 0x110, 0x0, true, 0x75f93b41126264da)
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
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif