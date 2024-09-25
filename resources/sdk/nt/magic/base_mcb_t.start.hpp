#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BASE_MCB.MaximumPairCount", maximum_pair_count, 0x0, 0x20, true, 0xdc49f311070c8d25)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BASE_MCB.PairCount", pair_count, 0x20, 0x20, true, 0x2f32e10e99150573)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_BASE_MCB.PoolType", pool_type, 0x40, 0x10, true, 0xfd11aee628826f79)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_BASE_MCB.Flags", flags, 0x50, 0x10, true, 0x3a41c5bf540fe3e5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_BASE_MCB.Mapping", mapping, 0x80, 0x40, true, 0x7b3da5e1ec9ccfc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif