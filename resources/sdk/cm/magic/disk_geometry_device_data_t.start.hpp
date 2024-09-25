#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DISK_GEOMETRY_DEVICE_DATA.BytesPerSector", bytes_per_sector, 0x0, 0x20, true, 0x80e41bc8bd79bc9e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DISK_GEOMETRY_DEVICE_DATA.NumberOfCylinders", number_of_cylinders, 0x20, 0x20, true, 0x57ca443d493110fc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DISK_GEOMETRY_DEVICE_DATA.SectorsPerTrack", sectors_per_track, 0x40, 0x20, true, 0x5b49f1f7fff26e98)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DISK_GEOMETRY_DEVICE_DATA.NumberOfHeads", number_of_heads, 0x60, 0x20, true, 0xe8ab418bbdbef505)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif