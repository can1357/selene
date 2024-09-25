#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ECCFULLKEY_BLOB.dwMagic", dw_magic, 0x0, 0x20, true, 0x69b72ff93034ea4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ECCFULLKEY_BLOB.dwVersion", dw_version, 0x20, 0x20, true, 0x3c40646780c5c233)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::ecc_curve_type_enum_t), "_BCRYPT_ECCFULLKEY_BLOB.dwCurveType", dw_curve_type, 0x40, 0x20, true, 0x851a89d3972c517)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::ecc_curve_alg_id_enum_t), "_BCRYPT_ECCFULLKEY_BLOB.dwCurveGenerationAlgId", dw_curve_generation_alg_id, 0x60, 0x20, true, 0xd6d186f2b493122c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ECCFULLKEY_BLOB.cbFieldLength", cb_field_length, 0x80, 0x20, true, 0xfe261fc6a196d7dc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ECCFULLKEY_BLOB.cbSubgroupOrder", cb_subgroup_order, 0xa0, 0x20, true, 0xbfaa0ee30bdca5d1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ECCFULLKEY_BLOB.cbCofactor", cb_cofactor, 0xc0, 0x20, true, 0x6b73b92eefb6528)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ECCFULLKEY_BLOB.cbSeed", cb_seed, 0xe0, 0x20, true, 0xf361113b9c79ad76)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif