#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::storage_reserve_id_t), "_FILE_QUERY_STORAGE_RESERVE_ID_INFORMATION_EX.StorageReserveId", storage_reserve_id, 0x0, 0x20, true, 0x416db4d989382758)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_QUERY_STORAGE_RESERVE_ID_INFORMATION_EX.SpaceUsed", space_used, 0x40, 0x40, true, 0xef62aa3c7b27eeee)
#else
#define _m00
#define _m01
#endif