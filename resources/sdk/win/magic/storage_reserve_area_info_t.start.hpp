#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::storage_reserve_id_t), "_STORAGE_RESERVE_AREA_INFO.Id", id, 0x0, 0x20, true, 0xc36f009fc40402f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_RESERVE_AREA_INFO.Flags", flags, 0x20, 0x20, true, 0x4c451809403955ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_STORAGE_RESERVE_AREA_INFO.SpaceGuarantee", space_guarantee, 0x40, 0x40, true, 0xf6177de1f27fbb1f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_STORAGE_RESERVE_AREA_INFO.SpaceUsed", space_used, 0x80, 0x40, true, 0x2e1ce60531f790c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif