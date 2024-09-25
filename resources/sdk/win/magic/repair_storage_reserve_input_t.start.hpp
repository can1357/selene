#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPAIR_STORAGE_RESERVE_INPUT.Version", version, 0x0, 0x20, true, 0x612af4bb5176cbf6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPAIR_STORAGE_RESERVE_INPUT.Flags", flags, 0x20, 0x20, true, 0x2fc55e8dcc1a9fe4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPAIR_STORAGE_RESERVE_INPUT.AreaIdOffset", area_id_offset, 0x40, 0x20, true, 0x99ee7596e5a399b2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPAIR_STORAGE_RESERVE_INPUT.AreaIdCount", area_id_count, 0x60, 0x20, true, 0x1928e0eeedc1ed10)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum win::storage_reserve_id_t, 1>), "_REPAIR_STORAGE_RESERVE_INPUT.AreaId", area_id, 0x80, 0x20, true, 0xfdf366dd6a853565)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif