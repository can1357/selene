#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ZONE_GROUP.ZoneCount", zone_count, 0x0, 0x20, true, 0x10e7f94c20347a1e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_zone_types_t), "_STORAGE_ZONE_GROUP.ZoneType", zone_type, 0x20, 0x20, true, 0x834d1e9dd29932f4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_ZONE_GROUP.ZoneSize", zone_size, 0x40, 0x40, true, 0x293fa95543549047)
#else
#define _m00
#define _m01
#define _m02
#endif