#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_STRING_FLAGS.IsSized", is_sized, 0x0, 0x1, true, 0x250d2453bce9b5fe, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_STRING_FLAGS.IsRanged", is_ranged, 0x1, 0x1, true, 0x4b2ed09b33fc180b, 1, uint8_t)
#else
#define _m00
#define _m01
#endif