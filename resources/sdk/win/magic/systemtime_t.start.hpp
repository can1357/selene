#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEMTIME.wYear", w_year, 0x0, 0x10, true, 0xe44198e0e16587fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEMTIME.wMonth", w_month, 0x10, 0x10, true, 0xb7e13f7ae0446f79)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEMTIME.wDayOfWeek", w_day_of_week, 0x20, 0x10, true, 0x222698d26ffa7f56)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEMTIME.wDay", w_day, 0x30, 0x10, true, 0x78b894178beaf10b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEMTIME.wHour", w_hour, 0x40, 0x10, true, 0x1df21acdd8975609)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEMTIME.wMinute", w_minute, 0x50, 0x10, true, 0x7d545c874177edbc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEMTIME.wSecond", w_second, 0x60, 0x10, true, 0xf6681bf24834e3cb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEMTIME.wMilliseconds", w_milliseconds, 0x70, 0x10, true, 0x12bb9036344252e5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif