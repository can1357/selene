#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_DEVICE_DATA.DeviceId", device_id, 0x0, 0x20, true, 0xba05c61a0f4c3cc4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_DEVICE_DATA.Role", role, 0x20, 0x20, true, 0x2ef38412067646ad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_component_health_status_t), "_STORAGE_PHYSICAL_DEVICE_DATA.HealthStatus", health_status, 0x40, 0x20, true, 0x4c2a5c51fb47dde1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_protocol_type_t), "_STORAGE_PHYSICAL_DEVICE_DATA.CommandProtocol", command_protocol, 0x60, 0x20, true, 0x532b96bf3e7f6b67)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::storage_spec_version_t), "_STORAGE_PHYSICAL_DEVICE_DATA.SpecVersion", spec_version, 0x80, 0x20, true, 0x508013fa9ee197e6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_device_form_factor_t), "_STORAGE_PHYSICAL_DEVICE_DATA.FormFactor", form_factor, 0xa0, 0x20, true, 0x3d5b4b29f07f35c2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_STORAGE_PHYSICAL_DEVICE_DATA.Vendor", vendor, 0xc0, 0x40, true, 0xdd0ffbbf87869f21)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 40>), "_STORAGE_PHYSICAL_DEVICE_DATA.Model", model, 0x100, 0x40, true, 0x8a079ef4bd29e46c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_STORAGE_PHYSICAL_DEVICE_DATA.FirmwareRevision", firmware_revision, 0x240, 0x80, true, 0x43d50359dcd1d51e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_PHYSICAL_DEVICE_DATA.Capacity", capacity, 0x2c0, 0x40, true, 0x44ba1f51d191ea57)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORAGE_PHYSICAL_DEVICE_DATA.PhysicalLocation", physical_location, 0x300, 0x0, true, 0x59500dce57526db1)
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
#endif