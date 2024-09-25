#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.ActualTotalAllocationUnits", actual_total_allocation_units, 0x0, 0x40, true, 0x2713d7a31ca543a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.ActualAvailableAllocationUnits", actual_available_allocation_units, 0x40, 0x40, true, 0xe79587a5217b45ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.ActualPoolUnavailableAllocationUnits", actual_pool_unavailable_allocation_units, 0x80, 0x40, true, 0xfbd08c7fa5ab213f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.CallerTotalAllocationUnits", caller_total_allocation_units, 0xc0, 0x40, true, 0x9f570464fc6725a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.CallerAvailableAllocationUnits", caller_available_allocation_units, 0x100, 0x40, true, 0x24190159ec0f97e1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.CallerPoolUnavailableAllocationUnits", caller_pool_unavailable_allocation_units, 0x140, 0x40, true, 0xbeaa2f23a06656c5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.UsedAllocationUnits", used_allocation_units, 0x180, 0x40, true, 0x6d3f427b6e47086e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.TotalReservedAllocationUnits", total_reserved_allocation_units, 0x1c0, 0x40, true, 0x39c62ffd0090cbce)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.VolumeStorageReserveAllocationUnits", volume_storage_reserve_allocation_units, 0x200, 0x40, true, 0xe68cc4f5e480db8e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.AvailableCommittedAllocationUnits", available_committed_allocation_units, 0x240, 0x40, true, 0x98bf28b45ec5b40d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DISK_SPACE_INFORMATION.PoolAvailableAllocationUnits", pool_available_allocation_units, 0x280, 0x40, true, 0xba940978177a9ebe)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DISK_SPACE_INFORMATION.SectorsPerAllocationUnit", sectors_per_allocation_unit, 0x2c0, 0x20, true, 0x481f8499c0eaa385)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DISK_SPACE_INFORMATION.BytesPerSector", bytes_per_sector, 0x2e0, 0x20, true, 0xf2cf20dd68c6b179)
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