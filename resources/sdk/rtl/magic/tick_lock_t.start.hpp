#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_TICK_LOCK.AsULong64", as_u_long64, 0x0, 0x40, true, 0xf75465f69c87eb1c)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_TICK_LOCK.Busy", busy, 0x0, 0x1, true, 0xbae920b3a7731cd6, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint63_t), "_RTL_TICK_LOCK.Ticks", ticks, 0x1, 0x3f, true, 0x8dc15a1d89e14849, 63, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#endif