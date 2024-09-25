#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.PageCode", page_code, 0x0, 0x6, true, 0xf2e3b75032fae44, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.PageSavable", page_savable, 0x7, 0x1, true, 0xf4ee73298147ec6a, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.PageLength", page_length, 0x8, 0x8, true, 0x53b93c168454f285)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.WriteType", write_type, 0x10, 0x4, true, 0x88d310ee95f12063, 4, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.TestWrite", test_write, 0x14, 0x1, true, 0x5c8caba3b25a3e3d, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.LinkSizeValid", link_size_valid, 0x15, 0x1, true, 0x55f0c6f5d52c7950, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.BufferUnderrunFreeEnabled", buffer_underrun_free_enabled, 0x16, 0x1, true, 0xf5a9e4dadcb4effe, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.TrackMode", track_mode, 0x18, 0x4, true, 0xde629e9d65463cc, 4, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.Copy", copy, 0x1c, 0x1, true, 0x5cc13e9bd15cb91b, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.FixedPacket", fixed_packet, 0x1d, 0x1, true, 0xe68e83750453c32e, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.MultiSession", multi_session, 0x1e, 0x2, true, 0xf56d512aca85e58e, 2, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.DataBlockType", data_block_type, 0x20, 0x4, true, 0x1b84d84e2f109ec3, 4, uint8_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.LinkSize", link_size, 0x28, 0x8, true, 0x4a1452aabfe22799)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.HostApplicationCode", host_application_code, 0x38, 0x6, true, 0xfdad8ddccc380937, 6, uint8_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.SessionFormat", session_format, 0x40, 0x8, true, 0x927e67fecb07a663)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.PacketSize", packet_size, 0x50, 0x20, true, 0xebc9804dc9c2c669)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.AudioPauseLength", audio_pause_length, 0x70, 0x10, true, 0xa8f34e5a8ef79b21)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.MediaCatalogNumber", media_catalog_number, 0x80, 0x80, true, 0xa360630ecf9652d3)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.ISRC", isrc, 0x100, 0x80, true, 0x9df35246c83b6a35)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.SubHeaderData", sub_header_data, 0x180, 0x20, true, 0x9f4ed9d639b56f73)
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
#endif