#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDROM_TOC.Length", length, 0x0, 0x10, true, 0x9284b23865a4b01d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC.FirstTrack", first_track, 0x10, 0x8, true, 0xef037bb4a4b64eef)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC.LastTrack", last_track, 0x18, 0x8, true, 0x55f60e6dfd87d7fd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::track_data_t, 100>), "_CDROM_TOC.TrackData", track_data, 0x20, 0x0, true, 0x283073a51fabb065)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif