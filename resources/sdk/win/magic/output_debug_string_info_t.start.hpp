#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_OUTPUT_DEBUG_STRING_INFO.lpDebugStringData", lp_debug_string_data, 0x0, 0x40, true, 0x242863fcdc237282)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OUTPUT_DEBUG_STRING_INFO.fUnicode", f_unicode, 0x40, 0x10, true, 0x718c06f8607a49f2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OUTPUT_DEBUG_STRING_INFO.nDebugStringLength", n_debug_string_length, 0x50, 0x10, true, 0xef5e5b9830b77065)
#else
#define _m00
#define _m01
#define _m02
#endif