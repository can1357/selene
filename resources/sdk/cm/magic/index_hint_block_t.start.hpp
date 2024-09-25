#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_INDEX_HINT_BLOCK.Count", count, 0x0, 0x20, true, 0xdbb7f86a8e0f43b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_CM_INDEX_HINT_BLOCK.HashKey", hash_key, 0x20, 0x20, true, 0x2ffc8e6213c96dc9)
#else
#define _m00
#define _m01
#endif