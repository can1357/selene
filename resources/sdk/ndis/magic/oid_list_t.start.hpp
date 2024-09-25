#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OID_LIST.StatsOidCount", stats_oid_count, 0x0, 0x20, true, 0x4371d6386bcb75c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OID_LIST.FullOidCount", full_oid_count, 0x20, 0x20, true, 0x6f8db22584812f78)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_OID_LIST.StatsOidArray", stats_oid_array, 0x40, 0x40, true, 0xd65e1f4c7749c055)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_OID_LIST.FullOidArray", full_oid_array, 0x80, 0x40, true, 0xf0679599dcfe609d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif