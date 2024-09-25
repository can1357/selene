#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_TRACK_INFORMATION.Length", length, 0x0, 0x10, true, 0xc41174d5ba29d5d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_INFORMATION.TrackNumber", track_number, 0x10, 0x8, true, 0xb18300f3184e5331)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_INFORMATION.SessionNumber", session_number, 0x18, 0x8, true, 0x39dd9f5d43c151be)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_TRACK_INFORMATION.TrackMode", track_mode, 0x28, 0x4, true, 0x98c566dca98f6235, 4, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION.Copy", copy, 0x2c, 0x1, true, 0x45674589193c85b, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION.Damage", damage, 0x2d, 0x1, true, 0x971e858dc42525e0, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_TRACK_INFORMATION.DataMode", data_mode, 0x30, 0x4, true, 0x8ef3d0b12fe859ae, 4, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION.FP", fp, 0x34, 0x1, true, 0x8c8ee3c3bf7303d0, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION.Packet", packet, 0x35, 0x1, true, 0xb9b7de828a227616, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION.Blank", blank, 0x36, 0x1, true, 0x311189a50a29bd03, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION.RT", rt, 0x37, 0x1, true, 0x6b153d9a02f97745, 1, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION.NWA_V", nwa_v, 0x38, 0x1, true, 0xade0c8aab4c64571, 1, uint8_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION.TrackStartAddress", track_start_address, 0x40, 0x20, true, 0x54b8973a723899a8)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION.NextWritableAddress", next_writable_address, 0x60, 0x20, true, 0xff834699d3319aab)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION.FreeBlocks", free_blocks, 0x80, 0x20, true, 0x2977d100634d71a)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION.FixedPacketSize", fixed_packet_size, 0xa0, 0x20, true, 0xcb337dd0407235bb)
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
#endif