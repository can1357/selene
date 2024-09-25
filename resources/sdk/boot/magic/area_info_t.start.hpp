#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_AREA_INFO.BootSectorCount", boot_sector_count, 0x0, 0x20, true, 0xbc336b4e97ee52c4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_BOOT_AREA_INFO.BootSectors.Offset", offset, 0x0, 0x40, true, 0xad853ff6cd1a22c2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<u0_boot_sectors_t, 2>), "_BOOT_AREA_INFO.BootSectors", boot_sectors, 0x40, 0x80, true, 0xff44ac6482e106a3)
#else
#define _m00
#define _m01
#define _m02
#endif