#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_TRANSMIT_AS_FLAGS.PresentedTypeIsArray", presented_type_is_array, 0x0, 0x1, true, 0x9bee5ccd50083a4f, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_TRANSMIT_AS_FLAGS.PresentedTypeAlign4", presented_type_align4, 0x1, 0x1, true, 0x29ef14bdb52bf90a, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR64_TRANSMIT_AS_FLAGS.PresentedTypeAlign8", presented_type_align8, 0x2, 0x1, true, 0xa1ee79898cff43b2, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif