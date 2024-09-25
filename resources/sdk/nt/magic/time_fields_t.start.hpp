#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_TIME_FIELDS.Year", year, 0x0, 0x10, true, 0xc6b34749dd36eaa9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_TIME_FIELDS.Month", month, 0x10, 0x10, true, 0xd5500628dd590f9f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_TIME_FIELDS.Day", day, 0x20, 0x10, true, 0xabf77b13f41bc07d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_TIME_FIELDS.Hour", hour, 0x30, 0x10, true, 0xe68ee2b7d6368631)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_TIME_FIELDS.Minute", minute, 0x40, 0x10, true, 0xb479158c85387c55)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_TIME_FIELDS.Second", second, 0x50, 0x10, true, 0x235730eb22c50c6b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_TIME_FIELDS.Milliseconds", milliseconds, 0x60, 0x10, true, 0xd14ac21336b7795d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_TIME_FIELDS.Weekday", weekday, 0x70, 0x10, true, 0x626d3c1f48dbcdfd)
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