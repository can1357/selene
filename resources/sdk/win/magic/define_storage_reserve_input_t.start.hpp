#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEFINE_STORAGE_RESERVE_INPUT.Version", version, 0x0, 0x20, true, 0xc9e7e62774fad460)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEFINE_STORAGE_RESERVE_INPUT.Flags", flags, 0x20, 0x20, true, 0x6c64e54f2e0c4ffb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEFINE_STORAGE_RESERVE_INPUT.AreaDefinitionOffset", area_definition_offset, 0x40, 0x20, true, 0x92c1217558c9ed02)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEFINE_STORAGE_RESERVE_INPUT.AreaDefinitionCount", area_definition_count, 0x60, 0x20, true, 0x3cc8d6f328cd6ab9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::storage_reserve_area_definition_t, 1>), "_DEFINE_STORAGE_RESERVE_INPUT.AreaDefinition", area_definition, 0x80, 0x80, true, 0x39d1f4277dfe2d12)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif