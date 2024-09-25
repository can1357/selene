#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tm.tm_sec", tm_sec, 0x0, 0x20, true, 0x53d6d70e993bd797)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tm.tm_min", tm_min, 0x20, 0x20, true, 0xdb2a113f97eb3ead)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tm.tm_hour", tm_hour, 0x40, 0x20, true, 0xe0a4be1a695ef21c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tm.tm_mday", tm_mday, 0x60, 0x20, true, 0xc4238d8f45d48f61)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tm.tm_mon", tm_mon, 0x80, 0x20, true, 0xe80ee62b6e63c102)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tm.tm_year", tm_year, 0xa0, 0x20, true, 0x239a814a7e01f4a7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tm.tm_wday", tm_wday, 0xc0, 0x20, true, 0xf8bd21e16c3e7cf1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tm.tm_yday", tm_yday, 0xe0, 0x20, true, 0xaadde14e450f1c22)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tm.tm_isdst", tm_isdst, 0x100, 0x20, true, 0x7fb253e46a5d7a07)
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
#endif