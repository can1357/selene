#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_OFFER_FLAGS.AllowDecommit", allow_decommit, 0x0, 0x1, true, 0x3fd12300c30498bc, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_OFFER_FLAGS.Value", value, 0x0, 0x20, true, 0x58c2ea8ad644dac8)
#else
#define _m00
#define _m01
#endif