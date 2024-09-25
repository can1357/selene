#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::storage_reserve_id_t), "_STORAGE_RESERVE_AREA_DEFINITION.Id", id, 0x0, 0x20, true, 0x4ac3b5267e874879)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_RESERVE_AREA_DEFINITION.Flags", flags, 0x20, 0x20, true, 0x863ae6eb1f8f6c67)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_STORAGE_RESERVE_AREA_DEFINITION.SpaceGuarantee", space_guarantee, 0x40, 0x40, true, 0x13ccc5f65cdf4fa5)
#else
#define _m00
#define _m01
#define _m02
#endif