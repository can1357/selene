#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_RESILIENCY_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x6a8e055fae979e58)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_RESILIENCY_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x779e7e8cc07194b5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_RESILIENCY_DESCRIPTOR.NameOffset", name_offset, 0x40, 0x20, true, 0xb2133878fe87b46)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_RESILIENCY_DESCRIPTOR.NumberOfLogicalCopies", number_of_logical_copies, 0x60, 0x20, true, 0x5167044ccddb4734)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_RESILIENCY_DESCRIPTOR.NumberOfPhysicalCopies", number_of_physical_copies, 0x80, 0x20, true, 0xb4fbfd9bfd01484e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_RESILIENCY_DESCRIPTOR.PhysicalDiskRedundancy", physical_disk_redundancy, 0xa0, 0x20, true, 0x21763e65c7c95790)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_RESILIENCY_DESCRIPTOR.NumberOfColumns", number_of_columns, 0xc0, 0x20, true, 0x747277bfe2c766fd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_RESILIENCY_DESCRIPTOR.Interleave", interleave, 0xe0, 0x20, true, 0x8585f9926ad08283)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif