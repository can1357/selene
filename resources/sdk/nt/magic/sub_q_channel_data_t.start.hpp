#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sub_q_current_position_t), "_SUB_Q_CHANNEL_DATA.CurrentPosition", current_position, 0x0, 0x80, true, 0xeb609e3c07e13166)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sub_q_media_catalog_number_t), "_SUB_Q_CHANNEL_DATA.MediaCatalog", media_catalog, 0x0, 0xc0, true, 0x1d44901a7c805896)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sub_q_track_isrc_t), "_SUB_Q_CHANNEL_DATA.TrackIsrc", track_isrc, 0x0, 0xc0, true, 0x4d9b1d97b3eeb81c)
#else
#define _m00
#define _m01
#define _m02
#endif