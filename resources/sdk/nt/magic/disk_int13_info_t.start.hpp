#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_INT13_INFO.DriveSelect", drive_select, 0x0, 0x10, true, 0xad3bb35b762d7412)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_INT13_INFO.MaxCylinders", max_cylinders, 0x20, 0x20, true, 0x80c1152afff63611)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_INT13_INFO.SectorsPerTrack", sectors_per_track, 0x40, 0x10, true, 0x88a572decf1ce5e1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_INT13_INFO.MaxHeads", max_heads, 0x50, 0x10, true, 0x73b5f202df1435f0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_INT13_INFO.NumberDrives", number_drives, 0x60, 0x10, true, 0xfd1ebedf5b131645)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif