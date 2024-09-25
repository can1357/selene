#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_METADATA_SIZE_INFORMATION.TotalMetadataAllocationUnits", total_metadata_allocation_units, 0x0, 0x40, true, 0x48ca1301b6d80ddc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_METADATA_SIZE_INFORMATION.SectorsPerAllocationUnit", sectors_per_allocation_unit, 0x40, 0x20, true, 0x5f9537a88ee1184f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_METADATA_SIZE_INFORMATION.BytesPerSector", bytes_per_sector, 0x60, 0x20, true, 0x3e50381ad849051)
#else
#define _m00
#define _m01
#define _m02
#endif