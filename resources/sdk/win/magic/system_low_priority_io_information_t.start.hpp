#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.LowPriReadOperations", low_pri_read_operations, 0x0, 0x20, true, 0x526b30b706aabc79)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.LowPriWriteOperations", low_pri_write_operations, 0x20, 0x20, true, 0x49bb592c12c13124)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.KernelBumpedToNormalOperations", kernel_bumped_to_normal_operations, 0x40, 0x20, true, 0x39ab40b8c06413b2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.LowPriPagingReadOperations", low_pri_paging_read_operations, 0x60, 0x20, true, 0xc2a0682fb922ae5a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.KernelPagingReadsBumpedToNormal", kernel_paging_reads_bumped_to_normal, 0x80, 0x20, true, 0x825df38878ffaf84)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.LowPriPagingWriteOperations", low_pri_paging_write_operations, 0xa0, 0x20, true, 0xcbe361d95ab2cc87)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.KernelPagingWritesBumpedToNormal", kernel_paging_writes_bumped_to_normal, 0xc0, 0x20, true, 0x9116cc9a4cc442aa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.BoostedIrpCount", boosted_irp_count, 0xe0, 0x20, true, 0xfdb836318b779bd2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.BoostedPagingIrpCount", boosted_paging_irp_count, 0x100, 0x20, true, 0x8be231a109be394d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOW_PRIORITY_IO_INFORMATION.BlanketBoostCount", blanket_boost_count, 0x120, 0x20, true, 0x23704428b9592efc)
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
#endif