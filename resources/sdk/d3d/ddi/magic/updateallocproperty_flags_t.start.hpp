#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_UPDATEALLOCPROPERTY_FLAGS.AccessedPhysically", accessed_physically, 0x0, 0x1, true, 0xe265bc5bb7033fe4, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_UPDATEALLOCPROPERTY_FLAGS.Value", value, 0x0, 0x20, true, 0x3ae01ecd8ae324a1)
#else
#define _m00
#define _m01
#endif