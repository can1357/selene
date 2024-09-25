#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_CORRELATION_FLAGS.Early", early, 0x0, 0x1, true, 0xf4e6daf7242eca71, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_CORRELATION_FLAGS.Split", split, 0x1, 0x1, true, 0x717e00c104cab28c, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_CORRELATION_FLAGS.IsIidIs", is_iid_is, 0x2, 0x1, true, 0x44d31b697247e837, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_CORRELATION_FLAGS.DontCheck", dont_check, 0x3, 0x1, true, 0x17e14f4fe4abc293, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_CORRELATION_FLAGS.Ranged", ranged, 0x4, 0x1, true, 0xba1a906fc777ede4, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif