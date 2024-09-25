#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_DLL_OVERFLOW_AREA.RangeStart", range_start, 0x0, 0x40, true, 0xd17d2479a80aec9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_DLL_OVERFLOW_AREA.NextVa", next_va, 0x40, 0x40, true, 0xbc943e88a1c73840)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_DLL_OVERFLOW_AREA.RangeStartAbove2gb", range_start_above2gb, 0x80, 0x40, true, 0xc1e15f206f142d05)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_DLL_OVERFLOW_AREA.NextVaAbove2gb", next_va_above2gb, 0xc0, 0x40, true, 0xe4fe650557b985d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif