#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "REFS_VOLUME_DATA_BUFFER.ByteCount", byte_count, 0x0, 0x20, true, 0x1f1068d8850f1893)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "REFS_VOLUME_DATA_BUFFER.MajorVersion", major_version, 0x20, 0x20, true, 0xa147459b5fc78c0c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "REFS_VOLUME_DATA_BUFFER.MinorVersion", minor_version, 0x40, 0x20, true, 0x49279333f899bef7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "REFS_VOLUME_DATA_BUFFER.BytesPerPhysicalSector", bytes_per_physical_sector, 0x60, 0x20, true, 0x3868b1534810279e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "REFS_VOLUME_DATA_BUFFER.VolumeSerialNumber", volume_serial_number, 0x80, 0x40, true, 0xe7b24d540c2a9e79)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "REFS_VOLUME_DATA_BUFFER.NumberSectors", number_sectors, 0xc0, 0x40, true, 0x1248b07332c5f5b7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "REFS_VOLUME_DATA_BUFFER.TotalClusters", total_clusters, 0x100, 0x40, true, 0xccafa09d902a483)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "REFS_VOLUME_DATA_BUFFER.FreeClusters", free_clusters, 0x140, 0x40, true, 0x5109b28f7d5719a6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "REFS_VOLUME_DATA_BUFFER.TotalReserved", total_reserved, 0x180, 0x40, true, 0x6e29e94e8945a409)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "REFS_VOLUME_DATA_BUFFER.BytesPerSector", bytes_per_sector, 0x1c0, 0x20, true, 0x19706c7bf09d12f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "REFS_VOLUME_DATA_BUFFER.BytesPerCluster", bytes_per_cluster, 0x1e0, 0x20, true, 0xf319db5234ab33f6)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "REFS_VOLUME_DATA_BUFFER.MaximumSizeOfResidentFile", maximum_size_of_resident_file, 0x200, 0x40, true, 0x746327122bd1ef)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "REFS_VOLUME_DATA_BUFFER.FastTierDataFillRatio", fast_tier_data_fill_ratio, 0x240, 0x10, true, 0x97f5c86731144fd4)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "REFS_VOLUME_DATA_BUFFER.SlowTierDataFillRatio", slow_tier_data_fill_ratio, 0x250, 0x10, true, 0xd8769cfc127b74f2)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "REFS_VOLUME_DATA_BUFFER.DestagesFastTierToSlowTierRate", destages_fast_tier_to_slow_tier_rate, 0x260, 0x20, true, 0x94b3477d009dfc7e)
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