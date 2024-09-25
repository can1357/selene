#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagREGISTERWORDA.lpReading", lp_reading, 0x0, 0x40, true, 0x6f51adb6c4fc393b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagREGISTERWORDA.lpWord", lp_word, 0x40, 0x40, true, 0x5d1ef18ab935885a)
#else
#define _m00
#define _m01
#endif