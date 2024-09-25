#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_PS_PKG_CLAIM.Flags", flags, 0x0, 0x20, true, 0xc0e999b1ba5e37a5, 0, uint64_t,uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_PS_PKG_CLAIM.Origin", origin, 0x20, 0x8, true, 0x81d9f751d6ba304e, 0, uint64_t)
#else
#define _m00
#define _m01
#endif