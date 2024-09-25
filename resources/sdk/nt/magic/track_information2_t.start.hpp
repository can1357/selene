#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_TRACK_INFORMATION2.Length", length, 0x0, 0x10, true, 0x425899814ceda336)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_INFORMATION2.TrackNumberLsb", track_number_lsb, 0x10, 0x8, true, 0xc0e77bf4989ee658)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_INFORMATION2.SessionNumberLsb", session_number_lsb, 0x18, 0x8, true, 0x28ecf998eb1c6064)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_TRACK_INFORMATION2.TrackMode", track_mode, 0x28, 0x4, true, 0x9a7f51713916cdd1, 4, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION2.Copy", copy, 0x2c, 0x1, true, 0x588a55ae8194e3f5, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION2.Damage", damage, 0x2d, 0x1, true, 0x30a4a60b13b45964, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_TRACK_INFORMATION2.DataMode", data_mode, 0x30, 0x4, true, 0xd746fd52d7e50655, 4, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION2.FixedPacket", fixed_packet, 0x34, 0x1, true, 0xc8fca54b34921736, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION2.Packet", packet, 0x35, 0x1, true, 0x3ac41d274cf93c2b, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION2.Blank", blank, 0x36, 0x1, true, 0xae86be432953a9d7, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION2.ReservedTrack", reserved_track, 0x37, 0x1, true, 0x9159ed0db7507bb6, 1, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION2.NWA_V", nwa_v, 0x38, 0x1, true, 0x721d7179734d1e53, 1, uint8_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION2.LRA_V", lra_v, 0x39, 0x1, true, 0x1269500d64ecd33a, 1, uint8_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION2.TrackStartAddress", track_start_address, 0x40, 0x20, true, 0x34f3b68811255363)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION2.NextWritableAddress", next_writable_address, 0x60, 0x20, true, 0xf4a7940ffdba7cd0)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION2.FreeBlocks", free_blocks, 0x80, 0x20, true, 0xe9936bd5fceb420c)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION2.FixedPacketSize", fixed_packet_size, 0xa0, 0x20, true, 0xb5b1b17d414b9029)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION2.TrackSize", track_size, 0xc0, 0x20, true, 0xb12f298f784ad52b)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION2.LastRecordedAddress", last_recorded_address, 0xe0, 0x20, true, 0x1d0129ecde1c70e5)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_INFORMATION2.TrackNumberMsb", track_number_msb, 0x100, 0x8, true, 0xd9f3bfe77134568f)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_INFORMATION2.SessionNumberMsb", session_number_msb, 0x108, 0x8, true, 0x2bd373e668cfcd2e)
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
#endif