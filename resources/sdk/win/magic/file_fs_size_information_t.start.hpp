#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_SIZE_INFORMATION.TotalAllocationUnits", total_allocation_units, 0x0, 0x40, true, 0x7de9682d6b82df40)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_SIZE_INFORMATION.AvailableAllocationUnits", available_allocation_units, 0x40, 0x40, true, 0x974abfeb3008e84f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_SIZE_INFORMATION.SectorsPerAllocationUnit", sectors_per_allocation_unit, 0x80, 0x20, true, 0xd6bfafc01e707af)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_SIZE_INFORMATION.BytesPerSector", bytes_per_sector, 0xa0, 0x20, true, 0xe4fe387c96d8715d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif