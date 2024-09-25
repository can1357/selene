#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPTICAL_MEDIA_RECORD.DiskNumber", disk_number, 0x0, 0x10, true, 0x6538208266a6b41f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPTICAL_MEDIA_RECORD.BusType", bus_type, 0x10, 0x10, true, 0x732b9c15fdd67a8b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPTICAL_MEDIA_RECORD.DeviceType", device_type, 0x20, 0x10, true, 0xb673840cc21871d3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPTICAL_MEDIA_RECORD.MediaType", media_type, 0x30, 0x10, true, 0x117dc05168f3ecc6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_OPTICAL_MEDIA_RECORD.StartingOffset", starting_offset, 0x40, 0x40, true, 0x30340cbd2334bf90)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_OPTICAL_MEDIA_RECORD.Size", size, 0x80, 0x40, true, 0xa816762a6d1c159a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_OPTICAL_MEDIA_RECORD.NumberOfFreeBlocks", number_of_free_blocks, 0xc0, 0x40, true, 0xfdceac69a599c7e6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_OPTICAL_MEDIA_RECORD.TotalNumberOfBlocks", total_number_of_blocks, 0x100, 0x40, true, 0x7c89a630ae492ef4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_OPTICAL_MEDIA_RECORD.NextWritableAddress", next_writable_address, 0x140, 0x40, true, 0x14968bb4eef930de)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPTICAL_MEDIA_RECORD.NumberOfSessions", number_of_sessions, 0x180, 0x20, true, 0xf1914e2ef05f02a2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPTICAL_MEDIA_RECORD.NumberOfTracks", number_of_tracks, 0x1a0, 0x20, true, 0x4bb2c12c0368e789)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPTICAL_MEDIA_RECORD.BytesPerSector", bytes_per_sector, 0x1c0, 0x20, true, 0x53bfaeb6b07195dd)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPTICAL_MEDIA_RECORD.DiscStatus", disc_status, 0x1e0, 0x10, true, 0x187c0c8ce11b9585)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPTICAL_MEDIA_RECORD.LastSessionStatus", last_session_status, 0x1f0, 0x10, true, 0x4742ade3d101c241)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_OPTICAL_MEDIA_RECORD.Data", data, 0x200, 0x10, true, 0x8f97b6013694e0be)
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
#endif