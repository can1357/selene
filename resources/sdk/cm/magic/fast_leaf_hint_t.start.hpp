#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CM_FAST_LEAF_HINT.Characters", characters, 0x0, 0x20, true, 0x26e751b69ddbbeae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_FAST_LEAF_HINT.FullHint", full_hint, 0x0, 0x20, true, 0x9410ef8bbc578bb7)
#else
#define _m00
#define _m01
#endif