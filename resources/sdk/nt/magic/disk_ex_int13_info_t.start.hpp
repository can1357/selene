#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_EX_INT13_INFO.ExBufferSize", ex_buffer_size, 0x0, 0x10, true, 0x72408262281a6fc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_EX_INT13_INFO.ExFlags", ex_flags, 0x10, 0x10, true, 0x7bdee52ec7fffaf9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_EX_INT13_INFO.ExCylinders", ex_cylinders, 0x20, 0x20, true, 0xd48ae6615d87c66c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_EX_INT13_INFO.ExHeads", ex_heads, 0x40, 0x20, true, 0x29f58a1927737b56)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_EX_INT13_INFO.ExSectorsPerTrack", ex_sectors_per_track, 0x60, 0x20, true, 0xd9a99851dd8a3511)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DISK_EX_INT13_INFO.ExSectorsPerDrive", ex_sectors_per_drive, 0x80, 0x40, true, 0x4043ef6084707078)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_EX_INT13_INFO.ExSectorSize", ex_sector_size, 0xc0, 0x10, true, 0xc85e5fffc16ab5df)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISK_EX_INT13_INFO.ExReserved", ex_reserved, 0xd0, 0x10, true, 0x90f86ec079d7fdac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif