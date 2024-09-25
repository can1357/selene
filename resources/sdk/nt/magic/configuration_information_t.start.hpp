#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_INFORMATION.DiskCount", disk_count, 0x0, 0x20, true, 0xd79d184c1822e39d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_INFORMATION.FloppyCount", floppy_count, 0x20, 0x20, true, 0x7f05a5f85f58408f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_INFORMATION.CdRomCount", cd_rom_count, 0x40, 0x20, true, 0x4b6292167873f291)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_INFORMATION.TapeCount", tape_count, 0x60, 0x20, true, 0x6cb9bc99ce8275d4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_INFORMATION.ScsiPortCount", scsi_port_count, 0x80, 0x20, true, 0x133ca32141288e6b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_INFORMATION.SerialCount", serial_count, 0xa0, 0x20, true, 0xbab6bd3184b027e0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_INFORMATION.ParallelCount", parallel_count, 0xc0, 0x20, true, 0x33e0f421149408de)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CONFIGURATION_INFORMATION.AtDiskPrimaryAddressClaimed", at_disk_primary_address_claimed, 0xe0, 0x8, true, 0xb0b29074bfe2e683)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CONFIGURATION_INFORMATION.AtDiskSecondaryAddressClaimed", at_disk_secondary_address_claimed, 0xe8, 0x8, true, 0x67267e0304a469af)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_INFORMATION.Version", version, 0x100, 0x20, true, 0xba961089d6edeb34)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONFIGURATION_INFORMATION.MediumChangerCount", medium_changer_count, 0x120, 0x20, true, 0x464e6650782bcf08)
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
#endif