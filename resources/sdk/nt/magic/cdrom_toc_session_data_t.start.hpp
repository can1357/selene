#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDROM_TOC_SESSION_DATA.Length", length, 0x0, 0x10, true, 0x5350ad4fb900de65)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC_SESSION_DATA.FirstCompleteSession", first_complete_session, 0x10, 0x8, true, 0xbf30c2749f12ff93)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC_SESSION_DATA.LastCompleteSession", last_complete_session, 0x18, 0x8, true, 0x978bd5289b7aad38)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::track_data_t, 1>), "_CDROM_TOC_SESSION_DATA.TrackData", track_data, 0x20, 0x40, true, 0xa32713818b89b90)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif