#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STORAGE_INFO.LogicalBytesPerSector", logical_bytes_per_sector, 0x0, 0x20, true, 0xacdd4f3ec0e0d892)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STORAGE_INFO.PhysicalBytesPerSectorForAtomicity", physical_bytes_per_sector_for_atomicity, 0x20, 0x20, true, 0xeb21db34e8fdf31b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STORAGE_INFO.PhysicalBytesPerSectorForPerformance", physical_bytes_per_sector_for_performance, 0x40, 0x20, true, 0x5be61db77b6764b6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STORAGE_INFO.FileSystemEffectivePhysicalBytesPerSectorForAtomicity", file_system_effective_physical_bytes_per_sector_for_atomicity, 0x60, 0x20, true, 0xcb94a958ced71536)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STORAGE_INFO.Flags", flags, 0x80, 0x20, true, 0x69e0bad75f13187f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STORAGE_INFO.ByteOffsetForSectorAlignment", byte_offset_for_sector_alignment, 0xa0, 0x20, true, 0x557d2e4c82f0caaf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STORAGE_INFO.ByteOffsetForPartitionAlignment", byte_offset_for_partition_alignment, 0xc0, 0x20, true, 0x7f26fc5937eaf6c8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif