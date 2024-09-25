#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 55>), "_RTL_LFG_RNG_STATE.SeedArray", seed_array, 0x0, 0xe0, true, 0x8c81f7c48595a4f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_LFG_RNG_STATE.Next", next, 0x6e0, 0x20, true, 0xfceba201991ba186)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_LFG_RNG_STATE.NextP", next_p, 0x700, 0x20, true, 0x3d57a521b70e18fa)
#else
#define _m00
#define _m01
#define _m02
#endif