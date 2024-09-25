#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_FULL_SIZE_INFORMATION.TotalAllocationUnits", total_allocation_units, 0x0, 0x40, true, 0xc237d69d8b4daf75)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_FULL_SIZE_INFORMATION.CallerAvailableAllocationUnits", caller_available_allocation_units, 0x40, 0x40, true, 0xba29accfd2457260)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_FULL_SIZE_INFORMATION.ActualAvailableAllocationUnits", actual_available_allocation_units, 0x80, 0x40, true, 0xc2ea2fe46d729f7e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_FULL_SIZE_INFORMATION.SectorsPerAllocationUnit", sectors_per_allocation_unit, 0xc0, 0x20, true, 0xffe2714bd12d7297)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_FULL_SIZE_INFORMATION.BytesPerSector", bytes_per_sector, 0xe0, 0x20, true, 0x817298f0c07524e7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif