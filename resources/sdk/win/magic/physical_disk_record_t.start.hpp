#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_DISK_RECORD.DiskNumber", disk_number, 0x0, 0x20, true, 0xe494f3568439c851)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_DISK_RECORD.BytesPerSector", bytes_per_sector, 0x20, 0x20, true, 0xf24e93a405f4ef15)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_DISK_RECORD.SectorsPerTrack", sectors_per_track, 0x40, 0x20, true, 0x486b7c73cb72d533)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_DISK_RECORD.TracksPerCylinder", tracks_per_cylinder, 0x60, 0x20, true, 0x9b40fade9bddf139)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_DISK_RECORD.Cylinders", cylinders, 0x80, 0x40, true, 0xdb4311179065f317)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_DISK_RECORD.SCSIPortNumber", scsi_port_number, 0xc0, 0x20, true, 0xbfcb35c61113db8c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_DISK_RECORD.SCSIPathId", scsi_path_id, 0xe0, 0x20, true, 0x8091fd76511bd26e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_DISK_RECORD.SCSITargetId", scsi_target_id, 0x100, 0x20, true, 0x75729eac63bae0ba)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_DISK_RECORD.SCSILun", scsi_lun, 0x120, 0x20, true, 0x1d5d1fbdb0a1d8c5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_PHYSICAL_DISK_RECORD.Manufacturer", manufacturer, 0x140, 0x0, true, 0x9967f4340a28481e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_DISK_RECORD.PartitionCount", partition_count, 0x1140, 0x20, true, 0x84b8de306abc0770)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PHYSICAL_DISK_RECORD.WriteCacheEnabled", write_cache_enabled, 0x1160, 0x8, true, 0x4f3d9dd695672688)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 3>), "_PHYSICAL_DISK_RECORD.BootDriveLetter", boot_drive_letter, 0x1170, 0x30, true, 0xc7812610995d77fe)
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
#endif