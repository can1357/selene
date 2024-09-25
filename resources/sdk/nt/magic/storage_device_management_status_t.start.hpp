#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_MANAGEMENT_STATUS.Version", version, 0x0, 0x20, true, 0x9f9afbb6703ed527)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_MANAGEMENT_STATUS.Size", size, 0x20, 0x20, true, 0xe0582602fb62c8b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_disk_health_status_t), "_STORAGE_DEVICE_MANAGEMENT_STATUS.Health", health, 0x40, 0x20, true, 0x6e7781f7148895e0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_MANAGEMENT_STATUS.NumberOfOperationalStatus", number_of_operational_status, 0x60, 0x20, true, 0x2af28efc4e8a53b3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_MANAGEMENT_STATUS.NumberOfAdditionalReasons", number_of_additional_reasons, 0x80, 0x20, true, 0x83877742d4d0a4fe)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::storage_disk_operational_status_t, 16>), "_STORAGE_DEVICE_MANAGEMENT_STATUS.OperationalStatus", operational_status, 0xa0, 0x0, true, 0x32025e53bbbf3d45)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_operational_reason_t, 1>), "_STORAGE_DEVICE_MANAGEMENT_STATUS.AdditionalReasons", additional_reasons, 0x2a0, 0x80, true, 0x91225f80e5b376b5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif