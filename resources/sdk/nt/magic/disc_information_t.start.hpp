#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_DISC_INFORMATION.Length", length, 0x0, 0x10, true, 0x63775f8cc17c2b9a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DISC_INFORMATION.DiscStatus", disc_status, 0x10, 0x2, true, 0x4800b1dd2e86f211, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DISC_INFORMATION.LastSessionStatus", last_session_status, 0x12, 0x2, true, 0x58956aae5960076, 2, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISC_INFORMATION.Erasable", erasable, 0x14, 0x1, true, 0x8119b04e9f49801f, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISC_INFORMATION.FirstTrackNumber", first_track_number, 0x18, 0x8, true, 0x941afb25741fb2a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISC_INFORMATION.NumberOfSessionsLsb", number_of_sessions_lsb, 0x20, 0x8, true, 0x5ffdb9a5378b52d1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISC_INFORMATION.LastSessionFirstTrackLsb", last_session_first_track_lsb, 0x28, 0x8, true, 0x480299e8e04c1a31)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISC_INFORMATION.LastSessionLastTrackLsb", last_session_last_track_lsb, 0x30, 0x8, true, 0x5bd740b8ad9f07cc)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DISC_INFORMATION.MrwStatus", mrw_status, 0x38, 0x2, true, 0x333176a70abda40c, 2, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISC_INFORMATION.MrwDirtyBit", mrw_dirty_bit, 0x3a, 0x1, true, 0x94768b3cf6e70558, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISC_INFORMATION.URU", uru, 0x3d, 0x1, true, 0x1c6fbcd1019887e3, 1, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISC_INFORMATION.DBC_V", dbc_v, 0x3e, 0x1, true, 0xdbf2248b15bbf3a3, 1, uint8_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISC_INFORMATION.DID_V", did_v, 0x3f, 0x1, true, 0xbb8f0630a883fffc, 1, uint8_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISC_INFORMATION.DiscType", disc_type, 0x40, 0x8, true, 0xf74f038007b57e29)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISC_INFORMATION.NumberOfSessionsMsb", number_of_sessions_msb, 0x48, 0x8, true, 0x1f19e1a161a39215)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISC_INFORMATION.LastSessionFirstTrackMsb", last_session_first_track_msb, 0x50, 0x8, true, 0xb333e16f54bb2e7b)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISC_INFORMATION.LastSessionLastTrackMsb", last_session_last_track_msb, 0x58, 0x8, true, 0x479ba88c28b498ae)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DISC_INFORMATION.DiskIdentification", disk_identification, 0x60, 0x20, true, 0x4cad0d2591963911)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DISC_INFORMATION.LastSessionLeadIn", last_session_lead_in, 0x80, 0x20, true, 0xf66b36b2ddafef2)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DISC_INFORMATION.LastPossibleLeadOutStartTime", last_possible_lead_out_start_time, 0xa0, 0x20, true, 0x33c89771c9be7e98)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_DISC_INFORMATION.DiskBarCode", disk_bar_code, 0xc0, 0x40, true, 0x3a522d521da9e98c)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISC_INFORMATION.NumberOPCEntries", number_opc_entries, 0x108, 0x8, true, 0x7929960b3f4479ae)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::opc_table_entry_t, 1>), "_DISC_INFORMATION.OPCTable", opc_table, 0x110, 0x40, true, 0x7d0898526971312)
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
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif