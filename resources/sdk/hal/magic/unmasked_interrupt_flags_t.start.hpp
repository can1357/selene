#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAL_UNMASKED_INTERRUPT_FLAGS.SecondaryInterrupt", secondary_interrupt, 0x0, 0x1, true, 0x3d4acb4d73da3fee, 1, uint16_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HAL_UNMASKED_INTERRUPT_FLAGS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x7f03110236ea04d0)
#else
#define _m00
#define _m01
#endif