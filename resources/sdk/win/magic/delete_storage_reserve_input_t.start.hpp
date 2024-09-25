#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DELETE_STORAGE_RESERVE_INPUT.Version", version, 0x0, 0x20, true, 0xd5d50239489e0f6e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DELETE_STORAGE_RESERVE_INPUT.Flags", flags, 0x20, 0x20, true, 0xca9cbc146c243aee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DELETE_STORAGE_RESERVE_INPUT.AreaIdOffset", area_id_offset, 0x40, 0x20, true, 0x6218cb387ca349a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DELETE_STORAGE_RESERVE_INPUT.AreaIdCount", area_id_count, 0x60, 0x20, true, 0xf686e8f9c7802cc3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum win::storage_reserve_id_t, 1>), "_DELETE_STORAGE_RESERVE_INPUT.AreaId", area_id, 0x80, 0x20, true, 0xf6012bb1eef206d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif