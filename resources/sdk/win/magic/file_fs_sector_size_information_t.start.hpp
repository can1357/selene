#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_SECTOR_SIZE_INFORMATION.LogicalBytesPerSector", logical_bytes_per_sector, 0x0, 0x20, true, 0x4a41f0dfe45af968)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_SECTOR_SIZE_INFORMATION.PhysicalBytesPerSectorForAtomicity", physical_bytes_per_sector_for_atomicity, 0x20, 0x20, true, 0xda4b054797bf1f1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_SECTOR_SIZE_INFORMATION.PhysicalBytesPerSectorForPerformance", physical_bytes_per_sector_for_performance, 0x40, 0x20, true, 0x1e864e124cb932db)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_SECTOR_SIZE_INFORMATION.FileSystemEffectivePhysicalBytesPerSectorForAtomicity", file_system_effective_physical_bytes_per_sector_for_atomicity, 0x60, 0x20, true, 0x9299f2c7f61479f5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_SECTOR_SIZE_INFORMATION.Flags", flags, 0x80, 0x20, true, 0x9dbaeaeef9af98a1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_SECTOR_SIZE_INFORMATION.ByteOffsetForSectorAlignment", byte_offset_for_sector_alignment, 0xa0, 0x20, true, 0xfc59ee9593f35fef)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_SECTOR_SIZE_INFORMATION.ByteOffsetForPartitionAlignment", byte_offset_for_partition_alignment, 0xc0, 0x20, true, 0x3c57df95411c7947)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif