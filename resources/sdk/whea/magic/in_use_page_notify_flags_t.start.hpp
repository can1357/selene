#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_IN_USE_PAGE_NOTIFY_FLAGS.Bits.PlatformDirected", platform_directed, 0x0, 0x0, false, 0xf7d410a459edbf12, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_IN_USE_PAGE_NOTIFY_FLAGS.Bits.NotifyAllOfflines", notify_all_offlines, 0x0, 0x0, false, 0x2caa53b9b23d942a, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_IN_USE_PAGE_NOTIFY_FLAGS.Bits.PageOfflined", page_offlined, 0x0, 0x0, false, 0x6e6bb01a231ca4cf, 1, uint8_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bits_t), "_WHEA_IN_USE_PAGE_NOTIFY_FLAGS.Bits", bits, 0x0, 0x0, false, 0x7bf845f2a8e86443)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_IN_USE_PAGE_NOTIFY_FLAGS.AsUCHAR", as_uchar, 0x0, 0x0, false, 0x1287cba188bc2eec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif