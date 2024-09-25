#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_REPORT_ZONES_DATA.Size", size, 0x0, 0x20, true, 0x75c69c230f90a7fd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_REPORT_ZONES_DATA.ZoneCount", zone_count, 0x20, 0x20, true, 0x8aee1aa8d9ec02b7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_zones_attributes_t), "_DEVICE_DSM_REPORT_ZONES_DATA.Attributes", attributes, 0x40, 0x20, true, 0x5b7036c3a9f2c7f8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_zone_descriptor_t, 1>), "_DEVICE_DSM_REPORT_ZONES_DATA.ZoneDescriptors", zone_descriptors, 0x80, 0x0, true, 0x78db1abd0dc8e3c6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif