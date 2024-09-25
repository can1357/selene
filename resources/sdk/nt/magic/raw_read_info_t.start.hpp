#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "__RAW_READ_INFO.DiskOffset", disk_offset, 0x0, 0x40, true, 0xdc5302c96036e6fa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "__RAW_READ_INFO.SectorCount", sector_count, 0x40, 0x20, true, 0x173e941776ab2cab)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::track_mode_type_t), "__RAW_READ_INFO.TrackMode", track_mode, 0x60, 0x20, true, 0xd2d00f0507fe8234)
#else
#define _m00
#define _m01
#define _m02
#endif