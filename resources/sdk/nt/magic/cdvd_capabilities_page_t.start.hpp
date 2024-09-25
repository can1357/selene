#if !IN_PARSER
#define _m000 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_CDVD_CAPABILITIES_PAGE.PageCode", page_code, 0x0, 0x6, true, 0xdc34dd42cbc5c54a, 6, uint8_t)
#define _m001 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.PSBit", ps_bit, 0x7, 0x1, true, 0x460f37dff28355b8, 1, uint8_t)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDVD_CAPABILITIES_PAGE.PageLength", page_length, 0x8, 0x8, true, 0x2de5af6ad990e17d)
#define _m003 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.CDRRead", cdr_read, 0x10, 0x1, true, 0x58696bdf90e3861a, 1, uint8_t)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.CDERead", cde_read, 0x11, 0x1, true, 0xfdabf7224988cde7, 1, uint8_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.Method2", method2, 0x12, 0x1, true, 0xdf66312c5f5430a3, 1, uint8_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.DVDROMRead", dvdrom_read, 0x13, 0x1, true, 0x6a2c54652af4da24, 1, uint8_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.DVDRRead", dvdr_read, 0x14, 0x1, true, 0x4ba5aac3af3bea1, 1, uint8_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.DVDRAMRead", dvdram_read, 0x15, 0x1, true, 0x7166d571de37f9cd, 1, uint8_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.CDRWrite", cdr_write, 0x18, 0x1, true, 0xe28de20477d8c72, 1, uint8_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.CDEWrite", cde_write, 0x19, 0x1, true, 0x7d6239fc74e3d1a, 1, uint8_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.TestWrite", test_write, 0x1a, 0x1, true, 0x94e0d4384d877acc, 1, uint8_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.DVDRWrite", dvdr_write, 0x1c, 0x1, true, 0x27d186ade619ddf9, 1, uint8_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.DVDRAMWrite", dvdram_write, 0x1d, 0x1, true, 0xda7d6f061bfdc8c0, 1, uint8_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.AudioPlay", audio_play, 0x20, 0x1, true, 0x3844af6151d87dfc, 1, uint8_t)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.Composite", composite, 0x21, 0x1, true, 0xade44bed0574d84e, 1, uint8_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.DigitalPortOne", digital_port_one, 0x22, 0x1, true, 0xb541cd0236258a76, 1, uint8_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.DigitalPortTwo", digital_port_two, 0x23, 0x1, true, 0x9cd8180d78a80fa, 1, uint8_t)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.Mode2Form1", mode2_form1, 0x24, 0x1, true, 0x1e59728436506f06, 1, uint8_t)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.Mode2Form2", mode2_form2, 0x25, 0x1, true, 0x9c05e8e884a13d3a, 1, uint8_t)
#define _m020 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.MultiSession", multi_session, 0x26, 0x1, true, 0x4e6cb6dd3a98da52, 1, uint8_t)
#define _m021 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.BufferUnderrunFree", buffer_underrun_free, 0x27, 0x1, true, 0x2e2657f999db3f35, 1, uint8_t)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.CDDA", cdda, 0x28, 0x1, true, 0xeacc6561db32182c, 1, uint8_t)
#define _m023 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.CDDAAccurate", cdda_accurate, 0x29, 0x1, true, 0x99aa153cb91eb968, 1, uint8_t)
#define _m024 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.RWSupported", rw_supported, 0x2a, 0x1, true, 0xf9afbac82b388aa, 1, uint8_t)
#define _m025 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.RWDeinterleaved", rw_deinterleaved, 0x2b, 0x1, true, 0x569f49b99a791483, 1, uint8_t)
#define _m026 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.C2Pointers", c2_pointers, 0x2c, 0x1, true, 0x741147365c5f59d6, 1, uint8_t)
#define _m027 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.ISRC", isrc, 0x2d, 0x1, true, 0xbbb17894f8a9f993, 1, uint8_t)
#define _m028 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.UPC", upc, 0x2e, 0x1, true, 0x4cdeb075749ead97, 1, uint8_t)
#define _m029 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.ReadBarCodeCapable", read_bar_code_capable, 0x2f, 0x1, true, 0xd1fbaf18e2023f71, 1, uint8_t)
#define _m030 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.Lock", lock, 0x30, 0x1, true, 0xe115fca284b1b34d, 1, uint8_t)
#define _m031 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.LockState", lock_state, 0x31, 0x1, true, 0x8c08a80cf2408dae, 1, uint8_t)
#define _m032 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.PreventJumper", prevent_jumper, 0x32, 0x1, true, 0xe0efd587ba63863, 1, uint8_t)
#define _m033 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.Eject", eject, 0x33, 0x1, true, 0x54dfaf2ccf4b13c4, 1, uint8_t)
#define _m034 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDVD_CAPABILITIES_PAGE.LoadingMechanismType", loading_mechanism_type, 0x35, 0x3, true, 0xd7551762411fe68f, 3, uint8_t)
#define _m035 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.SeparateVolume", separate_volume, 0x38, 0x1, true, 0xb592faca2ffe3aa9, 1, uint8_t)
#define _m036 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.SeperateChannelMute", seperate_channel_mute, 0x39, 0x1, true, 0xf03eb01f041f7671, 1, uint8_t)
#define _m037 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.SupportsDiskPresent", supports_disk_present, 0x3a, 0x1, true, 0x8cba4a93844d5edf, 1, uint8_t)
#define _m038 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.SWSlotSelection", sw_slot_selection, 0x3b, 0x1, true, 0xc17365738136a36a, 1, uint8_t)
#define _m039 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.SideChangeCapable", side_change_capable, 0x3c, 0x1, true, 0xe2b904cb53ca16a4, 1, uint8_t)
#define _m040 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.RWInLeadInReadable", rw_in_lead_in_readable, 0x3d, 0x1, true, 0x79163de8887c05bc, 1, uint8_t)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.ReadSpeedMaximum", read_speed_maximum, 0x40, 0x10, true, 0x5a8bb3729c19d155)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.ObsoleteReserved", obsolete_reserved, 0x40, 0x10, true, 0xb367a076758ca0f8)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.NumberVolumeLevels", number_volume_levels, 0x50, 0x10, true, 0xe4acc6186ae38825)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.BufferSize", buffer_size, 0x60, 0x10, true, 0x89c5a7b467fe2d29)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.ReadSpeedCurrent", read_speed_current, 0x70, 0x10, true, 0x563d704d89107950)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.ObsoleteReserved2", obsolete_reserved2, 0x70, 0x10, true, 0x289424def2f99952)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDVD_CAPABILITIES_PAGE.ObsoleteReserved3", obsolete_reserved3, 0x80, 0x8, true, 0xe40b693e40df4d6b)
#define _m048 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.BCK", bck, 0x89, 0x1, true, 0x58373b9b0a8e6e27, 1, uint8_t)
#define _m049 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.RCK", rck, 0x8a, 0x1, true, 0xb518d0368ef036d2, 1, uint8_t)
#define _m050 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_CAPABILITIES_PAGE.LSBF", lsbf, 0x8b, 0x1, true, 0xd6fcce1d56746e36, 1, uint8_t)
#define _m051 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_CDVD_CAPABILITIES_PAGE.Length", length, 0x8c, 0x2, true, 0x83c747ce89085ab9, 2, uint8_t)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.WriteSpeedMaximum", write_speed_maximum, 0x90, 0x10, true, 0x6c1cb7f7cbfc786f)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.ObsoleteReserved4", obsolete_reserved4, 0x90, 0x10, true, 0x39d36efc342e7c4c)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.WriteSpeedCurrent", write_speed_current, 0xa0, 0x10, true, 0xabf24884241bc462)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.ObsoleteReserved11", obsolete_reserved11, 0xa0, 0x10, true, 0x4f12d3f8a9555085)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_CAPABILITIES_PAGE.CopyManagementRevision", copy_management_revision, 0xb0, 0x10, true, 0x95e905bad5aac4f9)
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
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#endif