#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sub_q_header_t), "_SUB_Q_TRACK_ISRC.Header", header, 0x0, 0x20, true, 0x6bc3ada781b943cf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUB_Q_TRACK_ISRC.FormatCode", format_code, 0x20, 0x8, true, 0xa67692cc1c1dfada)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUB_Q_TRACK_ISRC.Track", track, 0x30, 0x8, true, 0xc95c6991508151e8)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SUB_Q_TRACK_ISRC.Tcval", tcval, 0x47, 0x1, true, 0xef11c92dfe8059f3, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 15>), "_SUB_Q_TRACK_ISRC.TrackIsrc", track_isrc, 0x48, 0x78, true, 0xccaa261fd8debf7d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif