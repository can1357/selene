#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::systemtime_t), "UDATE.st", st, 0x0, 0x80, true, 0xd92835365f68dff9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "UDATE.wDayOfYear", w_day_of_year, 0x80, 0x10, true, 0x1461053f5c5b199f)
#else
#define _m00
#define _m01
#endif