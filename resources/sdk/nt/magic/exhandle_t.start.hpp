#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_EXHANDLE.TagBits", tag_bits, 0x0, 0x2, true, 0x85eaf898361bc00f, 2, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_EXHANDLE.Index", index, 0x2, 0x1e, true, 0x5790be9a893f0850, 30, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXHANDLE.GenericHandleOverlay", generic_handle_overlay, 0x0, 0x40, true, 0x2e5291cbab0609d1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXHANDLE.Value", value, 0x0, 0x40, true, 0xdd7d9e0cc62131ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif