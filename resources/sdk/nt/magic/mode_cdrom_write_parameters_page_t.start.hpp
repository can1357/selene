#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.PageLength", page_length, 0x0, 0x8, true, 0x30918f188c35afe7)
#define _m001 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.WriteType", write_type, 0x8, 0x4, true, 0x222e5143aab6adf0, 4, uint8_t)
#define _m002 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.TestWrite", test_write, 0xc, 0x1, true, 0x1b83b5fc46bba863, 1, uint8_t)
#define _m003 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.LinkSizeValid", link_size_valid, 0xd, 0x1, true, 0xcd6f93e2cb03b8c0, 1, uint8_t)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.BufferUnderrunFreeEnabled", buffer_underrun_free_enabled, 0xe, 0x1, true, 0x60fd2116b26f2bff, 1, uint8_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.TrackMode", track_mode, 0x10, 0x4, true, 0x9760935629103cd8, 4, uint8_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.Copy", copy, 0x14, 0x1, true, 0x260567749103ce22, 1, uint8_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.FixedPacket", fixed_packet, 0x15, 0x1, true, 0x3166cb5b4e24878, 1, uint8_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.MultiSession", multi_session, 0x16, 0x2, true, 0xefdee2bfb5be9931, 2, uint8_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.DataBlockType", data_block_type, 0x18, 0x4, true, 0x3c10cd490049e23c, 4, uint8_t)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.LinkSize", link_size, 0x20, 0x8, true, 0xb848bf5d3b427c86)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.HostApplicationCode", host_application_code, 0x30, 0x6, true, 0xe9c8730439385664, 6, uint8_t)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.SessionFormat", session_format, 0x38, 0x8, true, 0x11c692c918032969)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.PacketSize", packet_size, 0x48, 0x20, true, 0x5b7afe6398ad08e9)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.AudioPauseLength", audio_pause_length, 0x68, 0x10, true, 0xd69276e5089e3086)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.MediaCatalogNumberValid", media_catalog_number_valid, 0x7f, 0x1, true, 0xd0bb9b58cccee9ad, 1, uint8_t)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 13>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.MediaCatalogNumber", media_catalog_number, 0x80, 0x68, true, 0x6e69baecb4a0f8ad)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.MediaCatalogNumberZero", media_catalog_number_zero, 0xe8, 0x8, true, 0xb20255c9a2f53998)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.MediaCatalogNumberAFrame", media_catalog_number_a_frame, 0xf0, 0x8, true, 0xa976d150cfaf2646)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.ISRCValid", isrc_valid, 0xff, 0x1, true, 0x94857e59d3b429f8, 1, uint8_t)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.ISRCCountry", isrc_country, 0x100, 0x10, true, 0x675d6ecf82c19ca7)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.ISRCOwner", isrc_owner, 0x110, 0x18, true, 0xc946e51d67a92aab)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.ISRCRecordingYear", isrc_recording_year, 0x128, 0x10, true, 0x597cc1d555eb2c61)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 5>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.ISRCSerialNumber", isrc_serial_number, 0x138, 0x28, true, 0x49bcde2afba60934)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.ISRCZero", isrc_zero, 0x160, 0x8, true, 0x2e3df55e0d4e1f65)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.ISRCAFrame", isrca_frame, 0x168, 0x8, true, 0xaab31cd9267dd10a)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.ISRCReserved", isrc_reserved, 0x170, 0x8, true, 0x2f125f042bf6eddc)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_MODE_CDROM_WRITE_PARAMETERS_PAGE.SubHeaderData", sub_header_data, 0x178, 0x20, true, 0xe33df31908db8fd4)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#endif