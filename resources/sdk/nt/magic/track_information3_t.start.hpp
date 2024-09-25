#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_TRACK_INFORMATION3.Length", length, 0x0, 0x10, true, 0xd6029d2d999d0d98)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_INFORMATION3.TrackNumberLsb", track_number_lsb, 0x10, 0x8, true, 0x1e946d8960ebf8fe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_INFORMATION3.SessionNumberLsb", session_number_lsb, 0x18, 0x8, true, 0x3c7a936cf4e33917)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_TRACK_INFORMATION3.TrackMode", track_mode, 0x28, 0x4, true, 0x430dc3bab43fcaf3, 4, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION3.Copy", copy, 0x2c, 0x1, true, 0xed33c8088c175977, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION3.Damage", damage, 0x2d, 0x1, true, 0xc3b5282c3b05da18, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_TRACK_INFORMATION3.DataMode", data_mode, 0x30, 0x4, true, 0x333d318c39fe6ca, 4, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION3.FixedPacket", fixed_packet, 0x34, 0x1, true, 0x51767aa824d4ffd1, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION3.Packet", packet, 0x35, 0x1, true, 0xc2d6dbe6cace7c91, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION3.Blank", blank, 0x36, 0x1, true, 0xbf08d12acc07091, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION3.ReservedTrack", reserved_track, 0x37, 0x1, true, 0x3fff057942127578, 1, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION3.NWA_V", nwa_v, 0x38, 0x1, true, 0xcac41ee9a119a165, 1, uint8_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TRACK_INFORMATION3.LRA_V", lra_v, 0x39, 0x1, true, 0x327d8db8a8c27f90, 1, uint8_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION3.TrackStartAddress", track_start_address, 0x40, 0x20, true, 0x2b007fa29c552772)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION3.NextWritableAddress", next_writable_address, 0x60, 0x20, true, 0x181965d9caa858a1)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION3.FreeBlocks", free_blocks, 0x80, 0x20, true, 0xd92693b46cd432a3)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION3.FixedPacketSize", fixed_packet_size, 0xa0, 0x20, true, 0x501a843d3c3c0366)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION3.TrackSize", track_size, 0xc0, 0x20, true, 0x7732fa9fc5104fa5)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION3.LastRecordedAddress", last_recorded_address, 0xe0, 0x20, true, 0x4fab410a0e8a468b)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_INFORMATION3.TrackNumberMsb", track_number_msb, 0x100, 0x8, true, 0x89d68f760c5b8f69)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACK_INFORMATION3.SessionNumberMsb", session_number_msb, 0x108, 0x8, true, 0x6b53e7cbfe54e829)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TRACK_INFORMATION3.ReadCompatibilityLba", read_compatibility_lba, 0x120, 0x20, true, 0x74f16c965ad28b9b)
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
#endif