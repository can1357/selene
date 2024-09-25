#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_CHARGE_SHARING_INFORMATION.Flags", flags, 0x0, 0x0, false, 0xb761b1ec8caf32ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_CHARGE_SHARING_INFORMATION.NumberOfTypes", number_of_types, 0x0, 0x0, false, 0x7ca8b22bf4c34d1d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::memory_partition_charge_sharing_attributes_t, 1>), "_MEMORY_PARTITION_CHARGE_SHARING_INFORMATION.PartitionChargeSharing", partition_charge_sharing, 0x0, 0x0, false, 0x7e511af584e5d844)
#else
#define _m00
#define _m01
#define _m02
#endif