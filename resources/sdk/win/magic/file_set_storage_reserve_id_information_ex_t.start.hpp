#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::storage_reserve_id_t), "_FILE_SET_STORAGE_RESERVE_ID_INFORMATION_EX.StorageReserveId", storage_reserve_id, 0x0, 0x20, true, 0x2c8669111d53d05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_SET_STORAGE_RESERVE_ID_INFORMATION_EX.Flags", flags, 0x20, 0x20, true, 0x9bf3bac01ac3fd7d)
#else
#define _m00
#define _m01
#endif