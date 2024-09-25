#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PREFETCH_EX.Type", type, 0x0, 0x20, true, 0x6f330c1c67035f5c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PREFETCH_EX.Count", count, 0x20, 0x20, true, 0xb903427e891ffdd6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_PREFETCH_EX.Context", context, 0x40, 0x40, true, 0x6d7e5419edce02ce)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_FILE_PREFETCH_EX.Prefetch", prefetch, 0x80, 0x40, true, 0x2f6f1176a7d6cd27)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif