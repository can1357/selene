#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MAPAPERTUREFLAGS.CacheCoherent", cache_coherent, 0x0, 0x1, true, 0x2f6361b485b6e86a, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MAPAPERTUREFLAGS.Value", value, 0x0, 0x20, true, 0x69107c2ce7735351)
#else
#define _m00
#define _m01
#endif