#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SYSTEMTIME.Year", year, 0x0, 0x10, true, 0x32607a8bdb9267c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SYSTEMTIME.Month", month, 0x10, 0x10, true, 0x11e5b7ffd02e99f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SYSTEMTIME.DayOfWeek", day_of_week, 0x20, 0x10, true, 0x823f793233d862e7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SYSTEMTIME.Day", day, 0x30, 0x10, true, 0x44e80caed3fd4379)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SYSTEMTIME.Hour", hour, 0x40, 0x10, true, 0x4d4ac6acb16a6ae5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SYSTEMTIME.Minute", minute, 0x50, 0x10, true, 0x4c0eb6411004eb11)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SYSTEMTIME.Second", second, 0x60, 0x10, true, 0xfbd4c876fbf9f387)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_SYSTEMTIME.Milliseconds", milliseconds, 0x70, 0x10, true, 0xfcd36969b740a1bd)
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