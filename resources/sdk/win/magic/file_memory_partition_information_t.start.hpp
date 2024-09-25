#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_MEMORY_PARTITION_INFORMATION.OwnerPartitionHandle", owner_partition_handle, 0x0, 0x40, true, 0xb731fc69f8a6648a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_MEMORY_PARTITION_INFORMATION.Flags.NoCrossPartitionAccess", no_cross_partition_access, 0x0, 0x8, true, 0xceaae7fa6669f7eb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_MEMORY_PARTITION_INFORMATION.Flags.AllFlags", all_flags, 0x0, 0x20, true, 0xb9e2b4744a559e7b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_FILE_MEMORY_PARTITION_INFORMATION.Flags", flags, 0x40, 0x20, true, 0x5f7eecae2971cad)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif