#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::path_hash_t), "_CM_KEY_HASH.ConvKey", conv_key, 0x0, 0x20, true, 0xb5abc32a1ef85576)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_hash_t*), "_CM_KEY_HASH.NextHash", next_hash, 0x40, 0x40, true, 0x4a4d20e74e28d416)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hhive_t*), "_CM_KEY_HASH.KeyHive", key_hive, 0x80, 0x40, true, 0xa67a8a9c214cecfe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_HASH.KeyCell", key_cell, 0xc0, 0x20, true, 0xd3e4d6842fcc5ec7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif