#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSR_CAPABILITIES.PerennialDatabase", perennial_database, 0x0, 0x0, false, 0xe772dfe92449e08f, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSR_CAPABILITIES.SkipSubAllocator", skip_sub_allocator, 0x0, 0x0, false, 0xdebd2c6017345fc5, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSR_CAPABILITIES.AsULong", as_u_long, 0x0, 0x0, false, 0xbec86c919508eab6)
#else
#define _m00
#define _m01
#define _m02
#endif