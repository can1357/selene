#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_MI_VAD_SEQUENTIAL_INFO.Length", length, 0x0, 0xc, true, 0xf827c99453c73b2, 12, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint52_t), "_MI_VAD_SEQUENTIAL_INFO.Vpn", vpn, 0xc, 0x34, true, 0x18dfb4945e425907, 52, uint64_t)
#else
#define _m00
#define _m01
#endif