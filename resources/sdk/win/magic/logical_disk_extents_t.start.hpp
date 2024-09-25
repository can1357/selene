#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_EXTENTS.StartingOffset", starting_offset, 0x0, 0x40, true, 0x350e07f1d1857b19)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOGICAL_DISK_EXTENTS.PartitionSize", partition_size, 0x40, 0x40, true, 0x48dc78e0afe200c2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_EXTENTS.DiskNumber", disk_number, 0x80, 0x20, true, 0x214f6a887b88679c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_EXTENTS.Size", size, 0xa0, 0x20, true, 0x2fa02b61ef79cb9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_EXTENTS.DriveType", drive_type, 0xc0, 0x20, true, 0x29669a3eae2ced76)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 4>), "_LOGICAL_DISK_EXTENTS.DriveLetterString", drive_letter_string, 0xe0, 0x40, true, 0xa7bad004bf8a243c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_EXTENTS.PartitionNumber", partition_number, 0x140, 0x20, true, 0xbe8fbaef50a54aa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_EXTENTS.SectorsPerCluster", sectors_per_cluster, 0x160, 0x20, true, 0x81f85f4e95167099)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_EXTENTS.BytesPerSector", bytes_per_sector, 0x180, 0x20, true, 0x6d702324e4a08a7c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_LOGICAL_DISK_EXTENTS.NumberOfFreeClusters", number_of_free_clusters, 0x1c0, 0x40, true, 0xf6b9aaf68fb02bfd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_LOGICAL_DISK_EXTENTS.TotalNumberOfClusters", total_number_of_clusters, 0x200, 0x40, true, 0xc3f80cf38c5b09eb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 16>), "_LOGICAL_DISK_EXTENTS.FileSystemType", file_system_type, 0x240, 0x0, true, 0xa2beb49e03900899)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOGICAL_DISK_EXTENTS.VolumeExt", volume_ext, 0x340, 0x20, true, 0x9f916d37e3c0fa2)
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