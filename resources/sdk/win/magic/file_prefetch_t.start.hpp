#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PREFETCH.Type", type, 0x0, 0x20, true, 0x70138fd72abf9363)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PREFETCH.Count", count, 0x20, 0x20, true, 0xd5686c6297eb7f3b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_FILE_PREFETCH.Prefetch", prefetch, 0x40, 0x40, true, 0xeb1715b2dfe71385)
#else
#define _m00
#define _m01
#define _m02
#endif