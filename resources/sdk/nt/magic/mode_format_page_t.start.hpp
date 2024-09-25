#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_FORMAT_PAGE.PageCode", page_code, 0x0, 0x6, true, 0x184bed5fd3f4e1ef, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_FORMAT_PAGE.PageSavable", page_savable, 0x7, 0x1, true, 0x2904c866056a755f, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_FORMAT_PAGE.PageLength", page_length, 0x8, 0x8, true, 0xead109f185db9b66)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FORMAT_PAGE.TracksPerZone", tracks_per_zone, 0x10, 0x10, true, 0x11515edc2978232c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FORMAT_PAGE.AlternateSectorsPerZone", alternate_sectors_per_zone, 0x20, 0x10, true, 0x8831c72235a59a7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FORMAT_PAGE.AlternateTracksPerZone", alternate_tracks_per_zone, 0x30, 0x10, true, 0xa4808acbdcdeb8f3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FORMAT_PAGE.AlternateTracksPerLogicalUnit", alternate_tracks_per_logical_unit, 0x40, 0x10, true, 0xc38e9c84b2314726)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FORMAT_PAGE.SectorsPerTrack", sectors_per_track, 0x50, 0x10, true, 0x522116a152561bd9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FORMAT_PAGE.BytesPerPhysicalSector", bytes_per_physical_sector, 0x60, 0x10, true, 0x19f8605e3ab4ddbd)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FORMAT_PAGE.Interleave", interleave, 0x70, 0x10, true, 0x5b9f2a9894acece3)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FORMAT_PAGE.TrackSkewFactor", track_skew_factor, 0x80, 0x10, true, 0x69583fc486956e36)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_FORMAT_PAGE.CylinderSkewFactor", cylinder_skew_factor, 0x90, 0x10, true, 0x57217e0eede6d040)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_FORMAT_PAGE.SurfaceFirst", surface_first, 0xa4, 0x1, true, 0x665b103c82788edf, 1, uint8_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_FORMAT_PAGE.RemovableMedia", removable_media, 0xa5, 0x1, true, 0xe18467784ff95e3f, 1, uint8_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_FORMAT_PAGE.HardSectorFormating", hard_sector_formating, 0xa6, 0x1, true, 0x1a2a39d2d77db16b, 1, uint8_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_FORMAT_PAGE.SoftSectorFormating", soft_sector_formating, 0xa7, 0x1, true, 0x1c6ebab433780c45, 1, uint8_t)
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