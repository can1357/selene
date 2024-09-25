#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.cbSize", cb_size, 0x0, 0x20, true, 0x9ee8026a16b19354)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.dwFlags", dw_flags, 0x20, 0x20, true, 0x6e5fff809321bf73)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.iFSTextEffect", i_fs_text_effect, 0x40, 0x20, true, 0x7b930792043155db)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.iFSTextEffectMSec", i_fs_text_effect_m_sec, 0x60, 0x20, true, 0x8ae70b734f836fba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.iFSTextEffectColorBits", i_fs_text_effect_color_bits, 0x80, 0x20, true, 0x7dd9de69d15d24bf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.iFSGrafEffect", i_fs_graf_effect, 0xa0, 0x20, true, 0xccddb74592571f2f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.iFSGrafEffectMSec", i_fs_graf_effect_m_sec, 0xc0, 0x20, true, 0xa775d813716ef95c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.iFSGrafEffectColor", i_fs_graf_effect_color, 0xe0, 0x20, true, 0x6bcd7020bd114997)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.iWindowsEffect", i_windows_effect, 0x100, 0x20, true, 0x13779d8a49988aa7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.iWindowsEffectMSec", i_windows_effect_m_sec, 0x120, 0x20, true, 0xf244a6d255178110)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagSOUNDSENTRYA.lpszWindowsEffectDLL", lpsz_windows_effect_dll, 0x140, 0x40, true, 0xde61261315b1a01a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYA.iWindowsEffectOrdinal", i_windows_effect_ordinal, 0x180, 0x20, true, 0xefea27b496cf7069)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif