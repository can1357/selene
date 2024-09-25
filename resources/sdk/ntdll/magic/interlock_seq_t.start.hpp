#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_INTERLOCK_SEQ.Depth", depth, 0x0, 0x10, true, 0x57eeff801ada3cef)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_INTERLOCK_SEQ.Hint", hint, 0x10, 0xf, true, 0x2bf7a18d3046cf0d, 15, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERLOCK_SEQ.Lock", lock, 0x1f, 0x1, true, 0xf89ac54ef74f0df9, 1, uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_INTERLOCK_SEQ.Hint16", hint16, 0x10, 0x10, true, 0x5c759aef843db51)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_INTERLOCK_SEQ.Exchg", exchg, 0x0, 0x20, true, 0x49d292f5b3ff9611)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif