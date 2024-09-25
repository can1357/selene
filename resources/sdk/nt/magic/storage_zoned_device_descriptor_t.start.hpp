#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xbf864bf3f74c37d2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x67f7f9d58e490f4e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_zoned_device_types_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.DeviceType", device_type, 0x40, 0x20, true, 0x4972d07b1e1e3d04)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneCount", zone_count, 0x60, 0x20, true, 0x9f4f8dafa46adac8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneAttributes.SequentialRequiredZone.MaxOpenZoneCount", max_open_zone_count, 0x0, 0x20, true, 0x3450b2bb6de265a0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneAttributes.SequentialRequiredZone.UnrestrictedRead", unrestricted_read, 0x20, 0x8, true, 0x602eb56e80e28b6a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_sequential_required_zone_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneAttributes.SequentialRequiredZone", sequential_required_zone, 0x0, 0x40, true, 0xd41e1ea1d1f5f9e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneAttributes.SequentialPreferredZone.OptimalOpenZoneCount", optimal_open_zone_count, 0x0, 0x20, true, 0xe5b7f8864c6a4cb1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_sequential_preferred_zone_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneAttributes.SequentialPreferredZone", sequential_preferred_zone, 0x0, 0x40, true, 0x16e549500306c2fd)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_zone_attributes_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneAttributes", zone_attributes, 0x80, 0x40, true, 0x8df521c5ed3e737)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneGroupCount", zone_group_count, 0xc0, 0x20, true, 0xb16eb4a62986d811)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_zone_group_t, 1>), "_STORAGE_ZONED_DEVICE_DESCRIPTOR.ZoneGroup", zone_group, 0x100, 0x80, true, 0x20827662e06c349c)
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
#define _m11
#endif