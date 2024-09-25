#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBER.DeviceType", device_type, 0x0, 0x20, true, 0xc00d47707e59b54f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBER.DeviceNumber", device_number, 0x20, 0x20, true, 0xe43609be4131dbe0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBER.PartitionNumber", partition_number, 0x40, 0x20, true, 0x14785b0611a0699e)
#else
#define _m00
#define _m01
#define _m02
#endif