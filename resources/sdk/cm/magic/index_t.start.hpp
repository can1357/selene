#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_INDEX.Cell", cell, 0x0, 0x20, true, 0x9483143c7857036f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint8_t, 4>, struct cm::fast_leaf_hint_t>), "_CM_INDEX.NameHint", name_hint, 0x20, 0x20, true, 0x6669fe2c47d3c318)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::component_hash_t), "_CM_INDEX.HashKey", hash_key, 0x20, 0x20, true, 0x227b338509bd3803)
#else
#define _m00
#define _m01
#define _m02
#endif