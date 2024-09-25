#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_UPDATEPAGETABLEFLAGS.Repeat", repeat, 0x0, 0x1, true, 0xe0914c133b83f718, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_UPDATEPAGETABLEFLAGS.InitialUpdate", initial_update, 0x1, 0x1, true, 0x8ec813b93d60a949, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_UPDATEPAGETABLEFLAGS.NotifyEviction", notify_eviction, 0x2, 0x1, true, 0x846bc71ab2dfffae, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_UPDATEPAGETABLEFLAGS.Use64KBPages", use64kb_pages, 0x3, 0x1, true, 0xdd95fbe1e416c6f5, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif