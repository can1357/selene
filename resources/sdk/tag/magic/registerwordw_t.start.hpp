#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagREGISTERWORDW.lpReading", lp_reading, 0x0, 0x40, true, 0x25e9519f42b1c02a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagREGISTERWORDW.lpWord", lp_word, 0x40, 0x40, true, 0xa9e92cb9f2abefc)
#else
#define _m00
#define _m01
#endif