#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint16_t*), "__crt_locale_data_public._locale_pctype", locale_pctype, 0x0, 0x40, true, 0x2670cc243066f93c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "__crt_locale_data_public._locale_mb_cur_max", locale_mb_cur_max, 0x40, 0x20, true, 0xe10d6da5e587f07e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "__crt_locale_data_public._locale_lc_codepage", locale_lc_codepage, 0x60, 0x20, true, 0x5e9156e7bc13548d)
#else
#define _m00
#define _m01
#define _m02
#endif