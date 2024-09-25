#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_CS_TAG_FLAGS.STag", s_tag, 0x0, 0x1, true, 0xee46c74de9905a6d, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_CS_TAG_FLAGS.DRTag", dr_tag, 0x1, 0x1, true, 0xdf155c505cd7eec9, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_CS_TAG_FLAGS.RTag", r_tag, 0x2, 0x1, true, 0x2d9b322080609489, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif