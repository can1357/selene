#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::cdb32generic_t), "_CDB32.CDB32GENERIC", cdb32generic, 0x0, 0x0, true, 0xb0ea323f26f0a459)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_CDB32.AsUlong", as_ulong, 0x0, 0x0, true, 0x194b802d5ae858c8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_CDB32.AsByte", as_byte, 0x0, 0x0, true, 0x636e203d6349e890)
#else
#define _m00
#define _m01
#define _m02
#endif