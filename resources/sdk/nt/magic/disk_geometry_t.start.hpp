#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_GEOMETRY.Cylinders", cylinders, 0x0, 0x40, true, 0x605e382b1fccafff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::media_type_t), "_DISK_GEOMETRY.MediaType", media_type, 0x40, 0x20, true, 0x14670d8848605a2d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_GEOMETRY.TracksPerCylinder", tracks_per_cylinder, 0x60, 0x20, true, 0xf0b294ff7c7f45e4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_GEOMETRY.SectorsPerTrack", sectors_per_track, 0x80, 0x20, true, 0xce1510862b71ecc0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_GEOMETRY.BytesPerSector", bytes_per_sector, 0xa0, 0x20, true, 0x7a69de065b728308)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif