#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_ADAPTER_DATA.AdapterId", adapter_id, 0x0, 0x20, true, 0xbfb251343b7deb5a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_component_health_status_t), "_STORAGE_PHYSICAL_ADAPTER_DATA.HealthStatus", health_status, 0x20, 0x20, true, 0x8fd61e173efc45b1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_protocol_type_t), "_STORAGE_PHYSICAL_ADAPTER_DATA.CommandProtocol", command_protocol, 0x40, 0x20, true, 0x4f9ff341661ae84f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::storage_spec_version_t), "_STORAGE_PHYSICAL_ADAPTER_DATA.SpecVersion", spec_version, 0x60, 0x20, true, 0xb7484f01c06b3830)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_STORAGE_PHYSICAL_ADAPTER_DATA.Vendor", vendor, 0x80, 0x40, true, 0x70ee3d38e3ac0307)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 40>), "_STORAGE_PHYSICAL_ADAPTER_DATA.Model", model, 0xc0, 0x40, true, 0xd9ba22dca7f03419)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_STORAGE_PHYSICAL_ADAPTER_DATA.FirmwareRevision", firmware_revision, 0x200, 0x80, true, 0x50a6ec8103567bac)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORAGE_PHYSICAL_ADAPTER_DATA.PhysicalLocation", physical_location, 0x280, 0x0, true, 0xbab13b0a6e7d0115)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_PHYSICAL_ADAPTER_DATA.ExpanderConnected", expander_connected, 0x380, 0x8, true, 0x585e3aed04a98637)
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
#endif