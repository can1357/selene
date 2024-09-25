#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_STORAGE_RESERVE_INPUT.Version", version, 0x0, 0x20, true, 0x67d16059f8089588)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_STORAGE_RESERVE_INPUT.Flags", flags, 0x20, 0x20, true, 0x56dd926b0e37fcee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_STORAGE_RESERVE_INPUT.AreaIdOffset", area_id_offset, 0x40, 0x20, true, 0x49913db313cc56d3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_STORAGE_RESERVE_INPUT.AreaIdCount", area_id_count, 0x60, 0x20, true, 0x5a39cfa6adfd1bfc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum win::storage_reserve_id_t, 1>), "_QUERY_STORAGE_RESERVE_INPUT.AreaId", area_id, 0x80, 0x20, true, 0x45345deaeb11cbf8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif