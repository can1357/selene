#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_GS_HANDLER_DATA.Bits.EHandler", e_handler, 0x0, 0x1, true, 0x4147e7ab8f960aa4, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_GS_HANDLER_DATA.Bits.UHandler", u_handler, 0x1, 0x1, true, 0x660845ff6994fb07, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_GS_HANDLER_DATA.Bits.HasAlignment", has_alignment, 0x2, 0x1, true, 0x8e4879b3b416623, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bits_t), "_GS_HANDLER_DATA.Bits", bits, 0x0, 0x20, true, 0x81a56cddbd115db2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_GS_HANDLER_DATA.CookieOffset", cookie_offset, 0x0, 0x20, true, 0xe1b30263bb9df918)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_GS_HANDLER_DATA.AlignedBaseOffset", aligned_base_offset, 0x20, 0x20, true, 0x2fca14de6265976e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_GS_HANDLER_DATA.Alignment", alignment, 0x40, 0x20, true, 0xe2834270ebd98c04)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif