#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_OFFER_FLAGS.OfferImmediately", offer_immediately, 0x0, 0x1, true, 0x1c2083fbb2821fa8, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_OFFER_FLAGS.AllowDecommit", allow_decommit, 0x1, 0x1, true, 0x985ff0c8d3527458, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OFFER_FLAGS.Value", value, 0x0, 0x20, true, 0xcb86291f387a0f1c)
#else
#define _m00
#define _m01
#define _m02
#endif