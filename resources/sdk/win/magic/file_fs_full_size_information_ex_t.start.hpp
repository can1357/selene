#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.ActualTotalAllocationUnits", actual_total_allocation_units, 0x0, 0x40, true, 0xc3bfe5746143a7c0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.ActualAvailableAllocationUnits", actual_available_allocation_units, 0x40, 0x40, true, 0xd475fc96b51e9a64)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.ActualPoolUnavailableAllocationUnits", actual_pool_unavailable_allocation_units, 0x80, 0x40, true, 0xe368d240d58ae1ac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.CallerTotalAllocationUnits", caller_total_allocation_units, 0xc0, 0x40, true, 0x6cdbb6d3ce4a5dd0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.CallerAvailableAllocationUnits", caller_available_allocation_units, 0x100, 0x40, true, 0x4eab348badc18759)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.CallerPoolUnavailableAllocationUnits", caller_pool_unavailable_allocation_units, 0x140, 0x40, true, 0x6ffb509ea93b8d56)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.UsedAllocationUnits", used_allocation_units, 0x180, 0x40, true, 0x7cbed41a5818f6ae)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.TotalReservedAllocationUnits", total_reserved_allocation_units, 0x1c0, 0x40, true, 0xe5a21c64b8a5d7cb)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.VolumeStorageReserveAllocationUnits", volume_storage_reserve_allocation_units, 0x200, 0x40, true, 0x16eccbbc09eacc1a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.AvailableCommittedAllocationUnits", available_committed_allocation_units, 0x240, 0x40, true, 0x1b9d7b4f17fd81d8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.PoolAvailableAllocationUnits", pool_available_allocation_units, 0x280, 0x40, true, 0xb5e8c2978f32b917)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.SectorsPerAllocationUnit", sectors_per_allocation_unit, 0x2c0, 0x20, true, 0x632330c713583b11)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_FULL_SIZE_INFORMATION_EX.BytesPerSector", bytes_per_sector, 0x2e0, 0x20, true, 0x4c76f803c65d7d9b)
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