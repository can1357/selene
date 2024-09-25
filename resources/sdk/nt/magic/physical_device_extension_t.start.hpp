#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_DEVICE_EXTENSION.Version", version, 0x0, 0x20, true, 0x26c48a0619d12ef7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PHYSICAL_DEVICE_EXTENSION.DeviceObject", device_object, 0x40, 0x40, true, 0x54c679aa3c3c4f90)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::common_device_extension_t), "_PHYSICAL_DEVICE_EXTENSION.CommonExtension", common_extension, 0x0, 0x0, true, 0x8eb2e0b2df5cdf5c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PHYSICAL_DEVICE_EXTENSION.IsMissing", is_missing, 0x1000, 0x8, true, 0x505d2c37c207a4a4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PHYSICAL_DEVICE_EXTENSION.IsEnumerated", is_enumerated, 0x1008, 0x8, true, 0xccfc4c7f33e30ad8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_private_pdo_data_t*), "_PHYSICAL_DEVICE_EXTENSION.PrivatePdoData", private_pdo_data, 0x1040, 0x40, true, 0x1727f37782e6e151)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif