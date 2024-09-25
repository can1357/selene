#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_VOLUME_DATA_BUFFER.VolumeSerialNumber", volume_serial_number, 0x0, 0x40, true, 0xcec197599dda4e69)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_VOLUME_DATA_BUFFER.NumberSectors", number_sectors, 0x40, 0x40, true, 0x8e96881c1c5df9fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_VOLUME_DATA_BUFFER.TotalClusters", total_clusters, 0x80, 0x40, true, 0x85f45232b2b6b65f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_VOLUME_DATA_BUFFER.FreeClusters", free_clusters, 0xc0, 0x40, true, 0xd880c2b5c64e94fa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_VOLUME_DATA_BUFFER.TotalReserved", total_reserved, 0x100, 0x40, true, 0xcd7ca225fa6a019e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_VOLUME_DATA_BUFFER.BytesPerSector", bytes_per_sector, 0x140, 0x20, true, 0xb31adb0b8c989f6e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_VOLUME_DATA_BUFFER.BytesPerCluster", bytes_per_cluster, 0x160, 0x20, true, 0x8ffd7e6c1f41d9b9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_VOLUME_DATA_BUFFER.BytesPerFileRecordSegment", bytes_per_file_record_segment, 0x180, 0x20, true, 0xe9ef054d7808d2ef)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_VOLUME_DATA_BUFFER.ClustersPerFileRecordSegment", clusters_per_file_record_segment, 0x1a0, 0x20, true, 0xfeb2b6ba0ed7c2ee)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_VOLUME_DATA_BUFFER.MftValidDataLength", mft_valid_data_length, 0x1c0, 0x40, true, 0xaf3fe41c0f4facc4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_VOLUME_DATA_BUFFER.MftStartLcn", mft_start_lcn, 0x200, 0x40, true, 0x5561df01ae3a73a0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_VOLUME_DATA_BUFFER.Mft2StartLcn", mft2_start_lcn, 0x240, 0x40, true, 0xc3c7415c56943781)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_VOLUME_DATA_BUFFER.MftZoneStart", mft_zone_start, 0x280, 0x40, true, 0x773c6a6bd45290f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_VOLUME_DATA_BUFFER.MftZoneEnd", mft_zone_end, 0x2c0, 0x40, true, 0x29986cf98852baac)
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
#endif