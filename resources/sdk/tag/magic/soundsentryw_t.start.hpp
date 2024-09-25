#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.cbSize", cb_size, 0x0, 0x20, true, 0x5565297b0b62db32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.dwFlags", dw_flags, 0x20, 0x20, true, 0xedb42b788ca219e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.iFSTextEffect", i_fs_text_effect, 0x40, 0x20, true, 0x2fbea0af14a8e65f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.iFSTextEffectMSec", i_fs_text_effect_m_sec, 0x60, 0x20, true, 0xd60e6c3364439ce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.iFSTextEffectColorBits", i_fs_text_effect_color_bits, 0x80, 0x20, true, 0xe0ab45c0250b7cfe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.iFSGrafEffect", i_fs_graf_effect, 0xa0, 0x20, true, 0xe5ff22078e8755e9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.iFSGrafEffectMSec", i_fs_graf_effect_m_sec, 0xc0, 0x20, true, 0xa0542e974c32e3cc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.iFSGrafEffectColor", i_fs_graf_effect_color, 0xe0, 0x20, true, 0x22571df98aed785c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.iWindowsEffect", i_windows_effect, 0x100, 0x20, true, 0xe58ddc2fed9bac06)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.iWindowsEffectMSec", i_windows_effect_m_sec, 0x120, 0x20, true, 0xd52f9650ef2bd5fd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSOUNDSENTRYW.lpszWindowsEffectDLL", lpsz_windows_effect_dll, 0x140, 0x40, true, 0x520e8ae4dac39ad8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOUNDSENTRYW.iWindowsEffectOrdinal", i_windows_effect_ordinal, 0x180, 0x20, true, 0xd8e68176d7b6ad73)
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