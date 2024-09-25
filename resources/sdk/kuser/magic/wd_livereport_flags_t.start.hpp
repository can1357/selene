#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WD_LIVEREPORT_FLAGS.AsBits.Kernel", kernel, 0x0, 0x0, false, 0xa6fb221f927fce5, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WD_LIVEREPORT_FLAGS.AsBits.IncludeUserPages", include_user_pages, 0x0, 0x0, false, 0x6bece347adf4206d, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WD_LIVEREPORT_FLAGS.AsBits.MiniFallback", mini_fallback, 0x0, 0x0, false, 0xf4b524c7675a6e05, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WD_LIVEREPORT_FLAGS.AsBits.AbortIfMemoryPressure", abort_if_memory_pressure, 0x0, 0x0, false, 0xa78d7db66abeecaa, 1, uint8_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_as_bits_t), "_WD_LIVEREPORT_FLAGS.AsBits", as_bits, 0x0, 0x0, false, 0x268ab4097a5da489)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WD_LIVEREPORT_FLAGS.AsByte", as_byte, 0x0, 0x0, false, 0x9563fcb15665ca7b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif