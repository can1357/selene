#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBER_EX.Version", version, 0x0, 0x20, true, 0xbd8fecd8ca28cf87)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBER_EX.Size", size, 0x20, 0x20, true, 0x4b3f30c3594ed97a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBER_EX.Flags", flags, 0x40, 0x20, true, 0x933c0ed4b1ba1f01)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBER_EX.DeviceType", device_type, 0x60, 0x20, true, 0xb87da3fd2cd44705)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBER_EX.DeviceNumber", device_number, 0x80, 0x20, true, 0xfeee83e694518367)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_STORAGE_DEVICE_NUMBER_EX.DeviceGuid", device_guid, 0xa0, 0x80, true, 0x2aa563568bef97c5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBER_EX.PartitionNumber", partition_number, 0x120, 0x20, true, 0x92673a00459d9b57)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif