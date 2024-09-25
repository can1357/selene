#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NDR64_PIPE_FLAGS.HasRange", has_range, 0x5, 0x1, true, 0x30c9eab88f095497, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NDR64_PIPE_FLAGS.BlockCopy", block_copy, 0x6, 0x1, true, 0x8521f94ade2d2315, 1, uint8_t)
#else
#define _m00
#define _m01
#endif